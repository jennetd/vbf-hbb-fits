import ROOT as rt
from array import array
from scipy.interpolate import Rbf
import numpy as np
import glob
import pandas as pd
import argparse

def read_from_file(poi, filestring):

  print(poi)
  search_string = "   r"+poi+" :    "

  vals = []

  theline = ""

  with open(filestring, "r+") as readfile:
    for line in readfile.readlines():
      if search_string in line:
        theline = line

  chunks = theline.split()
  vals += [float(chunks[2])]
  uncs = chunks[3].split('/')
  vals += [abs(float(uncs[0]))]
  vals += [float(uncs[1])]

  return vals

def get_total(poi):

  total = read_from_file(poi,"../allyears/logs/fit_batch.out")
  print(total)

  n = 2
  center = np.array([total[0],total[0]])
  up_unc = np.array([total[2],total[2]])
  do_unc = np.array([total[1],total[1]])
  x = np.array([-100.,100.])

  return rt.TGraphAsymmErrors(n,x,center,np.zeros(2),np.zeros(2),do_unc,up_unc)

def get_VBF_table():

#  vbf_logfile = "../allyears-mjjbins/logs/fit_batch.out"
  vbf_logfile = "../allyears-bybin/logs/fit_batch.out"

  bin7 = read_from_file("VBF7",vbf_logfile)
  bin8 = read_from_file("VBF8",vbf_logfile)

  n = 2
  center = np.array([bin7[0],bin8[0]])
  up_unc = np.array([bin7[2],bin8[2]])
  do_unc = np.array([bin7[1],bin8[1]])
  x = np.array([1.,2.])

  return rt.TGraphAsymmErrors(n,x,center,np.zeros(2),np.zeros(2),do_unc,up_unc)

def get_ggF_table():

#  ggf_logfile = "../allyears-ptbins/logs/fit_batch.out"
  ggf_logfile = "../allyears-bybin/logs/fit_batch.out"

  bin1 = read_from_file("ggF1",ggf_logfile)
  bin2 = read_from_file("ggF2",ggf_logfile)
  bin3 = read_from_file("ggF3",ggf_logfile)
  bin4 = read_from_file("ggF4",ggf_logfile)
  bin5 = read_from_file("ggF5",ggf_logfile)
  bin6 = read_from_file("ggF6",ggf_logfile)

  n = 6;
  center = np.array([bin1[0],bin2[0],bin3[0],bin4[0],bin5[0],bin6[0]])
  up_unc = np.array([bin1[2],bin2[2],bin3[2],bin4[2],bin5[2],bin6[2]])
  do_unc = np.array([bin1[1],bin2[1],bin3[1],bin4[1],bin5[1],bin6[1]])
  x = np.array([1.,2.,3.,4.,5.,6.])

  return rt.TGraphAsymmErrors(n,x,center,np.zeros(6),np.zeros(6),do_unc,up_unc);

