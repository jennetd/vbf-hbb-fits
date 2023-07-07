year=""
cd output/testModel${year}/

. build.sh

text2workspace.py model_combined.txt -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
--PO 'map=ptbin0ggf.*/ggF:rggF1[1,-19,20]' --PO 'map=ptbin1ggf.*/ggF:rggF2[1,-19,20]' \
--PO 'map=ptbin2ggf.*/ggF:rggF3[1,-19,20]' --PO 'map=ptbin3ggf.*/ggF:rggF4[1,-19,20]' \
--PO 'map=ptbin4ggf.*/ggF:rggF5[1,-19,20]' --PO 'map=ptbin5ggf.*/ggF:rggF6[1,-19,20]' \
--PO 'map=ptbin0.*vbf.*/ggF:rggF7[1,-50,50]' \
--PO 'map=.*/VBF:rVBF[1,-50,50]'



