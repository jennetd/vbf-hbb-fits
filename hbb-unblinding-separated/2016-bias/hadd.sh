for bias in 0 1 `seq 5 5 25`
do 
    hadd -f bias${bias}ggF.root *Combinebias${bias}ggF.*
    hadd -f bias${bias}VBF.root *Combinebias${bias}VBF.*
done