if __name__ == "__main__":

    argParser = argparse.ArgumentParser()
    argParser.add_argument("-p", "--poi", help="POI for 1D likelihood scan")

    args = argParser.parse_args()
    poi = args.poi

    rt.gStyle.SetOptTitle(0)
    rt.gStyle.SetOptStat(0)
    rt.gStyle.SetEndErrorSize(0)

    c = rt.TCanvas("c", "c", 800, 600)
    p1 = rt.TPad("pad1","pad1",0,0,0.66,1)
    p2 = rt.TPad("pad2","pad2",0.66,0,1,1)
    p1.SetLeftMargin(0.1)
    p2.SetLeftMargin(0.15)
    p1.SetRightMargin(0.05)
    p2.SetRightMargin(0.05)
    p1.SetBorderMode(0)
    p2.SetBorderMode(0)
    p1.Draw()
    p2.Draw()

    textsize1 = 0.072
    textsize2 = 0.036

    lumi = 138
    tag1 = rt.TLatex(0.45, 0.92, "%.0f fb^{-1} (13 TeV)" % lumi)
    tag1.SetNDC()
    tag1.SetTextFont(42)
    tag1.SetTextSize(textsize1)
    tag2 = rt.TLatex(0.15, 0.92, "CMS")
    tag2.SetNDC()
    tag2.SetTextFont(62)
    tag3 = rt.TLatex(0.23, 0.92, "Preliminary")
    tag3.SetNDC()
    tag3.SetTextFont(52)
    tag2.SetTextSize(textsize2)
    tag3.SetTextSize(textsize2)

    n = 2
    smx = np.array([-100.,100.])
    smy = np.array([1.,1.])

    sm = rt.TGraph(n,smx,smy)
    sm.SetLineColor(1);
    sm.SetLineStyle(3);
    sm.SetLineWidth(3);

    smx = np.array([-100.,100.])
    zeroy = np.array([0.,0.])

    zero = rt.TGraph(n,smx,zeroy)
    zero.SetLineColor(0);
    zero.SetLineWidth(3);

    p2.cd()
    h1 = rt.TH1D("dummy1","dummy1",2,0.5,2.5)
    h1.Fill("1000-2000",0)
    h1.Fill("> 2000",0)
    h1.SetLineColor(0)
    h1.GetXaxis().SetTitle("m_{jj} bin [GeV], VBF cat.")
    h1.GetXaxis().SetTitleSize(textsize1)
    h1.GetXaxis().SetTitleOffset(0.5)
    h1.GetXaxis().SetLabelSize(0.06)
    h1.GetYaxis().SetTitle('#mu_{VBF}')
    h1.GetYaxis().SetTitleSize(textsize1)
    h1.GetYaxis().SetTitleOffset(0.75)
    h1.GetYaxis().SetLabelSize(0)
    h1.GetYaxis().SetRangeUser(-10,13)
    h1.Draw()

    sm.Draw("lsame")
#    zero.Draw("lsame")

    gvbf = get_total("VBF")
    gvbf.SetLineColor(4)
    gvbf.SetFillColor(4)
    gvbf.SetFillStyle(3003)
    gvbf.SetLineWidth(3)
    gvbf.Draw("3same")
    gvbf.Draw("lsame")

    gvbf2 = get_VBF_table()
    gvbf2.SetMarkerColor(1)
    gvbf2.SetMarkerStyle(20)
    gvbf2.SetLineColor(1)
    gvbf2.SetLineWidth(3)
    gvbf2.Draw("psame")


    tag1.Draw()

    p1.cd()
    h2 = rt.TH1D("dummy2","dummy2",6,0.5,6.5)
    h2.Fill("450-500",0)
    h2.Fill("500-550",0)
    h2.Fill("550-600",0)
    h2.Fill("600-675",0)
    h2.Fill("675-800",0)
    h2.Fill("800-1200",0)
    h2.SetLineColor(0) 
    h2.GetXaxis().SetTitle("p_{T} bin [GeV], ggF cat.")
    h2.GetXaxis().SetTitleSize(textsize2)
    h2.GetXaxis().SetLabelSize(0.03)
    h2.GetYaxis().SetTitle('#mu_{ggF}')
    h2.GetYaxis().SetTitleSize(textsize2)
    h2.GetYaxis().SetLabelSize(0.03)
    h2.GetYaxis().SetTitleOffset(0.75)
    h2.GetYaxis().SetRangeUser(-10,13)
    h2.Draw()

    sm.Draw("lsame")
#    zero.Draw("lsame")

    gggf = get_total("ggF")
    gggf.SetLineColor(95)
    gggf.SetFillColor(95)
    gggf.SetFillStyle(3003)
    gggf.SetLineWidth(3)
    gggf.Draw("3same")
    gggf.Draw("lsame")

    gggf2 = get_ggF_table()
    gggf2.SetMarkerColor(1)
    gggf2.SetMarkerStyle(20)
    gggf2.SetLineColor(1)
    gggf2.SetLineWidth(3)
    gggf2.Draw("psame")

    tag2.Draw()
    tag3.Draw()

    leg = rt.TLegend(0.65, 0.7, 0.85, 0.87)
    leg.SetBorderSize(0)
    leg.SetTextFont(42)
    leg.SetFillColor(rt.kWhite)
    leg.SetLineColor(rt.kWhite)
    leg.SetLineStyle(0)
    leg.SetFillStyle(0)
    leg.SetLineWidth(0)

    leg.Draw("same")

    c.Print("mu_bybin.pdf")
    c.Print("mu_bybin.png")
    c.Print("mu_bybin.C")

