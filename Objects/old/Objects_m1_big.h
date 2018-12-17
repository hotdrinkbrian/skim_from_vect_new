#ifndef OBJECTS_H
#define OBJECTS_H

/*
struct JetTypeSmall {
JetTypeSmall(): pt(-1.), eta(-9.), phi(-9.), mass(-1.), energy(-1.), cHadE(-1.), nHadE (-1.), cHadEFrac(-1.), nHadEFrac(-1.), nEmE(-1.), nEmEFrac(-1.), cEmE(-1.), cEmEFrac(-1.), cmuE(-1.), cmuEFrac(-1.), muE(-1.), muEFrac(-1.), eleE(-1.), eleEFrac(-1.), eleMulti(-1.), photonE(-1.), photonEFrac(-1.), photonMulti(-1.), cHadMulti(-1.), nHadMulti(-1.), npr(-1.), cMulti(-1.), nMulti(-1.),    FracCal(-100.){}
    float pt;
    float eta;
    float phi;
    float mass; 
    float energy;

    float cHadE;
    float nHadE;
    float cHadEFrac;
    float nHadEFrac;
    float nEmE;
    float nEmEFrac;
    float cEmE;
    float cEmEFrac;
    float cmuE;
    float cmuEFrac;
    float muE;
    float muEFrac;
    float eleE;
    float eleEFrac;
    float eleMulti;
    float photonE;
    float photonEFrac;
    float photonMulti;
    float cHadMulti;
    float nHadMulti;
    float npr;
    float cMulti;
    float nMulti;

    float FracCal;
};
*/



/*
struct JetTypeSmall {
JetTypeSmall(): pt(-1.), eta(-9.), phi(-9.), mass(-1.), energy(-1.), cHadEFrac(-1.), nHadEFrac(-1.), nEmEFrac(-1.), cEmEFrac(-1.), cmuEFrac(-1.), muEFrac(-1.), eleEFrac(-1.), eleMulti(-1.), photonEFrac(-1.), photonMulti(-1.), cHadMulti(-1.), nHadMulti(-1.), npr(-1.), cMulti(-1.), nMulti(-1.),   DisplacedJetsTriggerBool(-1.), nCHSJets(-1.){}
    float pt;
    float eta;
    float phi;
    float mass;
    float energy;

//    float cHadE;
//    float nHadE;
    float cHadEFrac;
    float nHadEFrac;
//    float nEmE;
    float nEmEFrac;
//    float cEmE;
    float cEmEFrac;
//    float cmuE;
    float cmuEFrac;
//    float muE;
    float muEFrac;
//    float eleE;
    float eleEFrac;
    float eleMulti;
//    float photonE;
    float photonEFrac;
    float photonMulti;
    float cHadMulti;
    float nHadMulti;
    float npr;
    float cMulti;
    float nMulti;

//    float FracCal;
    float DisplacedJetsTriggerBool; 
    float nCHSJets;
};
*/











struct JetTypePFC_fourVect {
JetTypePFC_fourVect(): pfc1_energy(0.), pfc1_px(0.), pfc1_py(0.), pfc1_pz(0.), pfc2_energy(0.), pfc2_px(0.), pfc2_py(0.), pfc2_pz(0.), pfc3_energy(0.), pfc3_px(0.), pfc3_py(0.), pfc3_pz(0.), pfc4_energy(0.), pfc4_px(0.), pfc4_py(0.), pfc4_pz(0.), pfc5_energy(0.), pfc5_px(0.), pfc5_py(0.), pfc5_pz(0.), pfc6_energy(0.), pfc6_px(0.), pfc6_py(0.), pfc6_pz(0.), pfc7_energy(0.), pfc7_px(0.), pfc7_py(0.), pfc7_pz(0.), pfc8_energy(0.), pfc8_px(0.), pfc8_py(0.), pfc8_pz(0.), pfc9_energy(0.), pfc9_px(0.), pfc9_py(0.), pfc9_pz(0.), pfc10_energy(0.), pfc10_px(0.), pfc10_py(0.), pfc10_pz(0.), pfc11_energy(0.), pfc11_px(0.), pfc11_py(0.), pfc11_pz(0.), pfc12_energy(0.), pfc12_px(0.), pfc12_py(0.), pfc12_pz(0.), pfc13_energy(0.), pfc13_px(0.), pfc13_py(0.), pfc13_pz(0.), pfc14_energy(0.), pfc14_px(0.), pfc14_py(0.), pfc14_pz(0.), pfc15_energy(0.), pfc15_px(0.), pfc15_py(0.), pfc15_pz(0.), pfc16_energy(0.), pfc16_px(0.), pfc16_py(0.), pfc16_pz(0.), pfc17_energy(0.), pfc17_px(0.), pfc17_py(0.), pfc17_pz(0.), pfc18_energy(0.), pfc18_px(0.), pfc18_py(0.), pfc18_pz(0.), pfc19_energy(0.), pfc19_px(0.), pfc19_py(0.), pfc19_pz(0.), pfc20_energy(0.), pfc20_px(0.), pfc20_py(0.), pfc20_pz(0.), pfc21_energy(0.), pfc21_px(0.), pfc21_py(0.), pfc21_pz(0.), pfc22_energy(0.), pfc22_px(0.), pfc22_py(0.), pfc22_pz(0.), pfc23_energy(0.), pfc23_px(0.), pfc23_py(0.), pfc23_pz(0.), pfc24_energy(0.), pfc24_px(0.), pfc24_py(0.), pfc24_pz(0.), pfc25_energy(0.), pfc25_px(0.), pfc25_py(0.), pfc25_pz(0.), pfc26_energy(0.), pfc26_px(0.), pfc26_py(0.), pfc26_pz(0.), pfc27_energy(0.), pfc27_px(0.), pfc27_py(0.), pfc27_pz(0.), pfc28_energy(0.), pfc28_px(0.), pfc28_py(0.), pfc28_pz(0.), pfc29_energy(0.), pfc29_px(0.), pfc29_py(0.), pfc29_pz(0.), pfc30_energy(0.), pfc30_px(0.), pfc30_py(0.), pfc30_pz(0.), pfc31_energy(0.), pfc31_px(0.), pfc31_py(0.), pfc31_pz(0.), pfc32_energy(0.), pfc32_px(0.), pfc32_py(0.), pfc32_pz(0.), pfc33_energy(0.), pfc33_px(0.), pfc33_py(0.), pfc33_pz(0.), pfc34_energy(0.), pfc34_px(0.), pfc34_py(0.), pfc34_pz(0.), pfc35_energy(0.), pfc35_px(0.), pfc35_py(0.), pfc35_pz(0.), pfc36_energy(0.), pfc36_px(0.), pfc36_py(0.), pfc36_pz(0.), pfc37_energy(0.), pfc37_px(0.), pfc37_py(0.), pfc37_pz(0.), pfc38_energy(0.), pfc38_px(0.), pfc38_py(0.), pfc38_pz(0.), pfc39_energy(0.), pfc39_px(0.), pfc39_py(0.), pfc39_pz(0.), pfc40_energy(0.), pfc40_px(0.), pfc40_py(0.), pfc40_pz(0.)  {}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;

    
};









