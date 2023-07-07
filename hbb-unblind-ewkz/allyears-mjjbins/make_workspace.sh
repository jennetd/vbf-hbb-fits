year=""

if [[ "$PWD" == *"2016"* ]]; then
    year="_2016"
elif [[ "$PWD" == *"2017"* ]]; then
year="_2017"
elif [[ "$PWD" == *"2018"* ]]; then
    year="_2018"
fi

cd output/testModel${year}/

. build.sh

text2workspace.py model_combined.txt -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
--PO 'map=ptbin0vbflo.*/VBF:rVBF7[1,-19,20]' --PO 'map=ptbin0vbfhi.*/VBF:rVBF8[1,-19,20]' \
--PO 'map=ptbin.*ggf.*/VBF:rVBF1[1,-50,100]' \
--PO 'map=.*/ggF:rggF[1,-50,50]'


