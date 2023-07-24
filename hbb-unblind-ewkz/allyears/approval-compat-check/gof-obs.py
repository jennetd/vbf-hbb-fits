import os
import numpy as np
import ROOT
import argparse

def GoF(thisbin):

    infile = "output/testModel/model_combined.root"

    d = mask_dict()
    mask = d[thisbin]
    print(mask)

    combine_cmd = "combine -M GoodnessOfFit " + infile + " \
    --algorithm saturated  -n .compat_" + thisbin + "_obs" + " \
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

#    for b in ['vbflo','vbfhi','ggf1','ggf2','ggf3','ggf4','ggf5','ggf6']:
#        GoF(b)
    

    for b in ['vbflofail','vbfhifail','ggf1fail','ggf2fail','ggf3fail','ggf4fail','ggf5fail','ggf6fail']:
        GoF(b)  