struct JetTypePFC_fiveVect {
JetTypePFC_fiveVect(): pfc1_energy(0.), pfc1_px(0.), pfc1_py(0.), pfc1_pz(0.), pfc1_ifTrack(-1), pfc2_energy(0.), pfc2_px(0.), pfc2_py(0.), pfc2_pz(0.), pfc2_ifTrack(-1), pfc3_energy(0.), pfc3_px(0.), pfc3_py(0.), pfc3_pz(0.), pfc3_ifTrack(-1), pfc4_energy(0.), pfc4_px(0.), pfc4_py(0.), pfc4_pz(0.), pfc4_ifTrack(-1), pfc5_energy(0.), pfc5_px(0.), pfc5_py(0.), pfc5_pz(0.), pfc5_ifTrack(-1), pfc6_energy(0.), pfc6_px(0.), pfc6_py(0.), pfc6_pz(0.), pfc6_ifTrack(-1), pfc7_energy(0.), pfc7_px(0.), pfc7_py(0.), pfc7_pz(0.), pfc7_ifTrack(-1), pfc8_energy(0.), pfc8_px(0.), pfc8_py(0.), pfc8_pz(0.), pfc8_ifTrack(-1), pfc9_energy(0.), pfc9_px(0.), pfc9_py(0.), pfc9_pz(0.), pfc9_ifTrack(-1), pfc10_energy(0.), pfc10_px(0.), pfc10_py(0.), pfc10_pz(0.), pfc10_ifTrack(-1), pfc11_energy(0.), pfc11_px(0.), pfc11_py(0.), pfc11_pz(0.), pfc11_ifTrack(-1), pfc12_energy(0.), pfc12_px(0.), pfc12_py(0.), pfc12_pz(0.), pfc12_ifTrack(-1), pfc13_energy(0.), pfc13_px(0.), pfc13_py(0.), pfc13_pz(0.), pfc13_ifTrack(-1), pfc14_energy(0.), pfc14_px(0.), pfc14_py(0.), pfc14_pz(0.), pfc14_ifTrack(-1), pfc15_energy(0.), pfc15_px(0.), pfc15_py(0.), pfc15_pz(0.), pfc15_ifTrack(-1), pfc16_energy(0.), pfc16_px(0.), pfc16_py(0.), pfc16_pz(0.), pfc16_ifTrack(-1), pfc17_energy(0.), pfc17_px(0.), pfc17_py(0.), pfc17_pz(0.), pfc17_ifTrack(-1), pfc18_energy(0.), pfc18_px(0.), pfc18_py(0.), pfc18_pz(0.), pfc18_ifTrack(-1), pfc19_energy(0.), pfc19_px(0.), pfc19_py(0.), pfc19_pz(0.), pfc19_ifTrack(-1), pfc20_energy(0.), pfc20_px(0.), pfc20_py(0.), pfc20_pz(0.), pfc20_ifTrack(-1), pfc21_energy(0.), pfc21_px(0.), pfc21_py(0.), pfc21_pz(0.), pfc21_ifTrack(-1), pfc22_energy(0.), pfc22_px(0.), pfc22_py(0.), pfc22_pz(0.), pfc22_ifTrack(-1), pfc23_energy(0.), pfc23_px(0.), pfc23_py(0.), pfc23_pz(0.), pfc23_ifTrack(-1), pfc24_energy(0.), pfc24_px(0.), pfc24_py(0.), pfc24_pz(0.), pfc24_ifTrack(-1), pfc25_energy(0.), pfc25_px(0.), pfc25_py(0.), pfc25_pz(0.), pfc25_ifTrack(-1), pfc26_energy(0.), pfc26_px(0.), pfc26_py(0.), pfc26_pz(0.), pfc26_ifTrack(-1), pfc27_energy(0.), pfc27_px(0.), pfc27_py(0.), pfc27_pz(0.), pfc27_ifTrack(-1), pfc28_energy(0.), pfc28_px(0.), pfc28_py(0.), pfc28_pz(0.), pfc28_ifTrack(-1), pfc29_energy(0.), pfc29_px(0.), pfc29_py(0.), pfc29_pz(0.), pfc29_ifTrack(-1), pfc30_energy(0.), pfc30_px(0.), pfc30_py(0.), pfc30_pz(0.), pfc30_ifTrack(-1), pfc31_energy(0.), pfc31_px(0.), pfc31_py(0.), pfc31_pz(0.), pfc31_ifTrack(-1), pfc32_energy(0.), pfc32_px(0.), pfc32_py(0.), pfc32_pz(0.), pfc32_ifTrack(-1), pfc33_energy(0.), pfc33_px(0.), pfc33_py(0.), pfc33_pz(0.), pfc33_ifTrack(-1), pfc34_energy(0.), pfc34_px(0.), pfc34_py(0.), pfc34_pz(0.), pfc34_ifTrack(-1), pfc35_energy(0.), pfc35_px(0.), pfc35_py(0.), pfc35_pz(0.), pfc35_ifTrack(-1), pfc36_energy(0.), pfc36_px(0.), pfc36_py(0.), pfc36_pz(0.), pfc36_ifTrack(-1), pfc37_energy(0.), pfc37_px(0.), pfc37_py(0.), pfc37_pz(0.), pfc37_ifTrack(-1), pfc38_energy(0.), pfc38_px(0.), pfc38_py(0.), pfc38_pz(0.), pfc38_ifTrack(-1), pfc39_energy(0.), pfc39_px(0.), pfc39_py(0.), pfc39_pz(0.), pfc39_ifTrack(-1), pfc40_energy(0.), pfc40_px(0.), pfc40_py(0.), pfc40_pz(0.), pfc40_ifTrack(-1)  {}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int   pfc1_ifTrack;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int   pfc2_ifTrack;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int   pfc3_ifTrack;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int   pfc4_ifTrack;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int   pfc5_ifTrack;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int   pfc6_ifTrack;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int   pfc7_ifTrack;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int   pfc8_ifTrack;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int   pfc9_ifTrack;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int   pfc10_ifTrack;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int   pfc11_ifTrack;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int   pfc12_ifTrack;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int   pfc13_ifTrack;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int   pfc14_ifTrack;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int   pfc15_ifTrack;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int   pfc16_ifTrack;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int   pfc17_ifTrack;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int   pfc18_ifTrack;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int   pfc19_ifTrack;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int   pfc20_ifTrack;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int   pfc21_ifTrack;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int   pfc22_ifTrack;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int   pfc23_ifTrack;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int   pfc24_ifTrack;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int   pfc25_ifTrack;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int   pfc26_ifTrack;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int   pfc27_ifTrack;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int   pfc28_ifTrack;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int   pfc29_ifTrack;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int   pfc30_ifTrack;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int   pfc31_ifTrack;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int   pfc32_ifTrack;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int   pfc33_ifTrack;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int   pfc34_ifTrack;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int   pfc35_ifTrack;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int   pfc36_ifTrack;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int   pfc37_ifTrack;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int   pfc38_ifTrack;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int   pfc39_ifTrack;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int   pfc40_ifTrack;


    
};













