import os
import numpy as np
import ROOT
import argparse

def GoF(ntoys, thisbin, seed=123456):

    infile = "model_combined.root"

    d = mask_dict()
    mask = d[thisbin]
    print(mask)

    combine_cmd = "combine -M GoodnessOfFit " + infile + " \
    --algorithm saturated  -n .compat_" + thisbin + "_toys." + str(seed) + " \
    -t " + str(ntoys) + " --toysFile higgsCombineToys.GenerateOnly.mH125." + str(seed) + ".root \
    --setParametersForEval " + mask

    os.system(combine_cmd)

def mask_dict():
    d = {}

    # vbf category
    d["vbflo"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*fail.*}=1,rgx{mask_.*ggf.*}=1,rgx{mask_ptbin0vbfhi.*}=1"
    d["vbfhi"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*fail.*}=1,rgx{mask_.*ggf.*}=1,rgx{mask_ptbin0vbflo.*}=1"
    # ggf category
    d["ggf1"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*fail.*}=1,rgx{mask_.*vbf.*}=1,rgx{mask_ptbin1.*}=1,rgx{mask_ptbin2.*}=1,rgx{mask_ptbin3.*}=1,rgx{mask_ptbin4.*}=1,rgx{mask_ptbin5.*}=1"
    d["ggf2"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*fail.*}=1,rgx{mask_.*vbf.*}=1,rgx{mask_ptbin0.*}=1,rgx{mask_ptbin2.*}=1,rgx{mask_ptbin3.*}=1,rgx{mask_ptbin4.*}=1,rgx{mask_ptbin5.*}=1"
    d["ggf3"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*fail.*}=1,rgx{mask_.*vbf.*}=1,rgx{mask_ptbin1.*}=1,rgx{mask_ptbin0.*}=1,rgx{mask_ptbin3.*}=1,rgx{mask_ptbin4.*}=1,rgx{mask_ptbin5.*}=1"
    d["ggf4"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*fail.*}=1,rgx{mask_.*vbf.*}=1,rgx{mask_ptbin1.*}=1,rgx{mask_ptbin2.*}=1,rgx{mask_ptbin0.*}=1,rgx{mask_ptbin4.*}=1,rgx{mask_ptbin5.*}=1"
    d["ggf5"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*fail.*}=1,rgx{mask_.*vbf.*}=1,rgx{mask_ptbin1.*}=1,rgx{mask_ptbin2.*}=1,rgx{mask_ptbin3.*}=1,rgx{mask_ptbin0.*}=1,rgx{mask_ptbin5.*}=1"
    d["ggf6"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*fail.*}=1,rgx{mask_.*vbf.*}=1,rgx{mask_ptbin1.*}=1,rgx{mask_ptbin2.*}=1,rgx{mask_ptbin3.*}=1,rgx{mask_ptbin4.*}=1,rgx{mask_ptbin0.*}=1"

    # vbf category DDB fail
    d["vbflofail"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*pass.*}=1,rgx{mask_.*ggf.*}=1,rgx{mask_ptbin0vbfhi.*}=1"
    d["vbfhifail"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*pass.*}=1,rgx{mask_.*ggf.*}=1,rgx{mask_ptbin0vbflo.*}=1"
    # ggf category DDB fail
    d["ggf1fail"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*pass.*}=1,rgx{mask_.*vbf.*}=1,rgx{mask_ptbin1.*}=1,rgx{mask_ptbin2.*}=1,rgx{mask_ptbin3.*}=1,rgx{mask_ptbin4.*}=1,rgx{mask_ptbin5.*}=1"
    d["ggf2fail"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*pass.*}=1,rgx{mask_.*vbf.*}=1,rgx{mask_ptbin0.*}=1,rgx{mask_ptbin2.*}=1,rgx{mask_ptbin3.*}=1,rgx{mask_ptbin4.*}=1,rgx{mask_ptbin5.*}=1"
    d["ggf3fail"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*pass.*}=1,rgx{mask_.*vbf.*}=1,rgx{mask_ptbin1.*}=1,rgx{mask_ptbin0.*}=1,rgx{mask_ptbin3.*}=1,rgx{mask_ptbin4.*}=1,rgx{mask_ptbin5.*}=1"
    d["ggf4fail"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*pass.*}=1,rgx{mask_.*vbf.*}=1,rgx{mask_ptbin1.*}=1,rgx{mask_ptbin2.*}=1,rgx{mask_ptbin0.*}=1,rgx{mask_ptbin4.*}=1,rgx{mask_ptbin5.*}=1"
    d["ggf5fail"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*pass.*}=1,rgx{mask_.*vbf.*}=1,rgx{mask_ptbin1.*}=1,rgx{mask_ptbin2.*}=1,rgx{mask_ptbin3.*}=1,rgx{mask_ptbin0.*}=1,rgx{mask_ptbin5.*}=1"
    d["ggf6fail"] = "rgx{mask_muonCR.*}=1,rgx{mask_.*pass.*}=1,rgx{mask_.*vbf.*}=1,rgx{mask_ptbin1.*}=1,rgx{mask_ptbin2.*}=1,rgx{mask_ptbin3.*}=1,rgx{mask_ptbin4.*}=1,rgx{mask_ptbin0.*}=1"
    
    return d

if __name__ == '__main__':

    parser = argparse.ArgumentParser(description='F-test')
    parser.add_argument('-n','--ntoys',nargs='+',help='number of toys')
    parser.add_argument('-i','--index',nargs='+',help='index for random seed')
    parser.add_argument('-b','--testbin',nargs="+",help='bin used to decide channels to mask')
    args = parser.parse_args()

    ntoys = int(args.ntoys[0])
    seed = 123456+int(args.index[0])*100+31
    thisbin = args.testbin[0]
    
    # run toys and gof
    GoF(ntoys,thisbin,seed=seed)
    


