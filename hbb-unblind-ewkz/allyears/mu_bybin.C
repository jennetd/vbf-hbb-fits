void mu_bybin()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jul  6 16:49:15 2023) by ROOT version 6.12/07
   TCanvas *c = new TCanvas("c", "c",64,1103,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,0.66,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.2058824,-12.875,6.852941,15.875);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetRightMargin(0.05);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TH1D *dummy2__1 = new TH1D("dummy2__1","dummy2",6,0.5,6.5);
   dummy2__1->SetMinimum(-10);
   dummy2__1->SetMaximum(13);
   dummy2__1->SetEntries(6);
   dummy2__1->SetStats(0);
   dummy2__1->SetLineColor(0);
   dummy2__1->GetXaxis()->SetTitle("p_{T} bin [GeV], ggF cat.");
   dummy2__1->GetXaxis()->SetBinLabel(1,"450-500");
   dummy2__1->GetXaxis()->SetBinLabel(2,"500-550");
   dummy2__1->GetXaxis()->SetBinLabel(3,"550-600");
   dummy2__1->GetXaxis()->SetBinLabel(4,"600-675");
   dummy2__1->GetXaxis()->SetBinLabel(5,"675-800");
   dummy2__1->GetXaxis()->SetBinLabel(6,"800-1200");
   dummy2__1->GetXaxis()->SetLabelFont(42);
   dummy2__1->GetXaxis()->SetLabelSize(0.03);
   dummy2__1->GetXaxis()->SetTitleSize(0.036);
   dummy2__1->GetXaxis()->SetTitleFont(42);
   dummy2__1->GetYaxis()->SetTitle("#mu_{ggF}");
   dummy2__1->GetYaxis()->SetLabelFont(42);
   dummy2__1->GetYaxis()->SetLabelSize(0.03);
   dummy2__1->GetYaxis()->SetTitleSize(0.036);
   dummy2__1->GetYaxis()->SetTitleOffset(0.75);
   dummy2__1->GetYaxis()->SetTitleFont(42);
   dummy2__1->GetZaxis()->SetLabelFont(42);
   dummy2__1->GetZaxis()->SetLabelSize(0.035);
   dummy2__1->GetZaxis()->SetTitleSize(0.035);
   dummy2__1->GetZaxis()->SetTitleFont(42);
   dummy2__1->Draw("");
   
   Double_t Graph0_fx1[2] = {
   -100,
   100};
   Double_t Graph0_fy1[2] = {
   1,
   1};
   TGraph *graph = new TGraph(2,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(3);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-120,120);
   Graph_Graph1->SetMinimum(0.9);
   Graph_Graph1->SetMaximum(2.1);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("l");
   
   Double_t Graph1_fx3001[2] = {
   -100,
   100};
   Double_t Graph1_fy3001[2] = {
   2.067,
   2.067};
   Double_t Graph1_felx3001[2] = {
   0,
   0};
   Double_t Graph1_fely3001[2] = {
   1.686,
   1.686};
   Double_t Graph1_fehx3001[2] = {
   0,
   0};
   Double_t Graph1_fehy3001[2] = {
   1.911,
   1.911};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph1_fx3001,Graph1_fy3001,Graph1_felx3001,Graph1_fehx3001,Graph1_fely3001,Graph1_fehy3001);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillColor(95);
   grae->SetFillStyle(3003);
   grae->SetLineColor(95);
   grae->SetLineWidth(3);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","Graph",100,-120,120);
   Graph_Graph3001->SetMinimum(0.0213);
   Graph_Graph3001->SetMaximum(4.3377);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3001->SetLineColor(ci);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("3");
   
   Double_t Graph1_fx3002[2] = {
   -100,
   100};
   Double_t Graph1_fy3002[2] = {
   2.067,
   2.067};
   Double_t Graph1_felx3002[2] = {
   0,
   0};
   Double_t Graph1_fely3002[2] = {
   1.686,
   1.686};
   Double_t Graph1_fehx3002[2] = {
   0,
   0};
   Double_t Graph1_fehy3002[2] = {
   1.911,
   1.911};
   grae = new TGraphAsymmErrors(2,Graph1_fx3002,Graph1_fy3002,Graph1_felx3002,Graph1_fehx3002,Graph1_fely3002,Graph1_fehy3002);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillColor(95);
   grae->SetFillStyle(3003);
   grae->SetLineColor(95);
   grae->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph30013002 = new TH1F("Graph_Graph_Graph30013002","Graph",100,-120,120);
   Graph_Graph_Graph30013002->SetMinimum(0.0213);
   Graph_Graph_Graph30013002->SetMaximum(4.3377);
   Graph_Graph_Graph30013002->SetDirectory(0);
   Graph_Graph_Graph30013002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30013002->SetLineColor(ci);
   Graph_Graph_Graph30013002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30013002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph30013002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph30013002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30013002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30013002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph30013002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph30013002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph30013002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30013002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30013002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph30013002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph30013002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30013002);
   
   grae->Draw("l");
   
   Double_t Graph2_fx3003[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph2_fy3003[6] = {
   -1.156,
   1.632,
   4.397,
   3.698,
   2.987,
   -2.319};
   Double_t Graph2_felx3003[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fely3003[6] = {
   2.83,
   2.738,
   3.022,
   2.969,
   4.291,
   5.982};
   Double_t Graph2_fehx3003[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fehy3003[6] = {
   2.68,
   2.988,
   3.877,
   3.776,
   5.03,
   5.691};
   grae = new TGraphAsymmErrors(6,Graph2_fx3003,Graph2_fy3003,Graph2_felx3003,Graph2_fehx3003,Graph2_fely3003,Graph2_fehy3003);
   grae->SetName("Graph2");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","Graph",100,0.5,6.5);
   Graph_Graph3003->SetMinimum(-9.9585);
   Graph_Graph3003->SetMaximum(9.9315);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3003->SetLineColor(ci);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("p");
   TLatex *   tex = new TLatex(0.15,0.92,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.036);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.92,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.036);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.65,0.7,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(0);
   leg->SetLineStyle(0);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   leg->Draw();
   pad1->Modified();
   c->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0.66,0,1,1);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.125,-12.875,2.625,15.875);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetLeftMargin(0.15);
   pad2->SetRightMargin(0.05);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   
   TH1D *dummy1__2 = new TH1D("dummy1__2","dummy1",2,0.5,2.5);
   dummy1__2->SetMinimum(-10);
   dummy1__2->SetMaximum(13);
   dummy1__2->SetEntries(2);
   dummy1__2->SetStats(0);
   dummy1__2->SetLineColor(0);
   dummy1__2->GetXaxis()->SetTitle("m_{jj} bin [GeV], VBF cat.");
   dummy1__2->GetXaxis()->SetBinLabel(1,"1000-2000");
   dummy1__2->GetXaxis()->SetBinLabel(2,"> 2000");
   dummy1__2->GetXaxis()->SetLabelFont(42);
   dummy1__2->GetXaxis()->SetLabelSize(0.06);
   dummy1__2->GetXaxis()->SetTitleSize(0.072);
   dummy1__2->GetXaxis()->SetTitleOffset(0.5);
   dummy1__2->GetXaxis()->SetTitleFont(42);
   dummy1__2->GetYaxis()->SetTitle("#mu_{VBF}");
   dummy1__2->GetYaxis()->SetLabelFont(42);
   dummy1__2->GetYaxis()->SetLabelSize(0);
   dummy1__2->GetYaxis()->SetTitleSize(0.072);
   dummy1__2->GetYaxis()->SetTitleOffset(0.75);
   dummy1__2->GetYaxis()->SetTitleFont(42);
   dummy1__2->GetZaxis()->SetLabelFont(42);
   dummy1__2->GetZaxis()->SetLabelSize(0.035);
   dummy1__2->GetZaxis()->SetTitleSize(0.035);
   dummy1__2->GetZaxis()->SetTitleFont(42);
   dummy1__2->Draw("");
   
   Double_t Graph0_fx2[2] = {
   -100,
   100};
   Double_t Graph0_fy2[2] = {
   1,
   1};
   graph = new TGraph(2,Graph0_fx2,Graph0_fy2);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(3);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph12 = new TH1F("Graph_Graph_Graph12","Graph",100,-120,120);
   Graph_Graph_Graph12->SetMinimum(0.9);
   Graph_Graph_Graph12->SetMaximum(2.1);
   Graph_Graph_Graph12->SetDirectory(0);
   Graph_Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph12->SetLineColor(ci);
   Graph_Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph12->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph12->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph12->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph12);
   
   graph->Draw("l");
   
   Double_t Graph0_fx3004[2] = {
   -100,
   100};
   Double_t Graph0_fy3004[2] = {
   5.03,
   5.03};
   Double_t Graph0_felx3004[2] = {
   0,
   0};
   Double_t Graph0_fely3004[2] = {
   1.785,
   1.785};
   Double_t Graph0_fehx3004[2] = {
   0,
   0};
   Double_t Graph0_fehy3004[2] = {
   2.104,
   2.104};
   grae = new TGraphAsymmErrors(2,Graph0_fx3004,Graph0_fy3004,Graph0_felx3004,Graph0_fehx3004,Graph0_fely3004,Graph0_fehy3004);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(4);
   grae->SetFillStyle(3003);
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","Graph",100,-120,120);
   Graph_Graph3004->SetMinimum(2.8561);
   Graph_Graph3004->SetMaximum(7.5229);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3004->SetLineColor(ci);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("3");
   
   Double_t Graph0_fx3005[2] = {
   -100,
   100};
   Double_t Graph0_fy3005[2] = {
   5.03,
   5.03};
   Double_t Graph0_felx3005[2] = {
   0,
   0};
   Double_t Graph0_fely3005[2] = {
   1.785,
   1.785};
   Double_t Graph0_fehx3005[2] = {
   0,
   0};
   Double_t Graph0_fehy3005[2] = {
   2.104,
   2.104};
   grae = new TGraphAsymmErrors(2,Graph0_fx3005,Graph0_fy3005,Graph0_felx3005,Graph0_fehx3005,Graph0_fely3005,Graph0_fehy3005);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(4);
   grae->SetFillStyle(3003);
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph30043005 = new TH1F("Graph_Graph_Graph30043005","Graph",100,-120,120);
   Graph_Graph_Graph30043005->SetMinimum(2.8561);
   Graph_Graph_Graph30043005->SetMaximum(7.5229);
   Graph_Graph_Graph30043005->SetDirectory(0);
   Graph_Graph_Graph30043005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30043005->SetLineColor(ci);
   Graph_Graph_Graph30043005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30043005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph30043005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph30043005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30043005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30043005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph30043005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph30043005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph30043005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30043005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30043005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph30043005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph30043005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30043005);
   
   grae->Draw("l");
   
   Double_t Graph1_fx3006[2] = {
   1,
   2};
   Double_t Graph1_fy3006[2] = {
   7.883,
   3.696};
   Double_t Graph1_felx3006[2] = {
   0,
   0};
   Double_t Graph1_fely3006[2] = {
   3.05,
   1.763};
   Double_t Graph1_fehx3006[2] = {
   0,
   0};
   Double_t Graph1_fehy3006[2] = {
   3.559,
   2.035};
   grae = new TGraphAsymmErrors(2,Graph1_fx3006,Graph1_fy3006,Graph1_felx3006,Graph1_fehx3006,Graph1_fely3006,Graph1_fehy3006);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","Graph",100,0.9,2.1);
   Graph_Graph3006->SetMinimum(0.9821);
   Graph_Graph3006->SetMaximum(12.3929);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3006->SetLineColor(ci);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("p");
      tex = new TLatex(0.45,0.92,"138 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.072);
   tex->SetLineWidth(2);
   tex->Draw();
   pad2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