/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect(): pfc1_energy(0.), pfc1_px(0.), pfc1_py(0.), pfc1_pz(0.), pfc1_ifTrack(-1), pfc1_pType(-1), pfc2_energy(0.), pfc2_px(0.), pfc2_py(0.), pfc2_pz(0.), pfc2_ifTrack(-1), pfc2_pType(-1), pfc3_energy(0.), pfc3_px(0.), pfc3_py(0.), pfc3_pz(0.), pfc3_ifTrack(-1), pfc3_pType(-1), pfc4_energy(0.), pfc4_px(0.), pfc4_py(0.), pfc4_pz(0.), pfc4_ifTrack(-1), pfc4_pType(-1), pfc5_energy(0.), pfc5_px(0.), pfc5_py(0.), pfc5_pz(0.), pfc5_ifTrack(-1), pfc5_pType(-1), pfc6_energy(0.), pfc6_px(0.), pfc6_py(0.), pfc6_pz(0.), pfc6_ifTrack(-1), pfc6_pType(-1), pfc7_energy(0.), pfc7_px(0.), pfc7_py(0.), pfc7_pz(0.), pfc7_ifTrack(-1), pfc7_pType(-1), pfc8_energy(0.), pfc8_px(0.), pfc8_py(0.), pfc8_pz(0.), pfc8_ifTrack(-1), pfc8_pType(-1), pfc9_energy(0.), pfc9_px(0.), pfc9_py(0.), pfc9_pz(0.), pfc9_ifTrack(-1), pfc9_pType(-1), pfc10_energy(0.), pfc10_px(0.), pfc10_py(0.), pfc10_pz(0.), pfc10_ifTrack(-1), pfc10_pType(-1), pfc11_energy(0.), pfc11_px(0.), pfc11_py(0.), pfc11_pz(0.), pfc11_ifTrack(-1), pfc11_pType(-1), pfc12_energy(0.), pfc12_px(0.), pfc12_py(0.), pfc12_pz(0.), pfc12_ifTrack(-1), pfc12_pType(-1), pfc13_energy(0.), pfc13_px(0.), pfc13_py(0.), pfc13_pz(0.), pfc13_ifTrack(-1), pfc13_pType(-1), pfc14_energy(0.), pfc14_px(0.), pfc14_py(0.), pfc14_pz(0.), pfc14_ifTrack(-1), pfc14_pType(-1), pfc15_energy(0.), pfc15_px(0.), pfc15_py(0.), pfc15_pz(0.), pfc15_ifTrack(-1), pfc15_pType(-1), pfc16_energy(0.), pfc16_px(0.), pfc16_py(0.), pfc16_pz(0.), pfc16_ifTrack(-1), pfc16_pType(-1), pfc17_energy(0.), pfc17_px(0.), pfc17_py(0.), pfc17_pz(0.), pfc17_ifTrack(-1), pfc17_pType(-1), pfc18_energy(0.), pfc18_px(0.), pfc18_py(0.), pfc18_pz(0.), pfc18_ifTrack(-1), pfc18_pType(-1), pfc19_energy(0.), pfc19_px(0.), pfc19_py(0.), pfc19_pz(0.), pfc19_ifTrack(-1), pfc19_pType(-1), pfc20_energy(0.), pfc20_px(0.), pfc20_py(0.), pfc20_pz(0.), pfc20_ifTrack(-1), pfc20_pType(-1), pfc21_energy(0.), pfc21_px(0.), pfc21_py(0.), pfc21_pz(0.), pfc21_ifTrack(-1), pfc21_pType(-1), pfc22_energy(0.), pfc22_px(0.), pfc22_py(0.), pfc22_pz(0.), pfc22_ifTrack(-1), pfc22_pType(-1), pfc23_energy(0.), pfc23_px(0.), pfc23_py(0.), pfc23_pz(0.), pfc23_ifTrack(-1), pfc23_pType(-1), pfc24_energy(0.), pfc24_px(0.), pfc24_py(0.), pfc24_pz(0.), pfc24_ifTrack(-1), pfc24_pType(-1), pfc25_energy(0.), pfc25_px(0.), pfc25_py(0.), pfc25_pz(0.), pfc25_ifTrack(-1), pfc25_pType(-1), pfc26_energy(0.), pfc26_px(0.), pfc26_py(0.), pfc26_pz(0.), pfc26_ifTrack(-1), pfc26_pType(-1), pfc27_energy(0.), pfc27_px(0.), pfc27_py(0.), pfc27_pz(0.), pfc27_ifTrack(-1), pfc27_pType(-1), pfc28_energy(0.), pfc28_px(0.), pfc28_py(0.), pfc28_pz(0.), pfc28_ifTrack(-1), pfc28_pType(-1), pfc29_energy(0.), pfc29_px(0.), pfc29_py(0.), pfc29_pz(0.), pfc29_ifTrack(-1), pfc29_pType(-1), pfc30_energy(0.), pfc30_px(0.), pfc30_py(0.), pfc30_pz(0.), pfc30_ifTrack(-1), pfc30_pType(-1), pfc31_energy(0.), pfc31_px(0.), pfc31_py(0.), pfc31_pz(0.), pfc31_ifTrack(-1), pfc31_pType(-1), pfc32_energy(0.), pfc32_px(0.), pfc32_py(0.), pfc32_pz(0.), pfc32_ifTrack(-1), pfc32_pType(-1), pfc33_energy(0.), pfc33_px(0.), pfc33_py(0.), pfc33_pz(0.), pfc33_ifTrack(-1), pfc33_pType(-1), pfc34_energy(0.), pfc34_px(0.), pfc34_py(0.), pfc34_pz(0.), pfc34_ifTrack(-1), pfc34_pType(-1), pfc35_energy(0.), pfc35_px(0.), pfc35_py(0.), pfc35_pz(0.), pfc35_ifTrack(-1), pfc35_pType(-1), pfc36_energy(0.), pfc36_px(0.), pfc36_py(0.), pfc36_pz(0.), pfc36_ifTrack(-1), pfc36_pType(-1), pfc37_energy(0.), pfc37_px(0.), pfc37_py(0.), pfc37_pz(0.), pfc37_ifTrack(-1), pfc37_pType(-1), pfc38_energy(0.), pfc38_px(0.), pfc38_py(0.), pfc38_pz(0.), pfc38_ifTrack(-1), pfc38_pType(-1), pfc39_energy(0.), pfc39_px(0.), pfc39_py(0.), pfc39_pz(0.), pfc39_ifTrack(-1), pfc39_pType(-1), pfc40_energy(0.), pfc40_px(0.), pfc40_py(0.), pfc40_pz(0.), pfc40_ifTrack(-1), pfc40_pType(-1) {}

    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int   pfc1_ifTrack;
    int   pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int   pfc2_ifTrack;
    int   pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int   pfc3_ifTrack;
    int   pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int   pfc4_ifTrack;
    int   pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int   pfc5_ifTrack;
    int   pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int   pfc6_ifTrack;
    int   pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int   pfc7_ifTrack;
    int   pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int   pfc8_ifTrack;
    int   pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int   pfc9_ifTrack;
    int   pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int   pfc10_ifTrack;
    int   pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int   pfc11_ifTrack;
    int   pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int   pfc12_ifTrack;
    int   pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int   pfc13_ifTrack;
    int   pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int   pfc14_ifTrack;
    int   pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int   pfc15_ifTrack;
    int   pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int   pfc16_ifTrack;
    int   pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int   pfc17_ifTrack;
    int   pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int   pfc18_ifTrack;
    int   pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int   pfc19_ifTrack;
    int   pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int   pfc20_ifTrack;
    int   pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int   pfc21_ifTrack;
    int   pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int   pfc22_ifTrack;
    int   pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int   pfc23_ifTrack;
    int   pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int   pfc24_ifTrack;
    int   pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int   pfc25_ifTrack;
    int   pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int   pfc26_ifTrack;
    int   pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int   pfc27_ifTrack;
    int   pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int   pfc28_ifTrack;
    int   pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int   pfc29_ifTrack;
    int   pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int   pfc30_ifTrack;
    int   pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int   pfc31_ifTrack;
    int   pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int   pfc32_ifTrack;
    int   pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int   pfc33_ifTrack;
    int   pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int   pfc34_ifTrack;
    int   pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int   pfc35_ifTrack;
    int   pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int   pfc36_ifTrack;
    int   pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int   pfc37_ifTrack;
    int   pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int   pfc38_ifTrack;
    int   pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int   pfc39_ifTrack;
    int   pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int   pfc40_ifTrack;
    int   pfc40_pType;

};
*/








