
#include "header.h"

void predict_unit1(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
        if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[9] += -0.02966068804579911;
        } else {
          result[9] += 0.026522706222436885;
        }
      } else {
        result[9] += -0.034589162254082956;
      }
    } else {
      if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6296020218641035227) ) ) {
        result[9] += 0.04119626812513807;
      } else {
        if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03902843794759941476) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7368513205754015916) ) ) {
            result[9] += 0.03885744693860619;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411362640307710192) ) ) {
              result[9] += -0.03600494138145478;
            } else {
              result[9] += 0.03529528957929611;
            }
          }
        } else {
          result[9] += 0.0021078405222295198;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
      result[9] += -0.034430241451217744;
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
        result[9] += -0.02985239199652617;
      } else {
        result[9] += 0.0018362260559016059;
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.034156489531330714;
  } else {
    result[10] += 0.04035834959389215;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.194912770072289715) ) ) {
    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6185896019737596729) ) ) {
      if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.06473774517825992003) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
            result[11] += 0.05780504326963386;
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7418876561688098059) ) ) {
              result[11] += -0.032424960228938426;
            } else {
              result[11] += 0.042133090629528816;
            }
          }
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.93562890551316702) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1593949673457252525) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.139622873720994134) ) ) {
                result[11] += -0.02728055583291295;
              } else {
                result[11] += 0.003292690860380709;
              }
            } else {
              result[11] += -0.033280108745914756;
            }
          } else {
            if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6192526319218957243) ) ) {
              result[11] += -0.019451020615292577;
            } else {
              result[11] += 0.042822556170850914;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3629355586676100143) ) ) {
          if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9264415235145915251) ) ) {
            result[11] += 0.022321507511300343;
          } else {
            result[11] += -0.03762568397587139;
          }
        } else {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5974655350808305565) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2775662647113844028) ) ) {
              result[11] += 0.03423065478645696;
            } else {
              result[11] += 0.002560043896514772;
            }
          } else {
            result[11] += 0.039071396493179485;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01054671255394320183) ) ) {
        result[11] += -0.033685462063710314;
      } else {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.257223684349944914) ) ) {
          if ( LIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.3643693716660164061) ) ) {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.039282253531597311) ) ) {
              result[11] += 0.03008402574403855;
            } else {
              result[11] += 0.04233740312406516;
            }
          } else {
            if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.3512936270769217439) ) ) {
              result[11] += 0.043326849942658056;
            } else {
              result[11] += -0.014948553344522171;
            }
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.537344772829359663) ) ) {
            if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
              result[11] += 0.07287196920768232;
            } else {
              result[11] += -0.03635072667959976;
            }
          } else {
            result[11] += 0.09498536681957483;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7017175228607138715) ) ) {
        result[11] += -0.016533690498043808;
      } else {
        result[11] += 0.05979479255435692;
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7272797406239109863) ) ) {
        result[11] += -0.03459680159963102;
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.2449278414648347335) ) ) {
          result[11] += -0.025490305094586555;
        } else {
          result[11] += 0.07709296730991162;
        }
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02538312690524727536) ) ) {
    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.869093511418218001) ) ) {
      result[12] += 0.005016799097171467;
    } else {
      result[12] += -0.03445149974764865;
    }
  } else {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2799341577276758808) ) ) {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7484337002522992721) ) ) {
          result[12] += -0.025866214782699577;
        } else {
          if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.208350164429066953) ) ) {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9967767353672805086) ) ) {
              result[12] += 0.08156387374230815;
            } else {
              result[12] += 0.041937700648456915;
            }
          } else {
            result[12] += -0.01346001974051334;
          }
        }
      } else {
        result[12] += 0.08807501287486996;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
        result[12] += -0.03460445392289044;
      } else {
        result[12] += 0.06138678768428399;
      }
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
        result[0] += 0.005176542035949889;
      } else {
        if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.08608509380067926042) ) ) {
            if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[0] += 0.04218426869360898;
            } else {
              result[0] += 0.030615391950294453;
            }
          } else {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5153029798640530457) ) ) {
              result[0] += -0.03797155297602216;
            } else {
              result[0] += 0.02885803799586413;
            }
          }
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4527983839913916064) ) ) {
            result[0] += -0.03066395497535512;
          } else {
            result[0] += 0.043175869012893775;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7994110553344907499) ) ) {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.010926839157595403) ) ) {
          if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.7271006213270146956) ) ) {
            result[0] += -0.002925842812376607;
          } else {
            result[0] += -0.033449232977096975;
          }
        } else {
          if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2693218125178203359) ) ) {
            result[0] += 0.03818563462879088;
          } else {
            result[0] += -0.034583795092566275;
          }
        }
      } else {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3139199429380991613) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3399707811849296824) ) ) {
            result[0] += -0.03648999423317319;
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
              result[0] += 0.05955680460616555;
            } else {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5333210012402501699) ) ) {
                result[0] += -0.022904504504044514;
              } else {
                result[0] += 0.02719573253690201;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01915940202172580417) ) ) {
            result[0] += 0.04302572990336739;
          } else {
            if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042048402824836684) ) ) {
              result[0] += 0.033400791367130214;
            } else {
              result[0] += 0.004286870833546291;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.277331842728165245) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)2.121444108164863618) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
            result[0] += -0.029513517275930934;
          } else {
            result[0] += 0.009220102062135504;
          }
        } else {
          result[0] += 0.0375566113506672;
        }
      } else {
        result[0] += 0.04206842900797928;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.03466756432182435;
        } else {
          result[0] += 0.04538511706096123;
        }
      } else {
        result[0] += 0.025499136627235703;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.733546608010884116) ) ) {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.04735701826914988366) ) ) {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5423557276411776762) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
            if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[1] += 0.016742826987507557;
            } else {
              result[1] += -0.03741123034643121;
            }
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.749887871896559477) ) ) {
              result[1] += 0.011282217561526295;
            } else {
              result[1] += -0.047379129061804894;
            }
          }
        } else {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2855774686981291111) ) ) {
            result[1] += -0.03662158541927589;
          } else {
            if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
              result[1] += 0.029030167163878063;
            } else {
              result[1] += -0.035995554044930725;
            }
          }
        }
      } else {
        result[1] += 0.0073507881119426795;
      }
    } else {
      result[1] += 0.03188215701863617;
    }
  } else {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
        if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041841056122270182) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
            result[1] += 0.00593052010808956;
          } else {
            result[1] += -0.02655177821664472;
          }
        } else {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6033696181219915244) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.897003262226470532) ) ) {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8656051182175807934) ) ) {
                result[1] += 0.03712263950235594;
              } else {
                if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01248308389168564965) ) ) {
                  result[1] += 0.037059221614533844;
                } else {
                  result[1] += 0.012063392199963647;
                }
              }
            } else {
              result[1] += -0.0006047078563056622;
            }
          } else {
            result[1] += -0.0020464169311689333;
          }
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
          result[1] += 0.037969469203909666;
        } else {
          result[1] += -0.03730893009295663;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( UNLIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4093825433613223486) ) ) {
          if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03805266796778856292) ) ) {
            result[1] += 0.035593985747084715;
          } else {
            if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03773626360451736578) ) ) {
              result[1] += 0.029724093519588067;
            } else {
              result[1] += -0.030769874475674808;
            }
          }
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.257223684349944914) ) ) {
            result[1] += 0.03775074877036327;
          } else {
            if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201134039364062378) ) ) {
              result[1] += -0.03648115147469355;
            } else {
              result[1] += 0.03826218712483059;
            }
          }
        }
      } else {
        result[1] += -0.03807777379630994;
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3158528583805096379) ) ) {
      result[2] += 0.01008346781493414;
    } else {
      result[2] += -0.034069443093630344;
    }
  } else {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6079901100215304721) ) ) {
      result[2] += 0.04349542877239542;
    } else {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.4756251154450461538) ) ) {
        result[2] += 0.02020226698805484;
      } else {
        result[2] += -0.034861831733576355;
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924328727704508302) ) ) {
      result[3] += 0.03752400983483503;
    } else {
      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.20695775318755727) ) ) {
        result[3] += -0.0370662029205376;
      } else {
        result[3] += 0.037236406744330576;
      }
    }
  } else {
    result[3] += -0.03712560615179492;
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.034255603753201275;
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.213331734000125728) ) ) {
      result[4] += 0.04201987717137616;
    } else {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.9579237736125010283) ) ) {
        result[4] += 0.04192097050518699;
      } else {
        result[4] += -0.03128191339248894;
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
    result[5] += 0.11438011066274409;
  } else {
    if ( UNLIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.4688954308400637983) ) ) {
      result[5] += 0.02839127757111074;
    } else {
      result[5] += -0.034446434904474334;
    }
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    result[6] += 0.1000173056029283;
  } else {
    result[6] += -0.023947345265807975;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5781007682388933366) ) ) {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4819992438703088466) ) ) {
          result[7] += 0.025665203157466152;
        } else {
          result[7] += 0.04098525276864335;
        }
      } else {
        result[7] += -0.03465851488437651;
      }
    } else {
      result[7] += -0.036659907474895;
    }
  } else {
    result[7] += -0.03449644353361713;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      result[8] += -0.03489377255495236;
    } else {
      if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619621763013154303) ) ) {
        result[8] += -0.041293542173083266;
      } else {
        result[8] += 0.04879695099764084;
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
      result[8] += -0.02781719526953399;
    } else {
      result[8] += 0.03774046175772782;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
        if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[9] += -0.02888605909481618;
        } else {
          result[9] += 0.025146223368135677;
        }
      } else {
        result[9] += -0.03458515177141196;
      }
    } else {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3157059568068864563) ) ) {
        result[9] += 0.04056651924464152;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          result[9] += 1.888915655223305e-05;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7368513205754015916) ) ) {
            result[9] += 0.06792700907578217;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411362640307710192) ) ) {
              result[9] += -0.03591209178283689;
            } else {
              result[9] += 0.03285484395301399;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[9] += -0.02276679303762423;
    } else {
      result[9] += -0.03440471971948378;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03412957959584034;
  } else {
    result[10] += 0.039923610497758784;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.06473774517825992003) ) ) {
        if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3981834904997182956) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
            result[11] += 0.02306003236900522;
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4023546935947491243) ) ) {
              if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02427139961301502322) ) ) {
                result[11] += -0.031626696010357225;
              } else {
                result[11] += 0.008899663874131877;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7234889581658809909) ) ) {
                result[11] += -0.009605364810131451;
              } else {
                result[11] += 0.07039834654025212;
              }
            }
          }
        } else {
          result[11] += -0.031863435628389315;
        }
      } else {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6343024246918286257) ) ) {
          result[11] += 0.04154345658015133;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7017175228607138715) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3872412351194103874) ) ) {
              result[11] += -0.03376607598451252;
            } else {
              result[11] += 0.008417283740263362;
            }
          } else {
            result[11] += 0.02647891301985391;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01584384199744926294) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)0.4510774498425162982) ) ) {
          result[11] += -0.03456371734806454;
        } else {
          if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.05689015403713557073) ) ) {
            result[11] += -0.034757928891212785;
          } else {
            result[11] += 0.005588509809867316;
          }
        }
      } else {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01053913909385393623) ) ) {
          result[11] += 0.0068089476930975855;
        } else {
          result[11] += 0.036864659482971546;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2939107877510283573) ) ) {
        if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02538034410944110461) ) ) {
            result[11] += 0.019708415173993896;
          } else {
            result[11] += 0.04228476130544551;
          }
        } else {
          if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2485495740146867194) ) ) {
            result[11] += -0.028627669811174622;
          } else {
            result[11] += 0.053826713677628174;
          }
        }
      } else {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.1473913343193578307) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-1.00000001800250948e-35) ) ) {
            result[11] += -0.03820709727320465;
          } else {
            result[11] += -0.005563489628268436;
          }
        } else {
          result[11] += 0.03596644886245912;
        }
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)2.213916117142014972) ) ) {
        result[11] += -0.03404225647018709;
      } else {
        result[11] += 0.04891219049402387;
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02539425809138995752) ) ) {
    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
      result[12] += 0.006481862081680134;
    } else {
      result[12] += -0.03445189784385087;
    }
  } else {
    if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.2604915822708271933) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7418876561688098059) ) ) {
        if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6518059545354392137) ) ) {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01248308389168564965) ) ) {
            result[12] += -0.03452028664910606;
          } else {
            result[12] += 0.022935898679383157;
          }
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2962559652867430837) ) ) {
            result[12] += 0.06819024082388558;
          } else {
            result[12] += 0.007335409258226486;
          }
        }
      } else {
        result[12] += 0.07380203608660048;
      }
    } else {
      result[12] += -0.034534990699563846;
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.09914509999619726399) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
          result[0] += 0.0047766000700254704;
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9606217943037372864) ) ) {
            result[0] += 0.027162730613044257;
          } else {
            result[0] += 0.04101741613314085;
          }
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[0] += -0.034673664011729034;
        } else {
          result[0] += 0.03821960301698125;
        }
      }
    } else {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3265998338303161552) ) ) {
        if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.5847349523888909495) ) ) {
          if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.3113132420658634714) ) ) {
            result[0] += 0.00981215472098568;
          } else {
            result[0] += -0.03243402483938226;
          }
        } else {
          result[0] += 0.003730592030599823;
        }
      } else {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3139199429380991613) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
            result[0] += 0.028696241204309695;
          } else {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631546034338769158) ) ) {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201661622674484731) ) ) {
                result[0] += 0.038835800842561496;
              } else {
                if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.699576161167488664) ) ) {
                  result[0] += -0.03245334213869867;
                } else {
                  result[0] += -0.00854147325186059;
                }
              }
            } else {
              result[0] += 0.0370005710713001;
            }
          }
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01915940202172580417) ) ) {
            result[0] += 0.042150452820774835;
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1143841639192145349) ) ) {
              result[0] += 0.007627805213353194;
            } else {
              result[0] += 0.03231796762492011;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (double)1.674270665142577164) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1593908345313046204) ) ) {
          if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8886305496684244742) ) ) {
              result[0] += -0.03020902997221935;
            } else {
              result[0] += 0.04908479052485047;
            }
          } else {
            result[0] += -0.03451136412919363;
          }
        } else {
          result[0] += 0.04316420035666532;
        }
      } else {
        result[0] += 0.025508396651074808;
      }
    } else {
      result[0] += 0.03074257507887197;
    }
  }
  if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4551668771987075757) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2498566734864380301) ) ) {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02533581936195240455) ) ) {
        if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[1] += 0.0010178569103626042;
          } else {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08044689421173033261) ) ) {
              result[1] += -0.013246640635870385;
            } else {
              result[1] += -0.037263035101612864;
            }
          }
        } else {
          result[1] += -0.03648676231930004;
        }
      } else {
        result[1] += -0.0019166969414934952;
      }
    } else {
      if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[1] += 0.035522528987435124;
      } else {
        result[1] += -0.03567058890151726;
      }
    }
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.0158836633899224304) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.503624443610515504) ) ) {
        if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2663076365846892002) ) ) {
              if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619536435150199849) ) ) {
                if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03919200317927835214) ) ) {
                  result[1] += 0.03717497482216988;
                } else {
                  result[1] += 0.02434891462159722;
                }
              } else {
                result[1] += -0.005845134546497745;
              }
            } else {
              if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1666620795644256636) ) ) {
                result[1] += 0.008325785798618791;
              } else {
                result[1] += -0.026135538328857625;
              }
            }
          } else {
            result[1] += 0.03727514251695345;
          }
        } else {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5333210012402501699) ) ) {
            result[1] += 0.008740260188495816;
          } else {
            result[1] += -0.037050062197447026;
          }
        }
      } else {
        if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[1] += 0.038166205323758556;
        } else {
          result[1] += -0.03767720687663873;
        }
      }
    } else {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
          if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1328657693896962144) ) ) {
            result[1] += -0.037324111083939994;
          } else {
            result[1] += -0.019450463179562984;
          }
        } else {
          if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.03219895837231415148) ) ) {
            result[1] += 0.03807620336963535;
          } else {
            result[1] += -0.008562899270565577;
          }
        }
      } else {
        if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2378864287153658053) ) ) {
          result[1] += 0.0373080379169948;
        } else {
          result[1] += 0.003391293919560196;
        }
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01393539685984533302) ) ) {
      result[2] += -0.034040605892692415;
    } else {
      result[2] += 0.010973952190637373;
    }
  } else {
    if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4956038977333974138) ) ) {
      result[2] += 0.04328626781420253;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02545617531996219318) ) ) {
          result[2] += -0.007410334496032441;
        } else {
          if ( UNLIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.1692078146761216983) ) ) {
            result[2] += 0.08232795655834992;
          } else {
            result[2] += 0.0052192992250025575;
          }
        }
      } else {
        result[2] += -0.04185617096817606;
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.134751208514760662) ) ) {
      result[3] += 0.03729812780916732;
    } else {
      if ( UNLIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1437679655151052061) ) ) {
        result[3] += 0.004091890929044512;
      } else {
        result[3] += -0.03681462007518866;
      }
    }
  } else {
    result[3] += -0.03694980468079599;
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03422703702215648;
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.213331734000125728) ) ) {
      result[4] += 0.041446543748163214;
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.174084950296738983) ) ) {
        result[4] += 0.04019352261166496;
      } else {
        result[4] += -0.03098653405929784;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      result[5] += 0.01978571789046447;
    } else {
      result[5] += -0.03443512468780709;
    }
  } else {
    result[5] += 0.10603216011789178;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701102284419148958) ) ) {
    result[6] += 0.0925065418042229;
  } else {
    result[6] += -0.03446066099613066;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
          result[7] += 0.025324182278972252;
        } else {
          result[7] += 0.04050600486619406;
        }
      } else {
        result[7] += -0.03465003084421131;
      }
    } else {
      result[7] += -0.03652344287265432;
    }
  } else {
    result[7] += -0.034492482874610805;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      result[8] += -0.034874519805867775;
    } else {
      if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619621763013154303) ) ) {
        result[8] += -0.040992661439589594;
      } else {
        result[8] += 0.04871445808742432;
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
      result[8] += -0.027450162835293418;
    } else {
      result[8] += 0.03749897907958788;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
          result[9] += 0.04009769011354986;
        } else {
          result[9] += 0.01703142615919784;
        }
      } else {
        result[9] += -0.007950470639595707;
      }
    } else {
      result[9] += -0.029835514318887892;
    }
  } else {
    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.776827447740879196) ) ) {
      result[9] += -0.03439333821877603;
    } else {
      result[9] += -0.018285012832942954;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03410147383216845;
  } else {
    result[10] += 0.03952674533891559;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
      if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2666776560549505293) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.011152600131588997) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4573588634800199171) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
              result[11] += 0.026122789648982098;
            } else {
              if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8078418734481481733) ) ) {
                result[11] += -0.03149020335800174;
              } else {
                result[11] += -0.005958125049398231;
              }
            }
          } else {
            result[11] += 0.035644412146433824;
          }
        } else {
          result[11] += -0.03308764921951556;
        }
      } else {
        if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6509262132295375869) ) ) {
          result[11] += 0.03883954819031451;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7017175228607138715) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.301595403641146953) ) ) {
              result[11] += -0.03320051736387996;
            } else {
              result[11] += 0.005467615980381967;
            }
          } else {
            result[11] += 0.02537039004042677;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[11] += -0.03455276578455257;
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02548539468759894108) ) ) {
            result[11] += -0.03194978271937388;
          } else {
            result[11] += 0.032470049180674386;
          }
        }
      } else {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1840650792073671993) ) ) {
          result[11] += -0.034943242314671843;
        } else {
          result[11] += 0.041335018685310344;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2939107877510283573) ) ) {
        if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.006160365287778564979) ) ) {
            result[11] += 0.04151408500144686;
          } else {
            result[11] += 0.01306597862932367;
          }
        } else {
          if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2485495740146867194) ) ) {
            result[11] += -0.028019802353209826;
          } else {
            result[11] += 0.05077658466712795;
          }
        }
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.612309128331080865) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7017175228607138715) ) ) {
            result[11] += -0.03283595522428537;
          } else {
            result[11] += 0.004718170648381253;
          }
        } else {
          result[11] += 0.03489593010284681;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.537344772829359663) ) ) {
        result[11] += -0.033979845907285824;
      } else {
        result[11] += 0.05049040841502781;
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02539425809138995752) ) ) {
    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
      result[12] += 0.007171135124425367;
    } else {
      result[12] += -0.03445082242350059;
    }
  } else {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.06169476235787722807) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7797011598290618517) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.0103932035467692533) ) ) {
          result[12] += -0.03452044115100394;
        } else {
          result[12] += 0.027892002189941388;
        }
      } else {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4410114951078237255) ) ) {
          if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4474884708678781853) ) ) {
            result[12] += 0.09933746911369819;
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02521685480184570824) ) ) {
              result[12] += 0.120481921687337;
            } else {
              result[12] += 0.04975288840613427;
            }
          }
        } else {
          if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.06750591696110694317) ) ) {
            result[12] += 0.04435521920985406;
          } else {
            result[12] += -0.03501782443771883;
          }
        }
      }
    } else {
      result[12] += -0.0265340339650174;
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.422170698187460003) ) ) {
      if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01053416224832828298) ) ) {
        if ( LIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2903175272918419592) ) ) {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924219109533950978) ) ) {
            result[0] += 0.03600888930394137;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3534483363738425976) ) ) {
              result[0] += -0.03689017858285561;
            } else {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3265998338303161552) ) ) {
                result[0] += -0.026597326374557022;
              } else {
                if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2089446438704954667) ) ) {
                  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
                    result[0] += 0.05599929241328734;
                  } else {
                    if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
                      result[0] += -0.021743946003028487;
                    } else {
                      result[0] += 0.01267271648298687;
                    }
                  }
                } else {
                  result[0] += 0.038396357938883525;
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.07128092195383493868) ) ) {
            result[0] += 0.03962548091666524;
          } else {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5153029798640530457) ) ) {
              result[0] += -0.037518304020192954;
            } else {
              result[0] += 0.03607718253435254;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
          if ( LIKELY( !(data[48].missing != -1) || (data[48].fvalue <= (double)0.7443775048750654877) ) ) {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (double)0.291700766097643116) ) ) {
              if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2903175272918419592) ) ) {
                result[0] += -0.016581969447652844;
              } else {
                result[0] += -0.03432398540407192;
              }
            } else {
              result[0] += 0.05878015032391337;
            }
          } else {
            result[0] += 0.025303157598600735;
          }
        } else {
          result[0] += 0.02748122553061869;
        }
      }
    } else {
      result[0] += -0.03451596040334364;
    }
  } else {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
        if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.03442305509608499;
        } else {
          result[0] += 0.04361622241276779;
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6202093014700189588) ) ) {
          result[0] += 0.034116343173468434;
        } else {
          result[0] += 0.005086304171760077;
        }
      }
    } else {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
        result[0] += -0.03767324163979789;
      } else {
        result[0] += 0.042295930174196646;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.733546608010884116) ) ) {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3141982827618062246) ) ) {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.757072353270465959) ) ) {
            result[1] += 0.016142492148278325;
          } else {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2855774686981291111) ) ) {
              result[1] += -0.03441599946242921;
            } else {
              if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
                result[1] += 0.02694796332303037;
              } else {
                result[1] += -0.035822143281461286;
              }
            }
          }
        } else {
          result[1] += -0.03634302696854505;
        }
      } else {
        if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5342782489663034928) ) ) {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201618691574436459) ) ) {
            result[1] += -0.009942884927718755;
          } else {
            result[1] += 0.033765032180375215;
          }
        } else {
          result[1] += -0.04016030350044557;
        }
      }
    } else {
      result[1] += 0.031142458785112834;
    }
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01582966828177212806) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288170262485434092) ) ) {
            if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[1] += -0.043408079679101305;
            } else {
              if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.166152464118998755) ) ) {
                if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
                  result[1] += -0.0035695116652277796;
                } else {
                  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8425672530836286755) ) ) {
                    result[1] += 0.03793228009557976;
                  } else {
                    if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041251505697383672) ) ) {
                      result[1] += -0.008311278041005727;
                    } else {
                      if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1283369947460293592) ) ) {
                        result[1] += 0.012949422342466708;
                      } else {
                        result[1] += 0.036538746763231544;
                      }
                    }
                  }
                }
              } else {
                result[1] += -0.016819187546296382;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03918625218521687437) ) ) {
              result[1] += -0.01564015191000898;
            } else {
              result[1] += -0.03821626407170064;
            }
          }
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.095048325145008938) ) ) {
            result[1] += 0.03732027338882484;
          } else {
            result[1] += 0.02833222951977551;
          }
        }
      } else {
        result[1] += -0.03752360438216074;
      }
    } else {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
          result[1] += -0.03714320833377689;
        } else {
          result[1] += 0.011829508147952965;
        }
      } else {
        if ( LIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1303095411824979899) ) ) {
          result[1] += 0.03716539922649248;
        } else {
          result[1] += 0.01283859687969592;
        }
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.03394375947837606;
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1301196871218200934) ) ) {
      if ( UNLIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1446213650877447299) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          result[2] += 0.04654587912189857;
        } else {
          result[2] += -0.04180312848971775;
        }
      } else {
        if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.5778375638163874006) ) ) {
          if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.3645491530325016272) ) ) {
            result[2] += -0.03512148944355558;
          } else {
            result[2] += 0.0435146935889376;
          }
        } else {
          result[2] += 0.07597800903787866;
        }
      }
    } else {
      result[2] += -0.03489313346002411;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.036762030097996855;
  } else {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924334254671090622) ) ) {
      result[3] += 0.03694774179856198;
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02547635059685190648) ) ) {
        result[3] += 0.037146499991783;
      } else {
        result[3] += 0.016507363619604667;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += -0.019532168099786067;
    } else {
      result[4] += -0.03447964760347162;
    }
  } else {
    result[4] += 0.040914347916478154;
  }
  if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.446200516777080558) ) ) {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
      result[5] += 0.020196849801420676;
    } else {
      result[5] += -0.03444676186884061;
    }
  } else {
    result[5] += 0.10693849041671567;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
    result[6] += 0.12001332673649906;
  } else {
    result[6] += -0.024305558027524682;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
        if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5856146960851894567) ) ) {
          result[7] += -0.03462903669782447;
        } else {
          result[7] += 0.03490115679844503;
        }
      } else {
        result[7] += 0.036751450251161326;
      }
    } else {
      result[7] += -0.03636861917498427;
    }
  } else {
    result[7] += -0.034488747497512795;
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
    result[8] += -0.033795287377079146;
  } else {
    result[8] += 0.022339530496259828;
  }
  if ( UNLIKELY(  (data[15].missing != -1) && (data[15].fvalue <= (double)-2.054472537641003349) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[9] += 0.019439867424966718;
        } else {
          result[9] += 0.04002584427196868;
        }
      } else {
        result[9] += -0.007305026978330344;
      }
    } else {
      result[9] += -0.029687687711680674;
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
      result[9] += -0.03438277310490615;
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
        result[9] += -0.029037771073406812;
      } else {
        result[9] += 0.005514935345449567;
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03407161016286139;
  } else {
    result[10] += 0.03916014674819658;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2285326955924526227) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.20695775318755727) ) ) {
              result[11] += 0.05879136896570158;
            } else {
              result[11] += -0.03683630411597278;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.128406986927365407) ) ) {
              result[11] += 0.05733238400438859;
            } else {
              result[11] += 0.034954639656247864;
            }
          }
        } else {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.612309128331080865) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
              result[11] += -0.034680671160761754;
            } else {
              result[11] += 0.032371333999475255;
            }
          } else {
            result[11] += 0.0037274302829386962;
          }
        }
      } else {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3562482570732720677) ) ) {
          if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200952911455935856) ) ) {
            result[11] += -0.024679533081363583;
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
              result[11] += 0.05118133285688144;
            } else {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958436495131647692) ) ) {
                  result[11] += -0.03200129079685146;
                } else {
                  result[11] += 0.01967680619739927;
                }
              } else {
                result[11] += 0.019110538579297506;
              }
            }
          }
        } else {
          result[11] += 0.04765827079910219;
        }
      }
    } else {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[11] += -0.03452923644168234;
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02548539468759894108) ) ) {
            result[11] += -0.031820709063836036;
          } else {
            result[11] += 0.029702886570454987;
          }
        }
      } else {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1840650792073671993) ) ) {
          result[11] += -0.034931279350331614;
        } else {
          result[11] += 0.040665274121490944;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2939107877510283573) ) ) {
        if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.006160365287778564979) ) ) {
            result[11] += 0.04091096536473527;
          } else {
            result[11] += 0.01229862096270852;
          }
        } else {
          if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.554464413527477662) ) ) {
            result[11] += 0.03559672439425855;
          } else {
            result[11] += -0.036426831761489024;
          }
        }
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.612309128331080865) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-1.00000001800250948e-35) ) ) {
            result[11] += -0.038031532345429005;
          } else {
            result[11] += -0.0048245258851470785;
          }
        } else {
          result[11] += 0.03283916740273558;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.537344772829359663) ) ) {
        result[11] += -0.03390173037711598;
      } else {
        result[11] += 0.04783731740051152;
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02538312690524727536) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6296020218641035227) ) ) {
      result[12] += 0.003235198307360238;
    } else {
      result[12] += -0.03444748944408274;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)0.6187917260814692622) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9606217943037372864) ) ) {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03897754151213717738) ) ) {
            result[12] += 0.07145318934982607;
          } else {
            result[12] += 0.005958213773092213;
          }
        } else {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6201100706222509862) ) ) {
            result[12] += 0.04878174475697569;
          } else {
            result[12] += -0.03454493058212061;
          }
        }
      } else {
        result[12] += 0.06897247720058858;
      }
    } else {
      result[12] += -0.03455482702777226;
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3471045991716332213) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)2.81764075380878376) ) ) {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8125319923846624492) ) ) {
            result[0] += 0.0007664852428629663;
          } else {
            result[0] += -0.03662473224285279;
          }
        } else {
          result[0] += 0.04289710503385812;
        }
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9489469959038566715) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201873664119398333) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4553892674670077523) ) ) {
              result[0] += 0.012617978481143459;
            } else {
              result[0] += 0.03963998529884158;
            }
          } else {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
              result[0] += -0.033184452781135805;
            } else {
              result[0] += 0.01799796480285797;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.21812675287692751) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.331999447987429308) ) ) {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.07972073567814264) ) ) {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906447706809286435) ) ) {
                  result[0] += 0.041008060637759594;
                } else {
                  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.760940684083004304) ) ) {
                    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7797011598290618517) ) ) {
                      result[0] += -0.02622833019209751;
                    } else {
                      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7671941759983568199) ) ) {
                        result[0] += 0.04246696835232148;
                      } else {
                        if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03884672132219828961) ) ) {
                          result[0] += -0.00761877777166972;
                        } else {
                          result[0] += 0.03175872348820161;
                        }
                      }
                    }
                  } else {
                    if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041841056122270182) ) ) {
                      result[0] += 0.040759401591098775;
                    } else {
                      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6025238385607971647) ) ) {
                        result[0] += 0.021745069104492403;
                      } else {
                        result[0] += 0.03871190732486674;
                      }
                    }
                  }
                }
              } else {
                result[0] += 0.0434608854462995;
              }
            } else {
              result[0] += 0.02325892446896303;
            }
          } else {
            if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4534301326511110952) ) ) {
              result[0] += 0.03157917100931751;
            } else {
              result[0] += -0.0036814479650457907;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01612124187031319447) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[0] += 0.006753581330653159;
        } else {
          result[0] += 0.041619500833928354;
        }
      } else {
        if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5113894899662191351) ) ) {
          result[0] += 0.0341761871333919;
        } else {
          if ( LIKELY( !(data[70].missing != -1) || (data[70].fvalue <= (double)0.1250591196958120987) ) ) {
            if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)1.637971784368035477) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1703565562832065894) ) ) {
                result[0] += -0.07740085098495986;
              } else {
                result[0] += -0.033806740853002296;
              }
            } else {
              if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1183608389828269686) ) ) {
                result[0] += 0.03170258107735378;
              } else {
                if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.2646697098099003997) ) ) {
                  result[0] += 0.01443321451600815;
                } else {
                  result[0] += -0.029461365053317905;
                }
              }
            }
          } else {
            result[0] += 0.023193383182601758;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6123728509228160144) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1560695414882870835) ) ) {
            result[0] += -0.012033233607715825;
          } else {
            result[0] += -0.036875038631148875;
          }
        } else {
          result[0] += 0.02980857219517747;
        }
      } else {
        result[0] += 0.03625190169243358;
      }
    } else {
      if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)0.4791935386714787914) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
          result[0] += -0.034438044782745;
        } else {
          result[0] += 0.02275127857806234;
        }
      } else {
        result[0] += 0.03378858709453105;
      }
    }
  }
  if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1683872649800012555) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.733546608010884116) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6233638619452491758) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01842404798629282067) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5971525348704809222) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.757072353270465959) ) ) {
              result[1] += 0.015511979728065006;
            } else {
              if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5737185163116343967) ) ) {
                result[1] += -0.03467803774555671;
              } else {
                if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
                  result[1] += 0.03793503842227344;
                } else {
                  result[1] += -0.036124351712226055;
                }
              }
            }
          } else {
            result[1] += -0.036261639012963615;
          }
        } else {
          result[1] += 0.005301201093196209;
        }
      } else {
        result[1] += 0.015769974699183006;
      }
    } else {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1264672285826365372) ) ) {
        result[1] += 0.036943289650465595;
      } else {
        result[1] += 0.0039563337688072655;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.095048325145008938) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201873664119398333) ) ) {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.02165992665977984136) ) ) {
              result[1] += 0.03588636462129703;
            } else {
              result[1] += 0.016426049037819766;
            }
          } else {
            result[1] += 0.03716607063756345;
          }
        } else {
          if ( UNLIKELY( !(data[41].missing != -1) || (data[41].fvalue <= (double)1.540986647423535416) ) ) {
            result[1] += -0.03950050861404103;
          } else {
            result[1] += 0.037582213365716086;
          }
        }
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
            result[1] += -0.019121370780766412;
          } else {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3136338714526223925) ) ) {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8425672530836286755) ) ) {
                result[1] += 0.03781409283566046;
              } else {
                if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041351576500771925) ) ) {
                  result[1] += -0.012536809455180278;
                } else {
                  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6033696181219915244) ) ) {
                    result[1] += 0.03633970866912785;
                  } else {
                    result[1] += 0.013128809178707767;
                  }
                }
              }
            } else {
              result[1] += -0.01908870416012329;
            }
          }
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)6.995716812755962799) ) ) {
            result[1] += -0.037134894450576016;
          } else {
            result[1] += -0.003726967526256547;
          }
        }
      }
    } else {
      result[1] += -0.03729829167313876;
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4531332450102190657) ) ) {
      result[2] += 0.005498672467134923;
    } else {
      result[2] += -0.03450207545286098;
    }
  } else {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6079901100215304721) ) ) {
      result[2] += 0.04111228952248951;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924095673946937507) ) ) {
          result[2] += -0.00826885376534162;
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02539425809138995752) ) ) {
            result[2] += 0.07515286269563598;
          } else {
            result[2] += 0.0010528937431286834;
          }
        }
      } else {
        result[2] += -0.041427240434908946;
      }
    }
  }
  if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.134751208514760662) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
      result[3] += -0.03709861567587541;
    } else {
      result[3] += 0.036748740371078024;
    }
  } else {
    if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924219109533950978) ) ) {
      result[3] += -0.02194795175061285;
    } else {
      result[3] += -0.03658677953440731;
    }
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03416680311379889;
  } else {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6320649457863874998) ) ) {
      result[4] += 0.040350567713682145;
    } else {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6301498834625898215) ) ) {
        result[4] += 0.030957787335739305;
      } else {
        result[4] += -0.023548792786067956;
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
    result[5] += 0.11852850344635973;
  } else {
    if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.4951268175569629171) ) ) {
      result[5] += 0.0287125185053198;
    } else {
      result[5] += -0.03444685539075904;
    }
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
    result[6] += 0.09915418576618718;
  } else {
    result[6] += -0.023391195944470058;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
          result[7] += 0.024241760729092395;
        } else {
          result[7] += 0.0396709110742553;
        }
      } else {
        result[7] += -0.034638184293880894;
      }
    } else {
      result[7] += -0.036276590804694295;
    }
  } else {
    result[7] += -0.034485230202712526;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      result[8] += -0.03483621218990538;
    } else {
      if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619621763013154303) ) ) {
        result[8] += -0.0408012548364019;
      } else {
        result[8] += 0.04895432755112089;
      }
    }
  } else {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
      result[8] += -0.026542962104631158;
    } else {
      result[8] += 0.03692782867800966;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
        if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[9] += -0.02821495904994613;
        } else {
          result[9] += 0.02410259326925066;
        }
      } else {
        result[9] += -0.03458578178475615;
      }
    } else {
      if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6193480160195046214) ) ) {
        result[9] += 0.038272513964232625;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          result[9] += -0.020604834723029878;
        } else {
          result[9] += 0.04290851946958077;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.776827447740879196) ) ) {
      result[9] += -0.03436542878258613;
    } else {
      result[9] += -0.016746485757030923;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03404050607784182;
  } else {
    result[10] += 0.03883836497536389;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
      if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041152239957219283) ) ) {
        if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2020585903406152684) ) ) {
          if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[11] += 0.04167177054877207;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.045107198229514589) ) ) {
              if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7754885622253581134) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
                  result[11] += 0.049826320009980656;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5773093211169014749) ) ) {
                    result[11] += -0.037112891496847523;
                  } else {
                    if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.05064994803827179565) ) ) {
                      result[11] += -0.0020423661587996513;
                    } else {
                      result[11] += 0.03327903851852572;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5884854435699485853) ) ) {
                  result[11] += -0.03566464474926312;
                } else {
                  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2848388912985063692) ) ) {
                    result[11] += 0.018307403744691243;
                  } else {
                    result[11] += -0.01432081211231178;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7802886916620078717) ) ) {
                result[11] += 0.04332036540128098;
              } else {
                result[11] += 0.017606243445267875;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02542347745902670889) ) ) {
            result[11] += -0.0327229016018942;
          } else {
            result[11] += 0.00843166570957648;
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.93562890551316702) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146312558209061749) ) ) {
            result[11] += 0.007177870710919459;
          } else {
            result[11] += -0.03361033584187765;
          }
        } else {
          if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4546363280872787738) ) ) {
            result[11] += 0.04183338070478449;
          } else {
            if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198191867677270706) ) ) {
              result[11] += 0.009382626826977344;
            } else {
              result[11] += -0.03757928646992757;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042919239051448566) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.4799969997104674979) ) ) {
          if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.249009633947812864) ) ) {
            result[11] += 0.018017732396123448;
          } else {
            result[11] += -0.03564804096610265;
          }
        } else {
          result[11] += 0.027440612769554774;
        }
      } else {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.478123614951154519) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
            result[11] += 0.04059802828609275;
          } else {
            if ( UNLIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.06982406588639819556) ) ) {
              result[11] += -0.020628884269155403;
            } else {
              result[11] += 0.041830775936455906;
            }
          }
        } else {
          if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1505696726862040535) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02526068384892387816) ) ) {
              result[11] += -0.04243779220142805;
            } else {
              result[11] += -0.0010167367609511058;
            }
          } else {
            if ( LIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.3461243260634181973) ) ) {
              result[11] += 0.02152078497026712;
            } else {
              result[11] += 0.06906917715603214;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.1582600659874661142) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.94022859690335991) ) ) {
          if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6199390503825454868) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3534483363738425976) ) ) {
              result[11] += 0.06856764294512628;
            } else {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
                result[11] += -0.034719218481516496;
              } else {
                result[11] += 0.0037445740789572154;
              }
            }
          } else {
            result[11] += -0.03283735130802879;
          }
        } else {
          result[11] += 0.04004525026801744;
        }
      } else {
        result[11] += 0.05947703879864574;
      }
    } else {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[11] += -0.0345548180972846;
      } else {
        result[11] += 0.009428469295697838;
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5423557276411776762) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7484337002522992721) ) ) {
        result[12] += -0.016804827781714087;
      } else {
        if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5090327079499236129) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5986392858696416575) ) ) {
            result[12] += 0.07090677160681087;
          } else {
            result[12] += 0.03477396725077499;
          }
        } else {
          result[12] += -0.01962435485664444;
        }
      }
    } else {
      result[12] += -0.03166178218156549;
    }
  } else {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
      result[12] += 0.08908207202023168;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
        result[12] += -0.03459308316179397;
      } else {
        result[12] += 0.05384682331165397;
      }
    }
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.503624443610515504) ) ) {
        if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)2.269078854815660851) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
            if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.813496107389169776) ) ) {
              if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[0] += -0.017902369753346012;
              } else {
                result[0] += -0.034512450218929853;
              }
            } else {
              result[0] += 0.017250165381845473;
            }
          } else {
            result[0] += 0.025522896712440596;
          }
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)0.9527922848437607728) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02540678067835369994) ) ) {
              result[0] += 0.0035715738776370626;
            } else {
              result[0] += -0.03480377655032265;
            }
          } else {
            result[0] += 0.04108851976144726;
          }
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
            result[0] += -0.04162543570727719;
          } else {
            result[0] += 0.0209156595113502;
          }
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02540956347415987762) ) ) {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1261238355234371167) ) ) {
              if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07237235154085500111) ) ) {
                result[0] += -0.035113585942054784;
              } else {
                result[0] += 0.04208441171783857;
              }
            } else {
              result[0] += 0.04181441321159189;
            }
          } else {
            if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.4035966054333003372) ) ) {
              result[0] += 0.04116517776331312;
            } else {
              result[0] += -0.034957570869311026;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.05544461832062118345) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.565790043177659574) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3605171091795755789) ) ) {
            result[0] += 0.04704284425945664;
          } else {
            result[0] += 0.025727164870370984;
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += -0.003307218980053501;
          } else {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.1077020089582937795) ) ) {
              result[0] += 0.04249217527020464;
            } else {
              result[0] += 0.01404009157617142;
            }
          }
        }
      } else {
        result[0] += -0.03563176091615289;
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02481126217740968823) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
        result[0] += -0.00110634495226979;
      } else {
        result[0] += 0.03941830204210959;
      }
    } else {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3265998338303161552) ) ) {
        result[0] += -0.032290374779262596;
      } else {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.166402218999192858) ) ) {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.2589018895515865504) ) ) {
            result[0] += 0.02397770604237068;
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5333210012402501699) ) ) {
              result[0] += -0.025447830423192437;
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4573588634800199171) ) ) {
                result[0] += 0.03408961947208867;
              } else {
                result[0] += -0.02386437414036141;
              }
            }
          }
        } else {
          result[0] += 0.03275387173415908;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.733546608010884116) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.577083212177167848) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1714086051218906004) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5971525348704809222) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.757072353270465959) ) ) {
              result[1] += 0.014805875146767254;
            } else {
              if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5737185163116343967) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
                  result[1] += -0.020747472378015157;
                } else {
                  result[1] += -0.036668433265238484;
                }
              } else {
                if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
                  result[1] += 0.03447429990156446;
                } else {
                  result[1] += -0.036365266017026956;
                }
              }
            }
          } else {
            result[1] += -0.036149840994724215;
          }
        } else {
          result[1] += 0.005855775970446643;
        }
      } else {
        result[1] += 0.01508983557831646;
      }
    } else {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6196462427529211281) ) ) {
        result[1] += 0.01557765187473976;
      } else {
        result[1] += 0.037070373193292185;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1714086051218906004) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6033696181219915244) ) ) {
            if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.06473774517825992003) ) ) {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201653864810373618) ) ) {
                result[1] += 0.01018230059404725;
              } else {
                result[1] += 0.0363296077672868;
              }
            } else {
              if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042317978440173709) ) ) {
                result[1] += 0.03737337823344797;
              } else {
                result[1] += 0.007591216758751127;
              }
            }
          } else {
            result[1] += -0.0029112605123779133;
          }
        } else {
          if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8425672530836286755) ) ) {
            result[1] += 0.007057959723282839;
          } else {
            result[1] += -0.02213652651447798;
          }
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.255857088039638914) ) ) {
          result[1] += 0.03709060840462953;
        } else {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.4239261289540273148) ) ) {
            result[1] += 0.007053439640115479;
          } else {
            result[1] += -0.03714780673413162;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7272797406239109863) ) ) {
        result[1] += 0.03693357183208784;
      } else {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200380209460149006) ) ) {
          result[1] += -0.008304416574211925;
        } else {
          result[1] += 0.03496252213726798;
        }
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
      result[2] += 0.006602827162110522;
    } else {
      result[2] += -0.03449887094744727;
    }
  } else {
    if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4956038977333974138) ) ) {
      result[2] += 0.041160226377836985;
    } else {
      if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.0391851804350388036) ) ) {
        result[2] += 0.016673718670105322;
      } else {
        result[2] += -0.03496921971985421;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.03648288685051136;
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02548539468759894108) ) ) {
      result[3] += 0.03655057108814997;
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02547635059685190648) ) ) {
        result[3] += 0.03677956914960847;
      } else {
        result[3] += 0.017847796075088424;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += -0.01771209379444881;
    } else {
      result[4] += -0.03445594301880805;
    }
  } else {
    result[4] += 0.03999720034491495;
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.946040802375038625) ) ) {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
      result[5] += 0.019667946811886668;
    } else {
      result[5] += -0.03443429033669395;
    }
  } else {
    result[5] += 0.10934143090646135;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
    result[6] += 0.11360081737706736;
  } else {
    result[6] += -0.023775751204993645;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03926175289701309273) ) ) {
        result[7] += 0.011266084151927565;
      } else {
        result[7] += 0.03586824092527909;
      }
    } else {
      result[7] += -0.034625885595415955;
    }
  } else {
    result[7] += -0.034481933454080994;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      result[8] += -0.034814043605663945;
    } else {
      result[8] += -0.01950568957604987;
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
      result[8] += -0.026185265993148424;
    } else {
      result[8] += 0.036841834234816614;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
      if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[9] += -0.03213568327482676;
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
          result[9] += 0.023038743137514413;
        } else {
          result[9] += -0.03459675547724359;
        }
      }
    } else {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146003291738276308) ) ) {
        result[9] += 0.03773735031982282;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          result[9] += -0.019631665694453477;
        } else {
          result[9] += 0.04166464880532428;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.776827447740879196) ) ) {
      result[9] += -0.03435198625444984;
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.275937511918699085) ) ) {
        result[9] += -0.0243779294494202;
      } else {
        result[9] += 0.010406593947315102;
      }
    }
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02551113555610100975) ) ) {
      result[10] += 0.011389701315129973;
    } else {
      result[10] += 0.03682210831175851;
    }
  } else {
    result[10] += -0.033994376378895734;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6831714853785343378) ) ) {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6932836104142902078) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.20695775318755727) ) ) {
              result[11] += 0.053653309551244206;
            } else {
              result[11] += -0.03550330894312803;
            }
          } else {
            result[11] += 0.03877785804605626;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5773093211169014749) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.612309128331080865) ) ) {
              result[11] += -0.03509706773671123;
            } else {
              result[11] += 0.006871761270756865;
            }
          } else {
            result[11] += 0.01552712822239026;
          }
        }
      } else {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3155590552332632748) ) ) {
          result[11] += -0.028275203428412353;
        } else {
          if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2685262930609947363) ) ) {
            result[11] += 0.06121711043486349;
          } else {
            if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4599117104413318891) ) ) {
              if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.1964713595992406414) ) ) {
                result[11] += 0.035398625902218914;
              } else {
                result[11] += -0.022223814762909064;
              }
            } else {
              result[11] += 0.02632503259998515;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.04346654100077831234) ) ) {
        result[11] += -0.03432352685253137;
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02531912258127940255) ) ) {
          result[11] += -0.029804852248211826;
        } else {
          result[11] += 0.036539996080534744;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6277376571851565057) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
        result[11] += 0.023306728368193228;
      } else {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.003645027256659272) ) ) {
          result[11] += 0.00017042890918557668;
        } else {
          result[11] += -0.03518651783855407;
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8554729914032211946) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.5217572588528089916) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02538034410944110461) ) ) {
              result[11] += 0.025544289500177408;
            } else {
              result[11] += 0.04018537010724898;
            }
          } else {
            if ( UNLIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.6869431386590778565) ) ) {
              result[11] += -0.021828159164253645;
            } else {
              result[11] += 0.0248267138303087;
            }
          }
        } else {
          if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[11] += -0.03477439078711362;
          } else {
            result[11] += 0.034395476793104965;
          }
        }
      } else {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.09120408826481592179) ) ) {
          result[11] += -0.036145021291429394;
        } else {
          result[11] += 0.033053697159141575;
        }
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02539425809138995752) ) ) {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
      result[12] += 0.010813588302426897;
    } else {
      result[12] += -0.03444814507151382;
    }
  } else {
    if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.2604915822708271933) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7797011598290618517) ) ) {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5985610358170542211) ) ) {
          result[12] += 0.017479731269309365;
        } else {
          result[12] += -0.034515357715935474;
        }
      } else {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.6031942790939345267) ) ) {
          result[12] += 0.06452964341423299;
        } else {
          if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-2.758297861239732196) ) ) {
            result[12] += 0.05241309831951693;
          } else {
            result[12] += -0.034882376352665424;
          }
        }
      }
    } else {
      result[12] += -0.03452569284691892;
    }
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.03631730839153248652) ) ) {
            result[0] += -0.029154204199141602;
          } else {
            result[0] += 0.03512794820341313;
          }
        } else {
          result[0] += -0.03460578942850837;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02546243661198507521) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1759602684221958924) ) ) {
            if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924338860476576235) ) ) {
              result[0] += 0.03772505360043586;
            } else {
              result[0] += -0.005728527876365605;
            }
          } else {
            result[0] += 0.04150539934605705;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
            result[0] += 0.032066360947504785;
          } else {
            result[0] += -0.033144243104750865;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02538312690524727536) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
            result[0] += 0.009886176345743266;
          } else {
            result[0] += 0.0404380125448699;
          }
        } else {
          if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3605171091795755789) ) ) {
            result[0] += 0.03343110789009532;
          } else {
            result[0] += -0.013046815146010858;
          }
        }
      } else {
        result[0] += -0.03467437281756761;
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02481126217740968823) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
        result[0] += -0.0009968922700559464;
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5984827857644668958) ) ) {
          result[0] += 0.025432179005913713;
        } else {
          result[0] += 0.039588200624014865;
        }
      }
    } else {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7882889073897575427) ) ) {
        result[0] += -0.03394415753619217;
      } else {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.166402218999192858) ) ) {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.2589018895515865504) ) ) {
            result[0] += 0.023912116559988542;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1720197088307830191) ) ) {
              result[0] += -0.034933084106658165;
            } else {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4573588634800199171) ) ) {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
                  result[0] += -0.01711611457245821;
                } else {
                  result[0] += 0.04512727635734283;
                }
              } else {
                result[0] += -0.022718800751165506;
              }
            }
          }
        } else {
          result[0] += 0.030135627799187756;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2855774686981291111) ) ) {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5423557276411776762) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
          if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += 0.014858532712146991;
          } else {
            result[1] += -0.036621582810945096;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2741420333276946564) ) ) {
            result[1] += -0.03472414358190283;
          } else {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.08143198823565724054) ) ) {
              result[1] += 0.032460633265548156;
            } else {
              result[1] += -0.02196704952425515;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5863540276134188156) ) ) {
          result[1] += -0.036014131137213475;
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5434823061206194295) ) ) {
            result[1] += -0.037718782306979656;
          } else {
            result[1] += 0.015268411978723103;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
        if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.757812920694893144) ) ) {
          result[1] += 0.01223369908950699;
        } else {
          result[1] += 0.038164576407502;
        }
      } else {
        result[1] += -0.035682009112868764;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3139199429380991613) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1714086051218906004) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6025238385607971647) ) ) {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7722884759342584227) ) ) {
              result[1] += 0.03572784968972102;
            } else {
              result[1] += 0.01923924931590216;
            }
          } else {
            result[1] += 0.0029582220776043786;
          }
        } else {
          result[1] += 0.003093508310022926;
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
          result[1] += 0.03691191031919889;
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)3.143420129103045024) ) ) {
            if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5979350353963549525) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.1752905354067069987) ) ) {
                result[1] += 0.028388783011924174;
              } else {
                result[1] += -0.02109192380444171;
              }
            } else {
              if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.4494064879937386681) ) ) {
                result[1] += 0.012468588034311324;
              } else {
                if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  result[1] += -0.03702422773711915;
                } else {
                  result[1] += -0.003975202547906929;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.2711853315114466367) ) ) {
              result[1] += 0.036889536333901615;
            } else {
              result[1] += -0.002322260153687621;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.25444770141758899) ) ) {
        result[1] += 0.0367491408607215;
      } else {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200167770887640151) ) ) {
          result[1] += -0.01088415431156389;
        } else {
          result[1] += 0.03493192092405288;
        }
      }
    }
  }
  if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
    result[2] += -0.03371414469937052;
  } else {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1301196871218200934) ) ) {
      if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03902843794759941476) ) ) {
        result[2] += 0.005471046613598077;
      } else {
        if ( LIKELY( !(data[70].missing != -1) || (data[70].fvalue <= (double)0.1250591196958120987) ) ) {
          if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
            result[2] += 0.03882593421069241;
          } else {
            result[2] += -0.0349905153974392;
          }
        } else {
          result[2] += 0.051368584939804056;
        }
      }
    } else {
      result[2] += -0.03466163488895326;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924328727704508302) ) ) {
      result[3] += 0.036556387151120626;
    } else {
      if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.20695775318755727) ) ) {
        result[3] += -0.03637485799591672;
      } else {
        result[3] += 0.03605820399410592;
      }
    }
  } else {
    result[3] += -0.036392709381806665;
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03410208873692571;
  } else {
    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.9792340351067272408) ) ) {
      result[4] += 0.03964900488258855;
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.195389931561284369) ) ) {
        result[4] += 0.03845423719497527;
      } else {
        result[4] += -0.03029123120600404;
      }
    }
  }
  if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.446200516777080558) ) ) {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
      result[5] += 0.020719174491680065;
    } else {
      result[5] += -0.03444747175878487;
    }
  } else {
    result[5] += 0.10916837658602528;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
    result[6] += 0.10187794812831659;
  } else {
    result[6] += -0.02329647822898762;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5781007682388933366) ) ) {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02550835275737686064) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2.213331037191155648) ) ) {
            result[7] += -0.012170055607345532;
          } else {
            result[7] += 0.04074715678634192;
          }
        } else {
          result[7] += 0.038722454678745466;
        }
      } else {
        result[7] += -0.03460744168149364;
      }
    } else {
      result[7] += -0.03614122902699431;
    }
  } else {
    result[7] += -0.03447885416331143;
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
    result[8] += -0.033531358045987954;
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.06509884839405948032) ) ) {
      result[8] += 0.00338927716243316;
    } else {
      result[8] += 0.03687147961631961;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
          result[9] += 0.03815294791676277;
        } else {
          result[9] += 0.013925085348493314;
        }
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5971525348704809222) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5980132854489424998) ) ) {
            result[9] += 0.016152926356711245;
          } else {
            result[9] += -0.034778415855933185;
          }
        } else {
          result[9] += 0.036081250584887085;
        }
      }
    } else {
      result[9] += -0.02885519350428834;
    }
  } else {
    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.776827447740879196) ) ) {
      result[9] += -0.03433594558691902;
    } else {
      result[9] += -0.015340466044534996;
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02551113555610100975) ) ) {
      result[10] += 0.01064483281650268;
    } else {
      result[10] += 0.03634412586403517;
    }
  } else {
    result[10] += -0.03395793641974393;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.194912770072289715) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.057108140249295891) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1560695414882870835) ) ) {
            result[11] += 0.012823872903881307;
          } else {
            if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2568760673703741615) ) ) {
              result[11] += -0.03507943078336242;
            } else {
              result[11] += 0.004271006001675367;
            }
          }
        } else {
          if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4859023428981089077) ) ) {
            if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01054671255394320183) ) ) {
              if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2655489376538505142) ) ) {
                result[11] += -0.01660103162777265;
              } else {
                result[11] += 0.03223343362784725;
              }
            } else {
              result[11] += 0.03956523335587781;
            }
          } else {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.3049403981064169877) ) ) {
              result[11] += 0.0200224918037522;
            } else {
              result[11] += -0.02304964564196497;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5977002852385927545) ) ) {
            result[11] += -0.03527270614005478;
          } else {
            if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201559599228835262) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121881725528086682) ) ) {
                result[11] += 0.04216066525749121;
              } else {
                result[11] += 0.004237404543127278;
              }
            } else {
              result[11] += 0.07268732657637426;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.6701517836571867504) ) ) {
              result[11] += -0.035110141550291706;
            } else {
              result[11] += 0.029240363117428017;
            }
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.523611324064607864) ) ) {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906447706809286435) ) ) {
                if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.2815903302926908158) ) ) {
                  result[11] += -0.009540070778524258;
                } else {
                  result[11] += 0.04805307942788961;
                }
              } else {
                if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.08226951748952611443) ) ) {
                  result[11] += -0.03481311269242594;
                } else {
                  result[11] += 0.007974190462738447;
                }
              }
            } else {
              if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6895943413068069683) ) ) {
                result[11] += 0.043604583042875435;
              } else {
                result[11] += 0.01867724308133949;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.537344772829359663) ) ) {
        result[11] += -0.033379050081301355;
      } else {
        result[11] += 0.04626870600568648;
      }
    }
  } else {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.257223684349944914) ) ) {
        result[11] += -0.03447765525821109;
      } else {
        result[11] += 0.039067043521724285;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.853656798879314338) ) ) {
        result[11] += -0.006671409638787179;
      } else {
        result[11] += 0.05205556083155682;
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7484337002522992721) ) ) {
        result[12] += -0.018593383053949992;
      } else {
        if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1656063960181672345) ) ) {
          if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7978891662630570591) ) ) {
            result[12] += 0.07088547638141678;
          } else {
            result[12] += 0.02560179220552616;
          }
        } else {
          result[12] += -0.018781734119859363;
        }
      }
    } else {
      result[12] += -0.030150728671379672;
    }
  } else {
    if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2418892081941573513) ) ) {
      result[12] += 0.0841978139270694;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1593908345313046204) ) ) {
        result[12] += -0.034555469359392556;
      } else {
        result[12] += 0.05247753731173354;
      }
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.08608509380067926042) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3145694025267490868) ) ) {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8125319923846624492) ) ) {
              result[0] += 0.03568859409360054;
            } else {
              result[0] += 0.024606701406657692;
            }
          } else {
            if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[0] += 0.04040393161645525;
            } else {
              result[0] += 0.023909546011903995;
            }
          }
        } else {
          if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3986481501065083921) ) ) {
            result[0] += 0.04215897387388461;
          } else {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.1021351031087739808) ) ) {
              result[0] += 0.02357338256027073;
            } else {
              result[0] += -0.017038927241705998;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4527983839913916064) ) ) {
          result[0] += -0.03031025961783815;
        } else {
          result[0] += 0.03895649328881111;
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7994110553344907499) ) ) {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.010926839157595403) ) ) {
          if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.7271006213270146956) ) ) {
            result[0] += -0.0016715658346892052;
          } else {
            result[0] += -0.03304973040997998;
          }
        } else {
          if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1585980731754384754) ) ) {
            result[0] += 0.03698061064653678;
          } else {
            result[0] += -0.037508773034084175;
          }
        }
      } else {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7077860028025079187) ) ) {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
              result[0] += 0.03242780659335257;
            } else {
              if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1676582117311516129) ) ) {
                result[0] += -0.03188038882484038;
              } else {
                if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2096629731955549081) ) ) {
                  result[0] += 0.057580864704047455;
                } else {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2448772186320965494) ) ) {
                    result[0] += -0.025975970559795385;
                  } else {
                    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.01301751523764219619) ) ) {
                      result[0] += 0.04635925988973081;
                    } else {
                      result[0] += -0.029200145122385675;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200488549029178342) ) ) {
              result[0] += 0.03262410730374113;
            } else {
              result[0] += 0.010951823141766646;
            }
          }
        } else {
          result[0] += 0.03866482693173951;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.277331842728165245) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.503624443610515504) ) ) {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01612124187031319447) ) ) {
            result[0] += -0.014090524225315045;
          } else {
            result[0] += -0.03604658389698166;
          }
        } else {
          result[0] += 0.03220883100939926;
        }
      } else {
        result[0] += 0.03861850500679124;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.03459093138193042;
        } else {
          result[0] += 0.04155084160621601;
        }
      } else {
        result[0] += 0.01990722938683564;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4265408766284053965) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3898781641478269999) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1714086051218906004) ) ) {
          if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.7019699308006336347) ) ) {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5810222695237325929) ) ) {
              if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[1] += 0.02129893151904344;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
                  result[1] += 0.006943431227455828;
                } else {
                  result[1] += -0.03597450697066229;
                }
              }
            } else {
              result[1] += -0.03580496130795682;
            }
          } else {
            if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
              result[1] += 0.039306604131250006;
            } else {
              result[1] += -0.03548972188528076;
            }
          }
        } else {
          result[1] += 0.002832608255518132;
        }
      } else {
        result[1] += 0.022381164534010105;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)0.3707766233732859296) ) ) {
        result[1] += 0.03682714530710271;
      } else {
        result[1] += -0.002759598302877086;
      }
    }
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01582966828177212806) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288170262485434092) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
              result[1] += -0.019861531953205596;
            } else {
              if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.166152464118998755) ) ) {
                if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1673079343172020617) ) ) {
                  result[1] += 0.03698117586226524;
                } else {
                  if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03900119232330571256) ) ) {
                    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6196067467166043174) ) ) {
                      result[1] += 0.03525617140405681;
                    } else {
                      result[1] += 0.012065416738872374;
                    }
                  } else {
                    result[1] += -0.011468510632590254;
                  }
                }
              } else {
                result[1] += -0.01666874682596763;
              }
            }
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.84406944296904296) ) ) {
              result[1] += -0.038692269228770663;
            } else {
              result[1] += -0.00916115396583638;
            }
          }
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.095048325145008938) ) ) {
            result[1] += 0.03656908238275963;
          } else {
            result[1] += 0.026975130177673858;
          }
        }
      } else {
        result[1] += -0.036925548693390875;
      }
    } else {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1506066667286137251) ) ) {
          result[1] += -0.036586676027232826;
        } else {
          result[1] += 0.01346645928475014;
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201900647098373964) ) ) {
          result[1] += 0.006521120368798859;
        } else {
          result[1] += 0.03632260183606016;
        }
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.03379489513392585;
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1301196871218200934) ) ) {
      if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03902843794759941476) ) ) {
        result[2] += 0.0048854831055743135;
      } else {
        if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5692191474251226957) ) ) {
          result[2] += 0.07588202947828343;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
            result[2] += 0.04536058895318996;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.918913508405119539) ) ) {
              result[2] += -0.01417025882666724;
            } else {
              result[2] += 0.03608193624750111;
            }
          }
        }
      }
    } else {
      result[2] += -0.034874776889781106;
    }
  }
  if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.134751208514760662) ) ) {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
      result[3] += 0.036401789649169194;
    } else {
      result[3] += -0.03700285222661576;
    }
  } else {
    if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924219109533950978) ) ) {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2612217416717404483) ) ) {
        result[3] += -0.03592884123731102;
      } else {
        result[3] += 0.00749176892917907;
      }
    } else {
      result[3] += -0.036203406072876934;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += -0.016228457310766987;
    } else {
      result[4] += -0.03443225838655781;
    }
  } else {
    result[4] += 0.0392191779886708;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
    result[5] += 0.11847454524162956;
  } else {
    if ( UNLIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.1161099291660005195) ) ) {
      result[5] += 0.02938585883184044;
    } else {
      result[5] += -0.03444664240119946;
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[6] += 0.09690807313717262;
  } else {
    result[6] += -0.022963071491411715;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02550835275737686064) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2.213331037191155648) ) ) {
            result[7] += -0.01091481208923728;
          } else {
            result[7] += 0.04029269725447089;
          }
        } else {
          result[7] += 0.03835782219818442;
        }
      } else {
        result[7] += -0.03460500175986288;
      }
    } else {
      result[7] += -0.0361552866160783;
    }
  } else {
    result[7] += -0.03447593875630876;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
      result[8] += -0.03625329881782214;
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[8] += -0.034452018129689434;
      } else {
        result[8] += 0.04596683694265657;
      }
    }
  } else {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6185950284719347048) ) ) {
      result[8] += -0.03545785659350258;
    } else {
      result[8] += 0.03525484284526943;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
          result[9] += 0.0375924979689509;
        } else {
          result[9] += 0.013235175771189685;
        }
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5971525348704809222) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3157059568068864563) ) ) {
            result[9] += 0.007265148958672556;
          } else {
            result[9] += -0.03475074052904222;
          }
        } else {
          result[9] += 0.034062499394020826;
        }
      }
    } else {
      result[9] += -0.02880531865090466;
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
      result[9] += -0.03432110070889133;
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
        result[9] += -0.02789404195874685;
      } else {
        result[9] += 0.01059402005132591;
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03393872572942189;
  } else {
    result[10] += 0.03798867041557881;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
      if ( LIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2903175272918419592) ) ) {
        if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3962974862291421263) ) ) {
          if ( UNLIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.144400867303819902) ) ) {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7754885622253581134) ) ) {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6851105044112194564) ) ) {
                result[11] += -0.02342214611567088;
              } else {
                result[11] += 0.036339218808657786;
              }
            } else {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.163813639781238196) ) ) {
                result[11] += -0.029310929688168195;
              } else {
                result[11] += 0.011427621313789769;
              }
            }
          } else {
            result[11] += -0.03555471419548631;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.463523416821811196) ) ) {
            result[11] += 0.03466229692178866;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.399912440852576434) ) ) {
                result[11] += -0.03292209717298268;
              } else {
                result[11] += 0.001471149736387078;
              }
            } else {
              result[11] += 0.020510858613859307;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200845026092208778) ) ) {
          result[11] += -0.009929038540881509;
        } else {
          result[11] += -0.03464760792772843;
        }
      }
    } else {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6277376571851565057) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
          result[11] += 0.010604567353232994;
        } else {
          result[11] += -0.035640867039493235;
        }
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
            if ( LIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.3892291717456373701) ) ) {
              result[11] += 0.03905382005608186;
            } else {
              result[11] += 0.014646545752141176;
            }
          } else {
            result[11] += 0.004685617010565674;
          }
        } else {
          if ( LIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.05650533769181813326) ) ) {
            result[11] += -0.03174638794773935;
          } else {
            result[11] += 0.042652905401211055;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197649165941288008) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.962633868096237189) ) ) {
          result[11] += 0.06807716216007888;
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.980962009341198482) ) ) {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2327220310333181497) ) ) {
              result[11] += -0.03524604725598752;
            } else {
              result[11] += 0.016827880896908922;
            }
          } else {
            result[11] += 0.05291056875420198;
          }
        }
      } else {
        result[11] += -0.0323725669607411;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[11] += -0.03456454083995923;
      } else {
        result[11] += 0.014972328891684967;
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02539425809138995752) ) ) {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
      result[12] += 0.013096148174533308;
    } else {
      result[12] += -0.034446546958342775;
    }
  } else {
    if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)0.2038152069968197366) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7418876561688098059) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7978891662630570591) ) ) {
          if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5082025621460574127) ) ) {
            result[12] += 0.05331816054666308;
          } else {
            result[12] += 0.0009909069650973234;
          }
        } else {
          result[12] += -0.031101882732413617;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
          result[12] += 0.034270385150627546;
        } else {
          result[12] += 0.07147354416420824;
        }
      }
    } else {
      result[12] += -0.034472134804569364;
    }
  }
  if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.3597198329567449782) ) ) {
        result[0] += -0.03410217329342373;
      } else {
        result[0] += 0.05457316886275609;
      }
    } else {
      if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
        if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
          if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.006448371436928930153) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
              result[0] += -0.07703744546982493;
            } else {
              if ( LIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                result[0] += -0.03133295043073278;
              } else {
                result[0] += 0.019914372573283726;
              }
            }
          } else {
            if ( UNLIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.1565029743006675356) ) ) {
              result[0] += 0.04591776043387859;
            } else {
              result[0] += 0.010652510850266387;
            }
          }
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
            result[0] += 0.040426673519584684;
          } else {
            if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2063346681957556328) ) ) {
              result[0] += 0.036251610352505896;
            } else {
              result[0] += -0.03718447699566529;
            }
          }
        }
      } else {
        result[0] += -0.03384105548350179;
      }
    }
  } else {
    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7882889073897575427) ) ) {
      if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1649621583668608171) ) ) {
          result[0] += -0.03603432860494173;
        } else {
          result[0] += 0.023168747008855763;
        }
      } else {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8179725024608467399) ) ) {
          result[0] += -0.046597722922928395;
        } else {
          result[0] += 0.03712006258634071;
        }
      }
    } else {
      if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4637550354769787719) ) ) {
        if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1346367259363155655) ) ) {
          result[0] += 0.031961524552218054;
        } else {
          if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.166402218999192858) ) ) {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
              result[0] += 0.03336829695525366;
            } else {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201685093758281253) ) ) {
                result[0] += 0.012421126672404081;
              } else {
                if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2099024163039080737) ) ) {
                  result[0] += -0.03765941634041138;
                } else {
                  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6270283597087605854) ) ) {
                    result[0] += 0.07084216078399626;
                  } else {
                    if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958436495131647692) ) ) {
                      result[0] += -0.024520688905603466;
                    } else {
                      result[0] += 0.0038900311991412013;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 0.022725433049302756;
          }
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
          result[0] += 0.03927290720755602;
        } else {
          result[0] += 0.028525049860933765;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
      result[1] += -0.035599467271869766;
    } else {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
            result[1] += 0.04220821065021394;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.030708100805462157) ) ) {
              result[1] += 0.007860510640765012;
            } else {
              result[1] += 0.03641102939390148;
            }
          }
        } else {
          result[1] += -0.0022749343367189133;
        }
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.107751703712507974) ) ) {
          result[1] += -0.036632917006426215;
        } else {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.219875575849968419) ) ) {
            result[1] += 0.03180570761404047;
          } else {
            result[1] += -0.023176577398414597;
          }
        }
      }
    }
  } else {
    if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.07128092195383493868) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3372394630688034245) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.315087423865315075) ) ) {
            result[1] += 0.03646731955715625;
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
              result[1] += -0.03605855102772184;
            } else {
              if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6200759631482561929) ) ) {
                result[1] += 0.010483313534431238;
              } else {
                if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.0392434320385037852) ) ) {
                  result[1] += 0.01654267731229592;
                } else {
                  result[1] += 0.03576568489798909;
                }
              }
            }
          }
        } else {
          result[1] += -0.011331578155359519;
        }
      } else {
        if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3475211658439765761) ) ) {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.0166351500022063406) ) ) {
            result[1] += -0.03509984658742756;
          } else {
            result[1] += 0.006452382737221103;
          }
        } else {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201549954514296026) ) ) {
            result[1] += -0.03782548257181639;
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02543878283887865757) ) ) {
              result[1] += -0.023949694382731774;
            } else {
              result[1] += 0.03526849722055769;
            }
          }
        }
      }
    } else {
      result[1] += 0.036250601313660376;
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
    result[2] += -0.03366143426652031;
  } else {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1301196871218200934) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1662008098993101035) ) ) {
          result[2] += -0.01054302474223841;
        } else {
          if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
            result[2] += 0.07595087438048118;
          } else {
            if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4650467260607808462) ) ) {
              result[2] += 0.03899276683519243;
            } else {
              result[2] += 0.0008185867789310437;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5423182200855958257) ) ) {
          result[2] += 0.04375838480199978;
        } else {
          result[2] += -0.04046635329277766;
        }
      }
    } else {
      result[2] += -0.03462229840201928;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.03613103469599702;
  } else {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924334254671090622) ) ) {
      result[3] += 0.03606878463903584;
    } else {
      if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2688352700281315122) ) ) {
        result[3] += 0.03632345748881935;
      } else {
        result[3] += 0.013024682745511992;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += -0.01539262602034448;
    } else {
      result[4] += -0.0344203433950588;
    }
  } else {
    result[4] += 0.038875769558137006;
  }
  if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7494567179442497284) ) ) {
      result[5] += 0.008428209052983226;
    } else {
      result[5] += -0.029981385515960197;
    }
  } else {
    result[5] += 0.114984103037357;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
    result[6] += 0.09447307238035556;
  } else {
    result[6] += -0.02271986569684762;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4819992438703088466) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02538869249977760909) ) ) {
            result[7] += -0.011400098732531685;
          } else {
            result[7] += 0.03472906733851683;
          }
        } else {
          result[7] += 0.03835738373279969;
        }
      } else {
        result[7] += -0.034585914440219766;
      }
    } else {
      result[7] += -0.03610601551139148;
    }
  } else {
    result[7] += -0.03447320593248525;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      result[8] += -0.034754246155848455;
    } else {
      result[8] += -0.01920762009204083;
    }
  } else {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6185950284719347048) ) ) {
      result[8] += -0.03545343942217118;
    } else {
      result[8] += 0.03492666980182652;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
          result[9] += 0.03710516310512993;
        } else {
          result[9] += 0.012554760723422632;
        }
      } else {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3155590552332632748) ) ) {
          result[9] += -0.016810086865331045;
        } else {
          result[9] += 0.031955395106827725;
        }
      }
    } else {
      result[9] += -0.028315009728184095;
    }
  } else {
    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.776827447740879196) ) ) {
      result[9] += -0.034291501830437554;
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.275937511918699085) ) ) {
        result[9] += -0.02305665841245657;
      } else {
        result[9] += 0.01464198964140951;
      }
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[10] += -0.03452051763207578;
    } else {
      result[10] += 0.03774315538104977;
    }
  } else {
    result[10] += -0.0338809056186866;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6831714853785343378) ) ) {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6932836104142902078) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1560695414882870835) ) ) {
              result[11] += 0.011958391320665642;
            } else {
              result[11] += -0.03507533806250218;
            }
          } else {
            result[11] += 0.03526265286314988;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5114190513044379882) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.612309128331080865) ) ) {
              result[11] += -0.03580903139291077;
            } else {
              result[11] += 0.005610730994015301;
            }
          } else {
            result[11] += 0.012897291407198813;
          }
        }
      } else {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3471407636898510285) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042771367694231843) ) ) {
            result[11] += -0.021779123795873295;
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
              result[11] += 0.04901316743916498;
            } else {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
                if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6330028230889548357) ) ) {
                  result[11] += 0.0033568951813072196;
                } else {
                  result[11] += -0.041069117015097946;
                }
              } else {
                result[11] += 0.016908657935164658;
              }
            }
          }
        } else {
          result[11] += 0.04240795680408174;
        }
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)0.4510774498425162982) ) ) {
        result[11] += -0.03418091492082793;
      } else {
        if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201312059297520163) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02528155482622412506) ) ) {
            result[11] += -0.016511181721694957;
          } else {
            result[11] += 0.042538732879876265;
          }
        } else {
          result[11] += -0.034744933498919474;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.077954077688123347) ) ) {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8406727060037487709) ) ) {
        result[11] += 0.02069307158901805;
      } else {
        result[11] += -0.0325802403770381;
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8554729914032211946) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
          if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.04540605397996309162) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.6976911719988240224) ) ) {
              result[11] += 0.039173518928938916;
            } else {
              if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.6343735709991982219) ) ) {
                result[11] += 0.03896182446215268;
              } else {
                result[11] += 0.00039710145140521943;
              }
            }
          } else {
            result[11] += -0.000346752371382924;
          }
        } else {
          if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.003980204450507154358) ) ) {
            result[11] += -0.03174684524977122;
          } else {
            result[11] += 0.03029942989235873;
          }
        }
      } else {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.09120408826481592179) ) ) {
          result[11] += -0.0358262042256454;
        } else {
          result[11] += 0.012902510624029064;
        }
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02539425809138995752) ) ) {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
      result[12] += 0.013766502113386177;
    } else {
      result[12] += -0.034445801178728926;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)0.6187917260814692622) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1656063960181672345) ) ) {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4410114951078237255) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3449654850823927199) ) ) {
              result[12] += 0.04035159563818126;
            } else {
              result[12] += 0.08206691658571746;
            }
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3279372872793826499) ) ) {
              result[12] += -0.026672211373540686;
            } else {
              result[12] += 0.0429165717385616;
            }
          }
        } else {
          result[12] += -0.025640824308764576;
        }
      } else {
        result[12] += 0.06303237979787038;
      }
    } else {
      result[12] += -0.03458092360951041;
    }
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
        if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227669744999093426) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)24.16311603977926126) ) ) {
            if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01997058726767987624) ) ) {
              result[0] += -0.031206374282698388;
            } else {
              result[0] += 4.1048785072517985e-05;
            }
          } else {
            result[0] += 0.05103238681633092;
          }
        } else {
          result[0] += 0.039461214531995546;
        }
      } else {
        if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.3597198329567449782) ) ) {
          result[0] += -0.034379737705037265;
        } else {
          result[0] += 0.04709827274265731;
        }
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.4952930136680614992) ) ) {
            result[0] += 0.021174581842356984;
          } else {
            result[0] += -0.036305105283896556;
          }
        } else {
          result[0] += 0.03843892350456888;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
          result[0] += 0.01902366117055134;
        } else {
          result[0] += -0.03103822677556179;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02481126217740968823) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
        result[0] += -0.0026174843654126266;
      } else {
        result[0] += 0.03755102222948704;
      }
    } else {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9489469959038566715) ) ) {
        result[0] += -0.033669680925613725;
      } else {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.166402218999192858) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.50930314809387367) ) ) {
            result[0] += 0.021300183620985874;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1720197088307830191) ) ) {
              result[0] += -0.03464222859754384;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405697509308942328) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8000345600721433525) ) ) {
                  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4573588634800199171) ) ) {
                    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5333210012402501699) ) ) {
                      result[0] += -0.017361604595726988;
                    } else {
                      result[0] += 0.061879918917008093;
                    }
                  } else {
                    result[0] += -0.02674865229420529;
                  }
                } else {
                  result[0] += 0.049572151728011354;
                }
              } else {
                result[0] += -0.020354768148384605;
              }
            }
          }
        } else {
          result[0] += 0.026592433703864278;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2855774686981291111) ) ) {
      if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7722884759342584227) ) ) {
          if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += 0.010843490611346812;
          } else {
            result[1] += -0.0360734022361199;
          }
        } else {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906447706809286435) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
              result[1] += 0.04720107855713821;
            } else {
              result[1] += -0.036421688932670074;
            }
          } else {
            result[1] += -0.024438826998148307;
          }
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0239819887528795149) ) ) {
          result[1] += -0.03567912598963723;
        } else {
          if ( UNLIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += 0.04080084283619758;
          } else {
            result[1] += -0.036338406904207775;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.05175232488350066384) ) ) {
          result[1] += 0.01049739066648754;
        } else {
          result[1] += 0.03753393468581343;
        }
      } else {
        result[1] += -0.03561510928021064;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.06118424044948234802) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.095048325145008938) ) ) {
            result[1] += 0.03631870695186012;
          } else {
            result[1] += 0.026373888274091095;
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || (data[58].fvalue <= (double)0.1191242993130039313) ) ) {
            result[1] += 0.0009183124814666673;
          } else {
            result[1] += 0.036511682783564044;
          }
        }
      } else {
        if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2903175272918419592) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6199480660346743388) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.019027515791543579) ) ) {
              result[1] += 0.017304199095558893;
            } else {
              if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1673079343172020617) ) ) {
                result[1] += -0.00622850313178822;
              } else {
                result[1] += -0.024974637624920065;
              }
            }
          } else {
            if ( UNLIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[1] += -0.006532452340835277;
            } else {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1233134875523535651) ) ) {
                result[1] += 0.035827711399911685;
              } else {
                result[1] += 0.02042277291165923;
              }
            }
          }
        } else {
          result[1] += -0.03630807542443095;
        }
      }
    } else {
      result[1] += -0.03670233275636622;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.033704123025624005;
  } else {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4086536937182128626) ) ) {
      if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.3712249146010502265) ) ) {
        result[2] += 0.03393013053072491;
      } else {
        result[2] += 0.07940687293549879;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4554771088591554329) ) ) {
          result[2] += -0.009109452387348007;
        } else {
          if ( UNLIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1446213650877447299) ) ) {
            result[2] += 0.06650423506840768;
          } else {
            result[2] += 0.032494213969429586;
          }
        }
      } else {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4555383721268900787) ) ) {
          result[2] += 0.04062763152500443;
        } else {
          result[2] += -0.040150855089240614;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.036026441797719244;
  } else {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924334254671090622) ) ) {
      result[3] += 0.035915004187753036;
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02547356780104572879) ) ) {
        result[3] += 0.03620173397173673;
      } else {
        result[3] += 0.007816524301900636;
      }
    }
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03399446421105527;
  } else {
    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.9792340351067272408) ) ) {
      result[4] += 0.03863316301733027;
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.195389931561284369) ) ) {
        result[4] += 0.03749956051126326;
      } else {
        result[4] += -0.029522081644812955;
      }
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
      result[5] += 0.021878435330836152;
    } else {
      result[5] += -0.030467457753652356;
    }
  } else {
    result[5] += 0.1188284680347507;
  }
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2919728949150694475) ) ) {
    result[6] += -0.02336612461562349;
  } else {
    result[6] += 0.11451121979512054;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02550835275737686064) ) ) {
          result[7] += 0.01746988884779887;
        } else {
          result[7] += 0.037758937899819905;
        }
      } else {
        result[7] += -0.03458674284433306;
      }
    } else {
      result[7] += -0.0359304317573043;
    }
  } else {
    result[7] += -0.03447067021009287;
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
    result[8] += -0.03322725478453918;
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06502347397624902436) ) ) {
      result[8] += 0.0003036367460711631;
    } else {
      result[8] += 0.03649209862467919;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5928879070044672517) ) ) {
          result[9] += -0.01526105496525092;
        } else {
          result[9] += 0.03813342448944157;
        }
      } else {
        result[9] += -0.0345935422365074;
      }
    } else {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5923010316100617567) ) ) {
        result[9] += 0.036337731105091864;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          result[9] += -0.020085419179263174;
        } else {
          result[9] += 0.03738774927705354;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.371963954277687137) ) ) {
      result[9] += -0.03392683997085628;
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
        result[9] += -0.03451246668463501;
      } else {
        result[9] += 0.011647312544033657;
      }
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
      result[10] += -0.03451774880957905;
    } else {
      result[10] += 0.03751220966760004;
    }
  } else {
    result[10] += -0.0338384116814971;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02529546880817297796) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200790668063795863) ) ) {
      if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.2714622295096305593) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
          result[11] += 0.014187960999677628;
        } else {
          result[11] += -0.031473532053197965;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.322691864276066831) ) ) {
            result[11] += 0.019818460281113285;
          } else {
            result[11] += -0.031221326336649667;
          }
        } else {
          if ( UNLIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227669744999093426) ) ) {
            result[11] += 0.047979397084475704;
          } else {
            if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.115357547364302801) ) ) {
              result[11] += 0.039680594560230396;
            } else {
              result[11] += 0.002854033647956118;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[11] += -0.034604228637240324;
      } else {
        result[11] += -0.009914481769345564;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6285419272653612888) ) ) {
        if ( UNLIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.06781165786423296038) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
              result[11] += 0.024591885758438247;
            } else {
              result[11] += -0.03496898293332989;
            }
          } else {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
              if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042608422410512548) ) ) {
                result[11] += 0.02051265315874056;
              } else {
                result[11] += 0.048167954615494314;
              }
            } else {
              if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1669724685765074379) ) ) {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201614589695346735) ) ) {
                  result[11] += 0.00963645773108857;
                } else {
                  result[11] += -0.02977176992472628;
                }
              } else {
                result[11] += 0.02406378635184832;
              }
            }
          }
        } else {
          result[11] += -0.034218623136454226;
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3102553107906722563) ) ) {
          result[11] += 0.03834820606974374;
        } else {
          if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1657309125390079851) ) ) {
            result[11] += 0.024522112122419372;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9080277907525359238) ) ) {
              result[11] += -0.03641561632488958;
            } else {
              result[11] += 0.022177551992188394;
            }
          }
        }
      }
    } else {
      result[11] += -0.034634533811461365;
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02495735900683951694) ) ) {
      result[12] += -0.030248807532546954;
    } else {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7484337002522992721) ) ) {
        result[12] += -0.022655585887112306;
      } else {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)6.90415735021183874) ) ) {
          result[12] += 0.05135868593222146;
        } else {
          result[12] += -0.016929227767077816;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2418892081941573513) ) ) {
      result[12] += 0.08055236942050374;
    } else {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.673037067109722997) ) ) {
        result[12] += -0.03459456099405031;
      } else {
        result[12] += 0.052136249030601114;
      }
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.1270092780385595754) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5711888656457729807) ) ) {
            result[0] += 0.030956094988769067;
          } else {
            if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[0] += 0.038963986559742834;
            } else {
              result[0] += 0.020381866368005822;
            }
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || (data[58].fvalue <= (double)0.1191242993130039313) ) ) {
            result[0] += 0.0331037115719787;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.505199896586196906) ) ) {
              result[0] += -0.024497952661840794;
            } else {
              result[0] += 0.01930108695340893;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4527983839913916064) ) ) {
          result[0] += -0.02971933376614115;
        } else {
          result[0] += 0.03709740684905852;
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7994110553344907499) ) ) {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.010926839157595403) ) ) {
          if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.3113132420658634714) ) ) {
            result[0] += -0.0007918644598223935;
          } else {
            result[0] += -0.03278189398763831;
          }
        } else {
          if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2693218125178203359) ) ) {
            result[0] += 0.03068088343936114;
          } else {
            result[0] += -0.03525274983053029;
          }
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01802123815766297488) ) ) {
          if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.166402218999192858) ) ) {
            result[0] += 0.017423584248049757;
          } else {
            result[0] += 0.03868599467084067;
          }
        } else {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201000115295597359) ) ) {
            if ( LIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1227270498983878827) ) ) {
              result[0] += 0.034212828161263135;
            } else {
              result[0] += 0.006659537140728858;
            }
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.331999447987429308) ) ) {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631546034338769158) ) ) {
                if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041841056122270182) ) ) {
                  result[0] += 0.016199058103928812;
                } else {
                  result[0] += -0.021025775398767318;
                }
              } else {
                result[0] += 0.051311152307628075;
              }
            } else {
              result[0] += -0.03374366126493576;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[16].missing != -1) && (data[16].fvalue <= (double)-0.7084573502120999899) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1872300134116891279) ) ) {
            result[0] += -0.006022903508371378;
          } else {
            result[0] += -0.03561305092492423;
          }
        } else {
          result[0] += 0.02699265886031936;
        }
      } else {
        result[0] += 0.03895194851645178;
      }
    } else {
      if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.09589176861408833796) ) ) {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.257223684349944914) ) ) {
          result[0] += -0.034276811627527465;
        } else {
          result[0] += 0.020174548467674733;
        }
      } else {
        result[0] += 0.034113149797396186;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2855774686981291111) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3898781641478269999) ) ) {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[1] += -0.035927182334230326;
            } else {
              result[1] += 0.0297245837737349;
            }
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.749887871896559477) ) ) {
              if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5933965323462854213) ) ) {
                result[1] += 0.0017885326375491457;
              } else {
                result[1] += 0.04792702060131133;
              }
            } else {
              result[1] += -0.044102434221463614;
            }
          }
        } else {
          result[1] += -0.035617763441728734;
        }
      } else {
        result[1] += 0.018532860578820424;
      }
    } else {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.04863678920840269065) ) ) {
          result[1] += 0.01042956346662235;
        } else {
          result[1] += 0.037364688025580586;
        }
      } else {
        result[1] += -0.03560590776481116;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.01905463326039056118) ) ) {
          result[1] += 0.03588139518015466;
        } else {
          if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.1269152832719677992) ) ) {
            result[1] += 0.012904604943064227;
          } else {
            result[1] += 0.03682057928012828;
          }
        }
      } else {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288170262485434092) ) ) {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
            if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.166152464118998755) ) ) {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
                result[1] += -0.005146398813074953;
              } else {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
                  result[1] += 0.035702522136902656;
                } else {
                  if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041581769676590552) ) ) {
                    result[1] += -0.01244700964350713;
                  } else {
                    if ( UNLIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      result[1] += 0.008905800762004978;
                    } else {
                      result[1] += 0.03343200398536884;
                    }
                  }
                }
              }
            } else {
              result[1] += -0.013390235207157573;
            }
          } else {
            result[1] += -0.03871235017531579;
          }
        } else {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.388061384056159531) ) ) {
            result[1] += -0.036576935802332074;
          } else {
            result[1] += 0.008324918211909747;
          }
        }
      }
    } else {
      result[1] += -0.03658935622919387;
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[15].missing != -1) && (data[15].fvalue <= (double)-2.054472537641003349) ) ) {
      result[2] += 0.017171037040729753;
    } else {
      result[2] += -0.03449464165387242;
    }
  } else {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6079901100215304721) ) ) {
      result[2] += 0.03762891792596036;
    } else {
      if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3988745145851049778) ) ) {
        result[2] += -0.01345586937276818;
      } else {
        result[2] += 0.01572371958377667;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.035932515235996866;
  } else {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924334254671090622) ) ) {
      result[3] += 0.03577338740449526;
    } else {
      if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924331491187799115) ) ) {
        result[3] += 0.036093214143174894;
      } else {
        result[3] += 0.003989932174275245;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += -0.013623730532947553;
    } else {
      result[4] += -0.03439642214848066;
    }
  } else {
    result[4] += 0.03826624786635923;
  }
  if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.04717240670341981551) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5810222695237325929) ) ) {
      result[5] += 0.01618973925275073;
    } else {
      result[5] += -0.03028044352620078;
    }
  } else {
    result[5] += 0.09990174267084963;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701102284419148958) ) ) {
    result[6] += 0.07531103202951082;
  } else {
    result[6] += -0.03446155423262353;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5781007682388933366) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02551113555610100975) ) ) {
        result[7] += 0.011110096992092974;
      } else {
        result[7] += 0.03421454299011052;
      }
    } else {
      result[7] += -0.03590523610139516;
    }
  } else {
    result[7] += -0.034468267625382666;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      result[8] += -0.034722877206391084;
    } else {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
        result[8] += -0.03998485407376439;
      } else {
        result[8] += 0.04650719961733929;
      }
    }
  } else {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6185950284719347048) ) ) {
      result[8] += -0.035551068153408624;
    } else {
      result[8] += 0.034780334364104666;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4531332450102190657) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[9] += 0.014779905722729952;
        } else {
          result[9] += 0.03715839327137005;
        }
      } else {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3155590552332632748) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3157059568068864563) ) ) {
            result[9] += 0.00986536773813897;
          } else {
            result[9] += -0.034718432268689835;
          }
        } else {
          result[9] += 0.029789883730153566;
        }
      }
    } else {
      result[9] += -0.027941482312123747;
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
      result[9] += -0.034253322462644537;
    } else {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9029678813257829839) ) ) {
        result[9] += -0.026218584451398283;
      } else {
        result[9] += 0.04806857405502147;
      }
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[10] += -0.03451662166512291;
    } else {
      result[10] += 0.03729803258101081;
    }
  } else {
    result[10] += -0.03379376318932474;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6040399772596840577) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.683776500045887747) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02514380638713079735) ) ) {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8156587383423387072) ) ) {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
                  result[11] += 0.03626737987911409;
                } else {
                  result[11] += -0.028644905187688568;
                }
              } else {
                result[11] += 0.036562621996452854;
              }
            } else {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.331999447987429308) ) ) {
                result[11] += -0.03151575014649896;
              } else {
                result[11] += 0.0024260593364965354;
              }
            }
          } else {
            if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9264415235145915251) ) ) {
              result[11] += 0.039471932043412615;
            } else {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3562482570732720677) ) ) {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2612217416717404483) ) ) {
                  result[11] += 0.011759177818368103;
                } else {
                  result[11] += -0.008504318508274341;
                }
              } else {
                result[11] += 0.02615073550622384;
              }
            }
          }
        } else {
          result[11] += 0.05014221077636272;
        }
      } else {
        if ( UNLIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.144400867303819902) ) ) {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6178231220092317288) ) ) {
            result[11] += 0.05357841831463809;
          } else {
            if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02427139961301502322) ) ) {
              result[11] += -0.035251085381415394;
            } else {
              result[11] += 0.00882146032704595;
            }
          }
        } else {
          result[11] += -0.03399111793217742;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[11] += -0.03457517397119173;
      } else {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01054671255394320183) ) ) {
          if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01057484254966253694) ) ) {
            result[11] += -0.0014967277856935473;
          } else {
            result[11] += -0.03489051894248031;
          }
        } else {
          result[11] += 0.040616818284486704;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8179725024608467399) ) ) {
      if ( UNLIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
        result[11] += 0.00981404501925775;
      } else {
        result[11] += -0.033376703536587234;
      }
    } else {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2939107877510283573) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02540399788254752572) ) ) {
            result[11] += -0.006396593964601816;
          } else {
            result[11] += 0.037601719563153245;
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.537344772829359663) ) ) {
            result[11] += -0.03478500495128506;
          } else {
            result[11] += 0.061213265823763435;
          }
        }
      } else {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.09120408826481592179) ) ) {
          result[11] += -0.035594994949537946;
        } else {
          result[11] += 0.012037529731939509;
        }
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02495735900683951694) ) ) {
      result[12] += -0.030003182496247272;
    } else {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7484337002522992721) ) ) {
        result[12] += -0.022179749118848274;
      } else {
        if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5090327079499236129) ) ) {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4410114951078237255) ) ) {
            result[12] += 0.06388505431896095;
          } else {
            result[12] += 0.027436819382102313;
          }
        } else {
          result[12] += -0.017428060810321496;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2418892081941573513) ) ) {
      result[12] += 0.07937761644836121;
    } else {
      if ( LIKELY( !(data[46].missing != -1) || (data[46].fvalue <= (double)0.4509475523992168) ) ) {
        result[12] += -0.034585298748546864;
      } else {
        result[12] += 0.049385847336329135;
      }
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.010552663129986933) ) ) {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
          result[0] += 0.00024401197051204663;
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9606217943037372864) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6312911643245187054) ) ) {
              result[0] += 0.020751463540723807;
            } else {
              if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6255053257884176654) ) ) {
                result[0] += -0.024333561986935707;
              } else {
                result[0] += 0.011686341101981957;
              }
            }
          } else {
            result[0] += 0.03710697788535818;
          }
        }
      } else {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7994110553344907499) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.08047768617146010273) ) ) {
            result[0] += -0.006313391869510263;
          } else {
            result[0] += -0.03350795621426547;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            result[0] += -0.029278026874118693;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.056396090609971639) ) ) {
              if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200672462289694709) ) ) {
                result[0] += 0.0475470430016649;
              } else {
                if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
                  if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5975437851334178818) ) ) {
                    if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5977002852385927545) ) ) {
                      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6895943413068069683) ) ) {
                        result[0] += 0.0017736505360397927;
                      } else {
                        result[0] += 0.037042152715012676;
                      }
                    } else {
                      result[0] += 0.04993408335618055;
                    }
                  } else {
                    if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1298836484668114688) ) ) {
                      result[0] += 0.002631716905177617;
                    } else {
                      result[0] += -0.036515542853332375;
                    }
                  }
                } else {
                  result[0] += 0.03523587541937869;
                }
              }
            } else {
              result[0] += -0.0015129780458446999;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4242271725130613569) ) ) {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7797011598290618517) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02517859134637990062) ) ) {
            result[0] += 0.03640777629310105;
          } else {
            result[0] += -0.03100874362256085;
          }
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02418095871721656978) ) ) {
            result[0] += 0.029840436459466702;
          } else {
            result[0] += 0.009429345724151529;
          }
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.025468002206515402) ) ) {
          result[0] += 0.013837184107482121;
        } else {
          result[0] += -0.035693377369237056;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8274420233688559723) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.129773891082942239) ) ) {
          if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227669744999093426) ) ) {
            result[0] += 0.018282103403053043;
          } else {
            result[0] += 0.03985149268169248;
          }
        } else {
          result[0] += -0.023797407492566442;
        }
      } else {
        result[0] += -0.030561229811555003;
      }
    } else {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
          result[0] += -0.0343439238095808;
        } else {
          result[0] += 0.0288178837965455;
        }
      } else {
        result[0] += 0.02486689503745557;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2855774686981291111) ) ) {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5423557276411776762) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5502918566492193131) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
              result[1] += 0.05272580531979252;
            } else {
              result[1] += -0.0349824329271392;
            }
          } else {
            result[1] += -0.036919219142096636;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2741420333276946564) ) ) {
            result[1] += -0.033190710636244236;
          } else {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.08143198823565724054) ) ) {
              result[1] += 0.030649076974589053;
            } else {
              result[1] += -0.019364747189141683;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6089271985716422364) ) ) {
          result[1] += -0.0355736774054186;
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5434823061206194295) ) ) {
            result[1] += -0.03691846378929481;
          } else {
            result[1] += 0.01264651630818425;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.757812920694893144) ) ) {
          result[1] += 0.00766497275942523;
        } else {
          result[1] += 0.0372797446998883;
        }
      } else {
        result[1] += -0.03554621925130094;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
        if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01618603600235827764) ) ) {
          if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041423957829911151) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.019027515791543579) ) ) {
              result[1] += 0.016331811778012347;
            } else {
              result[1] += -0.01556164494333656;
            }
          } else {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6033696181219915244) ) ) {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6355114499862949407) ) ) {
                result[1] += 0.03531797577513803;
              } else {
                result[1] += -0.0032324541941386683;
              }
            } else {
              result[1] += -0.003911558591534764;
            }
          }
        } else {
          result[1] += -0.036074095608658124;
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201886563096957738) ) ) {
          if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
            result[1] += -0.003147280697653251;
          } else {
            result[1] += 0.03670380348924547;
          }
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.095048325145008938) ) ) {
            if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
              result[1] += 0.028438872696924973;
            } else {
              result[1] += 0.036077005753806075;
            }
          } else {
            if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.3820450307986008043) ) ) {
              result[1] += -0.003576927305445475;
            } else {
              result[1] += 0.036363678565262125;
            }
          }
        }
      }
    } else {
      result[1] += -0.03648035929282468;
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[15].missing != -1) && (data[15].fvalue <= (double)-2.054472537641003349) ) ) {
      result[2] += 0.01825133866909388;
    } else {
      result[2] += -0.034491854212496724;
    }
  } else {
    if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4956038977333974138) ) ) {
      result[2] += 0.03797395944468586;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02545617531996219318) ) ) {
          result[2] += -0.009266069719545458;
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02539773658760666533) ) ) {
            result[2] += 0.06163677912899881;
          } else {
            result[2] += 0.02123983463679806;
          }
        }
      } else {
        result[2] += -0.04063894808614837;
      }
    }
  }
  if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924333333509993915) ) ) {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
      result[3] += 0.035903459147767255;
    } else {
      result[3] += -0.036863056580473376;
    }
  } else {
    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.522020456991491355) ) ) {
      result[3] += -0.03578839159138258;
    } else {
      result[3] += 0.029267790873690025;
    }
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03391342537559064;
  } else {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6320649457863874998) ) ) {
      result[4] += 0.03791369762980537;
    } else {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.9579237736125010283) ) ) {
        result[4] += 0.03763012769679625;
      } else {
        result[4] += -0.023459492899517695;
      }
    }
  }
  if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7494567179442497284) ) ) {
      result[5] += 0.01078996406515404;
    } else {
      result[5] += -0.029580681120479017;
    }
  } else {
    result[5] += 0.09969575411717305;
  }
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2919728949150694475) ) ) {
    result[6] += -0.022895820872131697;
  } else {
    result[6] += 0.10752841762834675;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5781007682388933366) ) ) {
      if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
        if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2688360813320080367) ) ) {
          result[7] += 0.011518343404234374;
        } else {
          result[7] += 0.03731972532253977;
        }
      } else {
        result[7] += -0.03456669675747283;
      }
    } else {
      result[7] += -0.03580605039207324;
    }
  } else {
    result[7] += -0.03446601532508879;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      result[8] += -0.03470531055527837;
    } else {
      result[8] += -0.018836081873344384;
    }
  } else {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6185950284719347048) ) ) {
      result[8] += -0.03554574860230768;
    } else {
      result[8] += 0.03454561138191567;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2477131763261292141) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.023184999884699353) ) ) {
          result[9] += -0.04042437886988153;
        } else {
          result[9] += 0.0006495916749207362;
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
          result[9] += 0.03596395352600751;
        } else {
          result[9] += 0.01164120972565655;
        }
      }
    } else {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.009343204245171246938) ) ) {
        result[9] += -0.03469301438223288;
      } else {
        result[9] += 0.011080892461793114;
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
      result[9] += -0.03422544100781109;
    } else {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9029678813257829839) ) ) {
        result[9] += -0.025760014002649642;
      } else {
        result[9] += 0.045894802743364084;
      }
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
      result[10] += -0.034515103618723945;
    } else {
      result[10] += 0.03710924696258479;
    }
  } else {
    result[10] += -0.0337461848526379;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6831714853785343378) ) ) {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2285326955924526227) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.20695775318755727) ) ) {
              result[11] += 0.04668480613996099;
            } else {
              result[11] += -0.037698026874631196;
            }
          } else {
            result[11] += 0.03202870730260414;
          }
        } else {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5980132854489424998) ) ) {
            result[11] += 0.0057748912185001;
          } else {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.1473913343193578307) ) ) {
              result[11] += -0.031804617219631744;
            } else {
              result[11] += -0.0023726516074957732;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.331999447987429308) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.914166641557065507) ) ) {
            result[11] += -0.027361725189264673;
          } else {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6296020218641035227) ) ) {
              result[11] += 0.03141698428129565;
            } else {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.023658799609412418) ) ) {
                if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5975437851334178818) ) ) {
                  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.882695086255737227) ) ) {
                    result[11] += -0.011918732571067457;
                  } else {
                    result[11] += 0.03130282569550767;
                  }
                } else {
                  result[11] += -0.03749287907006954;
                }
              } else {
                result[11] += 0.022590740240400878;
              }
            }
          }
        } else {
          result[11] += 0.05232407422047353;
        }
      }
    } else {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.05689015403713557073) ) ) {
        result[11] += -0.03448925683615954;
      } else {
        if ( UNLIKELY( !(data[48].missing != -1) || (data[48].fvalue <= (double)0.3888332218721928801) ) ) {
          result[11] += 0.03581828654210345;
        } else {
          result[11] += -0.02596404814081127;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6277376571851565057) ) ) {
      if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.554464413527477662) ) ) {
        result[11] += 0.006934675741203704;
      } else {
        result[11] += -0.03365097048629752;
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02540956347415987762) ) ) {
        result[11] += -0.0331117322183216;
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2939107877510283573) ) ) {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02529546880817297796) ) ) {
              result[11] += 0.026800595357685957;
            } else {
              result[11] += 0.037882391373708295;
            }
          } else {
            if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.868347105958318988) ) ) {
              result[11] += -0.022435840699089937;
            } else {
              result[11] += 0.030558620370167006;
            }
          }
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02382476073730701097) ) ) {
            result[11] += -0.03016404047843334;
          } else {
            result[11] += 0.020931714829633408;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7962891231175072138) ) ) {
          if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2639926783377896102) ) ) {
            result[12] += 0.045564829877284455;
          } else {
            result[12] += -0.0059701862406475025;
          }
        } else {
          result[12] += -0.031461140832738044;
        }
      } else {
        result[12] += 0.06956697683672204;
      }
    } else {
      result[12] += -0.034490541538822875;
    }
  } else {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
      result[12] += 0.08013299727268745;
    } else {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.673037067109722997) ) ) {
        result[12] += -0.03463876604449922;
      } else {
        result[12] += 0.05078635782766527;
      }
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[60].missing != -1) || (data[60].fvalue <= (double)0.8646862879982027961) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02533581936195240455) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
          result[0] += 0.0003317790064588543;
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
            if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
              if ( LIKELY( !(data[44].missing != -1) || (data[44].fvalue <= (double)0.47745003686260723) ) ) {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.2523355750621312787) ) ) {
                  result[0] += -0.030507211100045856;
                } else {
                  result[0] += 0.01404754443228066;
                }
              } else {
                result[0] += 0.04097045051783088;
              }
            } else {
              result[0] += 0.02762647690820223;
            }
          } else {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
              if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[0] += 0.037209316066446375;
              } else {
                if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)0.6467499555098276121) ) ) {
                  result[0] += -0.008746189734650784;
                } else {
                  result[0] += 0.03850851417477949;
                }
              }
            } else {
              if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.04346739926095915391) ) ) {
                result[0] += -0.03054742642672129;
              } else {
                result[0] += 0.026735906651588044;
              }
            }
          }
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3265998338303161552) ) ) {
          if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.3113132420658634714) ) ) {
            result[0] += 0.02098889880305115;
          } else {
            if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6202120752500405176) ) ) {
              result[0] += -0.0019489649276648426;
            } else {
              result[0] += -0.03378231140729351;
            }
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5841630261409712643) ) ) {
              result[0] += -0.03680586631737356;
            } else {
              result[0] += 0.019649208239975825;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.17510224977385902) ) ) {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4368887279138904955) ) ) {
                if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01915940202172580417) ) ) {
                  result[0] += 0.03060768531557357;
                } else {
                  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4573588634800199171) ) ) {
                    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6295406941023361513) ) ) {
                      result[0] += -0.008597608041591806;
                    } else {
                      result[0] += 0.04280966832380841;
                    }
                  } else {
                    result[0] += -0.0038623230918792377;
                  }
                }
              } else {
                result[0] += 0.03761446169894735;
              }
            } else {
              result[0] += -0.021399331659496087;
            }
          }
        }
      }
    } else {
      result[0] += -0.03282780967023131;
    }
  } else {
    if ( UNLIKELY(  (data[16].missing != -1) && (data[16].fvalue <= (double)-0.7084573502120999899) ) ) {
      if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8274420233688559723) ) ) {
        if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227669744999093426) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8000345600721433525) ) ) {
            result[0] += 0.02404017545519669;
          } else {
            result[0] += -0.036736838882983555;
          }
        } else {
          result[0] += 0.038274762387764796;
        }
      } else {
        result[0] += -0.03030087478066675;
      }
    } else {
      if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.09589176861408833796) ) ) {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.257223684349944914) ) ) {
          result[0] += -0.034226882331753396;
        } else {
          result[0] += 0.018079831120381685;
        }
      } else {
        result[0] += 0.032018434373775745;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2855774686981291111) ) ) {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5423557276411776762) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08044689421173033261) ) ) {
            result[1] += 0.008700459182479645;
          } else {
            result[1] += -0.036766134311481166;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2741420333276946564) ) ) {
            result[1] += -0.032774457611858966;
          } else {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.08143198823565724054) ) ) {
              result[1] += 0.029862345611112173;
            } else {
              result[1] += -0.018899408271510064;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6059540274918849834) ) ) {
          result[1] += -0.03550334823202474;
        } else {
          result[1] += -0.010640140544681142;
        }
      }
    } else {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.05175232488350066384) ) ) {
          result[1] += 0.008188922602093463;
        } else {
          result[1] += 0.03695968728567538;
        }
      } else {
        result[1] += -0.03544174149463256;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288170262485434092) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
            result[1] += -0.016336514591745843;
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3372394630688034245) ) ) {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8425672530836286755) ) ) {
                result[1] += 0.03553885547203163;
              } else {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201236317724579949) ) ) {
                  result[1] += -0.013149657290926504;
                } else {
                  if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01231024356921303804) ) ) {
                    result[1] += 0.005436395892964156;
                  } else {
                    result[1] += 0.031116815443279818;
                  }
                }
              }
            } else {
              result[1] += -0.015059276556172148;
            }
          }
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.749887871896559477) ) ) {
            result[1] += -0.03627907828507536;
          } else {
            result[1] += 0.015059627216932655;
          }
        }
      } else {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.01397200046107884008) ) ) {
          if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
            result[1] += 0.027869524546269064;
          } else {
            if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.095048325145008938) ) ) {
              result[1] += 0.03596190502747814;
            } else {
              result[1] += 0.0258236838538934;
            }
          }
        } else {
          if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7946890799719572573) ) ) {
            result[1] += 0.038214017835191766;
          } else {
            result[1] += -0.0034147025629178113;
          }
        }
      }
    } else {
      result[1] += -0.03638186497663626;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.03355230231126805;
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1301196871218200934) ) ) {
      if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03902843794759941476) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          result[2] += 0.031777204819967084;
        } else {
          result[2] += -0.040143210370355606;
        }
      } else {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01011794650679558906) ) ) {
          result[2] += 0.03224238438553934;
        } else {
          result[2] += 0.07650572739648354;
        }
      }
    } else {
      result[2] += -0.03489476982156448;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.035763985066665324;
  } else {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924334254671090622) ) ) {
      result[3] += 0.03552765611372631;
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02545617531996219318) ) ) {
        result[3] += 0.03591571434456815;
      } else {
        result[3] += -0.006379188750800337;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += -0.011960295680553835;
    } else {
      result[4] += -0.03437171428675517;
    }
  } else {
    result[4] += 0.03774977406641616;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
      result[5] += 0.023532393708990528;
    } else {
      result[5] += -0.03019555982388605;
    }
  } else {
    result[5] += 0.11014504877404396;
  }
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2919728949150694475) ) ) {
    result[6] += -0.022310346023606;
  } else {
    result[6] += 0.09296139934202474;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5781007682388933366) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2688360164276515918) ) ) {
          result[7] += 0.01574844268851297;
        } else {
          result[7] += 0.03709833988687494;
        }
      } else {
        result[7] += -0.034570214766481026;
      }
    } else {
      result[7] += -0.035688092681182663;
    }
  } else {
    result[7] += -0.03446392101191459;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      result[8] += -0.03468866604211223;
    } else {
      result[8] += -0.018474473009928345;
    }
  } else {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6185950284719347048) ) ) {
      result[8] += -0.03554783805367264;
    } else {
      result[8] += 0.03452341875797109;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5906532180874056737) ) ) {
          result[9] += -0.04001722870379154;
        } else {
          result[9] += 0.030620127367847756;
        }
      } else {
        result[9] += 0.03954032285458394;
      }
    } else {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5979350353963549525) ) ) {
        result[9] += 0.03680965672912755;
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1304655573545890068) ) ) {
          result[9] += -0.016046081511680205;
        } else {
          result[9] += 0.02983410989366119;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
      result[9] += -0.034194279630125106;
    } else {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9029678813257829839) ) ) {
        result[9] += -0.025335409406052087;
      } else {
        result[9] += 0.043974659508179983;
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03372105268535499;
  } else {
    result[10] += 0.03692637216978942;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.378897720191467835) ) ) {
      if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6185896019737596729) ) ) {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.4910704069564738594) ) ) {
          result[11] += -0.03470951715301778;
        } else {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.917996666081674961) ) ) {
                    result[11] += 0.038912994669829594;
                  } else {
                    result[11] += -0.033750893963673104;
                  }
                } else {
                  result[11] += 0.04511759253755187;
                }
              } else {
                if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6252354835041725734) ) ) {
                  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)8.598007407278137393) ) ) {
                    result[11] += -0.035436286057369266;
                  } else {
                    result[11] += -0.0050675888679327236;
                  }
                } else {
                  result[11] += 0.014760359069447438;
                }
              }
            } else {
              if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9115349274719516393) ) ) {
                if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5583220308365263174) ) ) {
                  result[11] += 0.05003485072342951;
                } else {
                  result[11] += 0.026204910587476586;
                }
              } else {
                if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6290623373692068032) ) ) {
                  if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1669724685765074379) ) ) {
                    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.5550828793659357) ) ) {
                      result[11] += 0.0034070743380533127;
                    } else {
                      result[11] += -0.03573009151109123;
                    }
                  } else {
                    result[11] += 0.0182733473813568;
                  }
                } else {
                  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201588557137480695) ) ) {
                    result[11] += 0.006999312027955379;
                  } else {
                    result[11] += 0.038816902482853514;
                  }
                }
              }
            }
          } else {
            result[11] += -0.038161193634632225;
          }
        }
      } else {
        if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.02227185099121847117) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.478123614951154519) ) ) {
            result[11] += 0.0370125337311966;
          } else {
            if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.3418303218598009452) ) ) {
              if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1035613983400291566) ) ) {
                result[11] += 0.012853937071727127;
              } else {
                result[11] += -0.03671500675775824;
              }
            } else {
              result[11] += 0.04824484962564813;
            }
          }
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2088311961651241611) ) ) {
            if ( LIKELY( !(data[74].missing != -1) || (data[74].fvalue <= (double)1.174205039181480226) ) ) {
              result[11] += -0.03823804486342786;
            } else {
              result[11] += -0.004783706926416236;
            }
          } else {
            if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02530103440270330475) ) ) {
              result[11] += 0.007865178287804522;
            } else {
              result[11] += 0.050945175117703724;
            }
          }
        }
      }
    } else {
      result[11] += -0.034688897551603995;
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197649165941288008) ) ) {
        if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227669744999093426) ) ) {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6202117124377256596) ) ) {
            if ( LIKELY(  (data[37].missing != -1) && (data[37].fvalue <= (double)-0.06954895373082960186) ) ) {
              result[11] += -0.02565928650954951;
            } else {
              if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6193480160195046214) ) ) {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3102553107906722563) ) ) {
                  result[11] += 0.04115880712510438;
                } else {
                  result[11] += -0.01631322481665345;
                }
              } else {
                result[11] += 0.03887195560664623;
              }
            }
          } else {
            result[11] += 0.08513106193032954;
          }
        } else {
          result[11] += -0.03025832029906563;
        }
      } else {
        result[11] += -0.031712567045405954;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
        result[11] += -0.034412923671621194;
      } else {
        result[11] += 0.028115354306818295;
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02495735900683951694) ) ) {
      result[12] += -0.029524966727788978;
    } else {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7484337002522992721) ) ) {
        result[12] += -0.02115933589651064;
      } else {
        if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5090327079499236129) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9967767353672805086) ) ) {
            result[12] += 0.06406360317825567;
          } else {
            result[12] += 0.028643847419316786;
          }
        } else {
          result[12] += -0.01727071586511108;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2418892081941573513) ) ) {
      result[12] += 0.07718995587379188;
    } else {
      if ( LIKELY( !(data[44].missing != -1) || (data[44].fvalue <= (double)0.1565603234926292442) ) ) {
        result[12] += -0.034584481834022504;
      } else {
        result[12] += 0.05002920108090697;
      }
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9606217943037372864) ) ) {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)1.608395177546450006) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4553892674670077523) ) ) {
            result[0] += 0.012026689734517197;
          } else {
            result[0] += 0.03530430301471772;
          }
        } else {
          result[0] += -0.013265645787879792;
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.1336314989896109084) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1865619949638690211) ) ) {
            result[0] += 0.031534488410380354;
          } else {
            result[0] += 0.015212441614394601;
          }
        } else {
          result[0] += 0.03764276639742177;
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7994110553344907499) ) ) {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1585980731754384754) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02517302575184957383) ) ) {
            result[0] += 0.02727687568582492;
          } else {
            result[0] += -0.03275271419050121;
          }
        } else {
          result[0] += -0.03518144378107938;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01802123815766297488) ) ) {
          if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03925841025176524807) ) ) {
            result[0] += 0.010595864168662428;
          } else {
            result[0] += 0.03508896909639538;
          }
        } else {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201000115295597359) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3686375322916744524) ) ) {
              result[0] += 0.03325918186896293;
            } else {
              result[0] += 0.00439064511614674;
            }
          } else {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5960570341342571465) ) ) {
              if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
                result[0] += -0.013146744318197238;
              } else {
                result[0] += 0.021618301968835085;
              }
            } else {
              result[0] += -0.04617386234215488;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[16].missing != -1) && (data[16].fvalue <= (double)-0.7084573502120999899) ) ) {
      if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8274420233688559723) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)0.9527922848437607728) ) ) {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6322683652945036981) ) ) {
            result[0] += 0.013553289628158166;
          } else {
            result[0] += -0.024123392181409256;
          }
        } else {
          result[0] += 0.03790098722585219;
        }
      } else {
        result[0] += -0.029983100900754987;
      }
    } else {
      if ( LIKELY( !(data[56].missing != -1) || (data[56].fvalue <= (double)0.4784882955949184002) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
          result[0] += -0.03422681826564607;
        } else {
          result[0] += -0.00024442226185410264;
        }
      } else {
        result[0] += 0.03754997119977402;
      }
    }
  }
  if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4551668771987075757) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6285419272653612888) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
        result[1] += 0.01612870052668846;
      } else {
        if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5861387095656613866) ) ) {
          result[1] += 0.04785737529803337;
        } else {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4555383721268900787) ) ) {
              result[1] += -0.03590800192945705;
            } else {
              result[1] += -0.004754280421200583;
            }
          } else {
            if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
              result[1] += 0.029868136788008082;
            } else {
              result[1] += -0.03527289790701751;
            }
          }
        }
      }
    } else {
      result[1] += -0.03519636986038566;
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.62009096106905226) ) ) {
          if ( UNLIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.3346355916748181003) ) ) {
            result[1] += -0.012901409003119974;
          } else {
            result[1] += 0.021062156992236764;
          }
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.095048325145008938) ) ) {
            result[1] += 0.03583165294787259;
          } else {
            result[1] += 0.024236068928047822;
          }
        }
      } else {
        if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
          if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1101117135128098362) ) ) {
            if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6192526319218957243) ) ) {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1233134875523535651) ) ) {
                result[1] += 0.034847835126637174;
              } else {
                result[1] += 0.018334237391054605;
              }
            } else {
              result[1] += -0.019775231472098344;
            }
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5333210012402501699) ) ) {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146312558209061749) ) ) {
                result[1] += -0.0016867071728459539;
              } else {
                result[1] += 0.028648171351880577;
              }
            } else {
              result[1] += -0.021370768298956393;
            }
          }
        } else {
          result[1] += -0.035987008687273114;
        }
      }
    } else {
      result[1] += -0.03635634455452863;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.03349316950306405;
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1301196871218200934) ) ) {
      if ( UNLIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1446213650877447299) ) ) {
        result[2] += 0.006461322272525533;
      } else {
        if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.5086458482517627333) ) ) {
          result[2] += 0.03200756739144746;
        } else {
          result[2] += 0.07864917004063347;
        }
      }
    } else {
      result[2] += -0.03488300371079035;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.03589167234759214;
    } else {
      result[3] += 0.035758586273189764;
    }
  } else {
    result[3] += -0.0357446205919346;
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03382213675166978;
  } else {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6320649457863874998) ) ) {
      result[4] += 0.03738575296403691;
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.174084950296738983) ) ) {
        result[4] += 0.04116952176997668;
      } else {
        result[4] += -0.028573678488287294;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.4293439263737330869) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8771152857771341571) ) ) {
      result[5] += -0.034453330039776485;
    } else {
      result[5] += 0.01962863620313072;
    }
  } else {
    result[5] += 0.09917948439016433;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
    result[6] += 0.08376738984954958;
  } else {
    result[6] += -0.029789253433508602;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03926175289701309273) ) ) {
          result[7] += 0.011666496794124381;
        } else {
          result[7] += 0.03680694894885301;
        }
      } else {
        result[7] += -0.03456487653010366;
      }
    } else {
      result[7] += -0.03567342885280182;
    }
  } else {
    result[7] += -0.03446194597774106;
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
    result[8] += -0.032739278283754704;
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06502347397624902436) ) ) {
      result[8] += -0.005762530523721732;
    } else {
      result[8] += 0.036041241597102563;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3157059568068864563) ) ) {
        result[9] += 0.034763464636597095;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2741420333276946564) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
            result[9] += 0.038615995706976804;
          } else {
            result[9] += 0.011262454716789423;
          }
        } else {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6129182817967010477) ) ) {
            result[9] += 0.005217152954160428;
          } else {
            result[9] += -0.037890209577704455;
          }
        }
      }
    } else {
      result[9] += -0.027206303662493103;
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
      result[9] += -0.03416691577130763;
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
        result[9] += -0.026276290806333064;
      } else {
        result[9] += 0.01665742284290543;
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03366977044154851;
  } else {
    result[10] += 0.03675777302749382;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.302091675087780509) ) ) {
      if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6185896019737596729) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6819786066284765358) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6449313698140944906) ) ) {
            if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.626347417107540827) ) ) {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.315087423865315075) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
                  result[11] += 0.03638293689361316;
                } else {
                  result[11] += -0.020431641283401598;
                }
              } else {
                result[11] += 0.03985228101064554;
              }
            } else {
              result[11] += -0.03593414512439016;
            }
          } else {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3137111880703187805) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5114190513044379882) ) ) {
                if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7322873972955102895) ) ) {
                  result[11] += -0.0358217984487334;
                } else {
                  result[11] += 0.0010509576883484548;
                }
              } else {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7947273553862382878) ) ) {
                  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.853659311487639294) ) ) {
                    result[11] += 0.012072040543877085;
                  } else {
                    result[11] += -0.031879169796324165;
                  }
                } else {
                  result[11] += 0.01907587314820902;
                }
              }
            } else {
              if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9719597833153283961) ) ) {
                  result[11] += 0.013178745146284677;
                } else {
                  result[11] += 0.03894311501901715;
                }
              } else {
                result[11] += 0.004840596606767178;
              }
            }
          }
        } else {
          result[11] += -0.03640057258765921;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
          result[11] += -0.03637192822562604;
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02530103440270330475) ) ) {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.264236284406379196) ) ) {
              result[11] += -0.03230520705147623;
            } else {
              result[11] += 0.03555099928929822;
            }
          } else {
            result[11] += 0.036658294513711144;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.1085988587179175374) ) ) {
        result[11] += -0.03430378430234463;
      } else {
        result[11] += 0.02199657037681444;
      }
    }
  } else {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5423557276411776762) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6199390503825454868) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8466904822023296751) ) ) {
          result[11] += -0.027283064489606868;
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
            result[11] += 0.0646920541776543;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
              result[11] += -0.029841929690687323;
            } else {
              result[11] += 0.03471081012931463;
            }
          }
        }
      } else {
        result[11] += -0.03232189088268618;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[11] += -0.03447012449794564;
      } else {
        result[11] += 0.016459878103700972;
      }
    }
  }
  if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201614589695346735) ) ) {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)0.6187917260814692622) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2962559652867430837) ) ) {
            result[12] += 0.020430314627057543;
          } else {
            result[12] += -0.02396159373137807;
          }
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7899532812551076644) ) ) {
            result[12] += 0.02390889130696584;
          } else {
            result[12] += 0.0831766374611234;
          }
        }
      } else {
        result[12] += 0.07505811043612012;
      }
    } else {
      result[12] += -0.03469180097750901;
    }
  } else {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5986392858696416575) ) ) {
        result[12] += 0.05312622053574612;
      } else {
        result[12] += -0.0005391173105663937;
      }
    } else {
      result[12] += -0.03259069612279661;
    }
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.5847349523888909495) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1560695414882870835) ) ) {
              if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200830786584831111) ) ) {
                result[0] += 0.03413651426146213;
              } else {
                result[0] += -0.026489798422427883;
              }
            } else {
              result[0] += -0.03732226373356283;
            }
          } else {
            result[0] += 0.03724802832292484;
          }
        } else {
          result[0] += -0.034265025283648276;
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
            if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.05152091815172846201) ) ) {
              result[0] += -0.034951493365950805;
            } else {
              result[0] += -0.08312045079116041;
            }
          } else {
            if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01602270079496645114) ) ) {
              result[0] += -0.016558645398825504;
            } else {
              result[0] += 0.02303748171116361;
            }
          }
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02540956347415987762) ) ) {
              result[0] += 0.03870461346334179;
            } else {
              if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1255854155279650664) ) ) {
                result[0] += 0.033917104173329805;
              } else {
                result[0] += -0.03569484136581332;
              }
            }
          } else {
            result[0] += -0.0333156469935971;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
        if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.7100203464206704673) ) ) {
          result[0] += 0.03730331557687243;
        } else {
          result[0] += 0.016182894236455015;
        }
      } else {
        if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01611584235836580406) ) ) {
          result[0] += 0.036015951498887276;
        } else {
          result[0] += -0.02216752383349192;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)2.81764075380878376) ) ) {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8125319923846624492) ) ) {
          result[0] += 0.00018727302637779432;
        } else {
          result[0] += -0.03730598143047705;
        }
      } else {
        result[0] += 0.03290017627686638;
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02481126217740968823) ) ) {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5984827857644668958) ) ) {
          result[0] += 0.016498790606071366;
        } else {
          result[0] += 0.03678403622590358;
        }
      } else {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7882889073897575427) ) ) {
          result[0] += -0.03300659654897036;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.21812675287692751) ) ) {
            if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041841056122270182) ) ) {
              result[0] += 0.035265310396402856;
            } else {
              if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2078465082356344695) ) ) {
                if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.333338310990991538) ) ) {
                  result[0] += 0.03002914748131704;
                } else {
                  result[0] += -0.006745622620850088;
                }
              } else {
                result[0] += 0.03664236592699969;
              }
            }
          } else {
            result[0] += -0.029752298905658624;
          }
        }
      }
    }
  }
  if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4551668771987075757) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6285419272653612888) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
        result[1] += 0.01579628009422248;
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.315620908527420363) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
              result[1] += 0.02708541202672194;
            } else {
              result[1] += -0.01488676434798975;
            }
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
              result[1] += -0.038488504962769315;
            } else {
              result[1] += -0.0024593307687277403;
            }
          }
        } else {
          result[1] += -0.03594762588924753;
        }
      }
    } else {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3130539968198992051) ) ) {
        result[1] += -0.03533998428549487;
      } else {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.4334140450164167269) ) ) {
          result[1] += -0.03680489421787518;
        } else {
          result[1] += 0.006824004670973371;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
        if ( LIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2903175272918419592) ) ) {
          if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6040665186039134715) ) ) {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7140394947178604346) ) ) {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6449313698140944906) ) ) {
                result[1] += -0.030585280550553335;
              } else {
                if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1676582117311516129) ) ) {
                  result[1] += 0.03347039668151758;
                } else {
                  result[1] += 0.004679650605166955;
                }
              }
            } else {
              result[1] += -0.026669344492439708;
            }
          } else {
            if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6192526319218957243) ) ) {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6355114499862949407) ) ) {
                result[1] += 0.03501665396899537;
              } else {
                result[1] += 0.006639302325519409;
              }
            } else {
              result[1] += -0.019390340417337386;
            }
          }
        } else {
          result[1] += -0.03571514604552802;
        }
      } else {
        if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.07940020288635397938) ) ) {
          if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.554464413527477662) ) ) {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7656308030195185799) ) ) {
              result[1] += 0.03475909602434072;
            } else {
              result[1] += -0.03591604675300368;
            }
          } else {
            result[1] += 0.03541858652833533;
          }
        } else {
          if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
            result[1] += -0.01434551637660803;
          } else {
            result[1] += 0.03698901442862793;
          }
        }
      }
    } else {
      result[1] += -0.03626880748080059;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.03342925915679786;
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1301196871218200934) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924095673946937507) ) ) {
          result[2] += -0.009155797757385864;
        } else {
          result[2] += 0.049819008081803784;
        }
      } else {
        if ( UNLIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
          result[2] += -0.039901579336178036;
        } else {
          result[2] += 0.04095314904711939;
        }
      }
    } else {
      result[2] += -0.03486971734949064;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.03561691782290606;
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02548539468759894108) ) ) {
      result[3] += 0.035300169756859553;
    } else {
      if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2688347994718709444) ) ) {
        result[3] += 0.035709887739326936;
      } else {
        result[3] += -0.007300174944447624;
      }
    }
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.0337745376325311;
  } else {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6320649457863874998) ) ) {
      result[4] += 0.03720014554218875;
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.174084950296738983) ) ) {
        result[4] += 0.04057651208072825;
      } else {
        result[4] += -0.02787933167768906;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      result[5] += 0.025593692994910426;
    } else {
      result[5] += -0.03443579920272635;
    }
  } else {
    result[5] += 0.09734253150440124;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701102284419148958) ) ) {
    result[6] += 0.07590391917186763;
  } else {
    result[6] += -0.03446135047977338;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5781007682388933366) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02551113555610100975) ) ) {
        result[7] += 0.009053897471470876;
      } else {
        result[7] += 0.033222671279652886;
      }
    } else {
      result[7] += -0.03564850434862697;
    }
  } else {
    result[7] += -0.034460089745641624;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    result[8] += -0.030932740545380217;
  } else {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6185950284719347048) ) ) {
      result[8] += -0.035581387138490524;
    } else {
      result[8] += 0.03409141321102415;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3157059568068864563) ) ) {
        result[9] += 0.03436358995455976;
      } else {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6285419272653612888) ) ) {
          result[9] += -0.015393988909142835;
        } else {
          if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3988745145851049778) ) ) {
            result[9] += 0.0319173134304674;
          } else {
            result[9] += 0.012679855178753112;
          }
        }
      }
    } else {
      result[9] += -0.02623319270803967;
    }
  } else {
    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.776827447740879196) ) ) {
      result[9] += -0.034118831727329296;
    } else {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7594881307698589934) ) ) {
        result[9] += -0.017724475688840897;
      } else {
        result[9] += 0.018390863744386025;
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.033614663251847955;
  } else {
    result[10] += 0.03659619349562534;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.258155518086436997) ) ) {
        if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6040399772596840577) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02531912258127940255) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
              result[11] += 0.011923925567771831;
            } else {
              result[11] += -0.02426323817712872;
            }
          } else {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03699419415973542735) ) ) {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4264597851092459257) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958436495131647692) ) ) {
                  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9027101705577952329) ) ) {
                    result[11] += 0.018468129074808385;
                  } else {
                    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8726866532902503026) ) ) {
                      result[11] += -0.002780136680790076;
                    } else {
                      result[11] += -0.03394160307486251;
                    }
                  }
                } else {
                  result[11] += 0.037798718993543666;
                }
              } else {
                result[11] += -0.006958113095142672;
              }
            } else {
              result[11] += 0.04025356300533799;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7679533710113547462) ) ) {
            result[11] += -0.02764462746776141;
          } else {
            if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.004869799368626962464) ) ) {
              result[11] += -0.016270818095625035;
            } else {
              result[11] += 0.03530410178196969;
            }
          }
        }
      } else {
        result[11] += -0.03455743800317802;
      }
    } else {
      if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1407910841014318182) ) ) {
        if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039579944366416653) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
            result[11] += 0.03724790515942782;
          } else {
            if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.4662064060011050226) ) ) {
              result[11] += -0.008812122858361552;
            } else {
              result[11] += 0.038000276092015256;
            }
          }
        } else {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)2.286728536549295754) ) ) {
            result[11] += -0.019121176255130188;
          } else {
            result[11] += 0.02238328028469976;
          }
        }
      } else {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1143841639192145349) ) ) {
          if ( UNLIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[11] += 0.01529248216563244;
          } else {
            result[11] += -0.035018029359576146;
          }
        } else {
          result[11] += 0.019600765465238302;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197649165941288008) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6202117124377256596) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.8332800480592780223) ) ) {
              result[11] += -0.02620167142195552;
            } else {
              result[11] += 0.024260838162992533;
            }
          } else {
            result[11] += 0.07650425535839965;
          }
        } else {
          result[11] += -0.029648641132934857;
        }
      } else {
        result[11] += -0.03134017044826551;
      }
    } else {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8705055938363247536) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[11] += -0.033073693446375584;
        } else {
          result[11] += 0.02133353848045196;
        }
      } else {
        result[11] += -0.034516707255785505;
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5423557276411776762) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7962891231175072138) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041152239957219283) ) ) {
            result[12] += 0.009954090164083986;
          } else {
            result[12] += 0.053139943377268205;
          }
        } else {
          result[12] += -0.030397892087332873;
        }
      } else {
        result[12] += 0.06306195634628546;
      }
    } else {
      result[12] += -0.030248413919526353;
    }
  } else {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
      result[12] += 0.07762572686932671;
    } else {
      if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)1.774501377336551444) ) ) {
        result[12] += -0.034569985176634475;
      } else {
        result[12] += 0.04418449903014758;
      }
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
        result[0] += -0.00020347576366034674;
      } else {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8179725024608467399) ) ) {
          result[0] += -0.00474436090670378;
        } else {
          if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.0298799485615789083) ) ) {
            if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.02474108230019015503) ) ) {
              result[0] += 0.03656238067374379;
            } else {
              result[0] += 0.015786236412498152;
            }
          } else {
            result[0] += 0.0036805098865000893;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3265998338303161552) ) ) {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4669522501553799443) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02517302575184957383) ) ) {
            result[0] += 0.026318172705136395;
          } else {
            if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1714086051218906004) ) ) {
              result[0] += -0.03433748584788276;
            } else {
              result[0] += 0.007135652010880633;
            }
          }
        } else {
          result[0] += -0.03468871293386266;
        }
      } else {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.247040140504424688) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5333210012402501699) ) ) {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
                result[0] += 0.029838002184823353;
              } else {
                result[0] += -0.02235919515722966;
              }
            } else {
              if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201000115295597359) ) ) {
                result[0] += 0.02771768431220265;
              } else {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6895943413068069683) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.460158264474811507) ) ) {
                    result[0] += -0.02019270950817951;
                  } else {
                    result[0] += 0.0135969937782955;
                  }
                } else {
                  result[0] += 0.02036031229981796;
                }
              }
            }
          } else {
            result[0] += -0.03875856748596309;
          }
        } else {
          result[0] += 0.034488203369833687;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)2.121444108164863618) ) ) {
          if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
              result[0] += 0.018213919912600737;
            } else {
              result[0] += -0.035528378316164434;
            }
          } else {
            result[0] += -0.03794390330396086;
          }
        } else {
          result[0] += 0.026738893294366586;
        }
      } else {
        result[0] += 0.033770940221811804;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( LIKELY( !(data[54].missing != -1) || (data[54].fvalue <= (double)0.2559968514238858961) ) ) {
          result[0] += -0.03419250900246937;
        } else {
          result[0] += 0.05357071090642465;
        }
      } else {
        result[0] += 0.01324902848545647;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2418892081941573513) ) ) {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5423557276411776762) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5912475240206701566) ) ) {
            result[1] += 0.048345755152892175;
          } else {
            result[1] += -0.03471731674992202;
          }
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5414388684968288734) ) ) {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3148322790269169058) ) ) {
              result[1] += 0.0036269778855222215;
            } else {
              result[1] += 0.04459676578856359;
            }
          } else {
            result[1] += -0.020835611601775245;
          }
        }
      } else {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6059540274918849834) ) ) {
          result[1] += -0.035239769020650714;
        } else {
          result[1] += -0.008896658122916524;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[1] += 0.0366472854895299;
      } else {
        result[1] += -0.03537766878027995;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.03682055016614766557) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.095048325145008938) ) ) {
            result[1] += 0.03563969285021688;
          } else {
            result[1] += 0.023885759889174296;
          }
        } else {
          if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
            result[1] += 0.0057911844971343185;
          } else {
            result[1] += 0.036503302267467154;
          }
        }
      } else {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288170262485434092) ) ) {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.2530638695429184293) ) ) {
            result[1] += -0.016909883320701112;
          } else {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
              result[1] += -0.0437852375841596;
            } else {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.020034280071924648) ) ) {
                result[1] += 0.03355301517996049;
              } else {
                if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3874430536939720837) ) ) {
                  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
                    result[1] += 0.03120641348304961;
                  } else {
                    result[1] += -0.023964331141965504;
                  }
                } else {
                  result[1] += -0.01848194594791257;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.08201324216078208218) ) ) {
            result[1] += -0.036242234910983516;
          } else {
            result[1] += 0.025204567296961185;
          }
        }
      }
    } else {
      result[1] += -0.036125507035990954;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.033359984098917106;
  } else {
    if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5372318930257430347) ) ) {
      if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.2790205473476042308) ) ) {
        result[2] += 0.03249388778397959;
      } else {
        result[2] += 0.0668572955361116;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.167610424443836864) ) ) {
          result[2] += 0.0392566737591181;
        } else {
          result[2] += -0.024937317177877356;
        }
      } else {
        result[2] += -0.039318628045498155;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.03555152823743291;
  } else {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924334254671090622) ) ) {
      result[3] += 0.035189395206048184;
    } else {
      if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2688347994718709444) ) ) {
        result[3] += 0.035626162327851305;
      } else {
        result[3] += -0.007313704675940362;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += -0.008543021804748764;
    } else {
      result[4] += -0.03433275867024318;
    }
  } else {
    result[4] += 0.03710410222991804;
  }
  if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.446200516777080558) ) ) {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
      result[5] += 0.02562272674473692;
    } else {
      result[5] += -0.03444899015977423;
    }
  } else {
    result[5] += 0.09540247389396964;
  }
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2919728949150694475) ) ) {
    result[6] += -0.021850177923208706;
  } else {
    result[6] += 0.0890727288912681;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5781007682388933366) ) ) {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1347761554651697169) ) ) {
          result[7] += 0.009383114443559831;
        } else {
          result[7] += 0.03646497908790517;
        }
      } else {
        result[7] += -0.0345418111268019;
      }
    } else {
      result[7] += -0.03556264642519993;
    }
  } else {
    result[7] += -0.034458357859260186;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
      result[8] += -0.03611691908697167;
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[8] += -0.03444351320243651;
      } else {
        result[8] += 0.047665092747539425;
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
      result[8] += -0.02104571889165295;
    } else {
      result[8] += 0.03526968488543977;
    }
  }
  if ( UNLIKELY(  (data[15].missing != -1) && (data[15].fvalue <= (double)-2.054472537641003349) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5979350353963549525) ) ) {
        result[9] += 0.03395362299067594;
      } else {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7674883464976085534) ) ) {
          result[9] += -0.015618044311220351;
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
            result[9] += 0.032241261375230784;
          } else {
            result[9] += 0.010892742224357035;
          }
        }
      }
    } else {
      result[9] += -0.02657136236745999;
    }
  } else {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
        result[9] += -0.03452593708431817;
      } else {
        result[9] += 0.01408834361710084;
      }
    } else {
      result[9] += -0.0340770842766933;
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[10] += 0.0331423620637662;
  } else {
    result[10] += -0.033524097756496264;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039579944366416653) ) ) {
      if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042823613835200947) ) ) {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.107751703712507974) ) ) {
            if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5977002852385927545) ) ) {
              result[11] += -0.02298405859913063;
            } else {
              if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03060204289636085304) ) ) {
                result[11] += 0.021289796068844576;
              } else {
                result[11] += 0.049312679372863794;
              }
            }
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.331999447987429308) ) ) {
              result[11] += -0.03640281179969416;
            } else {
              result[11] += 0.011963939803850595;
            }
          }
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2386290206253246782) ) ) {
            result[11] += -0.035537284484981044;
          } else {
            result[11] += 0.00011242820657837656;
          }
        }
      } else {
        if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01054671255394320183) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3629355586676100143) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.051689767643777529) ) ) {
              result[11] += -0.03727401875847704;
            } else {
              result[11] += 0.006192265582264738;
            }
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
              result[11] += 0.039162546724094804;
            } else {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3562482570732720677) ) ) {
                result[11] += -0.0015950392077889856;
              } else {
                if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8476189931579628523) ) ) {
                  result[11] += 0.039208740835223736;
                } else {
                  result[11] += 0.0005665739357362707;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.478123614951154519) ) ) {
            result[11] += 0.03610217567011397;
          } else {
            if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1744483229498246801) ) ) {
              result[11] += -0.016605538983477306;
            } else {
              result[11] += 0.04766621111320205;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4546363280872787738) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02427139961301502322) ) ) {
          result[11] += -0.0327124411727381;
        } else {
          result[11] += 0.0335106773688358;
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[11] += -0.03373975469204494;
        } else {
          result[11] += 0.018500415801023032;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6199390503825454868) ) ) {
        if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227669744999093426) ) ) {
          if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201625265091686989) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.263330600145739391) ) ) {
              result[11] += -0.02363816927888186;
            } else {
              result[11] += 0.024604624122747023;
            }
          } else {
            result[11] += 0.07713721966240736;
          }
        } else {
          result[11] += -0.02900667845953785;
        }
      } else {
        result[11] += -0.03124690060037656;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
        result[11] += -0.03435216778309101;
      } else {
        result[11] += 0.02549014460438733;
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5423557276411776762) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7962891231175072138) ) ) {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.620077379135867246) ) ) {
            result[12] += 0.0005997510782878067;
          } else {
            result[12] += 0.05000210632975782;
          }
        } else {
          result[12] += -0.030186386196635842;
        }
      } else {
        result[12] += 0.05932582194329832;
      }
    } else {
      result[12] += -0.03000821944227481;
    }
  } else {
    if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2418892081941573513) ) ) {
      result[12] += 0.07470437833899635;
    } else {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.673037067109722997) ) ) {
        result[12] += -0.03458774484633941;
      } else {
        result[12] += 0.04882804565480251;
      }
    }
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.06899662408387258195) ) ) {
          if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2443503138412122799) ) ) {
            result[0] += -0.026983693294920764;
          } else {
            result[0] += 0.017952544435204946;
          }
        } else {
          result[0] += 0.031856859139056504;
        }
      } else {
        if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.03452639396208367;
        } else {
          result[0] += 0.03026608054803925;
        }
      }
    } else {
      if ( LIKELY( !(data[93].missing != -1) || (data[93].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6202093014700189588) ) ) {
            result[0] += 0.026389386795385994;
          } else {
            result[0] += 0.0035817783917948967;
          }
        } else {
          if ( LIKELY( !(data[72].missing != -1) || (data[72].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5040349722914664321) ) ) {
              result[0] += -0.03146914488924002;
            } else {
              result[0] += -0.08042840137786476;
            }
          } else {
            result[0] += 0.005211074397870361;
          }
        }
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
            result[0] += 0.03684938661408524;
          } else {
            result[0] += -0.03987337143174507;
          }
        } else {
          result[0] += 0.03666958585628039;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02481126217740968823) ) ) {
      if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3139199429380991613) ) ) {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.628964212935660183) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5984827857644668958) ) ) {
            result[0] += 0.014291740347037136;
          } else {
            result[0] += 0.0335195783129297;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[0] += -0.014438034856158171;
          } else {
            result[0] += 0.036560026341642;
          }
        }
      } else {
        result[0] += 0.036759906164661516;
      }
    } else {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7882889073897575427) ) ) {
        result[0] += -0.032930084011048744;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.247040140504424688) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3534483363738425976) ) ) {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3129766802022028171) ) ) {
              result[0] += -0.03649468282851221;
            } else {
              result[0] += 0.017365108469601084;
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.646642341910059759) ) ) {
              result[0] += 0.04766304258500238;
            } else {
              if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03858425638752763925) ) ) {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.3750052716748266124) ) ) {
                  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.5672297815236728713) ) ) {
                    if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6895943413068069683) ) ) {
                      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8032245890019948931) ) ) {
                        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.967100460814494856) ) ) {
                          result[0] += -0.02037579858881129;
                        } else {
                          result[0] += 0.026850011680175465;
                        }
                      } else {
                        result[0] += -0.022038002445905754;
                      }
                    } else {
                      result[0] += 0.04979258227552898;
                    }
                  } else {
                    result[0] += -0.01548727681308821;
                  }
                } else {
                  result[0] += 0.04163711991018238;
                }
              } else {
                result[0] += 0.030952052401274015;
              }
            }
          }
        } else {
          result[0] += -0.038321000577064605;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2418892081941573513) ) ) {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5423557276411776762) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5861387095656613866) ) ) {
            result[1] += 0.04614055976083365;
          } else {
            result[1] += -0.03445108036836366;
          }
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.749887871896559477) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
              result[1] += 0.043130531005319585;
            } else {
              result[1] += -0.035395629345994314;
            }
          } else {
            result[1] += -0.020106056860259916;
          }
        }
      } else {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6059540274918849834) ) ) {
          result[1] += -0.03517731058130839;
        } else {
          result[1] += -0.008728687192943023;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[1] += 0.03650945659381897;
      } else {
        result[1] += -0.03544280126485545;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
        if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9813908915340151529) ) ) {
          result[1] += -0.030880802233091365;
        } else {
          if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7494567179442497284) ) ) {
            if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03922309542579623109) ) ) {
              result[1] += 0.01059696817828825;
            } else {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201737123609286639) ) ) {
                result[1] += 0.007888023428352823;
              } else {
                result[1] += 0.03362166162118479;
              }
            }
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8554729914032211946) ) ) {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6355114499862949407) ) ) {
                if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.1212331499394097012) ) ) {
                  result[1] += -0.009313769400770805;
                } else {
                  result[1] += 0.04022170496541176;
                }
              } else {
                result[1] += -0.013240156440695637;
              }
            } else {
              result[1] += -0.022543762870532086;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3475211658439765761) ) ) {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.472154288159255087) ) ) {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
              result[1] += -0.03574038970466642;
            } else {
              result[1] += -0.004231032222000414;
            }
          } else {
            result[1] += 0.02704640572986791;
          }
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2984566193988150151) ) ) {
            result[1] += 0.03573581530973961;
          } else {
            if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.4035966054333003372) ) ) {
              result[1] += -0.011144839109040147;
            } else {
              result[1] += -0.039094422397338915;
            }
          }
        }
      }
    } else {
      result[1] += 0.03526048957739162;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.033288316756714606;
  } else {
    if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.4814898021264421568) ) ) {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
        result[2] += 0.01986787611549093;
      } else {
        result[2] += 0.04816181246096709;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01056532162808332398) ) ) {
          result[2] += -0.008524073645703664;
        } else {
          result[2] += 0.046728254987379925;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9080277907525359238) ) ) {
          result[2] += -0.03989215353197543;
        } else {
          result[2] += 0.01097229332906917;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.035712317008837646;
    } else {
      result[3] += 0.035505700572681494;
    }
  } else {
    result[3] += -0.03555963361558897;
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03366888699731483;
  } else {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6320649457863874998) ) ) {
      result[4] += 0.036801552658261995;
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.174084950296738983) ) ) {
        result[4] += 0.04059975772600258;
      } else {
        result[4] += -0.027152007243250214;
      }
    }
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01569670532306870897) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
      result[5] += 0.014313069834215519;
    } else {
      result[5] += -0.03444024820756127;
    }
  } else {
    result[5] += 0.08325682987777834;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
    result[6] += 0.07624796575099083;
  } else {
    result[6] += -0.029440782296123378;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
        if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2688360813320080367) ) ) {
          result[7] += 0.008634476663574038;
        } else {
          result[7] += 0.03612261685173745;
        }
      } else {
        result[7] += -0.03453487276273549;
      }
    } else {
      result[7] += -0.03558549398417585;
    }
  } else {
    result[7] += -0.03445673302801906;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    result[8] += -0.03054789280808638;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
      result[8] += -0.020378594282045585;
    } else {
      result[8] += 0.03504285259152584;
    }
  }
  if ( UNLIKELY(  (data[16].missing != -1) && (data[16].fvalue <= (double)-1.814498247123407682) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5562390217258844638) ) ) {
        result[9] += -0.03270376668009788;
      } else {
        result[9] += 0.017013582844525917;
      }
    } else {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5979350353963549525) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4900450642267554779) ) ) {
          result[9] += 0.04002122268880763;
        } else {
          result[9] += 0.02745370748143768;
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1304655573545890068) ) ) {
          result[9] += -0.014380209667551696;
        } else {
          result[9] += 0.028238731669669972;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
      result[9] += -0.03405572771313587;
    } else {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9029678813257829839) ) ) {
        result[9] += -0.024073421447682077;
      } else {
        result[9] += 0.0463752404082901;
      }
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[10] += 0.03285973942814853;
  } else {
    result[10] += -0.03346108169747803;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.339450912986019482) ) ) {
      if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6185896019737596729) ) ) {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.4910704069564738594) ) ) {
          result[11] += -0.03467667984574182;
        } else {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
                if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7722884759342584227) ) ) {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2285326955924526227) ) ) {
                    result[11] += -0.034152007482442834;
                  } else {
                    result[11] += 0.026173051749274395;
                  }
                } else {
                  result[11] += 0.039898278419870176;
                }
              } else {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.612309128331080865) ) ) {
                  result[11] += -0.030860956030650994;
                } else {
                  result[11] += 0.009356425662737847;
                }
              }
            } else {
              if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7802886916620078717) ) ) {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.38455922686716143) ) ) {
                  result[11] += 0.04890091686917649;
                } else {
                  result[11] += 0.02252163304238312;
                }
              } else {
                if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6290623373692068032) ) ) {
                  if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1669724685765074379) ) ) {
                    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.150219385902742975) ) ) {
                      result[11] += -0.005521889506130323;
                    } else {
                      result[11] += -0.04176381972847956;
                    }
                  } else {
                    result[11] += 0.016453343819071826;
                  }
                } else {
                  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201588557137480695) ) ) {
                    result[11] += 0.005160096908464629;
                  } else {
                    result[11] += 0.03571615683351544;
                  }
                }
              }
            }
          } else {
            result[11] += -0.0382695844911037;
          }
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
          result[11] += -0.03406773165212115;
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.478123614951154519) ) ) {
            result[11] += 0.03627935969222756;
          } else {
            if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.868347105958318988) ) ) {
              result[11] += -0.03497176711657045;
            } else {
              result[11] += 0.034451027759278406;
            }
          }
        }
      }
    } else {
      result[11] += -0.03465151360987462;
    }
  } else {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197649165941288008) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.263330600145739391) ) ) {
            result[11] += -0.02502417976381785;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.7787446162137746652) ) ) {
              result[11] += 0.056105395861135374;
            } else {
              result[11] += 0.01346291392698002;
            }
          }
        } else {
          result[11] += -0.028760417235220853;
        }
      } else {
        result[11] += -0.030887741406080672;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
        result[11] += -0.03432898575852786;
      } else {
        result[11] += 0.02419729982370966;
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02495735900683951694) ) ) {
      result[12] += -0.028438449081679997;
    } else {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7484337002522992721) ) ) {
        result[12] += -0.018945446460484613;
      } else {
        if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.208350164429066953) ) ) {
          if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7978891662630570591) ) ) {
            result[12] += 0.06300917527569212;
          } else {
            result[12] += 0.02411343633282997;
          }
        } else {
          result[12] += -0.004736192189594485;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
      result[12] += 0.0753695092525363;
    } else {
      if ( LIKELY( !(data[44].missing != -1) || (data[44].fvalue <= (double)0.1565603234926292442) ) ) {
        result[12] += -0.034581579814828026;
      } else {
        result[12] += 0.044096822477495204;
      }
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3423031251068559544) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02533581936195240455) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
          result[0] += -0.00014138269606902537;
        } else {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8179725024608467399) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9547384627961618131) ) ) {
              result[0] += -0.0431431105615922;
            } else {
              result[0] += 0.0197277205684851;
            }
          } else {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9941897295049778593) ) ) {
              result[0] += 0.020962849063956315;
            } else {
              result[0] += 0.03587083199115619;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7994110553344907499) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02521685480184570824) ) ) {
            result[0] += 0.0032003547004465166;
          } else {
            result[0] += -0.031616711810065166;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.07527104776725539181) ) ) {
              result[0] += -0.03737943262566313;
            } else {
              result[0] += 0.0018008847299540711;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.17510224977385902) ) ) {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4335909216033792535) ) ) {
                if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1650206269940382164) ) ) {
                  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3820048534398107765) ) ) {
                    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
                      result[0] += 0.03926303002234457;
                    } else {
                      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3139199429380991613) ) ) {
                        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.692422073182121789) ) ) {
                          result[0] += -0.03879829119516869;
                        } else {
                          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4573588634800199171) ) ) {
                            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.333338310990991538) ) ) {
                              result[0] += 0.06551723512741875;
                            } else {
                              result[0] += 0.012750093134921746;
                            }
                          } else {
                            result[0] += -0.03913807190948409;
                          }
                        }
                      } else {
                        result[0] += 0.06781133087896507;
                      }
                    }
                  } else {
                    result[0] += -0.009798273481702318;
                  }
                } else {
                  result[0] += 0.03576313083724284;
                }
              } else {
                result[0] += 0.035364937117951536;
              }
            } else {
              result[0] += -0.018129445432369967;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02545617531996219318) ) ) {
        if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.2298094027208241463) ) ) {
          result[0] += 0.03840268714728097;
        } else {
          if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01609019468156977842) ) ) {
            result[0] += 0.02832565807492917;
          } else {
            result[0] += -0.05048544702131133;
          }
        }
      } else {
        if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5113894899662191351) ) ) {
          result[0] += 0.006730887983255694;
        } else {
          if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.5778375638163874006) ) ) {
            result[0] += -0.03436745265344062;
          } else {
            result[0] += 8.355468115100556e-05;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8274420233688559723) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.129773891082942239) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
            if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02529546880817297796) ) ) {
              result[0] += 0.026267829605095997;
            } else {
              result[0] += -0.006605469995451798;
            }
          } else {
            result[0] += 0.03825052435608235;
          }
        } else {
          result[0] += -0.027968355954723932;
        }
      } else {
        if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1330352348613025315) ) ) {
          result[0] += -0.034544109210274225;
        } else {
          result[0] += 0.0008814916132031225;
        }
      }
    } else {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01235643288758264853) ) ) {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.072559415731658028) ) ) {
          if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.09428961919522943491) ) ) {
            result[0] += -0.034135789386599294;
          } else {
            result[0] += 0.00040780461562643405;
          }
        } else {
          result[0] += 0.013250175593048585;
        }
      } else {
        result[0] += 0.03887120841460682;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2418892081941573513) ) ) {
      if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.051689767643777529) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5861387095656613866) ) ) {
            result[1] += 0.04406960182398769;
          } else {
            result[1] += -0.03604567626587276;
          }
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.749887871896559477) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
              result[1] += 0.04232510412143378;
            } else {
              result[1] += -0.03518027508478987;
            }
          } else {
            result[1] += -0.019758565250832978;
          }
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02362370367465634058) ) ) {
          result[1] += -0.03504884380981055;
        } else {
          result[1] += 0.0007266734281158291;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[1] += 0.03640256648888541;
      } else {
        result[1] += -0.035377870980991724;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
        if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4850921819328771201) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6200601990719807333) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.019027515791543579) ) ) {
              result[1] += 0.00978362073683777;
            } else {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8425672530836286755) ) ) {
                result[1] += -0.005877150377175933;
              } else {
                result[1] += -0.02356728337769951;
              }
            }
          } else {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6033696181219915244) ) ) {
              if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01814955373264689684) ) ) {
                result[1] += 0.03464866454810272;
              } else {
                result[1] += 0.013876167588988108;
              }
            } else {
              result[1] += -0.004538517474953725;
            }
          }
        } else {
          result[1] += 0.034019401398533954;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.255857088039638914) ) ) {
          result[1] += 0.035609190735780435;
        } else {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.4239261289540273148) ) ) {
            result[1] += 0.0017279071493230803;
          } else {
            result[1] += -0.03582261959172885;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.25444770141758899) ) ) {
        result[1] += 0.03546467198006269;
      } else {
        result[1] += 0.026647011020433948;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
    result[2] += -0.03309946563730823;
  } else {
    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5434823061206194295) ) ) {
      if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5372318930257430347) ) ) {
        if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.2790205473476042308) ) ) {
          result[2] += 0.03556190626551817;
        } else {
          result[2] += 0.07186925304553701;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924095673946937507) ) ) {
            result[2] += -0.007990335226891453;
          } else {
            if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1334490118944302306) ) ) {
              result[2] += 0.051377725787236476;
            } else {
              result[2] += 0.00974048290858977;
            }
          }
        } else {
          result[2] += -0.0391603741416102;
        }
      }
    } else {
      result[2] += -0.03464050041849744;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.035662768507172836;
    } else {
      result[3] += 0.03543180795453816;
    }
  } else {
    result[3] += -0.03550117205112638;
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.631613573303760778) ) ) {
      result[4] += -0.011253812779590764;
    } else {
      result[4] += -0.03412538988657775;
    }
  } else {
    result[4] += 0.03674930769340204;
  }
  if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.446200516777080558) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      result[5] += 0.024314962393764784;
    } else {
      result[5] += -0.034449644495606106;
    }
  } else {
    result[5] += 0.08858067780137034;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701102284419148958) ) ) {
    result[6] += 0.0701702108610092;
  } else {
    result[6] += -0.03446315506963162;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02538590970105345304) ) ) {
            result[7] += -0.012298471458321976;
          } else {
            result[7] += 0.030849653454173894;
          }
        } else {
          result[7] += 0.03648255685563154;
        }
      } else {
        result[7] += -0.034528378826039534;
      }
    } else {
      result[7] += -0.03546255475545225;
    }
  } else {
    result[7] += -0.03445520732883491;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      result[8] += -0.03462950457354501;
    } else {
      if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619621763013154303) ) ) {
        result[8] += -0.03903828100214232;
      } else {
        result[8] += 0.05274298405467891;
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
      result[8] += -0.0196894670195282;
    } else {
      result[8] += 0.034909619664674554;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4147085694846170401) ) ) {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146312558209061749) ) ) {
          result[9] += -0.012168347655140086;
        } else {
          result[9] += 0.03488504828942094;
        }
      } else {
        result[9] += -0.0345283201774418;
      }
    } else {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7802886916620078717) ) ) {
        result[9] += 0.032752191071284416;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          if ( LIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1446416671780691998) ) ) {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7674883464976085534) ) ) {
              result[9] += -0.0033811000216984375;
            } else {
              result[9] += 0.045642565493030154;
            }
          } else {
            result[9] += -0.03981186580942252;
          }
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
            result[9] += 0.051146977124987655;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.372312288093680221) ) ) {
              result[9] += -0.03661271152388912;
            } else {
              result[9] += 0.013693331652693694;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.009948946672610719036) ) ) {
      result[9] += -0.03400208794872578;
    } else {
      result[9] += -0.0019147267284582085;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.033434185115584734;
  } else {
    result[10] += 0.036203893579225335;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.378897720191467835) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6277376571851565057) ) ) {
        if ( LIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.09979512706516223408) ) ) {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03699419415973542735) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
                  result[11] += 0.03372079761905157;
                } else {
                  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201071120240950751) ) ) {
                    result[11] += -0.03710087575210715;
                  } else {
                    result[11] += 0.03845739813442021;
                  }
                }
              } else {
                result[11] += -0.030487095702106233;
              }
            } else {
              if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030506379206562739) ) ) {
                if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7433491192657605273) ) ) {
                  result[11] += 0.041317849931226926;
                } else {
                  if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042670693850009656) ) ) {
                    result[11] += -0.036851334241684894;
                  } else {
                    result[11] += 0.008537300619659797;
                  }
                }
              } else {
                result[11] += 0.050169902613137515;
              }
            }
          } else {
            result[11] += 0.040922663972853865;
          }
        } else {
          result[11] += -0.03423080415773549;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5711888656457729807) ) ) {
            result[11] += 0.004640797245880872;
          } else {
            result[11] += -0.03401003420510625;
          }
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
              result[11] += 0.03636280559276003;
            } else {
              if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[11] += -0.03476150608269692;
              } else {
                result[11] += 0.04294817484923343;
              }
            }
          } else {
            if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02382476073730701097) ) ) {
              result[11] += -0.026749653579518237;
            } else {
              result[11] += 0.019095236343680197;
            }
          }
        }
      }
    } else {
      result[11] += -0.03463889257513048;
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6199390503825454868) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.277331842728165245) ) ) {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6202117124377256596) ) ) {
            if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6193480160195046214) ) ) {
              result[11] += -0.002762282881303761;
            } else {
              result[11] += 0.03550360772863387;
            }
          } else {
            result[11] += 0.06597063062999171;
          }
        } else {
          result[11] += -0.027926331004064248;
        }
      } else {
        result[11] += -0.030905934525745006;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
        result[11] += -0.034311658038310794;
      } else {
        result[11] += 0.023110368439540962;
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02495735900683951694) ) ) {
      result[12] += -0.028101476128549498;
    } else {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7484337002522992721) ) ) {
        result[12] += -0.018248087767226254;
      } else {
        if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.208350164429066953) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9967767353672805086) ) ) {
            result[12] += 0.06218146864724193;
          } else {
            result[12] += 0.023236947118192006;
          }
        } else {
          result[12] += -0.004561516248116927;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2418892081941573513) ) ) {
      result[12] += 0.07199695694120258;
    } else {
      if ( LIKELY( !(data[46].missing != -1) || (data[46].fvalue <= (double)0.2368690270192883307) ) ) {
        result[12] += -0.03457090911330833;
      } else {
        result[12] += 0.04287203522171953;
      }
    }
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.194912770072289715) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02533581936195240455) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
        result[0] += -0.04880324466279295;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.128899642609948684) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[0] += -0.004982452016008508;
          } else {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
              if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.138033741550859679) ) ) {
                if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.220241568621872608) ) ) {
                  result[0] += 0.011433172387244835;
                } else {
                  result[0] += -0.028586425847933243;
                }
              } else {
                if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  result[0] += 0.03584202555133843;
                } else {
                  result[0] += 0.020435493934835278;
                }
              }
            } else {
              if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.4717292249198249965) ) ) {
                result[0] += 0.025337428761941626;
              } else {
                if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2360486046639951596) ) ) {
                  result[0] += -0.03277886152900549;
                } else {
                  result[0] += 0.019506643038369968;
                }
              }
            }
          }
        } else {
          result[0] += -0.036463719714382795;
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7994110553344907499) ) ) {
        if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.2917527956416551826) ) ) {
          if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9283635806041566907) ) ) {
            result[0] += -0.0014523271046291712;
          } else {
            result[0] += -0.03258601559908145;
          }
        } else {
          result[0] += 0.02459051581696422;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.247040140504424688) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3534483363738425976) ) ) {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7322873972955102895) ) ) {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3104175001564512537) ) ) {
                result[0] += -0.03668204262640971;
              } else {
                result[0] += 0.010848339862950324;
              }
            } else {
              result[0] += 0.0299039883319153;
            }
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
              result[0] += 0.04212432512091482;
            } else {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
                result[0] += -0.015304584593619892;
              } else {
                result[0] += 0.022150398069300716;
              }
            }
          }
        } else {
          result[0] += -0.037873096566313776;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.25527896712794762) ) ) {
          result[0] += -0.034516795454089325;
        } else {
          result[0] += 0.002932422537367708;
        }
      } else {
        if ( LIKELY( !(data[41].missing != -1) || (data[41].fvalue <= (double)1.598911967863948069) ) ) {
          result[0] += 0.005157101172104231;
        } else {
          result[0] += 0.030328022742836237;
        }
      }
    } else {
      result[0] += 0.037806689966164896;
    }
  }
  if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.549159102295871393) ) ) {
    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.914166641557065507) ) ) {
      if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1703565562832065894) ) ) {
        result[1] += -0.035023087981639736;
      } else {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
            if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2563030266432470561) ) ) {
              if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4186074840297701605) ) ) {
                result[1] += -0.0006544904328399673;
              } else {
                result[1] += 0.037204271661657164;
              }
            } else {
              result[1] += -0.024971978625334575;
            }
          } else {
            result[1] += -0.03612034797836062;
          }
        } else {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.135782671746872863) ) ) {
            if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01055320409148670716) ) ) {
              result[1] += 0.003253127013406565;
            } else {
              result[1] += 0.04311151506118619;
            }
          } else {
            result[1] += -0.015295059679829486;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
        if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6040665186039134715) ) ) {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6290623373692068032) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2612217416717404483) ) ) {
              result[1] += -0.010382357616769375;
            } else {
              result[1] += 0.01757707268927421;
            }
          } else {
            result[1] += -0.026516678056109886;
          }
        } else {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03919509212844381196) ) ) {
            result[1] += -0.004532836014502695;
          } else {
            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6355114499862949407) ) ) {
              result[1] += 0.03490794688118358;
            } else {
              result[1] += 0.008500870026377956;
            }
          }
        }
      } else {
        result[1] += -0.034646418709414144;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4632834322071913147) ) ) {
        if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.3953207419099586395) ) ) {
          result[1] += -0.03831109808444257;
        } else {
          result[1] += 0.03177522234706935;
        }
      } else {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.095048325145008938) ) ) {
          result[1] += 0.03528369783019144;
        } else {
          if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)0.3728328769188505309) ) ) {
            result[1] += -0.05259898768916161;
          } else {
            result[1] += 0.0359097799644643;
          }
        }
      }
    } else {
      result[1] += -0.036271074015808286;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.03312628605839385;
  } else {
    if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5372318930257430347) ) ) {
      if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.2790205473476042308) ) ) {
        result[2] += 0.03087237259496519;
      } else {
        result[2] += 0.0687982394696486;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6190079240324197762) ) ) {
          result[2] += -0.021421741253656354;
        } else {
          result[2] += 0.03724726527910952;
        }
      } else {
        result[2] += -0.038585166364783346;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.035377803328327476;
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02548539468759894108) ) ) {
      result[3] += 0.03490635852477045;
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02545269682374548537) ) ) {
        result[3] += 0.03541280505475494;
      } else {
        result[3] += -0.01359375658969648;
      }
    }
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.033549472440486505;
  } else {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6320649457863874998) ) ) {
      result[4] += 0.03646599254077325;
    } else {
      result[4] += 0.0049389819565050135;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
    result[5] += 0.07673348009456431;
  } else {
    if ( LIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.02746779356610909786) ) ) {
      result[5] += 0.010971509087419935;
    } else {
      result[5] += -0.03445362347130366;
    }
  }
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
    result[6] += -0.024847784949782525;
  } else {
    result[6] += 0.07832597233789103;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
          result[7] += 0.013897025894587524;
        } else {
          result[7] += 0.0363225081200268;
        }
      } else {
        result[7] += -0.034547189798754444;
      }
    } else {
      result[7] += -0.035444338561763815;
    }
  } else {
    result[7] += -0.03445377418611817;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    result[8] += -0.030217991451037617;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
      result[8] += -0.01896471418196385;
    } else {
      result[8] += 0.03475827367608666;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01057181316517303779) ) ) {
          if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03926013208742445276) ) ) {
            result[9] += -0.041684834789421824;
          } else {
            result[9] += 0.059277076081098;
          }
        } else {
          result[9] += -0.04541043401302033;
        }
      } else {
        result[9] += 0.03568341438429001;
      }
    } else {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4900450642267554779) ) ) {
        result[9] += 0.040004991630874905;
      } else {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3102553107906722563) ) ) {
          result[9] += -0.021739533399268995;
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6042839456515165519) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.0166351500022063406) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2775662647113844028) ) ) {
                result[9] += 0.034297929491465186;
              } else {
                result[9] += -0.011449408338982253;
              }
            } else {
              result[9] += 0.051151840566543726;
            }
          } else {
            result[9] += -0.015876056203715568;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
      result[9] += -0.033969818111203004;
    } else {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9029678813257829839) ) ) {
        result[9] += -0.02316731823855248;
      } else {
        result[9] += 0.047803398832346654;
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.033363798029660566;
  } else {
    result[10] += 0.03608391000089997;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2273057443152013413) ) ) {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6285419272653612888) ) ) {
      if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7690883896431585098) ) ) {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03699419415973542735) ) ) {
            if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4186432744434279152) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.278297478353374483) ) ) {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
                  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042608422410512548) ) ) {
                    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6774123108820169215) ) ) {
                      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9919619125460200637) ) ) {
                        result[11] += 0.03605246545976671;
                      } else {
                        result[11] += -0.013296725277948996;
                      }
                    } else {
                      result[11] += -0.02943309597688511;
                    }
                  } else {
                    result[11] += 0.038433375570542;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5114190513044379882) ) ) {
                    result[11] += -0.03086767844102122;
                  } else {
                    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.157373473888109849) ) ) {
                      result[11] += -0.017565094725008997;
                    } else {
                      result[11] += 0.023489339636360643;
                    }
                  }
                }
              } else {
                result[11] += -0.03531182505641614;
              }
            } else {
              result[11] += -0.05036931919282567;
            }
          } else {
            result[11] += 0.04250163560917928;
          }
        } else {
          result[11] += -0.032219003072907954;
        }
      } else {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
          result[11] += -0.03184432148812384;
        } else {
          result[11] += 0.007441031506223755;
        }
      }
    } else {
      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039579944366416653) ) ) {
        if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.04717240670341981551) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.478123614951154519) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
              result[11] += 0.036075509906999426;
            } else {
              if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
                result[11] += 0.02820572352584782;
              } else {
                result[11] += -0.03595504374822642;
              }
            }
          } else {
            if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.868347105958318988) ) ) {
              result[11] += -0.0346881926346077;
            } else {
              result[11] += 0.022390109697151262;
            }
          }
        } else {
          if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
            result[11] += 0.024651784658624387;
          } else {
            result[11] += -0.033194336636117;
          }
        }
      } else {
        result[11] += -0.02150604760730093;
      }
    }
  } else {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7017175228607138715) ) ) {
        result[11] += -0.017333105202607942;
      } else {
        result[11] += 0.039639355901270615;
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.868347105958318988) ) ) {
        result[11] += -0.034160448563109985;
      } else {
        result[11] += 0.04696348450870572;
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02495735900683951694) ) ) {
      result[12] += -0.02773503918661771;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.128406986927365407) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7962891231175072138) ) ) {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03897754151213717738) ) ) {
            result[12] += 0.052349557769090324;
          } else {
            result[12] += 0.0021941007403566484;
          }
        } else {
          result[12] += -0.028911265519665986;
        }
      } else {
        result[12] += 0.057823276097442824;
      }
    }
  } else {
    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3158040145105728835) ) ) {
      if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.65519611768606556) ) ) {
        result[12] += 0.11259806607871835;
      } else {
        result[12] += 0.04342824718300568;
      }
    } else {
      result[12] += -0.03448990511608813;
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8179725024608467399) ) ) {
        result[0] += -0.006167057169016737;
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
          result[0] += 0.0003134509944709812;
        } else {
          if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.02474108230019015503) ) ) {
            if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.1335369855128401839) ) ) {
              result[0] += 0.035499307788722304;
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || (data[58].fvalue <= (double)0.1191242993130039313) ) ) {
                result[0] += 0.036629389442060824;
              } else {
                result[0] += -0.01815518195416598;
              }
            }
          } else {
            if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5372914379519445616) ) ) {
              result[0] += -0.010958832023997188;
            } else {
              result[0] += 0.03766119030743882;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3265998338303161552) ) ) {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4669522501553799443) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3117937359514476037) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02508536765477527297) ) ) {
              result[0] += 0.003913963841509286;
            } else {
              result[0] += -0.03207369637905139;
            }
          } else {
            result[0] += 0.015668913561092304;
          }
        } else {
          result[0] += -0.034584484933852785;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02481126217740968823) ) ) {
          result[0] += 0.030490180787575004;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.237248754256069061) ) ) {
            if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.166402218999192858) ) ) {
              if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6524198290745862883) ) ) {
                result[0] += 0.017008239607866134;
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1720197088307830191) ) ) {
                  result[0] += -0.034262993852250664;
                } else {
                  if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1676582117311516129) ) ) {
                    result[0] += -0.030103942528223494;
                  } else {
                    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5792326526672063602) ) ) {
                      if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6270283597087605854) ) ) {
                        result[0] += 0.04662900481832394;
                      } else {
                        result[0] += 0.011944763171187915;
                      }
                    } else {
                      result[0] += -0.024069153124046144;
                    }
                  }
                }
              }
            } else {
              result[0] += 0.021229298169335945;
            }
          } else {
            result[0] += -0.032427936962582074;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4246669720681797711) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08044689421173033261) ) ) {
          if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6201102227320881566) ) ) {
            result[0] += 0.016106338971230313;
          } else {
            result[0] += 0.040043490245760545;
          }
        } else {
          result[0] += -0.029166070406477184;
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
          result[0] += -0.032043201814128924;
        } else {
          result[0] += 0.03811863946574713;
        }
      }
    } else {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
          result[0] += -0.034164688421702775;
        } else {
          result[0] += 0.023067005038368674;
        }
      } else {
        result[0] += 0.018795635713970107;
      }
    }
  }
  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6994687281936161627) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2418892081941573513) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.3388299797967100346) ) ) {
        if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4186074840297701605) ) ) {
              if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
                result[1] += -0.03614799255044937;
              } else {
                result[1] += -0.008394663876903836;
              }
            } else {
              result[1] += 0.0393021193149802;
            }
          } else {
            result[1] += -0.03505721399690833;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.564124447788164174) ) ) {
            result[1] += 0.008683136695672207;
          } else {
            result[1] += -0.03377914910914078;
          }
        }
      } else {
        result[1] += 0.022875285309545978;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[1] += 0.036286895256488705;
      } else {
        result[1] += -0.03528506257611233;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01056077755157597275) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3919779259888919176) ) ) {
              result[1] += -0.010992368739848588;
            } else {
              result[1] += 0.03855485950750342;
            }
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7706884327887083552) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.5550828793659357) ) ) {
                result[1] += -0.022621043394001034;
              } else {
                if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.699576161167488664) ) ) {
                  if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.333338310990991538) ) ) {
                    result[1] += 0.021199308567371237;
                  } else {
                    result[1] += 0.0386486393935673;
                  }
                } else {
                  if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4599117104413318891) ) ) {
                    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6025238385607971647) ) ) {
                      result[1] += 0.02605159531387329;
                    } else {
                      result[1] += -0.023650970033748338;
                    }
                  } else {
                    result[1] += -0.017417229628555433;
                  }
                }
              }
            } else {
              result[1] += -0.03701159328567087;
            }
          }
        } else {
          result[1] += 0.03378617276850648;
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
          result[1] += 0.03546154363094821;
        } else {
          if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.0358300990147215;
          } else {
            result[1] += -0.011585446791922312;
          }
        }
      }
    } else {
      result[1] += 0.034986219485008185;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.033037178039925695;
  } else {
    if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5372318930257430347) ) ) {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01561166302900588929) ) ) {
        result[2] += 0.06566145010502943;
      } else {
        result[2] += 0.03166057489219681;
      }
    } else {
      if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03902935682385012817) ) ) {
        result[2] += 0.016790674453144597;
      } else {
        result[2] += -0.03281130483514503;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.03532830705931696;
  } else {
    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.07212745307031061259) ) ) {
      result[3] += 0.03530814692949835;
    } else {
      result[3] += 0.026577754947355755;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.631613573303760778) ) ) {
      result[4] += -0.009454230119686918;
    } else {
      result[4] += -0.03407006421708436;
    }
  } else {
    result[4] += 0.036445297737015554;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
    result[5] += 0.12279552342243351;
  } else {
    if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4215410917107437205) ) ) {
      result[5] += 0.03131004874871685;
    } else {
      result[5] += -0.03444871797392328;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701102284419148958) ) ) {
    result[6] += 0.06617758880315679;
  } else {
    result[6] += -0.03446361808184457;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5781007682388933366) ) ) {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
        result[7] += 0.010741819296781863;
      } else {
        result[7] += 0.03280868908685616;
      }
    } else {
      result[7] += -0.03536178778110892;
    }
  } else {
    result[7] += -0.03445244578584503;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      result[8] += -0.03461677157712881;
    } else {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
        result[8] += -0.03887274777847092;
      } else {
        result[8] += 0.04922792702600548;
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
      result[8] += -0.018214045745365986;
    } else {
      result[8] += 0.034635511796502545;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4147085694846170401) ) ) {
        result[9] += 0.008049878430089854;
      } else {
        result[9] += -0.03453020386747267;
      }
    } else {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5979350353963549525) ) ) {
        result[9] += 0.032074241875429635;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3988745145851049778) ) ) {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8078418734481481733) ) ) {
              result[9] += -0.002273403316424283;
            } else {
              result[9] += 0.04340575581575369;
            }
          } else {
            result[9] += -0.03807831557812741;
          }
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
            result[9] += 0.04906039679423716;
          } else {
            result[9] += -0.0109658448711698;
          }
        }
      }
    }
  } else {
    result[9] += -0.03261430638383516;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03328963218971765;
  } else {
    result[10] += 0.03597356985185082;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
      if ( LIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2903175272918419592) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.045107198229514589) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3686375322916744524) ) ) {
            if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2522376478378117182) ) ) {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2285326955924526227) ) ) {
                  result[11] += -0.04179008388608294;
                } else {
                  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201569600163631124) ) ) {
                    result[11] += 0.011516157855424492;
                  } else {
                    result[11] += 0.057216444018496744;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9115349274719516393) ) ) {
                  result[11] += 0.009123573944905873;
                } else {
                  if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7390534623792704982) ) ) {
                    result[11] += -0.023486293752296657;
                  } else {
                    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6765185432257453391) ) ) {
                      result[11] += 0.010187198016744363;
                    } else {
                      result[11] += -0.015989515816547343;
                    }
                  }
                }
              }
            } else {
              result[11] += -0.03731094150293693;
            }
          } else {
            result[11] += 0.0356958883887796;
          }
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3137111880703187805) ) ) {
            result[11] += 0.014137679136546401;
          } else {
            result[11] += 0.037882259542650086;
          }
        }
      } else {
        if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201312059297520163) ) ) {
          result[11] += -0.004550564605380334;
        } else {
          result[11] += -0.03456338978749766;
        }
      }
    } else {
      if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.02227185099121847117) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7433491192657605273) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.6701517836571867504) ) ) {
            result[11] += 0.03541443101807683;
          } else {
            result[11] += 0.004774781789970108;
          }
        } else {
          result[11] += 0.00047282925191782685;
        }
      } else {
        if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01586881473419028341) ) ) {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5683565155183151196) ) ) {
            result[11] += -0.005572942616436364;
          } else {
            result[11] += 0.028145981595268512;
          }
        } else {
          result[11] += -0.032673568191781924;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6199390503825454868) ) ) {
        if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227669744999093426) ) ) {
          if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201625265091686989) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.263330600145739391) ) ) {
              result[11] += -0.024016550547038475;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.962633868096237189) ) ) {
                result[11] += 0.047480626382023834;
              } else {
                result[11] += 0.013154545936563013;
              }
            }
          } else {
            result[11] += 0.06428154934046705;
          }
        } else {
          result[11] += -0.02762611589971575;
        }
      } else {
        result[11] += -0.03068355729585783;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
        result[11] += -0.03426459979037939;
      } else {
        result[11] += 0.02250688429629216;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)0.6187917260814692622) ) ) {
    if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4410114951078237255) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.06899662408387258195) ) ) {
        if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.3310912535127845113) ) ) {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7484337002522992721) ) ) {
            result[12] += -0.009106248134196016;
          } else {
            result[12] += 0.04641952558469588;
          }
        } else {
          if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
            result[12] += 0.07760636527691958;
          } else {
            result[12] += 0.028327202538284642;
          }
        }
      } else {
        result[12] += -0.022711872762186038;
      }
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1621158927723161947) ) ) {
        result[12] += -0.030983494671177152;
      } else {
        result[12] += 0.024186763210022545;
      }
    }
  } else {
    result[12] += -0.03464073607111611;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3423031251068559544) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)2.81764075380878376) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6694215073022976581) ) ) {
            result[0] += -0.001265640836980179;
          } else {
            result[0] += -0.03680778881588544;
          }
        } else {
          result[0] += 0.030998344501225343;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4900450642267554779) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9547384627961618131) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
                  result[0] += 0.015101037644011082;
                } else {
                  result[0] += -0.03423590269172219;
                }
              } else {
                result[0] += 0.023638126868800013;
              }
            } else {
              result[0] += 0.029656448191385704;
            }
          } else {
            result[0] += 0.03516914864940296;
          }
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
            result[0] += -0.02842976674806562;
          } else {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.01605389607708152325) ) ) {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631546034338769158) ) ) {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6711727485260744475) ) ) {
                  if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2775662647113844028) ) ) {
                    result[0] += 0.05536091590250639;
                  } else {
                    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.50930314809387367) ) ) {
                      result[0] += 0.032699470619339095;
                    } else {
                      if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3812776181607356318) ) ) {
                        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.967100460814494856) ) ) {
                          result[0] += -0.03615764573745198;
                        } else {
                          if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8032245890019948931) ) ) {
                            result[0] += 0.030484085524522083;
                          } else {
                            result[0] += -0.024450184845246796;
                          }
                        }
                      } else {
                        result[0] += 0.043295834251405374;
                      }
                    }
                  }
                } else {
                  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6179594300169558574) ) ) {
                    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9211797709816441637) ) ) {
                      result[0] += -0.04446606100912957;
                    } else {
                      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8938629297277626007) ) ) {
                        result[0] += 0.018524945695198775;
                      } else {
                        result[0] += -0.014528201254197856;
                      }
                    }
                  } else {
                    result[0] += 0.04982632717422803;
                  }
                }
              } else {
                result[0] += 0.03519485717728528;
              }
            } else {
              result[0] += -0.018277427575689172;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01612124187031319447) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[0] += 0.0017821590489745757;
        } else {
          result[0] += 0.03584567459858695;
        }
      } else {
        if ( LIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.3820450307986008043) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02540956347415987762) ) ) {
            result[0] += 0.03734914820796391;
          } else {
            if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.0104219668428953572) ) ) {
              result[0] += -0.008564601199635445;
            } else {
              result[0] += -0.0376416304930366;
            }
          }
        } else {
          if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01569670532306870897) ) ) {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.1337412970583603811) ) ) {
              result[0] += -0.004338651707432146;
            } else {
              result[0] += -0.0347998612739234;
            }
          } else {
            result[0] += -0.0741742601492167;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.20695775318755727) ) ) {
            result[0] += 0.014564348730315478;
          } else {
            result[0] += -0.03711133361721338;
          }
        } else {
          result[0] += 0.01887667456085894;
        }
      } else {
        result[0] += 0.03572227240685485;
      }
    } else {
      if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.09589176861408833796) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[0] += -0.03450008321442382;
        } else {
          result[0] += -0.0003860851978427116;
        }
      } else {
        result[0] += 0.028974267181068377;
      }
    }
  }
  if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1687572053716155096) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4186074840297701605) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
            result[1] += -0.03559813581260636;
          } else {
            result[1] += 0.012308552895321562;
          }
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.749887871896559477) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
              result[1] += 0.041100514469060476;
            } else {
              result[1] += -0.03464044985479805;
            }
          } else {
            result[1] += -0.015596297132197129;
          }
        }
      } else {
        result[1] += 0.03593450440449147;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
        result[1] += -0.035059029029578304;
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.3474904705732462795) ) ) {
          result[1] += 0.019350344031454348;
        } else {
          result[1] += -0.030592484421512394;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7176464536934513694) ) ) {
          result[1] += 0.03458106297917739;
        } else {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.2530638695429184293) ) ) {
            result[1] += -0.03672250244125617;
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)7.453514125476583096) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.699576161167488664) ) ) {
                result[1] += 0.03205744365435775;
              } else {
                if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041841056122270182) ) ) {
                  result[1] += -0.016823616715154758;
                } else {
                  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6025238385607971647) ) ) {
                    result[1] += 0.024848321431884306;
                  } else {
                    result[1] += -0.003458227583642435;
                  }
                }
              }
            } else {
              result[1] += -0.038296411334295885;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
          result[1] += 0.03653353014516676;
        } else {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
            if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.3888381089418453951) ) ) {
              result[1] += -0.009402922643770122;
            } else {
              result[1] += -0.03505210504585679;
            }
          } else {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2204533114890415979) ) ) {
              result[1] += 0.03507823441301977;
            } else {
              result[1] += -0.042683101300828266;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.25444770141758899) ) ) {
        result[1] += 0.035252328140687315;
      } else {
        result[1] += 0.02527874140718525;
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-1.239548145286126113) ) ) {
      result[2] += 0.019215118924157695;
    } else {
      result[2] += -0.03449152494142611;
    }
  } else {
    if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4956038977333974138) ) ) {
      result[2] += 0.034170016454737454;
    } else {
      result[2] += 0.008533623480432765;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.03555914988949129;
    } else {
      result[3] += 0.03524196004407375;
    }
  } else {
    result[3] += -0.03536800323565442;
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.631613573303760778) ) ) {
      result[4] += -0.01247559985297351;
    } else {
      result[4] += -0.034471542917360626;
    }
  } else {
    if ( UNLIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[4] += -0.010900878745993606;
    } else {
      result[4] += 0.036307851591696014;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
    result[5] += 0.10764226807321052;
  } else {
    if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.4951268175569629171) ) ) {
      result[5] += 0.03086424897386551;
    } else {
      result[5] += -0.0344478406028588;
    }
  }
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
    result[6] += -0.024461183895948632;
  } else {
    result[6] += 0.07272261875721196;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
        result[7] += 0.008947087777161704;
      } else {
        result[7] += 0.032703760517920566;
      }
    } else {
      result[7] += -0.03454306790022064;
    }
  } else {
    result[7] += -0.03445119669726472;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    result[8] += -0.029860113558426035;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
      result[8] += -0.017455313272384476;
    } else {
      result[8] += 0.03443253309290232;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
      if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8704445427302551774) ) ) {
        result[9] += -0.02602775701805581;
      } else {
        result[9] += 0.02198804942583484;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.077954077688123347) ) ) {
        result[9] += 0.03592491437728526;
      } else {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7850888210986576299) ) ) {
          result[9] += -0.02173023544031142;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4554771088591554329) ) ) {
              result[9] += 0.030764699557341544;
            } else {
              result[9] += -0.03757088511973743;
            }
          } else {
            if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2688245932691606388) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411362640307710192) ) ) {
                result[9] += -0.03663541424471537;
              } else {
                result[9] += 0.034259776853392425;
              }
            } else {
              result[9] += 0.046929451175054204;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[9] += -0.0338547075288127;
    } else {
      result[9] += -0.002930099294247734;
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[10] += 0.03205933222815298;
  } else {
    result[10] += -0.03315919185807447;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2273057443152013413) ) ) {
    if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07272301454593708969) ) ) {
      if ( LIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.278297478353374483) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
              result[11] += 0.03707859255543523;
            } else {
              if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201614589695346735) ) ) {
                if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03699419415973542735) ) ) {
                  result[11] += -0.02959113352369479;
                } else {
                  result[11] += 0.04392108942760043;
                }
              } else {
                result[11] += 0.03843242583051499;
              }
            }
          } else {
            result[11] += -0.03535661571240289;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.612309128331080865) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3429443568699601097) ) ) {
                result[11] += 0.009252207283900324;
              } else {
                result[11] += -0.03506298742419494;
              }
            } else {
              result[11] += 0.021480473741296045;
            }
          } else {
            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7947273553862382878) ) ) {
              if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7656308030195185799) ) ) {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5884854435699485853) ) ) {
                  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
                    result[11] += 0.02652224910032026;
                  } else {
                    result[11] += -0.026190397536074675;
                  }
                } else {
                  result[11] += 0.042810061412515386;
                }
              } else {
                result[11] += -0.03183835208104773;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.347646486961726175) ) ) {
                result[11] += 0.03972021427425527;
              } else {
                result[11] += 0.013020773595685669;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.620141768434670948) ) ) {
          result[11] += 0.01575849179931431;
        } else {
          result[11] += -0.03492256387804713;
        }
      }
    } else {
      if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.04717240670341981551) ) ) {
        if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
            if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2597837018069549808) ) ) {
              result[11] += 0.032891839553480295;
            } else {
              result[11] += -0.03243759349921133;
            }
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7433491192657605273) ) ) {
              result[11] += 0.03586822311198743;
            } else {
              if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2695437532975495931) ) ) {
                result[11] += -0.03233797061620126;
              } else {
                result[11] += 0.037470662008086485;
              }
            }
          }
        } else {
          result[11] += -0.03482048752985835;
        }
      } else {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1455754774481352598) ) ) {
          result[11] += -0.031650970185201355;
        } else {
          result[11] += 0.014412999391802964;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.868347105958318988) ) ) {
        result[11] += -0.03412704696661616;
      } else {
        result[11] += 0.04531950482326991;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7234889581658809909) ) ) {
        result[11] += -0.01218841013035709;
      } else {
        result[11] += 0.0376791838434602;
      }
    }
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.2604915822708271933) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7962891231175072138) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042048402824836684) ) ) {
            result[12] += -0.013401811198034408;
          } else {
            result[12] += 0.04463156439295712;
          }
        } else {
          result[12] += -0.03197056272824105;
        }
      } else {
        result[12] += 0.05490575609366848;
      }
    } else {
      if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.65519611768606556) ) ) {
        result[12] += 0.10209626270383784;
      } else {
        result[12] += 0.04144999355604042;
      }
    }
  } else {
    result[12] += -0.03448194802477041;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.07128092195383493868) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
          result[0] += 0.0008241887483523073;
        } else {
          if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.02474108230019015503) ) ) {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7962891231175072138) ) ) {
              result[0] += 0.00873004866117505;
            } else {
              result[0] += 0.034534214567356544;
            }
          } else {
            result[0] += 0.013917130070430658;
          }
        }
      } else {
        result[0] += 0.0014273853220868535;
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7994110553344907499) ) ) {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1585980731754384754) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02517302575184957383) ) ) {
            result[0] += 0.024754740498511892;
          } else {
            result[0] += -0.031495460437874274;
          }
        } else {
          result[0] += -0.035245751813467056;
        }
      } else {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.237248754256069061) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6292095240563234659) ) ) {
              if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6270283597087605854) ) ) {
                result[0] += 0.059930386027779246;
              } else {
                if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6031305061879833618) ) ) {
                  result[0] += -0.022343054311160907;
                } else {
                  result[0] += 0.022582367660005223;
                }
              }
            } else {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6389980065587067548) ) ) {
                if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5792326526672063602) ) ) {
                  if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146003291738276308) ) ) {
                    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3148322790269169058) ) ) {
                      result[0] += 0.009574323218987867;
                    } else {
                      result[0] += -0.03387457070074612;
                    }
                  } else {
                    result[0] += 0.01708426898560784;
                  }
                } else {
                  result[0] += -0.03156501125735689;
                }
              } else {
                result[0] += 0.03026558574065901;
              }
            }
          } else {
            result[0] += -0.03194202718434105;
          }
        } else {
          result[0] += 0.03146192823883699;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8274420233688559723) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.129773891082942239) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02529546880817297796) ) ) {
            result[0] += 0.03181421534699234;
          } else {
            result[0] += 0.001363434645619856;
          }
        } else {
          result[0] += -0.03079544613898015;
        }
      } else {
        if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1334490118944302306) ) ) {
          result[0] += -0.034528820745808396;
        } else {
          result[0] += -0.0007912923635957278;
        }
      }
    } else {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01235643288758264853) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)2.121444108164863618) ) ) {
          if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.06118424044948234802) ) ) {
            result[0] += -0.034149869935119107;
          } else {
            result[0] += -0.0009324723484914324;
          }
        } else {
          result[0] += 0.009916745782479268;
        }
      } else {
        result[0] += 0.036137746420567676;
      }
    }
  }
  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6994687281936161627) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
      result[1] += -0.03500119250845638;
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.620141768434670948) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.564124447788164174) ) ) {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3155590552332632748) ) ) {
              result[1] += 0.013077242523783165;
            } else {
              result[1] += -0.005584117883048074;
            }
          } else {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
              if ( LIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5616485544745142278) ) ) {
                result[1] += -0.034516952622208975;
              } else {
                result[1] += -0.008670519829915267;
              }
            } else {
              result[1] += 0.015539430866719212;
            }
          }
        } else {
          result[1] += 0.027921043039437477;
        }
      } else {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5267468939089369195) ) ) {
          result[1] += 0.03738648925984909;
        } else {
          result[1] += -0.03579594164105018;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01056077755157597275) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3919779259888919176) ) ) {
              result[1] += -0.01105587439947204;
            } else {
              result[1] += 0.03832471006724356;
            }
          } else {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
                result[1] += -0.022390426821245802;
              } else {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8425672530836286755) ) ) {
                  result[1] += 0.030951915052828582;
                } else {
                  if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201266766584950796) ) ) {
                    result[1] += -0.02166334918118003;
                  } else {
                    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6033696181219915244) ) ) {
                      result[1] += 0.02103622407101959;
                    } else {
                      result[1] += -0.018592204374352498;
                    }
                  }
                }
              }
            } else {
              result[1] += -0.03574439268956858;
            }
          }
        } else {
          if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.1474147852366628209) ) ) {
            result[1] += 0.034790372698494616;
          } else {
            result[1] += 0.015331114744616462;
          }
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.255857088039638914) ) ) {
          result[1] += 0.035336696336613765;
        } else {
          if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.035655389424407075;
          } else {
            result[1] += -0.010719769340649088;
          }
        }
      }
    } else {
      result[1] += 0.03481089498051873;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.032857256983668245;
  } else {
    if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5372318930257430347) ) ) {
      if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.2790205473476042308) ) ) {
        result[2] += 0.02879750514538599;
      } else {
        result[2] += 0.07104026848531679;
      }
    } else {
      if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03902935682385012817) ) ) {
        result[2] += 0.015927999144205677;
      } else {
        result[2] += -0.0326386201103893;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.035237383647350844;
  } else {
    if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1347689789455130127) ) ) {
      result[3] += 0.03463293452440842;
    } else {
      if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3989519790039450231) ) ) {
        result[3] += 0.03495484505790203;
      } else {
        result[3] += -0.024637280090139577;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += -0.0016876462774958142;
    } else {
      result[4] += -0.034241466381177095;
    }
  } else {
    result[4] += 0.03617973303014474;
  }
  if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5810222695237325929) ) ) {
      result[5] += 0.01705957876619829;
    } else {
      result[5] += -0.025117060163164055;
    }
  } else {
    result[5] += 0.09120575216920976;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
    result[6] += 0.06743494995074341;
  } else {
    result[6] += -0.028929405214758203;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4819992438703088466) ) ) {
      result[7] += 0.005212064163950912;
    } else {
      result[7] += 0.029121841831891017;
    }
  } else {
    result[7] += -0.034450016936784476;
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[8] += -0.03375432532668857;
  } else {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
      result[8] += -0.038601770796679064;
    } else {
      result[8] += 0.03943008947078749;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3157059568068864563) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08044689421173033261) ) ) {
        result[9] += 0.000797933703241641;
      } else {
        result[9] += 0.0338017162836552;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.331999447987429308) ) ) {
          result[9] += -0.014182513762669744;
        } else {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
            result[9] += -0.03616100559988024;
          } else {
            result[9] += 0.06360833499688481;
          }
        }
      } else {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8069768696133862163) ) ) {
          result[9] += 0.046076077406794494;
        } else {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7734476679137093358) ) ) {
            result[9] += 0.008124909184534871;
          } else {
            result[9] += -0.03535164911275436;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[9] += -0.03380032647203863;
    } else {
      result[9] += -0.0018865509291222306;
    }
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
    result[10] += 0.031692738917992715;
  } else {
    result[10] += -0.03307091826239497;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
      if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1573287542631459368) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.045107198229514589) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7176464536934513694) ) ) {
            result[11] += -0.0399356318186509;
          } else {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
              if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201569600163631124) ) ) {
                if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03858425638752763925) ) ) {
                  result[11] += 0.017720172728745834;
                } else {
                  result[11] += -0.018138218082485138;
                }
              } else {
                result[11] += 0.054794693378741745;
              }
            } else {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
                result[11] += 0.03383163949860158;
              } else {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4573588634800199171) ) ) {
                  result[11] += -0.022516977746745805;
                } else {
                  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7062226298236699007) ) ) {
                    result[11] += 0.017738728777509438;
                  } else {
                    if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.5094803989495694241) ) ) {
                      result[11] += -0.01820737872341754;
                    } else {
                      result[11] += 0.01226024270992102;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3471407636898510285) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4247338397979677493) ) ) {
              result[11] += 0.021755337820682816;
            } else {
              result[11] += -0.02035195127553111;
            }
          } else {
            result[11] += 0.03582182307490997;
          }
        }
      } else {
        if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1173947807743835475) ) ) {
          result[11] += -0.0349318056453839;
        } else {
          result[11] += 0.005964537988423241;
        }
      }
    } else {
      if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1407910841014318182) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
          result[11] += -0.010652514096571633;
        } else {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7433491192657605273) ) ) {
            if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4859023428981089077) ) ) {
              result[11] += 0.0360464660961451;
            } else {
              result[11] += 0.009474879997166749;
            }
          } else {
            result[11] += 1.536397377026857e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.946040802375038625) ) ) {
          result[11] += 0.01031430125332357;
        } else {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.2010819460977913697) ) ) {
            result[11] += -0.03877505299506493;
          } else {
            result[11] += 0.00036128863752797196;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6199390503825454868) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.7787446162137746652) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.06651620267946474485) ) ) {
              result[11] += 0.03003793169417651;
            } else {
              result[11] += 0.061856305964381804;
            }
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6042839456515165519) ) ) {
              result[11] += -0.03533853624633121;
            } else {
              result[11] += 0.0267627213922338;
            }
          }
        } else {
          result[11] += -0.026916137076171315;
        }
      } else {
        result[11] += -0.030374071697759363;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[11] += -0.03437745589411945;
      } else {
        result[11] += 0.0162063483919452;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2477131763261292141) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6123728509228160144) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2082742240538978107) ) ) {
          if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.2815903302926908158) ) ) {
            result[12] += -0.02045380211166196;
          } else {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9967767353672805086) ) ) {
              result[12] += 0.037245902258552406;
            } else {
              result[12] += -0.014918809138757554;
            }
          }
        } else {
          result[12] += 0.07241349644770037;
        }
      } else {
        result[12] += -0.034767937772570444;
      }
    } else {
      result[12] += -0.034651097132382104;
    }
  } else {
    result[12] += 0.05552908471326204;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3423031251068559544) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02533581936195240455) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9606217943037372864) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
            result[0] += 0.02752811233681085;
          } else {
            if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6703432192151691504) ) ) {
              result[0] += -0.017102155807126432;
            } else {
              result[0] += 0.02024815410852399;
            }
          }
        } else {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3139199429380991613) ) ) {
            if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.628964212935660183) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.289285958252265385) ) ) {
                result[0] += 0.010024137969361182;
              } else {
                result[0] += 0.035669923820445655;
              }
            } else {
              result[0] += 0.014845181170687671;
            }
          } else {
            result[0] += 0.034754712881420145;
          }
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3265998338303161552) ) ) {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
            result[0] += -0.031179137497897032;
          } else {
            result[0] += -0.0008448140770236252;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            result[0] += -0.025851804202594832;
          } else {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.01605389607708152325) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405697509308942328) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631546034338769158) ) ) {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121881725528086682) ) ) {
                    result[0] += 0.027936704334350155;
                  } else {
                    result[0] += -0.005367948599529804;
                  }
                } else {
                  result[0] += 0.04440759237795765;
                }
              } else {
                result[0] += 0.004464697932309194;
              }
            } else {
              result[0] += -0.018356062891446992;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02548887318089767054) ) ) {
        result[0] += 0.02910698945214403;
      } else {
        if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.4969912859511854131) ) ) {
          result[0] += 0.008050980408620918;
        } else {
          if ( LIKELY( !(data[48].missing != -1) || (data[48].fvalue <= (double)0.3888332218721928801) ) ) {
            if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)2.094154806921912471) ) ) {
              result[0] += -0.03584106198626635;
            } else {
              result[0] += 0.003018718300176467;
            }
          } else {
            result[0] += 0.0061455417827790465;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5616485544745142278) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6223540210638638381) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08044689421173033261) ) ) {
            result[0] += 0.02255640853089729;
          } else {
            result[0] += -0.036284506638731874;
          }
        } else {
          result[0] += -0.03437378013852793;
        }
      } else {
        result[0] += 0.03530111352831266;
      }
    } else {
      if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042823613835200947) ) ) {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2919728949150694475) ) ) {
          result[0] += 0.026270130985529255;
        } else {
          result[0] += -0.028719218970806662;
        }
      } else {
        result[0] += -0.03448961679984825;
      }
    }
  }
  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6994687281936161627) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201624029503586266) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7674883464976085534) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.564124447788164174) ) ) {
            result[1] += 0.015749086268286635;
          } else {
            if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
              result[1] += -0.03208490313050765;
            } else {
              result[1] += 0.0198052632654239;
            }
          }
        } else {
          result[1] += -0.035029833986886756;
        }
      } else {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3898781641478269999) ) ) {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6255053257884176654) ) ) {
            result[1] += 0.024340921168040344;
          } else {
            result[1] += -0.029585719872994045;
          }
        } else {
          result[1] += 0.03872205096848491;
        }
      }
    } else {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6201106865256021949) ) ) {
        result[1] += -0.022584246591327645;
      } else {
        result[1] += -0.034928758800575326;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
        if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5082025621460574127) ) ) {
          if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041423957829911151) ) ) {
            if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6290623373692068032) ) ) {
              if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1673079343172020617) ) ) {
                result[1] += 0.014021683551718966;
              } else {
                result[1] += -0.010427256678173277;
              }
            } else {
              result[1] += -0.023326413772942204;
            }
          } else {
            if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1283369947460293592) ) ) {
              result[1] += -0.005925079245076998;
            } else {
              if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03919200317927835214) ) ) {
                result[1] += 0.033918793200028295;
              } else {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3139199429380991613) ) ) {
                  result[1] += 0.025256898217492604;
                } else {
                  result[1] += -0.0022784856712113194;
                }
              }
            }
          }
        } else {
          result[1] += -0.03571143632749376;
        }
      } else {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.007537630248567310856) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.095048325145008938) ) ) {
            result[1] += 0.03488070594239799;
          } else {
            result[1] += 0.02314716865145113;
          }
        } else {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.003127305719072747455) ) ) {
            result[1] += 0.02943243799145528;
          } else {
            result[1] += -0.014649613233086797;
          }
        }
      }
    } else {
      result[1] += -0.03582830281232568;
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
    result[2] += -0.03263632658272543;
  } else {
    if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4240531077415751748) ) ) {
      if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4232612001424094772) ) ) {
        if ( LIKELY( !(data[70].missing != -1) || (data[70].fvalue <= (double)0.1250591196958120987) ) ) {
          result[2] += 0.029638554039428437;
        } else {
          result[2] += 0.06358358298576049;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          result[2] += 0.030867874621316675;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7234889581658809909) ) ) {
            result[2] += -0.038882702138384885;
          } else {
            result[2] += 0.0011902078635472903;
          }
        }
      }
    } else {
      result[2] += -0.034593229661082435;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.035197770348577746;
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02548539468759894108) ) ) {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.3474904705732462795) ) ) {
        result[3] += 0.02977467903996474;
      } else {
        result[3] += 0.035138356891684215;
      }
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02543878283887865757) ) ) {
        result[3] += 0.03520970188978497;
      } else {
        result[3] += -0.019709173884332572;
      }
    }
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += -0.010610635367116723;
    } else {
      result[4] += -0.034467207175594136;
    }
  } else {
    if ( UNLIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.2507097718183328161) ) ) {
      result[4] += 0.0013835802003944507;
    } else {
      result[4] += 0.03577052602391143;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
    result[5] += 0.09556115859864074;
  } else {
    if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.4951268175569629171) ) ) {
      result[5] += 0.03116038783752202;
    } else {
      result[5] += -0.03444762097415797;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701102284419148958) ) ) {
    result[6] += 0.0609411843853547;
  } else {
    result[6] += -0.03446823795038758;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5781007682388933366) ) ) {
      if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2688360813320080367) ) ) {
        result[7] += 0.004083347707376257;
      } else {
        result[7] += 0.031489935842930625;
      }
    } else {
      result[7] += -0.03533252399582885;
    }
  } else {
    result[7] += -0.03444891821411729;
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[8] += -0.03369538997699468;
  } else {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619621763013154303) ) ) {
      result[8] += -0.03844174018259342;
    } else {
      result[8] += 0.040836929896047446;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2696345995816802343) ) ) {
        result[9] += -0.03371225093936303;
      } else {
        result[9] += 0.014713993807489056;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.039282253531597311) ) ) {
        result[9] += 0.04068625467865959;
      } else {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3102553107906722563) ) ) {
          result[9] += -0.0236831498045168;
        } else {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6200601990719807333) ) ) {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6687016783315548052) ) ) {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5557878426946177841) ) ) {
                if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.8252309724808784) ) ) {
                    result[9] += -0.0026529797084790235;
                  } else {
                    result[9] += 0.036552444737298705;
                  }
                } else {
                  result[9] += -0.02488522685273873;
                }
              } else {
                result[9] += 0.05638409496950406;
              }
            } else {
              result[9] += -0.012545351506232873;
            }
          } else {
            result[9] += -0.020161910790823568;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[9] += -0.033746248608991426;
    } else {
      result[9] += -0.0008650728202436312;
    }
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
    result[10] += 0.03139318320647609;
  } else {
    result[10] += -0.03297872019429935;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
      if ( LIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2903175272918419592) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.045107198229514589) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3686375322916744524) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7176464536934513694) ) ) {
              result[11] += -0.04018118693198008;
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6449313698140944906) ) ) {
                if ( LIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1407584708063857049) ) ) {
                  if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03910039676765995897) ) ) {
                    result[11] += 0.017049506508799023;
                  } else {
                    result[11] += 0.05371201962777909;
                  }
                } else {
                  result[11] += -0.025127302361860986;
                }
              } else {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5884854435699485853) ) ) {
                  result[11] += -0.026616297306898632;
                } else {
                  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144688909237436936) ) ) {
                    result[11] += 0.026795763245879435;
                  } else {
                    if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
                      result[11] += -0.036568564132461664;
                    } else {
                      result[11] += -0.0015334154544408988;
                    }
                  }
                }
              }
            }
          } else {
            result[11] += 0.0346660107638936;
          }
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3137111880703187805) ) ) {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
              result[11] += 0.038713635263016535;
            } else {
              result[11] += 0.00047291878799111595;
            }
          } else {
            result[11] += 0.03513968642344405;
          }
        }
      } else {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200845026092208778) ) ) {
          result[11] += -0.0026337018025511002;
        } else {
          result[11] += -0.03456080451941026;
        }
      }
    } else {
      if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1407910841014318182) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
          result[11] += -0.010582266621223827;
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.4952930136680614992) ) ) {
              result[11] += 0.03588432423587005;
            } else {
              result[11] += 0.010455052353580001;
            }
          } else {
            result[11] += 0.00030237824713362244;
          }
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)0.4510774498425162982) ) ) {
          result[11] += 0.00734086629380569;
        } else {
          result[11] += -0.028720154057337105;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6199390503825454868) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.962633868096237189) ) ) {
          result[11] += 0.040874697328488176;
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.06651620267946474485) ) ) {
            result[11] += -0.03512666490385651;
          } else {
            result[11] += 0.028170964877114835;
          }
        }
      } else {
        result[11] += -0.030118037332550595;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
        result[11] += -0.03419905597803721;
      } else {
        result[11] += 0.021728120155420194;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2477131763261292141) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2082742240538978107) ) ) {
          if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.2815903302926908158) ) ) {
            result[12] += -0.021515742914720307;
          } else {
            if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1656063960181672345) ) ) {
              result[12] += 0.03478484726670841;
            } else {
              result[12] += -0.008436123475197588;
            }
          }
        } else {
          result[12] += 0.07387848413279241;
        }
      } else {
        result[12] += -0.03478969116163495;
      }
    } else {
      result[12] += -0.034644857862443985;
    }
  } else {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3815143802386331551) ) ) {
      result[12] += 0.034365823461112666;
    } else {
      result[12] += 0.07681969098307588;
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.138033741550859679) ) ) {
        if ( UNLIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.844977066290455436) ) ) {
          result[0] += -0.028135333869150136;
        } else {
          result[0] += 0.019645472201950485;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
          result[0] += -0.00229062944454505;
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.072559415731658028) ) ) {
            result[0] += 0.03404074099607741;
          } else {
            if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.2427768916288836898) ) ) {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2570373046064213796) ) ) {
                result[0] += 0.015755388650715633;
              } else {
                result[0] += -0.01665597622178957;
              }
            } else {
              result[0] += 0.036814587431272514;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7994110553344907499) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
          result[0] += -0.031434108941853216;
        } else {
          if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.4969912859511854131) ) ) {
            result[0] += 0.04337711231783246;
          } else {
            if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.257223684349944914) ) ) {
              result[0] += -0.032495180294198206;
            } else {
              result[0] += 0.00033537581299626103;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.21812675287692751) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3399707811849296824) ) ) {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3129766802022028171) ) ) {
                result[0] += -0.03419317733962975;
              } else {
                result[0] += 0.01260120048849014;
              }
            } else {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
                result[0] += 0.035759819787257376;
              } else {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.697922548919576724) ) ) {
                  if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7156028676966986746) ) ) {
                    if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8425672530836286755) ) ) {
                      if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146003291738276308) ) ) {
                        result[0] += -0.031156661118485633;
                      } else {
                        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7656308030195185799) ) ) {
                          result[0] += 0.028629092351351453;
                        } else {
                          result[0] += -0.026688365655845682;
                        }
                      }
                    } else {
                      result[0] += 0.03042919949519069;
                    }
                  } else {
                    result[0] += -0.03655083524529937;
                  }
                } else {
                  result[0] += 0.024324170622075005;
                }
              }
            }
          } else {
            result[0] += -0.028224380930628068;
          }
        } else {
          result[0] += 0.03049095460572604;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
          if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.3113132420658634714) ) ) {
            result[0] += 0.05221102164139612;
          } else {
            result[0] += -0.03451678098690997;
          }
        } else {
          result[0] += -0.03533257517577693;
        }
      } else {
        result[0] += 0.03207491125334777;
      }
    } else {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
        result[0] += -0.03428013981748874;
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201900647098373964) ) ) {
          result[0] += 0.020673739333653133;
        } else {
          result[0] += -0.028763371084192493;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.0392434320385037852) ) ) {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7390534623792704982) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.974254548799861286) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
            if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6185950284719347048) ) ) {
                result[1] += -0.005300196044154749;
              } else {
                result[1] += -0.04040766327316143;
              }
            } else {
              result[1] += 0.027275222682691835;
            }
          } else {
            result[1] += -0.0365447155667721;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            result[1] += 0.03597606048653861;
          } else {
            result[1] += -0.02646305138412514;
          }
        }
      } else {
        result[1] += 0.05659505976495777;
      }
    } else {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3125591704666421111) ) ) {
        result[1] += -0.03505134554884629;
      } else {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3834779915656272853) ) ) {
          result[1] += -0.03679995726415984;
        } else {
          result[1] += 0.0319395565223344;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4099809178911676399) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198276039103393087) ) ) {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01814955373264689684) ) ) {
            result[1] += -0.036178365367870884;
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.135782671746872863) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
                  result[1] += 0.017147273425352483;
                } else {
                  result[1] += 0.03999470220289349;
                }
              } else {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
                  result[1] += -0.02861495556470999;
                } else {
                  if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1666620795644256636) ) ) {
                    result[1] += 0.013700326137218433;
                  } else {
                    result[1] += -0.013363060020881445;
                  }
                }
              }
            } else {
              result[1] += -0.03460437536603758;
            }
          }
        } else {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03919509212844381196) ) ) {
            result[1] += 0.006913582462578573;
          } else {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3919779259888919176) ) ) {
              result[1] += 0.008292151600337605;
            } else {
              result[1] += 0.033904674109651284;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.01397200046107884008) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.095048325145008938) ) ) {
            result[1] += 0.03511209525130902;
          } else {
            result[1] += 0.0240030240513489;
          }
        } else {
          result[1] += 0.019001504466805454;
        }
      }
    } else {
      result[1] += -0.035800206197885286;
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
    result[2] += -0.032513335799467524;
  } else {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1301196871218200934) ) ) {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1662008098993101035) ) ) {
            result[2] += -0.009381848819192917;
          } else {
            result[2] += 0.041333663039671925;
          }
        } else {
          result[2] += -0.03810826833534132;
        }
      } else {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01029981774686491644) ) ) {
          result[2] += 0.031103629121976412;
        } else {
          result[2] += 0.08388379135989953;
        }
      }
    } else {
      result[2] += -0.03465843571006537;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.03547235628092988;
    } else {
      result[3] += 0.03508818871016722;
    }
  } else {
    result[3] += -0.03526281148107859;
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += -0.010113377976341029;
    } else {
      result[4] += -0.034465108076536466;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.213331734000125728) ) ) {
      result[4] += 0.03611018368544601;
    } else {
      if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[4] += -0.02556470707928384;
      } else {
        result[4] += 0.036006919130209696;
      }
    }
  }
  if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6458850674358144195) ) ) {
    result[5] += -0.016752494133208957;
  } else {
    result[5] += 0.07757700573423494;
  }
  if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4850921819328771201) ) ) {
    result[6] += -0.023934745657058464;
  } else {
    result[6] += 0.06565902908463596;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
      result[7] += 0.003959314781218395;
    } else {
      result[7] += 0.028460534857817563;
    }
  } else {
    result[7] += -0.034447909267421195;
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[8] += -0.03363077274478059;
  } else {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619621763013154303) ) ) {
      result[8] += -0.03836138474392643;
    } else {
      result[8] += 0.04031341062793489;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5906532180874056737) ) ) {
          result[9] += -0.037510241423833135;
        } else {
          result[9] += 0.018803929167260296;
        }
      } else {
        result[9] += 0.03181705954161555;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.039282253531597311) ) ) {
        result[9] += 0.0407810013315563;
      } else {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8274420233688559723) ) ) {
          result[9] += -0.023371904727145343;
        } else {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6200601990719807333) ) ) {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3139199429380991613) ) ) {
              result[9] += 0.029158115393223816;
            } else {
              result[9] += -0.006635835994322158;
            }
          } else {
            result[9] += -0.019700643149295465;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9675968635406818619) ) ) {
      result[9] += -0.03369409915081886;
    } else {
      result[9] += 0.0008900942510693948;
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[10] += 0.030985425020417803;
  } else {
    result[10] += -0.032878525468288206;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2273057443152013413) ) ) {
    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6185896019737596729) ) ) {
      if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198191867677270706) ) ) {
          if ( LIKELY( !(data[76].missing != -1) || (data[76].fvalue <= (double)1.022707749737107985) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.20695775318755727) ) ) {
              result[11] += 0.03197871875813302;
            } else {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)7.453514125476583096) ) ) {
                if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6831714853785343378) ) ) {
                    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6932836104142902078) ) ) {
                      result[11] += -0.03150064866036955;
                    } else {
                      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6449313698140944906) ) ) {
                        result[11] += 0.021166349980508908;
                      } else {
                        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7734476679137093358) ) ) {
                          result[11] += -0.03634779507654901;
                        } else {
                          result[11] += 0.0034804089184330245;
                        }
                      }
                    }
                  } else {
                    if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6518059545354392137) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411362640307710192) ) ) {
                        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8000345600721433525) ) ) {
                          result[11] += 0.04264661339877989;
                        } else {
                          result[11] += 0.0162449650342643;
                        }
                      } else {
                        result[11] += -0.014569025227454546;
                      }
                    } else {
                      result[11] += -0.013386159496311145;
                    }
                  }
                } else {
                  result[11] += -0.04047340792358691;
                }
              } else {
                result[11] += 0.033845118146665305;
              }
            }
          } else {
            result[11] += 0.043313649000307354;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5114190513044379882) ) ) {
            result[11] += -0.0331026228542372;
          } else {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030506379206562739) ) ) {
              result[11] += -0.03479638557025732;
            } else {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6179594300169558574) ) ) {
                result[11] += 0.05970588216758774;
              } else {
                result[11] += -0.002487019426752137;
              }
            }
          }
        }
      } else {
        result[11] += -0.033037817580060524;
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02540956347415987762) ) ) {
        result[11] += -0.03121812188291474;
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.400555149944672229) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
            result[11] += -0.015491717966262267;
          } else {
            if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.01176646965151369358) ) ) {
              result[11] += 0.03526088002727302;
            } else {
              result[11] += 0.0005039540502814377;
            }
          }
        } else {
          result[11] += -0.03491343718755729;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7234889581658809909) ) ) {
        result[11] += -0.0122075900135306;
      } else {
        result[11] += 0.03487568109286671;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[11] += -0.034491048739451184;
      } else {
        result[11] += 0.0299926857588615;
      }
    }
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.2604915822708271933) ) ) {
    if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5906532180874056737) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.3310912535127845113) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
          if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2088125373279557662) ) ) {
            result[12] += -0.02125276636227028;
          } else {
            if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.208350164429066953) ) ) {
              result[12] += 0.047640157099101556;
            } else {
              result[12] += -0.019318973783355845;
            }
          }
        } else {
          result[12] += 0.05398029136681115;
        }
      } else {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
          result[12] += 0.07403129701812745;
        } else {
          result[12] += 0.010987295379313816;
        }
      }
    } else {
      result[12] += -0.034436827070997635;
    }
  } else {
    result[12] += -0.0344787293972947;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
        result[0] += 0.000889055492985614;
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.138033741550859679) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01057029847315518571) ) ) {
            result[0] += -0.0684194297061857;
          } else {
            result[0] += 0.02762856128828264;
          }
        } else {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01036570685191048023) ) ) {
            result[0] += 0.03193298848484493;
          } else {
            result[0] += -0.0018900049566966397;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.4969912859511854131) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02481126217740968823) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4811474308701849112) ) ) {
            result[0] += 0.01693146285975684;
          } else {
            result[0] += 0.03923738385030954;
          }
        } else {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7994110553344907499) ) ) {
            result[0] += -0.028154174086012722;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.21812675287692751) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3534483363738425976) ) ) {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3129766802022028171) ) ) {
                  result[0] += -0.03610741979094411;
                } else {
                  result[0] += 0.012163038926059043;
                }
              } else {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7052777362427521402) ) ) {
                  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
                    result[0] += 0.03371050883785699;
                  } else {
                    if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2099024163039080737) ) ) {
                      result[0] += -0.033050713573950105;
                    } else {
                      if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2092088569555748123) ) ) {
                        if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2096629731955549081) ) ) {
                          result[0] += 0.04030807946043609;
                        } else {
                          result[0] += 0.0063842882902207035;
                        }
                      } else {
                        result[0] += -0.00794442025116756;
                      }
                    }
                  }
                } else {
                  result[0] += 0.02447462717932769;
                }
              }
            } else {
              result[0] += -0.02590390559526179;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4151799277589924286) ) ) {
          result[0] += 0.0022742724684599734;
        } else {
          result[0] += -0.032941169698849804;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[16].missing != -1) && (data[16].fvalue <= (double)-0.7084573502120999899) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5987957859748164191) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7879969146256354806) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7368513205754015916) ) ) {
              result[0] += -0.005662659405644431;
            } else {
              result[0] += 0.04047645306473243;
            }
          } else {
            result[0] += -0.0382265227589466;
          }
        } else {
          result[0] += -0.030905239309854945;
        }
      } else {
        result[0] += 0.03483251749585482;
      }
    } else {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01235643288758264853) ) ) {
        if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042939888747356214) ) ) {
          result[0] += -0.011816710466434809;
        } else {
          result[0] += -0.03449457372539607;
        }
      } else {
        result[0] += 0.03557656942584116;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
      result[1] += -0.03489980915841746;
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.620141768434670948) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.564124447788164174) ) ) {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3155590552332632748) ) ) {
              result[1] += 0.011949389555097414;
            } else {
              result[1] += -0.005732158684952701;
            }
          } else {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08044689421173033261) ) ) {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.315620908527420363) ) ) {
                result[1] += 0.014480807951107802;
              } else {
                result[1] += -0.021141079001921127;
              }
            } else {
              result[1] += -0.03628745202560076;
            }
          }
        } else {
          result[1] += 0.027029369823651932;
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
          if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
            result[1] += 0.01149884915686299;
          } else {
            result[1] += -0.03822780767970234;
          }
        } else {
          result[1] += -0.035813258163162505;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5654056838824230713) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3919779259888919176) ) ) {
              result[1] += -0.011870131481550007;
            } else {
              result[1] += 0.03800461774691638;
            }
          } else {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
                result[1] += -0.01705758437096503;
              } else {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
                  if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03892441476389515986) ) ) {
                    result[1] += 0.03449976537829356;
                  } else {
                    result[1] += 0.010880758762141575;
                  }
                } else {
                  if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041671670938614236) ) ) {
                    result[1] += -0.01997290738582903;
                  } else {
                    if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1283369947460293592) ) ) {
                      result[1] += -0.017119348711665133;
                    } else {
                      result[1] += 0.018709064583204427;
                    }
                  }
                }
              }
            } else {
              result[1] += -0.0356661074050158;
            }
          }
        } else {
          result[1] += 0.033294642192016034;
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
          result[1] += 0.03517204774337142;
        } else {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.3888381089418453951) ) ) {
            result[1] += -0.0017739592630294171;
          } else {
            result[1] += -0.0353411812105064;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7272797406239109863) ) ) {
        result[1] += 0.035037056592781494;
      } else {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.06817195574412106274) ) ) {
          result[1] += 0.031681007781711;
        } else {
          result[1] += -0.026545277794855517;
        }
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.032528350303241096;
  } else {
    if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.4814898021264421568) ) ) {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
        result[2] += 0.015453604800349885;
      } else {
        result[2] += 0.05108915143893399;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        result[2] += 0.025568448427278904;
      } else {
        result[2] += -0.024614581460141574;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.03512481796831313;
  } else {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924334254671090622) ) ) {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.3474904705732462795) ) ) {
        result[3] += 0.029221656696812606;
      } else {
        result[3] += 0.035046503898592755;
      }
    } else {
      if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3989519790039450231) ) ) {
        result[3] += 0.03479546950360792;
      } else {
        result[3] += -0.023919095196400984;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
      result[4] += -0.003972374316308376;
    } else {
      result[4] += -0.03363332823994966;
    }
  } else {
    result[4] += 0.035849953866940294;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2285326955924526227) ) ) {
      result[5] += -0.03444183211792508;
    } else {
      result[5] += 0.02319260871279561;
    }
  } else {
    result[5] += 0.08658949747624892;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701102284419148958) ) ) {
    result[6] += 0.05729899856471439;
  } else {
    result[6] += -0.03446755905241059;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
      result[7] += 0.003672456999651421;
    } else {
      result[7] += 0.028048773096061845;
    }
  } else {
    result[7] += -0.03444693578107874;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    result[8] += -0.029193666518280984;
  } else {
    result[8] += 0.026019398240810336;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
      if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4615027733769753171) ) ) {
        result[9] += -0.023060196447888866;
      } else {
        result[9] += 0.024112043288788725;
      }
    } else {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5979350353963549525) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08044689421173033261) ) ) {
          result[9] += 0.005822040555925716;
        } else {
          result[9] += 0.03320191790217354;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2741420333276946564) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4554771088591554329) ) ) {
              result[9] += 0.038625205662937895;
            } else {
              result[9] += -0.04310715004142166;
            }
          } else {
            result[9] += 0.04229351871754536;
          }
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6042839456515165519) ) ) {
            result[9] += 0.008332084538420591;
          } else {
            result[9] += -0.03738920318695424;
          }
        }
      }
    }
  } else {
    result[9] += -0.03362169992734627;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.032863817793296446;
  } else {
    result[10] += 0.03555938555967821;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0253302537674220847) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201661622674484731) ) ) {
        if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01600245263011781244) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6292095240563234659) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5675917132643492069) ) ) {
                result[11] += 0.025076673833614137;
              } else {
                result[11] += -0.017105324170719985;
              }
            } else {
              result[11] += -0.015403710235616375;
            }
          } else {
            result[11] += 0.03689107902068686;
          }
        } else {
          result[11] += -0.03949129832373337;
        }
      } else {
        result[11] += -0.03204187980016339;
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7433491192657605273) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.400555149944672229) ) ) {
          if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6703432192151691504) ) ) {
            if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1688167567511480449) ) ) {
              result[11] += 0.006191029189235942;
            } else {
              result[11] += -0.03280219662346143;
            }
          } else {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
              result[11] += 0.03578357449048726;
            } else {
              result[11] += 0.006100181625226468;
            }
          }
        } else {
          result[11] += -0.03459728799769385;
        }
      } else {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
          result[11] += 0.025356051893965843;
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.0166351500022063406) ) ) {
            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7494567179442497284) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.460158264474811507) ) ) {
                result[11] += -0.03291198014821939;
              } else {
                result[11] += -0.0011377556047718522;
              }
            } else {
              if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6588290135639454093) ) ) {
                result[11] += 0.031666878906737014;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.094409707809469667) ) ) {
                  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.5094803989495694241) ) ) {
                    result[11] += -0.026957832722323657;
                  } else {
                    result[11] += 0.010665917286329705;
                  }
                } else {
                  result[11] += 0.020436768011449627;
                }
              }
            }
          } else {
            result[11] += 0.020015283778296738;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.255857088039638914) ) ) {
        result[11] += -0.03279863672479183;
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.1222920907438003191) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.962633868096237189) ) ) {
            result[11] += 0.05758075520054072;
          } else {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5916750311893624881) ) ) {
              result[11] += -0.03512849913277205;
            } else {
              result[11] += 0.03525969831442341;
            }
          }
        } else {
          result[11] += -0.022418422971392484;
        }
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
        result[11] += -0.034144505286028796;
      } else {
        result[11] += 0.02115179908822434;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2477131763261292141) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6123728509228160144) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2082742240538978107) ) ) {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4246669720681797711) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.45735601814746768) ) ) {
              result[12] += -0.005568842700071906;
            } else {
              result[12] += 0.04021459237498138;
            }
          } else {
            result[12] += -0.025991618279787167;
          }
        } else {
          result[12] += 0.07004729473691934;
        }
      } else {
        result[12] += -0.03477068013464142;
      }
    } else {
      result[12] += -0.03464938746223668;
    }
  } else {
    result[12] += 0.051980988859326324;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01055363686050501092) ) ) {
      if ( LIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2903175272918419592) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2477131763261292141) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.098734136948379625) ) ) {
              result[0] += 0.014179024217738801;
            } else {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8125319923846624492) ) ) {
                result[0] += -0.005846625282796919;
              } else {
                result[0] += -0.0365474448952643;
              }
            }
          } else {
            result[0] += 0.03105137990935121;
          }
        } else {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
            if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.659887908299829129) ) ) {
              if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03773833112301570175) ) ) {
                result[0] += -0.057511666070332375;
              } else {
                result[0] += 0.017046405065209467;
              }
            } else {
              if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1677298399680404728) ) ) {
                result[0] += 0.04438468751092641;
              } else {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
                  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146003291738276308) ) ) {
                    result[0] += -0.03782465675536167;
                  } else {
                    result[0] += -0.00036311635888626703;
                  }
                } else {
                  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3820048534398107765) ) ) {
                    result[0] += 0.02398245686435791;
                  } else {
                    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2040676014547820605) ) ) {
                      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2962559652867430837) ) ) {
                        result[0] += -0.027381695066405337;
                      } else {
                        result[0] += 0.004340539185398148;
                      }
                    } else {
                      result[0] += 0.0165125098777163;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7882889073897575427) ) ) {
              result[0] += 0.013262212860783341;
            } else {
              result[0] += 0.03622431100845428;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.01439156309470822522) ) ) {
          result[0] += 0.03363123341419355;
        } else {
          if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4263496037165664387) ) ) {
            result[0] += -0.03317809544938025;
          } else {
            result[0] += 0.020832301961936868;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.45302016113419874) ) ) {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3130539968198992051) ) ) {
          if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.449334337730953215) ) ) {
            result[0] += 0.006553479737992501;
          } else {
            result[0] += -0.028781361618497772;
          }
        } else {
          if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.1624704837324128515) ) ) {
            result[0] += 0.02613494010280582;
          } else {
            result[0] += 0.009245214020234338;
          }
        }
      } else {
        if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.01190905286351279582) ) ) {
          result[0] += -0.03361314592558842;
        } else {
          result[0] += 0.0027456426584370184;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6238315489557973992) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8000345600721433525) ) ) {
            result[0] += 0.021803071586150965;
          } else {
            result[0] += -0.038850351242977844;
          }
        } else {
          result[0] += -0.03401174490227208;
        }
      } else {
        result[0] += 0.034586185257026884;
      }
    } else {
      if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.09589176861408833796) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[0] += -0.034482189764977876;
        } else {
          result[0] += -0.002299046068574505;
        }
      } else {
        result[0] += 0.02783672723290704;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
      result[1] += -0.03486765687167191;
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6581356384813585869) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
            if ( UNLIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4186074840297701605) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
                result[1] += -0.025671358776189823;
              } else {
                result[1] += 0.03658569400619156;
              }
            } else {
              result[1] += 0.03603131859433011;
            }
          } else {
            result[1] += -0.03624356050364819;
          }
        } else {
          result[1] += -0.0361567446739718;
        }
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.135782671746872863) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[1] += 0.039541898714990954;
          } else {
            if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541234627288402673) ) ) {
              result[1] += -0.0341462910691689;
            } else {
              result[1] += 0.01687387751958873;
            }
          }
        } else {
          result[1] += -0.01644642927862145;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.315087423865315075) ) ) {
          result[1] += 0.03479897882629729;
        } else {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
            result[1] += -0.031056858013653765;
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)7.453514125476583096) ) ) {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8425672530836286755) ) ) {
                result[1] += 0.03173607822259616;
              } else {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3133014099965277799) ) ) {
                  if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201236317724579949) ) ) {
                    result[1] += -0.020666335753747753;
                  } else {
                    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7494567179442497284) ) ) {
                      result[1] += 0.024035974548750894;
                    } else {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3449654850823927199) ) ) {
                        result[1] += 0.016278887535794824;
                      } else {
                        result[1] += -0.012009043652701305;
                      }
                    }
                  }
                } else {
                  result[1] += 0.04178428779320092;
                }
              }
            } else {
              result[1] += -0.03782505618015096;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
          result[1] += 0.036060164190338695;
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)3.143420129103045024) ) ) {
            if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.4494064879937386681) ) ) {
              result[1] += -0.00024335111094624267;
            } else {
              result[1] += -0.03477476964875645;
            }
          } else {
            if ( LIKELY(  (data[49].missing != -1) && (data[49].fvalue <= (double)-0.03692797911020761353) ) ) {
              result[1] += 0.035076116052594065;
            } else {
              result[1] += -0.012686394351800651;
            }
          }
        }
      }
    } else {
      result[1] += 0.03454381246965926;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.0324010274261638;
  } else {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1662008098993101035) ) ) {
          result[2] += -0.008622931090503516;
        } else {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.0391851804350388036) ) ) {
            result[2] += 0.04443506453025053;
          } else {
            result[2] += -0.005574416279470702;
          }
        }
      } else {
        result[2] += -0.0376522206293217;
      }
    } else {
      if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4466332104211239717) ) ) {
        result[2] += 0.06673129956856222;
      } else {
        result[2] += 0.024256900267043958;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.03509278336595382;
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02548191619138223327) ) ) {
      if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
        result[3] += 0.028254712518699942;
      } else {
        result[3] += 0.03500524895626257;
      }
    } else {
      if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03926146738854716794) ) ) {
        result[3] += 0.03528483157162133;
      } else {
        result[3] += -0.03521032604673972;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6179594300169558574) ) ) {
        result[4] += 0.03752237522226467;
      } else {
        result[4] += -0.034481836575566305;
      }
    } else {
      result[4] += -0.03416468515665967;
    }
  } else {
    result[4] += 0.03575659133452401;
  }
  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6181786995525672124) ) ) {
    result[5] += -0.01851167173209875;
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.3852953277057459824) ) ) {
      result[5] += 0.16075937257507444;
    } else {
      result[5] += -0.025376339776013116;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701102284419148958) ) ) {
    result[6] += 0.054375542284513925;
  } else {
    result[6] += -0.034467401174523675;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
      result[7] += 0.003288771150419429;
    } else {
      result[7] += 0.027503707280101267;
    }
  } else {
    result[7] += -0.034446040307141164;
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[8] += -0.033501191747431776;
  } else {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619621763013154303) ) ) {
      result[8] += -0.03820504723941181;
    } else {
      result[8] += 0.040508733881179;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3157059568068864563) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08044689421173033261) ) ) {
        result[9] += 0.0007544460235279779;
      } else {
        result[9] += 0.032854861091488385;
      }
    } else {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.757888087624309037) ) ) {
        result[9] += -0.013984388460986865;
      } else {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7140394947178604346) ) ) {
          result[9] += 0.07410660689855451;
        } else {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5863540276134188156) ) ) {
            result[9] += -0.027487660731447917;
          } else {
            result[9] += 0.01589421951872599;
          }
        }
      }
    }
  } else {
    result[9] += -0.03356050825059473;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03275864829288824;
  } else {
    result[10] += 0.03549161370606514;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.057108140249295891) ) ) {
        if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.09006767164919422808) ) ) {
          result[11] += -0.034646292696325784;
        } else {
          result[11] += -0.0010786097195925983;
        }
      } else {
        if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2101666293889873638) ) ) {
          result[11] += -0.006677483904917504;
        } else {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.01301751523764219619) ) ) {
            result[11] += 0.035825588379298445;
          } else {
            result[11] += 0.009196073105871156;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1174113232083231068) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3130539968198992051) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6449313698140944906) ) ) {
              result[11] += 0.016586449832972503;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5114190513044379882) ) ) {
                if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8011650535511237736) ) ) {
                  result[11] += -0.03574452157843244;
                } else {
                  result[11] += -0.0033137232457263657;
                }
              } else {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1141210343149451079) ) ) {
                  result[11] += 0.002811437124520064;
                } else {
                  result[11] += 0.02593745573472528;
                }
              }
            }
          } else {
            result[11] += 0.02002834472479185;
          }
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.868347105958318988) ) ) {
            result[11] += -0.03349992513922667;
          } else {
            result[11] += -0.0035398556830291764;
          }
        }
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
          result[11] += 0.03725751089583861;
        } else {
          result[11] += -0.005418582326327877;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6199390503825454868) ) ) {
        if ( LIKELY( !(data[54].missing != -1) || (data[54].fvalue <= (double)0.2559968514238858961) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
            result[11] += 0.049093139704957926;
          } else {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
              result[11] += -0.03367865873669027;
            } else {
              result[11] += 0.033997469012100365;
            }
          }
        } else {
          result[11] += -0.017452810220499444;
        }
      } else {
        result[11] += -0.029382111838672235;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
        result[11] += -0.03411556735650275;
      } else {
        result[11] += 0.020204109722239218;
      }
    }
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.2604915822708271933) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.3310912535127845113) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
          if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7962891231175072138) ) ) {
            result[12] += 0.028279064710012493;
          } else {
            result[12] += -0.028437413696638447;
          }
        } else {
          result[12] += 0.04934065750356667;
        }
      } else {
        result[12] += -0.03461218060363303;
      }
    } else {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6201102227320881566) ) ) {
        result[12] += 0.08360946310747017;
      } else {
        result[12] += 0.03694477047777266;
      }
    }
  } else {
    result[12] += -0.03447606826344235;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3605171091795755789) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1143841639192145349) ) ) {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8125319923846624492) ) ) {
              result[0] += 0.0025947134412954054;
            } else {
              result[0] += -0.03640811130641734;
            }
          } else {
            result[0] += 0.027263301101433164;
          }
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8179725024608467399) ) ) {
              result[0] += -0.008687514015070546;
            } else {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.8837637088315529743) ) ) {
                result[0] += 0.034227017001006166;
              } else {
                result[0] += 0.006146624130582997;
              }
            }
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7994110553344907499) ) ) {
              if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02523146448420509821) ) ) {
                result[0] += 0.028260427562863552;
              } else {
                result[0] += -0.032282029344462206;
              }
            } else {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.331999447987429308) ) ) {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4335909216033792535) ) ) {
                  if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.07972073567814264) ) ) {
                    if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2637012579867058504) ) ) {
                      result[0] += 0.01394458995229837;
                    } else {
                      result[0] += -0.015553984464599767;
                    }
                  } else {
                    result[0] += 0.03855790415686239;
                  }
                } else {
                  result[0] += 0.03444325024428645;
                }
              } else {
                result[0] += -0.021014362670492257;
              }
            }
          }
        }
      } else {
        result[0] += -0.05676665960618877;
      }
    } else {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.4293439263737330869) ) ) {
        if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01055450239899540996) ) ) {
          if ( UNLIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.2876803796497151011) ) ) {
            result[0] += -0.014937389172903064;
          } else {
            result[0] += 0.03121663275806969;
          }
        } else {
          if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.7271006213270146956) ) ) {
            result[0] += 0.00850538035682358;
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02540956347415987762) ) ) {
              result[0] += 0.024546837497998106;
            } else {
              result[0] += -0.031987320920218894;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1264275947366554076) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
            result[0] += -0.0709896601576548;
          } else {
            result[0] += -0.02919214696207823;
          }
        } else {
          result[0] += 0.021454956222254965;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227669744999093426) ) ) {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5893403301835874464) ) ) {
          result[0] += 0.0023437076717103583;
        } else {
          result[0] += -0.03854771808380979;
        }
      } else {
        result[0] += 0.031173563217814764;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6123728509228160144) ) ) {
        result[0] += -0.03439622342327024;
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201900647098373964) ) ) {
          result[0] += 0.017164094515564908;
        } else {
          result[0] += -0.029165769212300158;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924219109533950978) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7722884759342584227) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5861387095656613866) ) ) {
            result[1] += 0.03419585341108246;
          } else {
            result[1] += -0.03407105146488733;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[1] += 0.011993470502529276;
          } else {
            result[1] += -0.024543987583576718;
          }
        }
      } else {
        if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03699419415973542735) ) ) {
          result[1] += 0.03013453994577482;
        } else {
          result[1] += -0.006426419651386341;
        }
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
        result[1] += -0.034859607864737296;
      } else {
        if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[1] += 0.02489123573289139;
        } else {
          result[1] += -0.035272854483277286;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3919779259888919176) ) ) {
              result[1] += -0.01206191735775998;
            } else {
              result[1] += 0.03785314558378239;
            }
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7706884327887083552) ) ) {
              if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
                if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.0392434320385037852) ) ) {
                  result[1] += -0.015391050078432774;
                } else {
                  if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01814955373264689684) ) ) {
                    if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.04322445425416878567) ) ) {
                      result[1] += 0.0351915204732197;
                    } else {
                      result[1] += 0.010161873158171814;
                    }
                  } else {
                    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.333338310990991538) ) ) {
                      result[1] += -0.012480641892788464;
                    } else {
                      result[1] += 0.008105911022608521;
                    }
                  }
                }
              } else {
                result[1] += -0.03284695733283722;
              }
            } else {
              result[1] += -0.03357150870215136;
            }
          }
        } else {
          result[1] += 0.034674720112248925;
        }
      } else {
        if ( LIKELY( !(data[81].missing != -1) || (data[81].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += -0.032820191095325614;
        } else {
          result[1] += 0.03507671348481549;
        }
      }
    } else {
      if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.02691284328291692479) ) ) {
        result[1] += 0.03479767988441717;
      } else {
        result[1] += 0.01986133483660093;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
    result[2] += -0.03212185077139589;
  } else {
    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5434823061206194295) ) ) {
      if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01026768463659179752) ) ) {
        if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.330841834195493345) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
            result[2] += 0.027270144947523174;
          } else {
            result[2] += -0.03759475219484658;
          }
        } else {
          result[2] += 0.03460614670006732;
        }
      } else {
        result[2] += 0.07409912219584368;
      }
    } else {
      result[2] += -0.034653892658149214;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.03541943264293766;
    } else {
      result[3] += 0.034962830708489226;
    }
  } else {
    result[3] += -0.0351766716048872;
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += 0.002694161742676425;
    } else {
      result[4] += -0.03414291675853427;
    }
  } else {
    result[4] += 0.0356673455805798;
  }
  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5089252727474612437) ) ) {
    result[5] += -0.021506618341172574;
  } else {
    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.1212331499394097012) ) ) {
      result[5] += 0.15046070023789154;
    } else {
      result[5] += -0.025919397139123283;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.026517117959140673;
  } else {
    result[6] += 0.12283525740361936;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
      result[7] += 0.0028827444974937493;
    } else {
      result[7] += 0.02720654937902729;
    }
  } else {
    result[7] += -0.034445188131073605;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.003645027256659272) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
      result[8] += -0.03786101476105411;
    } else {
      result[8] += 0.03914058385025339;
    }
  } else {
    result[8] += -0.03443884991838105;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6320649457863874998) ) ) {
      if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[9] += -0.023287041015025066;
      } else {
        result[9] += 0.040965245680683604;
      }
    } else {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7850888210986576299) ) ) {
        result[9] += -0.027184352324549875;
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
          if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6299454574919070016) ) ) {
            result[9] += 0.031972045508504354;
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.757888087624309037) ) ) {
              result[9] += -0.010898062709065511;
            } else {
              if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6059540274918849834) ) ) {
                if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.8828948711033347552) ) ) {
                  result[9] += 0.07971016869296642;
                } else {
                  result[9] += -0.0011342315242739898;
                }
              } else {
                result[9] += 0.011205993192756667;
              }
            }
          }
        } else {
          result[9] += -0.03446127293312735;
        }
      }
    }
  } else {
    result[9] += -0.03348563527351072;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[10] += 0.030452725312929946;
  } else {
    result[10] += -0.03254227090734456;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.316912662621952501) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.045107198229514589) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7176464536934513694) ) ) {
            result[11] += -0.04000225987870802;
          } else {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
              if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03868927796421019888) ) ) {
                if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03910039676765995897) ) ) {
                  result[11] += 0.015438395772645374;
                } else {
                  result[11] += 0.04902600338889377;
                }
              } else {
                result[11] += -0.01681799599330793;
              }
            } else {
              if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01054671255394320183) ) ) {
                if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.3388299797967100346) ) ) {
                  result[11] += -0.005250439403926294;
                } else {
                  result[11] += -0.0370743644989536;
                }
              } else {
                result[11] += 0.03387095990512889;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3471407636898510285) ) ) {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7156028676966986746) ) ) {
              result[11] += 0.020601480002843484;
            } else {
              result[11] += -0.01733156034897486;
            }
          } else {
            result[11] += 0.0369670955771961;
          }
        }
      } else {
        result[11] += -0.034500729552373995;
      }
    } else {
      if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1407910841014318182) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7433491192657605273) ) ) {
            result[11] += 0.034459857857336525;
          } else {
            result[11] += 0.0020410438936941484;
          }
        } else {
          result[11] += -0.009117499176952662;
        }
      } else {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
          result[11] += 0.013058811231482644;
        } else {
          if ( LIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.3533084670104546521) ) ) {
            result[11] += -0.038380625274139026;
          } else {
            result[11] += -0.004265362023813044;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.255857088039638914) ) ) {
        result[11] += -0.033020766833620166;
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.962633868096237189) ) ) {
          result[11] += 0.05459085502191693;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
            result[11] += -0.03709899808018266;
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.01895234978839231352) ) ) {
              result[11] += -0.014585472922134577;
            } else {
              result[11] += 0.03283352065313521;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[11] += -0.034295708797724464;
      } else {
        result[11] += 0.016846656846047074;
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1656063960181672345) ) ) {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6890255270564503709) ) ) {
          result[12] += 3.878032031020123e-05;
        } else {
          result[12] += 0.04554616512574;
        }
      } else {
        result[12] += -0.020551917466262122;
      }
    } else {
      result[12] += -0.03450458262225835;
    }
  } else {
    if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2418892081941573513) ) ) {
      result[12] += 0.06523850355651956;
    } else {
      result[12] += -0.003432242892166998;
    }
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.194912770072289715) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
      if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01040065296171015403) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1143841639192145349) ) ) {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8156587383423387072) ) ) {
              result[0] += 0.014180089196448305;
            } else {
              result[0] += -0.037206310467128544;
            }
          } else {
            result[0] += 0.030744375368923223;
          }
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9687903016561022485) ) ) {
            if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201900647098373964) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8026892956997068174) ) ) {
                result[0] += -0.00861483703249873;
              } else {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8069768696133862163) ) ) {
                  result[0] += 0.03439472599777368;
                } else {
                  result[0] += 0.008295437729037115;
                }
              }
            } else {
              result[0] += -0.023488801456347;
            }
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.331999447987429308) ) ) {
              if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3605171091795755789) ) ) {
                  if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.454475922891116435) ) ) {
                    if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4554771088591554329) ) ) {
                      result[0] += -0.010256000492715883;
                    } else {
                      if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03878388749796033569) ) ) {
                        result[0] += 0.014459071702099865;
                      } else {
                        result[0] += 0.03226807203360504;
                      }
                    }
                  } else {
                    result[0] += 0.033765455638178545;
                  }
                } else {
                  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6264906079029254338) ) ) {
                    result[0] += 0.014459915328950714;
                  } else {
                    result[0] += -0.047515448473108145;
                  }
                }
              } else {
                result[0] += 0.03442014694308019;
              }
            } else {
              result[0] += -0.005148261584023116;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.049820097983093836) ) ) {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
              result[0] += 0.007546977846978112;
            } else {
              if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2695437532975495931) ) ) {
                result[0] += 0.006377911134301716;
              } else {
                result[0] += -0.03133698164982672;
              }
            }
          } else {
            result[0] += 0.021645214770504934;
          }
        } else {
          result[0] += 0.05475814703522747;
        }
      }
    } else {
      result[0] += -0.050537652092393165;
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[0] += -0.03362548360496852;
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
          result[0] += -0.009708753113704864;
        } else {
          result[0] += 0.03398887997800789;
        }
      }
    } else {
      result[0] += 0.03573722446777352;
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6202118656718869083) ) ) {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5971525348704809222) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8567430584850248554) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08044689421173033261) ) ) {
              result[1] += 0.004108007431284562;
            } else {
              result[1] += -0.03616135313591794;
            }
          } else {
            result[1] += 0.00834215114487774;
          }
        } else {
          result[1] += -0.03451190628108259;
        }
      } else {
        if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03699419415973542735) ) ) {
          if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03913928513952212584) ) ) {
            result[1] += 0.00690582424308099;
          } else {
            result[1] += 0.03370517297932317;
          }
        } else {
          result[1] += -0.004257717767108175;
        }
      }
    } else {
      if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-2.758297861239732196) ) ) {
        result[1] += -0.013240322448901541;
      } else {
        result[1] += -0.03477135206463655;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01056175128209405067) ) ) {
          if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041423957829911151) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.023658799609412418) ) ) {
              result[1] += -0.00019685201828651414;
            } else {
              result[1] += -0.01941084473980143;
            }
          } else {
            if ( UNLIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[1] += -0.007633876521807224;
            } else {
              if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7898889505353073881) ) ) {
                result[1] += -0.0023734039492050545;
              } else {
                result[1] += 0.030669896146141046;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.1474147852366628209) ) ) {
            result[1] += 0.034304436559707746;
          } else {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.09442581021525137119) ) ) {
              result[1] += 0.03513008131310123;
            } else {
              result[1] += -0.015457841253886544;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += -0.035221355668277506;
        } else {
          if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1968651518870245809) ) ) {
            if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.4987959522894353515) ) ) {
              result[1] += -0.026344652333044494;
            } else {
              result[1] += 0.03504254841327363;
            }
          } else {
            result[1] += -0.03531109952748261;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.2014722153586092634) ) ) {
        if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.112786931414574812) ) ) {
          result[1] += 0.0323850024781917;
        } else {
          result[1] += -0.005397281453104229;
        }
      } else {
        result[1] += 0.03474896447987989;
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.03212535804367249;
  } else {
    if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.4814898021264421568) ) ) {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
        result[2] += 0.013815240057924427;
      } else {
        result[2] += 0.052939190124471264;
      }
    } else {
      result[2] += 0.0074720402844311775;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.035033960786255286;
  } else {
    if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2688353998367762898) ) ) {
      if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.521278306735152186) ) ) {
        result[3] += 0.028283975925719896;
      } else {
        result[3] += 0.03493073855120122;
      }
    } else {
      if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3989492575437635358) ) ) {
        result[3] += 0.0346481246461035;
      } else {
        result[3] += -0.034463489314337986;
      }
    }
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5737185163116343967) ) ) {
      result[4] += -0.03456151353513528;
    } else {
      result[4] += 0.036097798145668214;
    }
  } else {
    result[4] += -0.033886589861109165;
  }
  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5089252727474612437) ) ) {
    result[5] += -0.02084893623202013;
  } else {
    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.1212331499394097012) ) ) {
      result[5] += 0.12640955535486711;
    } else {
      result[5] += -0.025413584680251813;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.026130706248063656;
  } else {
    result[6] += 0.10736999903309036;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[7] += 0.02298127765206102;
  } else {
    result[7] += -0.03444440361320394;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    result[8] += -0.028558737677054392;
  } else {
    result[8] += 0.02541000442883832;
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3157059568068864563) ) ) {
      result[9] += 0.028009998908192;
    } else {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7750110408925473537) ) ) {
        result[9] += -0.015927521679214504;
      } else {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7140394947178604346) ) ) {
          result[9] += 0.05373343699857752;
        } else {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6921522730141266289) ) ) {
            result[9] += -0.03469953566751889;
          } else {
            result[9] += 0.011002074074817325;
          }
        }
      }
    }
  } else {
    result[9] += -0.03337655822421204;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[10] += 0.03009209047842136;
  } else {
    result[10] += -0.032414479616233415;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.316912662621952501) ) ) {
        if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.5094803989495694241) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01057992758721586907) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7234889581658809909) ) ) {
              if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9813908915340151529) ) ) {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6449313698140944906) ) ) {
                  result[11] += 0.016200082174401217;
                } else {
                  result[11] += -0.00700683998661246;
                }
              } else {
                result[11] += -0.021303247238590242;
              }
            } else {
              result[11] += 0.012049455975189605;
            }
          } else {
            result[11] += -0.03461966226888755;
          }
        } else {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
            result[11] += 0.040513599617156476;
          } else {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6061012141790016461) ) ) {
              result[11] += -0.01715137461682972;
            } else {
              result[11] += 0.02159406288249223;
            }
          }
        }
      } else {
        result[11] += -0.034495963257220576;
      }
    } else {
      if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1407910841014318182) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
          if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2696200498543257495) ) ) {
            result[11] += -0.00045099637893565467;
          } else {
            result[11] += 0.033916297714925686;
          }
        } else {
          result[11] += -0.008827583458895045;
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.946040802375038625) ) ) {
          result[11] += 0.008735750118487384;
        } else {
          result[11] += -0.029164305356533873;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.1222920907438003191) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.980962009341198482) ) ) {
          if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.4350084708877434703) ) ) {
            result[11] += 0.02538824743621714;
          } else {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.962633868096237189) ) ) {
              result[11] += 0.00981934478022778;
            } else {
              result[11] += -0.02967595303582299;
            }
          }
        } else {
          result[11] += 0.04310954727715872;
        }
      } else {
        result[11] += -0.025612602013964935;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[11] += -0.03428039144177408;
      } else {
        result[11] += 0.016162446742019644;
      }
    }
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.2604915822708271933) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6421243376913067236) ) ) {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6890255270564503709) ) ) {
              result[12] += -0.013231950975768531;
            } else {
              result[12] += 0.04200994841592713;
            }
          } else {
            result[12] += -0.019691824941490316;
          }
        } else {
          result[12] += 0.04954608862491389;
        }
      } else {
        result[12] += -0.03451034364652583;
      }
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02524607416656448819) ) ) {
        result[12] += 0.09141679265524595;
      } else {
        result[12] += 0.034073505098543996;
      }
    }
  } else {
    result[12] += -0.034477221944395425;
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.06899662408387258195) ) ) {
            result[0] += -0.024452240716802492;
          } else {
            result[0] += 0.02746670796399488;
          }
        } else {
          result[0] += -0.03448728709768269;
        }
      } else {
        if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
            result[0] += -0.049343634070930856;
          } else {
            result[0] += -0.005211530593373388;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.884989234874052122) ) ) {
            result[0] += 0.034422676543932655;
          } else {
            result[0] += 0.0048673842631153565;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3605171091795755789) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5773093211169014749) ) ) {
          result[0] += 0.04320988082879275;
        } else {
          if ( UNLIKELY( !(data[48].missing != -1) || (data[48].fvalue <= (double)2.483921648875702992) ) ) {
            result[0] += 0.029753789707066918;
          } else {
            result[0] += -0.005118319984734681;
          }
        }
      } else {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680046924847954093) ) ) {
          result[0] += -0.02485053827025116;
        } else {
          result[0] += 0.014333181571519953;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6252354835041725734) ) ) {
      if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.0104219668428953572) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.315620908527420363) ) ) {
            result[0] += -0.006702857484184875;
          } else {
            result[0] += -0.03666853627126342;
          }
        } else {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7946890799719572573) ) ) {
              result[0] += 0.004436019497714391;
            } else {
              result[0] += 0.03576774693243895;
            }
          } else {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146003291738276308) ) ) {
                result[0] += -0.04398133834843923;
              } else {
                result[0] += -0.0028899731052633645;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.030708100805462157) ) ) {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3820048534398107765) ) ) {
                  result[0] += 0.026936620648449764;
                } else {
                  result[0] += 0.00742255051908454;
                }
              } else {
                result[0] += -0.004323605746730775;
              }
            }
          }
        }
      } else {
        result[0] += -0.02975664817675162;
      }
    } else {
      if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.009878733352741834658) ) ) {
        result[0] += 0.032352117809974656;
      } else {
        result[0] += 0.008017979362833931;
      }
    }
  }
  if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1346367259363155655) ) ) {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
      result[1] += -0.034806620204410214;
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.051689767643777529) ) ) {
        if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5912475240206701566) ) ) {
          result[1] += 0.03252019909258642;
        } else {
          if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.9818088242930961274) ) ) {
            result[1] += -0.034027481439879104;
          } else {
            result[1] += 0.0024210164971197865;
          }
        }
      } else {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8078418734481481733) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[1] += 0.0390625597455645;
          } else {
            result[1] += -0.032742912064677845;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.07375433443688378388) ) ) {
            result[1] += -0.009769578653442572;
          } else {
            result[1] += -0.04082581883331307;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4099809178911676399) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
          if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1233134875523535651) ) ) {
            if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4668185116330310636) ) ) {
              if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02362370367465634058) ) ) {
                result[1] += 0.02452889722897947;
              } else {
                result[1] += -0.018655802911643395;
              }
            } else {
              result[1] += 0.03279882297431491;
            }
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.135782671746872863) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1720197088307830191) ) ) {
                if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8380126130109860627) ) ) {
                  result[1] += 0.01103739759987645;
                } else {
                  result[1] += 0.038324434576271764;
                }
              } else {
                if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8726866532902503026) ) ) {
                  result[1] += -0.017278569636173514;
                } else {
                  result[1] += 0.0021421621049287753;
                }
              }
            } else {
              result[1] += -0.031947137766547444;
            }
          }
        } else {
          result[1] += -0.03626509667357526;
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201900647098373964) ) ) {
          result[1] += 0.015835301413219774;
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.095048325145008938) ) ) {
            result[1] += 0.03492088489063236;
          } else {
            result[1] += 0.02252461904076042;
          }
        }
      }
    } else {
      result[1] += -0.03567388990562502;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.031975984541862124;
  } else {
    if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.3937074974179520792) ) ) {
      if ( UNLIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1428448226772104368) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          result[2] += 0.029967471945319214;
        } else {
          result[2] += -0.017068131925535;
        }
      } else {
        result[2] += -0.024045559257942106;
      }
    } else {
      result[2] += 0.046805896925220726;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.03536347455671743;
    } else {
      result[3] += 0.034892066945474365;
    }
  } else {
    result[3] += -0.035129704964132306;
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += 0.004613339295235893;
    } else {
      result[4] += -0.03409552579472183;
    }
  } else {
    result[4] += 0.03550730709155545;
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.010926839157595403) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      result[5] += 0.028509618120647565;
    } else {
      result[5] += -0.034440640126727734;
    }
  } else {
    result[5] += 0.12451372512786499;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.025613400491644824;
  } else {
    result[6] += 0.09627388698649468;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4819992438703088466) ) ) {
      result[7] += 0.0016082805868498382;
    } else {
      result[7] += 0.02632702280351634;
    }
  } else {
    result[7] += -0.03444367531986703;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.035819607984337504;
  } else {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8406727060037487709) ) ) {
      result[8] += 0.039652149861177405;
    } else {
      result[8] += -0.03443733838807065;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03926013208742445276) ) ) {
        result[9] += -0.03489119997043053;
      } else {
        result[9] += 0.014040866805182755;
      }
    } else {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.859953023313256959) ) ) {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6320649457863874998) ) ) {
          result[9] += 0.041181569651773366;
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9299632234874292136) ) ) {
            result[9] += -0.025443730219695173;
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5557878426946177841) ) ) {
              if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5979350353963549525) ) ) {
                result[9] += 0.031819591698241244;
              } else {
                result[9] += -0.008252129282088499;
              }
            } else {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2477131763261292141) ) ) {
                result[9] += 0.10246527646881028;
              } else {
                result[9] += 0.00550007160100308;
              }
            }
          }
        }
      } else {
        result[9] += -0.028441013729785494;
      }
    }
  } else {
    result[9] += -0.033331891507446344;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03241779346295408;
  } else {
    result[10] += 0.03531963655327654;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01050733056011764893) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.316912662621952501) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.045107198229514589) ) ) {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03699419415973542735) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3883480444146680255) ) ) {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7176464536934513694) ) ) {
                result[11] += -0.04046343189852931;
              } else {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
                  result[11] += 0.018696945625357245;
                } else {
                  result[11] += -0.00671860554359913;
                }
              }
            } else {
              result[11] += -0.04079605097062699;
            }
          } else {
            result[11] += 0.022707099070163994;
          }
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3471407636898510285) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4247338397979677493) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2612217416717404483) ) ) {
                result[11] += 0.03994455011395432;
              } else {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.051689767643777529) ) ) {
                  result[11] += -0.01408688320974759;
                } else {
                  result[11] += 0.030669395824703554;
                }
              }
            } else {
              result[11] += -0.021169180779665325;
            }
          } else {
            result[11] += 0.03570879961885676;
          }
        }
      } else {
        result[11] += -0.033287308353038975;
      }
    } else {
      if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1407910841014318182) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
          result[11] += -0.008348966714702758;
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.921320729542432826) ) ) {
            result[11] += 0.03420970922620842;
          } else {
            result[11] += -0.007241438318693884;
          }
        }
      } else {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
          result[11] += 0.011771687513809923;
        } else {
          result[11] += -0.029845838515422756;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.255857088039638914) ) ) {
        result[11] += -0.03268234779542423;
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.962633868096237189) ) ) {
          result[11] += 0.05263338834175411;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
            result[11] += -0.03720474215581599;
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.041888498083704651) ) ) {
              result[11] += 0.0012023017526881484;
            } else {
              result[11] += 0.037245890530141636;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[11] += -0.034258812613280634;
      } else {
        result[11] += 0.016169948010478812;
      }
    }
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.2604915822708271933) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
          result[12] += 0.006206559184112807;
        } else {
          result[12] += 0.047294563451072025;
        }
      } else {
        result[12] += -0.03450843812292168;
      }
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02524607416656448819) ) ) {
        result[12] += 0.08833957647907605;
      } else {
        result[12] += 0.033217061881049316;
      }
    }
  } else {
    result[12] += -0.03447608625304967;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.422170698187460003) ) ) {
      if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01040065296171015403) ) ) {
        if ( LIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2903175272918419592) ) ) {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
            if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4892879363295689621) ) ) {
              result[0] += -0.07778305973350458;
            } else {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.01605389607708152325) ) ) {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.07972073567814264) ) ) {
                  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7922081436597668835) ) ) {
                    result[0] += 0.02644077825054394;
                  } else {
                    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5065660266127786082) ) ) {
                      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6581356384813585869) ) ) {
                        result[0] += 0.010397017470699836;
                      } else {
                        result[0] += -0.025061247240045374;
                      }
                    } else {
                      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3820048534398107765) ) ) {
                        result[0] += 0.02104309344725791;
                      } else {
                        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.5717725536435908085) ) ) {
                          result[0] += -0.018977921672010126;
                        } else {
                          result[0] += 0.013641043656620248;
                        }
                      }
                    }
                  }
                } else {
                  result[0] += 0.023301862577264684;
                }
              } else {
                result[0] += -0.025546995572771472;
              }
            }
          } else {
            result[0] += 0.023506478000456136;
          }
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.5530935710803274175) ) ) {
            if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01055406962952331468) ) ) {
              result[0] += 0.03409227982149807;
            } else {
              result[0] += 0.017165515725364226;
            }
          } else {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5193328575723045182) ) ) {
              result[0] += -0.037664027816239426;
            } else {
              result[0] += 0.02076574008615624;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5057532559586229715) ) ) {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5841630261409712643) ) ) {
            if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6240636510280054283) ) ) {
              result[0] += -0.0340915223530627;
            } else {
              result[0] += 0.011688151008130209;
            }
          } else {
            result[0] += 0.016994611227774865;
          }
        } else {
          result[0] += -0.03233058788608141;
        }
      }
    } else {
      result[0] += -0.03440677883887913;
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.277331842728165245) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1560695414882870835) ) ) {
          result[0] += 0.025373527438815748;
        } else {
          result[0] += -0.018424495059261213;
        }
      } else {
        result[0] += 0.03233716262466459;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6123728509228160144) ) ) {
        result[0] += -0.03437860223200295;
      } else {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2855774686981291111) ) ) {
          result[0] += 0.04410147010240523;
        } else {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
            result[0] += -0.038035452009118814;
          } else {
            result[0] += 0.007343865877528415;
          }
        }
      }
    }
  }
  if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1346367259363155655) ) ) {
    if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5971525348704809222) ) ) {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
        if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5912475240206701566) ) ) {
          result[1] += 0.020584953640426538;
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)0.02700841698297598223) ) ) {
            result[1] += -0.03444169802644913;
          } else {
            if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
              result[1] += 0.03619246062164119;
            } else {
              result[1] += -0.0349723364597908;
            }
          }
        }
      } else {
        result[1] += 0.0080992151993303;
      }
    } else {
      result[1] += -0.03452072269041282;
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4524762129908025954) ) ) {
        if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.006791561960068646757) ) ) {
          if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7418876561688098059) ) ) {
                if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7946890799719572573) ) ) {
                  result[1] += -0.010928288643058724;
                } else {
                  result[1] += 0.03650136178824546;
                }
              } else {
                result[1] += -0.018273314771277083;
              }
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
                if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7834887779531077845) ) ) {
                  result[1] += -0.0005916939233914687;
                } else {
                  result[1] += -0.035977909281985195;
                }
              } else {
                if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1673079343172020617) ) ) {
                  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7656308030195185799) ) ) {
                    result[1] += 0.008086979103693428;
                  } else {
                    result[1] += 0.03423500779518238;
                  }
                } else {
                  if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5974655350808305565) ) ) {
                    if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041671670938614236) ) ) {
                      result[1] += -0.01766834608875938;
                    } else {
                      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6033696181219915244) ) ) {
                        result[1] += 0.01844622074416697;
                      } else {
                        result[1] += -0.01155488537994881;
                      }
                    }
                  } else {
                    result[1] += -0.03479040612791562;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1968651518870245809) ) ) {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201840454251773549) ) ) {
                result[1] += -0.015027623105246666;
              } else {
                result[1] += 0.03321512526087303;
              }
            } else {
              result[1] += -0.02480167942874591;
            }
          }
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.077954077688123347) ) ) {
            result[1] += 0.014827719653998657;
          } else {
            result[1] += -0.03583354961571062;
          }
        }
      } else {
        result[1] += -0.03562057784134914;
      }
    } else {
      if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.02554218522393611815) ) ) {
        result[1] += 0.034657594834151935;
      } else {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.007537630248567310856) ) ) {
          result[1] += 0.032682078576320626;
        } else {
          result[1] += -0.006435297905422204;
        }
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.031811727459059;
  } else {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924095673946937507) ) ) {
          result[2] += -0.009655348100591144;
        } else {
          if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03920684852128885484) ) ) {
            result[2] += 0.043723533308951755;
          } else {
            result[2] += -0.005101944428224254;
          }
        }
      } else {
        result[2] += -0.03732505250685966;
      }
    } else {
      if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4466332104211239717) ) ) {
        result[2] += 0.07247083309640617;
      } else {
        result[2] += 0.022605588378793687;
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.03535422086599886;
    } else {
      result[3] += 0.034859256089905456;
    }
  } else {
    result[3] += -0.03510059971556724;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6123728509228160144) ) ) {
      result[4] += -0.03457105890807167;
    } else {
      result[4] += 0.0369067546258671;
    }
  } else {
    result[4] += -0.0338193318214851;
  }
}