struct JetType {
JetType(): pt(-1.), eta(-9.), phi(-9.), mass(-1.), energy(-1.), ptRaw(-1.), ptUnc(-1.), dPhi_met(-1.), dPhi_Jet1(-1.), puId(-1.), CSV(-99.), CSVR(-99.), CSVRUp(-99.), CSVRDown(-99.), CMVA(-99.), CMVAR(-99.), CMVARUp(-99.), CMVARDown(-99.), QGLikelihood(-1.), cHadE(-1.), nHadE (-1.), cHadEFrac(-1.), nHadEFrac(-1.), nEmE(-1.), nEmEFrac(-1.), cEmE(-1.), cEmEFrac(-1.), cmuE(-1.), cmuEFrac(-1.), muE(-1.), muEFrac(-1.), eleE(-1.), eleEFrac(-1.), eleMulti(-1.), photonE(-1.), photonEFrac(-1.), photonMulti(-1.), cHadMulti(-1.), nHadMulti(-1.), npr(-1.), cMulti(-1.), nMulti(-1.), emEFrac(-1.), emEinEB(-1.), emEinEE(-1.), emEinHF(-1.), EFracHad(-1.), hadEinHB(-1.), hadEinHE(-1.), hadEinHF(-1.), hadEinHO(-1.), ptGenJ(-10.), etaGenJ(-4.), phiGenJ(-4.), massGenJ(-10.),ptGen(-10.), etaGen(-4.), phiGen(-4.), massGen(-10.), pdgIdGen(0.),
// ptLhe(-10.), etaLhe(-4.), phiLhe(-4.),
    partonFlavour(0), hadronFlavour(0), mother(0), isLoose(false), isMedium(false), isTight(false), isTightLepVeto(false), isCSVL(false), isCSVM(false), isCSVT(false), isMatched(false), dR_q1(1000), dR_q2(1000), dR_q3(1000), dR_q4(1000), m_q1(false), m_q2(false), m_q3(false), m_q4(false), dR_pi1(1000), dR_pi2(1000), matchBquark(-1), matchLL(-1), original_jet_index(-1), isGenMatched(0), isMatchedToMatchedCHSJet(-1), alphaMax(-100.), sigIP2DMedian(-100.), theta2DMedian(-100.), hcalE(-100.), ecalE(-100.), FracCal(-100.), flightDist2d(-100.), flightDist2dSig(-100.), flightDist3d(-100.), flightDist3dSig(-100.), nSV(0), nSVCand(0), nVertexTracks(0), nSelectedTracks(0), dRSVJet(-100.), SV_x(-100.), SV_y(-100.), SV_z(-100.), SV_dx(-100.), SV_dy(-100.), SV_dz(-100.), nTracksSV(0), SV_mass(-100.), indexSV(0), isCaloTag(0) {}
    float pt;
    float eta;
    float phi;
    float mass;
    float energy;
    float ptRaw;
    float ptUnc;
    float dPhi_met;
    float dPhi_Jet1;
    float puId;
    float CSV;
    float CSVR;
    float CSVRUp;
    float CSVRDown;
    float CMVA;
    float CMVAR;
    float CMVARUp;
    float CMVARDown;
    float QGLikelihood;
    float cHadE;
    float nHadE;
    float cHadEFrac;
    float nHadEFrac;
    float nEmE;
    float nEmEFrac;
    float cEmE;
    float cEmEFrac;
    float cmuE;
    float cmuEFrac;
    float muE;
    float muEFrac;
    float eleE;
    float eleEFrac;
    float eleMulti;
    float photonE;
    float photonEFrac;
    float photonMulti;
    float cHadMulti;
    float nHadMulti;
    float npr;
    float cMulti;
    float nMulti;
    float emEFrac;
    float emEinEB;
    float emEinEE;
    float emEinHF;
    float EFracHad;
    float hadEinHB;
    float hadEinHE;
    float hadEinHF;
    float hadEinHO;
    float ptGenJ; 
    float etaGenJ;
    float phiGenJ;
    float massGenJ;
    float ptGen;
    float etaGen;
    float phiGen;
    float massGen;
    int pdgIdGen;
//    float ptLhe;
//    float etaLhe;
//    float phiLhe;
//    int chm;
//    int cm;
//    int nm;
    int partonFlavour;
    int hadronFlavour;
    int mother;
    bool isLoose;
    bool isMedium;
    bool isTight;
    bool isTightLepVeto;
    bool isCSVL;
    bool isCSVM;
    bool isCSVT;
    bool isMatched;
    float dR_q1;
    float dR_q2;
    float dR_q3;
    float dR_q4;
    bool m_q1;
    bool m_q2;
    bool m_q3;
    bool m_q4;
    float dR_pi1;
    float dR_pi2;
    int matchBquark;
    int matchLL;
    int original_jet_index;
    int isGenMatched;
    int isMatchedToMatchedCHSJet;
    float alphaMax;
    float sigIP2DMedian;
    float theta2DMedian;
    float hcalE;
    float ecalE;
    float FracCal;
    float flightDist2d;
    float flightDist2dSig;
    float flightDist3d;
    float flightDist3dSig;
    int nSV;
    int nSVCand;
    int nVertexTracks;
    int nSelectedTracks;
    float dRSVJet;
    float SV_x;
    float SV_y;
    float SV_z;
    float SV_dx;
    float SV_dy;
    float SV_dz;
    int nTracksSV;
    float SV_mass;
    int indexSV;
    int isCaloTag;
};



















/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/






struct JetTypePFC_sixVect {
JetTypePFC_sixVect():
pfc1_energy(-1.0), pfc1_px(-1.0), pfc1_py(-1.0), pfc1_pz(-1.0), pfc1_ifTrack(-1.0), pfc1_pType(-1.0), pfc2_energy(-1.0), pfc2_px(-1.0), pfc2_py(-1.0), pfc2_pz(-1.0), pfc2_ifTrack(-1.0), pfc2_pType(-1.0), pfc3_energy(-1.0), pfc3_px(-1.0), pfc3_py(-1.0), pfc3_pz(-1.0), pfc3_ifTrack(-1.0), pfc3_pType(-1.0), pfc4_energy(-1.0), pfc4_px(-1.0), pfc4_py(-1.0), pfc4_pz(-1.0), pfc4_ifTrack(-1.0), pfc4_pType(-1.0), pfc5_energy(-1.0), pfc5_px(-1.0), pfc5_py(-1.0), pfc5_pz(-1.0), pfc5_ifTrack(-1.0), pfc5_pType(-1.0), pfc6_energy(-1.0), pfc6_px(-1.0), pfc6_py(-1.0), pfc6_pz(-1.0), pfc6_ifTrack(-1.0), pfc6_pType(-1.0), pfc7_energy(-1.0), pfc7_px(-1.0), pfc7_py(-1.0), pfc7_pz(-1.0), pfc7_ifTrack(-1.0), pfc7_pType(-1.0), pfc8_energy(-1.0), pfc8_px(-1.0), pfc8_py(-1.0), pfc8_pz(-1.0), pfc8_ifTrack(-1.0), pfc8_pType(-1.0), pfc9_energy(-1.0), pfc9_px(-1.0), pfc9_py(-1.0), pfc9_pz(-1.0), pfc9_ifTrack(-1.0), pfc9_pType(-1.0), pfc10_energy(-1.0), pfc10_px(-1.0), pfc10_py(-1.0), pfc10_pz(-1.0), pfc10_ifTrack(-1.0), pfc10_pType(-1.0), pfc11_energy(-1.0), pfc11_px(-1.0), pfc11_py(-1.0), pfc11_pz(-1.0), pfc11_ifTrack(-1.0), pfc11_pType(-1.0), pfc12_energy(-1.0), pfc12_px(-1.0), pfc12_py(-1.0), pfc12_pz(-1.0), pfc12_ifTrack(-1.0), pfc12_pType(-1.0), pfc13_energy(-1.0), pfc13_px(-1.0), pfc13_py(-1.0), pfc13_pz(-1.0), pfc13_ifTrack(-1.0), pfc13_pType(-1.0), pfc14_energy(-1.0), pfc14_px(-1.0), pfc14_py(-1.0), pfc14_pz(-1.0), pfc14_ifTrack(-1.0), pfc14_pType(-1.0), pfc15_energy(-1.0), pfc15_px(-1.0), pfc15_py(-1.0), pfc15_pz(-1.0), pfc15_ifTrack(-1.0), pfc15_pType(-1.0), pfc16_energy(-1.0), pfc16_px(-1.0), pfc16_py(-1.0), pfc16_pz(-1.0), pfc16_ifTrack(-1.0), pfc16_pType(-1.0), pfc17_energy(-1.0), pfc17_px(-1.0), pfc17_py(-1.0), pfc17_pz(-1.0), pfc17_ifTrack(-1.0), pfc17_pType(-1.0), pfc18_energy(-1.0), pfc18_px(-1.0), pfc18_py(-1.0), pfc18_pz(-1.0), pfc18_ifTrack(-1.0), pfc18_pType(-1.0), pfc19_energy(-1.0), pfc19_px(-1.0), pfc19_py(-1.0), pfc19_pz(-1.0), pfc19_ifTrack(-1.0), pfc19_pType(-1.0), pfc20_energy(-1.0), pfc20_px(-1.0), pfc20_py(-1.0), pfc20_pz(-1.0), pfc20_ifTrack(-1.0), pfc20_pType(-1.0), pfc21_energy(-1.0), pfc21_px(-1.0), pfc21_py(-1.0), pfc21_pz(-1.0), pfc21_ifTrack(-1.0), pfc21_pType(-1.0), pfc22_energy(-1.0), pfc22_px(-1.0), pfc22_py(-1.0), pfc22_pz(-1.0), pfc22_ifTrack(-1.0), pfc22_pType(-1.0), pfc23_energy(-1.0), pfc23_px(-1.0), pfc23_py(-1.0), pfc23_pz(-1.0), pfc23_ifTrack(-1.0), pfc23_pType(-1.0), pfc24_energy(-1.0), pfc24_px(-1.0), pfc24_py(-1.0), pfc24_pz(-1.0), pfc24_ifTrack(-1.0), pfc24_pType(-1.0), pfc25_energy(-1.0), pfc25_px(-1.0), pfc25_py(-1.0), pfc25_pz(-1.0), pfc25_ifTrack(-1.0), pfc25_pType(-1.0), pfc26_energy(-1.0), pfc26_px(-1.0), pfc26_py(-1.0), pfc26_pz(-1.0), pfc26_ifTrack(-1.0), pfc26_pType(-1.0), pfc27_energy(-1.0), pfc27_px(-1.0), pfc27_py(-1.0), pfc27_pz(-1.0), pfc27_ifTrack(-1.0), pfc27_pType(-1.0), pfc28_energy(-1.0), pfc28_px(-1.0), pfc28_py(-1.0), pfc28_pz(-1.0), pfc28_ifTrack(-1.0), pfc28_pType(-1.0), pfc29_energy(-1.0), pfc29_px(-1.0), pfc29_py(-1.0), pfc29_pz(-1.0), pfc29_ifTrack(-1.0), pfc29_pType(-1.0), pfc30_energy(-1.0), pfc30_px(-1.0), pfc30_py(-1.0), pfc30_pz(-1.0), pfc30_ifTrack(-1.0), pfc30_pType(-1.0), pfc31_energy(-1.0), pfc31_px(-1.0), pfc31_py(-1.0), pfc31_pz(-1.0), pfc31_ifTrack(-1.0), pfc31_pType(-1.0), pfc32_energy(-1.0), pfc32_px(-1.0), pfc32_py(-1.0), pfc32_pz(-1.0), pfc32_ifTrack(-1.0), pfc32_pType(-1.0), pfc33_energy(-1.0), pfc33_px(-1.0), pfc33_py(-1.0), pfc33_pz(-1.0), pfc33_ifTrack(-1.0), pfc33_pType(-1.0), pfc34_energy(-1.0), pfc34_px(-1.0), pfc34_py(-1.0), pfc34_pz(-1.0), pfc34_ifTrack(-1.0), pfc34_pType(-1.0), pfc35_energy(-1.0), pfc35_px(-1.0), pfc35_py(-1.0), pfc35_pz(-1.0), pfc35_ifTrack(-1.0), pfc35_pType(-1.0), pfc36_energy(-1.0), pfc36_px(-1.0), pfc36_py(-1.0), pfc36_pz(-1.0), pfc36_ifTrack(-1.0), pfc36_pType(-1.0), pfc37_energy(-1.0), pfc37_px(-1.0), pfc37_py(-1.0), pfc37_pz(-1.0), pfc37_ifTrack(-1.0), pfc37_pType(-1.0), pfc38_energy(-1.0), pfc38_px(-1.0), pfc38_py(-1.0), pfc38_pz(-1.0), pfc38_ifTrack(-1.0), pfc38_pType(-1.0), pfc39_energy(-1.0), pfc39_px(-1.0), pfc39_py(-1.0), pfc39_pz(-1.0), pfc39_ifTrack(-1.0), pfc39_pType(-1.0), pfc40_energy(-1.0), pfc40_px(-1.0), pfc40_py(-1.0), pfc40_pz(-1.0), pfc40_ifTrack(-1.0), pfc40_pType(-1.0)
{}
    float pfc1_energy;
    float pfc1_px;
    float pfc1_py;
    float pfc1_pz;
    int pfc1_ifTrack;
    int pfc1_pType;
    float pfc2_energy;
    float pfc2_px;
    float pfc2_py;
    float pfc2_pz;
    int pfc2_ifTrack;
    int pfc2_pType;
    float pfc3_energy;
    float pfc3_px;
    float pfc3_py;
    float pfc3_pz;
    int pfc3_ifTrack;
    int pfc3_pType;
    float pfc4_energy;
    float pfc4_px;
    float pfc4_py;
    float pfc4_pz;
    int pfc4_ifTrack;
    int pfc4_pType;
    float pfc5_energy;
    float pfc5_px;
    float pfc5_py;
    float pfc5_pz;
    int pfc5_ifTrack;
    int pfc5_pType;
    float pfc6_energy;
    float pfc6_px;
    float pfc6_py;
    float pfc6_pz;
    int pfc6_ifTrack;
    int pfc6_pType;
    float pfc7_energy;
    float pfc7_px;
    float pfc7_py;
    float pfc7_pz;
    int pfc7_ifTrack;
    int pfc7_pType;
    float pfc8_energy;
    float pfc8_px;
    float pfc8_py;
    float pfc8_pz;
    int pfc8_ifTrack;
    int pfc8_pType;
    float pfc9_energy;
    float pfc9_px;
    float pfc9_py;
    float pfc9_pz;
    int pfc9_ifTrack;
    int pfc9_pType;
    float pfc10_energy;
    float pfc10_px;
    float pfc10_py;
    float pfc10_pz;
    int pfc10_ifTrack;
    int pfc10_pType;
    float pfc11_energy;
    float pfc11_px;
    float pfc11_py;
    float pfc11_pz;
    int pfc11_ifTrack;
    int pfc11_pType;
    float pfc12_energy;
    float pfc12_px;
    float pfc12_py;
    float pfc12_pz;
    int pfc12_ifTrack;
    int pfc12_pType;
    float pfc13_energy;
    float pfc13_px;
    float pfc13_py;
    float pfc13_pz;
    int pfc13_ifTrack;
    int pfc13_pType;
    float pfc14_energy;
    float pfc14_px;
    float pfc14_py;
    float pfc14_pz;
    int pfc14_ifTrack;
    int pfc14_pType;
    float pfc15_energy;
    float pfc15_px;
    float pfc15_py;
    float pfc15_pz;
    int pfc15_ifTrack;
    int pfc15_pType;
    float pfc16_energy;
    float pfc16_px;
    float pfc16_py;
    float pfc16_pz;
    int pfc16_ifTrack;
    int pfc16_pType;
    float pfc17_energy;
    float pfc17_px;
    float pfc17_py;
    float pfc17_pz;
    int pfc17_ifTrack;
    int pfc17_pType;
    float pfc18_energy;
    float pfc18_px;
    float pfc18_py;
    float pfc18_pz;
    int pfc18_ifTrack;
    int pfc18_pType;
    float pfc19_energy;
    float pfc19_px;
    float pfc19_py;
    float pfc19_pz;
    int pfc19_ifTrack;
    int pfc19_pType;
    float pfc20_energy;
    float pfc20_px;
    float pfc20_py;
    float pfc20_pz;
    int pfc20_ifTrack;
    int pfc20_pType;
    float pfc21_energy;
    float pfc21_px;
    float pfc21_py;
    float pfc21_pz;
    int pfc21_ifTrack;
    int pfc21_pType;
    float pfc22_energy;
    float pfc22_px;
    float pfc22_py;
    float pfc22_pz;
    int pfc22_ifTrack;
    int pfc22_pType;
    float pfc23_energy;
    float pfc23_px;
    float pfc23_py;
    float pfc23_pz;
    int pfc23_ifTrack;
    int pfc23_pType;
    float pfc24_energy;
    float pfc24_px;
    float pfc24_py;
    float pfc24_pz;
    int pfc24_ifTrack;
    int pfc24_pType;
    float pfc25_energy;
    float pfc25_px;
    float pfc25_py;
    float pfc25_pz;
    int pfc25_ifTrack;
    int pfc25_pType;
    float pfc26_energy;
    float pfc26_px;
    float pfc26_py;
    float pfc26_pz;
    int pfc26_ifTrack;
    int pfc26_pType;
    float pfc27_energy;
    float pfc27_px;
    float pfc27_py;
    float pfc27_pz;
    int pfc27_ifTrack;
    int pfc27_pType;
    float pfc28_energy;
    float pfc28_px;
    float pfc28_py;
    float pfc28_pz;
    int pfc28_ifTrack;
    int pfc28_pType;
    float pfc29_energy;
    float pfc29_px;
    float pfc29_py;
    float pfc29_pz;
    int pfc29_ifTrack;
    int pfc29_pType;
    float pfc30_energy;
    float pfc30_px;
    float pfc30_py;
    float pfc30_pz;
    int pfc30_ifTrack;
    int pfc30_pType;
    float pfc31_energy;
    float pfc31_px;
    float pfc31_py;
    float pfc31_pz;
    int pfc31_ifTrack;
    int pfc31_pType;
    float pfc32_energy;
    float pfc32_px;
    float pfc32_py;
    float pfc32_pz;
    int pfc32_ifTrack;
    int pfc32_pType;
    float pfc33_energy;
    float pfc33_px;
    float pfc33_py;
    float pfc33_pz;
    int pfc33_ifTrack;
    int pfc33_pType;
    float pfc34_energy;
    float pfc34_px;
    float pfc34_py;
    float pfc34_pz;
    int pfc34_ifTrack;
    int pfc34_pType;
    float pfc35_energy;
    float pfc35_px;
    float pfc35_py;
    float pfc35_pz;
    int pfc35_ifTrack;
    int pfc35_pType;
    float pfc36_energy;
    float pfc36_px;
    float pfc36_py;
    float pfc36_pz;
    int pfc36_ifTrack;
    int pfc36_pType;
    float pfc37_energy;
    float pfc37_px;
    float pfc37_py;
    float pfc37_pz;
    int pfc37_ifTrack;
    int pfc37_pType;
    float pfc38_energy;
    float pfc38_px;
    float pfc38_py;
    float pfc38_pz;
    int pfc38_ifTrack;
    int pfc38_pType;
    float pfc39_energy;
    float pfc39_px;
    float pfc39_py;
    float pfc39_pz;
    int pfc39_ifTrack;
    int pfc39_pType;
    float pfc40_energy;
    float pfc40_px;
    float pfc40_py;
    float pfc40_pz;
    int pfc40_ifTrack;
    int pfc40_pType;

};






/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/







/*
struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};
*/












struct JetTypeSmall {
JetTypeSmall():
J1pt(-1.0), J1eta(-1.0), J1phi(-1.0), J1mass(-1.0), J1energy(-1.0), J1cHadE(-1.0), J1nHadE(-1.0), J1cHadEFrac(-1.0), J1nHadEFrac(-1.0), J1nEmE(-1.0), J1nEmEFrac(-1.0), J1cEmE(-1.0), J1cEmEFrac(-1.0), J1cmuE(-1.0), J1cmuEFrac(-1.0), J1muE(-1.0), J1muEFrac(-1.0), J1eleE(-1.0), J1eleEFrac(-1.0), J1eleMulti(-1.0), J1photonE(-1.0), J1photonEFrac(-1.0), J1photonMulti(-1.0), J1cHadMulti(-1.0), J1nHadMulti(-1.0), J1npr(-1.0), J1cMulti(-1.0), J1nMulti(-1.0), J1ecalE(-1.0), J1nSelectedTracks(-1.0), J1DisplacedJetsTriggerBool(-1.0)
{}
    float J1pt;
    float J1eta;
    float J1phi;
    float J1mass;
    float J1energy;
    float J1cHadE;
    float J1nHadE;
    float J1cHadEFrac;
    float J1nHadEFrac;
    float J1nEmE;
    float J1nEmEFrac;
    float J1cEmE;
    float J1cEmEFrac;
    float J1cmuE;
    float J1cmuEFrac;
    float J1muE;
    float J1muEFrac;
    float J1eleE;
    float J1eleEFrac;
    float J1eleMulti;
    float J1photonE;
    float J1photonEFrac;
    float J1photonMulti;
    float J1cHadMulti;
    float J1nHadMulti;
    float J1npr;
    float J1cMulti;
    float J1nMulti;
    float J1ecalE;
    float J1nSelectedTracks;
    float J1DisplacedJetsTriggerBool;

};


#endif
