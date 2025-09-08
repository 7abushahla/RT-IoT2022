
#include "header.h"

void predict_unit0(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.5392652827504645918) ) ) {
      if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.6077743444705893117) ) ) {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.816561841575487168) ) ) {
          if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)6.727918906444853242) ) ) {
              if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
                result[0] += -3.334891415137112;
              } else {
                if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01067280757031362041) ) ) {
                  result[0] += -2.9425718577366435;
                } else {
                  if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1798826341598740997) ) ) {
                    result[0] += -3.2505308503150285;
                  } else {
                    result[0] += -3.3340716978142293;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[0] += -3.047994854263078;
              } else {
                result[0] += -3.3349667703979677;
              }
            }
          } else {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.06941445991431857698) ) ) {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4545285182290580983) ) ) {
                result[0] += -3.3349668169889237;
              } else {
                result[0] += -3.2981204712353653;
              }
            } else {
              result[0] += -2.398722213836286;
            }
          }
        } else {
          if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
            result[0] += -2.5385448842673357;
          } else {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.01779133058124936217) ) ) {
              result[0] += -3.206713989915779;
            } else {
              if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03515262245448511763) ) ) {
                result[0] += -3.3349668020613192;
              } else {
                result[0] += -3.3093442135009385;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.731000403976756141) ) ) {
          if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.1851297501252352207) ) ) {
            result[0] += -3.107389008664192;
          } else {
            result[0] += -3.334966749192418;
          }
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7722532834193429618) ) ) {
            result[0] += -3.04917147280069;
          } else {
            if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01069579136213695374) ) ) {
              result[0] += -2.3664385522196216;
            } else {
              result[0] += -2.4161063742212305;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01068823800366174373) ) ) {
        result[0] += -2.3664372677867407;
      } else {
        result[0] += -2.687526653747601;
      }
    }
  } else {
    if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2695809611126829819) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
        result[0] += -3.1792423454663057;
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02369209990404658184) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5976803402066644955) ) ) {
            result[0] += -2.398720977015487;
          } else {
            result[0] += -2.3683788567649238;
          }
        } else {
          result[0] += -2.6632454956838476;
        }
      }
    } else {
      if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.624853897296242633) ) ) {
        if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.03725019243557075449) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3488614882332986) ) ) {
            if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
              result[0] += -3.333162894362908;
            } else {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198175150923107557) ) ) {
                result[0] += -3.2549964016957635;
              } else {
                result[0] += -3.326793448419741;
              }
            }
          } else {
            result[0] += -3.2212378450565216;
          }
        } else {
          result[0] += -3.017747851299652;
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02370597062363126797) ) ) {
          result[0] += -2.3676959286657597;
        } else {
          result[0] += -2.610967583035817;
        }
      }
    }
  }
  if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6992443821141464122) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.731000403976756141) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3895400451821667831) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
            if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
                if ( LIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  result[1] += -0.9413810257422783;
                } else {
                  result[1] += -0.9234141839119108;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.102546986980341481) ) ) {
                  result[1] += -0.9397931752574642;
                } else {
                  result[1] += -0.8922383521682169;
                }
              }
            } else {
              result[1] += -0.9415186871411608;
            }
          } else {
            if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
              result[1] += -0.8052421837475766;
            } else {
              result[1] += -0.9415244126159272;
            }
          }
        } else {
          result[1] += -0.8688405408931267;
        }
      } else {
        result[1] += -0.8172299645548141;
      }
    } else {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619334285637768045) ) ) {
        result[1] += -0.8176863944858355;
      } else {
        result[1] += -0.7995637219928593;
      }
    }
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01581463613528749299) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.503056489870696177) ) ) {
        if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3980700287761728129) ) ) {
          if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6664244451779278711) ) ) {
            result[1] += -0.9030621442228555;
          } else {
            result[1] += -0.9415243951172975;
          }
        } else {
          if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
              if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
                if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
                  if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1109290895755049022) ) ) {
                    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6032356958133081593) ) ) {
                      result[1] += -0.8002586168339388;
                    } else {
                      result[1] += -0.8220971935465436;
                    }
                  } else {
                    result[1] += -0.8453817392279811;
                  }
                } else {
                  result[1] += -0.9339464229779718;
                }
              } else {
                if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.425445338376630788) ) ) {
                  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8279158400180349764) ) ) {
                    result[1] += -0.7997328433415002;
                  } else {
                    if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.04660062238376996152) ) ) {
                      result[1] += -0.847087053955746;
                    } else {
                      result[1] += -0.8019945734597224;
                    }
                  }
                } else {
                  result[1] += -0.799563700390105;
                }
              }
            } else {
              result[1] += -0.8764590944786925;
            }
          } else {
            result[1] += -0.9173317441078654;
          }
        }
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          result[1] += -0.9414636487945423;
        } else {
          if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03464886261900983894) ) ) {
            result[1] += -0.7998253896705412;
          } else {
            result[1] += -0.8453817392279811;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          result[1] += -0.9415244217659576;
        } else {
          result[1] += -0.8352024034815743;
        }
      } else {
        if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3729285240379283661) ) ) {
          result[1] += -0.7997377854553879;
        } else {
          result[1] += -0.8166300675704838;
        }
      }
    }
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.077547591217599354) ) ) {
    if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.843665024502877392) ) ) {
        result[2] += -6.009941836874692;
      } else {
        result[2] += -5.965158625335231;
      }
    } else {
      if ( UNLIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.08249171816419946512) ) ) {
        result[2] += -5.40062788501867;
      } else {
        result[2] += -6.010036167236335;
      }
    }
  } else {
    result[2] += -4.225340304773281;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.8593330557970262;
  } else {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.0388927806847981436) ) ) {
      result[3] += -0.720408000423744;
    } else {
      result[3] += -0.7897990785644854;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -3.959845778592706;
  } else {
    result[4] += -2.181112282718865;
  }
  if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619840163027092772) ) ) {
    result[5] += -8.469583714132414;
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      result[5] += -8.629616418463437;
    } else {
      result[5] += -8.662966774802175;
    }
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.725131674844269436) ) ) {
    result[6] += -8.809930834301047;
  } else {
    result[6] += -8.964863467090264;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6832277872550962527) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4178946120279953269) ) ) {
        result[7] += -4.688523897850244;
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
          result[7] += -4.688523777685433;
        } else {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.06756346529129970968) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4276321378940930451) ) ) {
              result[7] += -1.039253383100594;
            } else {
              result[7] += -1.1492134339772835;
            }
          } else {
            result[7] += -1.7659851623365066;
          }
        }
      }
    } else {
      result[7] += -4.688523926040646;
    }
  } else {
    result[7] += -4.688523999290101;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      result[8] += -5.3787312976117;
    } else {
      result[8] += 0.6395220687832754;
    }
  } else {
    result[8] += -5.378731355492053;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.359373824246746132) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.01967859759586815943) ) ) {
          result[9] += -3.248851872123213;
        } else {
          result[9] += -1.652797648903332;
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.146880090638758759) ) ) {
          if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.6256317106775260983) ) ) {
            result[9] += -4.385294553427277;
          } else {
            result[9] += -4.428179599157979;
          }
        } else {
          result[9] += -4.393518133554237;
        }
      }
    } else {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[9] += -4.4297611906387635;
      } else {
        if ( UNLIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.08300107753288470114) ) ) {
          result[9] += -3.4669108551905157;
        } else {
          result[9] += -4.428454103531054;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.74232615100710575) ) ) {
        result[9] += -1.6043073432223847;
      } else {
        result[9] += -1.8926563973114838;
      }
    } else {
      result[9] += -4.430004827842845;
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
      result[10] += -4.683676255468995;
    } else {
      result[10] += -1.0518749981680187;
    }
  } else {
    result[10] += -4.68360172395411;
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.005249948336265990688) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5831015787781427262) ) ) {
            if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.461573654632252417) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7400530954461672639) ) ) {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.650710626636601841) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3228775849985460189) ) ) {
                    result[11] += -2.9933829635065163;
                  } else {
                    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.07982434462983790946) ) ) {
                      result[11] += -3.2244702538588887;
                    } else {
                      result[11] += -3.289332155318105;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)6.097231350777966519) ) ) {
                    result[11] += -3.2872032835802507;
                  } else {
                    result[11] += -3.2262038858188467;
                  }
                }
              } else {
                result[11] += -3.0339669849500623;
              }
            } else {
              if ( LIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1408577200298147536) ) ) {
                result[11] += -2.9297585674608078;
              } else {
                result[11] += -3.2393174337184725;
              }
            }
          } else {
            if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[11] += -3.2899947103093994;
            } else {
              result[11] += -3.242153321385294;
            }
          }
        } else {
          result[11] += -2.957638994127796;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5656860549069343547) ) ) {
          result[11] += -3.179165590855089;
        } else {
          result[11] += -2.950417222535119;
        }
      }
    } else {
      if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3831654918576984925) ) ) {
        if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
          result[11] += -3.238016649962062;
        } else {
          result[11] += -3.2892171427543606;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
          result[11] += -3.288833651659557;
        } else {
          if ( LIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.07826984921436008769) ) ) {
            result[11] += -2.3637054239685957;
          } else {
            result[11] += -2.4088556756653583;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.618191645368454501) ) ) {
      if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6815982908725798373) ) ) {
        result[11] += -3.1904627294209718;
      } else {
        result[11] += -3.290001834359668;
      }
    } else {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.012257879866479859) ) ) {
          result[11] += -2.656117241523437;
        } else {
          result[11] += -2.362819041902239;
        }
      } else {
        result[11] += -3.2834928091331967;
      }
    }
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.241896858953469351) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.368407430064523922) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5497225041265615397) ) ) {
          result[12] += -6.69005085129416;
        } else {
          result[12] += -6.75575773255178;
        }
      } else {
        result[12] += -6.446906442988067;
      }
    } else {
      result[12] += -6.507688074118653;
    }
  } else {
    result[12] += -6.295854543850418;
  }
  if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.6077743444705893117) ) ) {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.816561841575487168) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)2.616603578364211646) ) ) {
            if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.03012034116682914611) ) ) {
                result[0] += -0.035642477913687715;
              } else {
                result[0] += -0.009653856941255815;
              }
            } else {
              if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01610135620206491758) ) ) {
                result[0] += 0.13294311551796592;
              } else {
                if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7260679178284027424) ) ) {
                  result[0] += -0.035497892362573245;
                } else {
                  result[0] += 0.06949245794901403;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.08168472228438489191) ) ) {
              result[0] += 0.3020708592854022;
            } else {
              result[0] += -0.03569846022965211;
            }
          }
        } else {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5903304115434165888) ) ) {
            result[0] += 0.46220502288741633;
          } else {
            result[0] += -0.03491263742901162;
          }
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[0] += -0.0357021903239421;
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
            result[0] += 0.210011472139505;
          } else {
            result[0] += 0.4754978373432288;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[43].missing != -1) || (data[43].fvalue <= (double)1.743477847713401419) ) ) {
          result[0] += -0.035713591454837754;
        } else {
          result[0] += 0.0665325849601335;
        }
      } else {
        if ( LIKELY( !(data[72].missing != -1) || (data[72].fvalue <= (double)1.095184038833058482) ) ) {
          if ( UNLIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
            result[0] += 0.3532106840055416;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.439702822821797068) ) ) {
              result[0] += 0.48244133090903796;
            } else {
              result[0] += 0.3859229006314676;
            }
          }
        } else {
          result[0] += 0.18361833038315584;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5950965427775393168) ) ) {
      if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1292032387258958137) ) ) {
        if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3228775849985460189) ) ) {
            result[0] += 0.14170192535876272;
          } else {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8124905999336901052) ) ) {
              result[0] += 0.367917211312544;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
                result[0] += 0.3607849107718511;
              } else {
                result[0] += 0.32830915502086666;
              }
            }
          }
        } else {
          result[0] += -0.03557490628453162;
        }
      } else {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3488614882332986) ) ) {
            result[0] += -0.03410471324175695;
          } else {
            result[0] += 0.01056065428940623;
          }
        } else {
          if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680043385803572653) ) ) {
            result[0] += 0.03664987033105145;
          } else {
            result[0] += 0.23250680517305491;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5384757477610738752) ) ) {
        result[0] += 0.12381187415440911;
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.319811268434055274) ) ) {
          if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8760489433274690763) ) ) {
            result[0] += 0.34916580016094145;
          } else {
            result[0] += 0.37248485436068;
          }
        } else {
          result[0] += 0.41312475537033155;
        }
      }
    }
  }
  if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6992443821141464122) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3895400451821667831) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3719312971477298224) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
                result[1] += -0.039010530293991735;
              } else {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.7665654145036739919) ) ) {
                  result[1] += -0.05087366858386491;
                } else {
                  result[1] += -0.05555086217210284;
                }
              }
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1014208946651340287) ) ) {
                result[1] += 0.031991512915377156;
              } else {
                result[1] += -0.056313922642753034;
              }
            }
          } else {
            result[1] += -0.056133413691760864;
          }
        } else {
          result[1] += 0.015645219074545736;
        }
      } else {
        result[1] += 0.06005320283927415;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[1] += 0.07556813224165985;
      } else {
        result[1] += -0.039881626502191375;
      }
    }
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01581463613528749299) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3980700287761728129) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.489633625089008984) ) ) {
            result[1] += -0.05602589535510254;
          } else {
            result[1] += -0.01625145438615785;
          }
        } else {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
            if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
              if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0127493636678698407) ) ) {
                result[1] += -0.05655451851979032;
              } else {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4481929990603614189) ) ) {
                  if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3697486148213876) ) ) {
                    result[1] += 0.07608519117869576;
                  } else {
                    result[1] += 0.055147227779406796;
                  }
                } else {
                  result[1] += 0.028855547139569206;
                }
              }
            } else {
              if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
                result[1] += 0.07687414353298622;
              } else {
                result[1] += 0.07277272229305709;
              }
            }
          } else {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3705796779665639362) ) ) {
              result[1] += 0.020836470758620596;
            } else {
              result[1] += -0.03289673308383974;
            }
          }
        }
      } else {
        result[1] += -0.0566009848618951;
      }
    } else {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          result[1] += -0.0564610772245155;
        } else {
          result[1] += 0.04408605163436299;
        }
      } else {
        if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3729285240379283661) ) ) {
          result[1] += 0.0767600206933995;
        } else {
          result[1] += 0.06138934372294479;
        }
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.842496319037251862) ) ) {
      result[2] += -0.034452330161048705;
    } else {
      result[2] += 0.007053172800657637;
    }
  } else {
    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5784009581098017438) ) ) {
      result[2] += 2.3417828772960836;
    } else {
      result[2] += -0.025990772437655747;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
        if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889283466493614894) ) ) {
          result[3] += -0.05556260667269569;
        } else {
          result[3] += -0.051583613179279404;
        }
      } else {
        result[3] += -0.04040795104284988;
      }
    } else {
      result[3] += -0.05949729560695222;
    }
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0237904559098773595) ) ) {
      result[3] += 0.07115830771121974;
    } else {
      result[3] += -0.003470649019562242;
    }
  }
  if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
    result[4] += -0.035029176697281235;
  } else {
    if ( UNLIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[4] += -0.0329248845801454;
    } else {
      result[4] += 0.3169473442278809;
    }
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01594852899833231613) ) ) {
    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
      result[5] += 0.01348733768876634;
    } else {
      result[5] += -0.03443688348527727;
    }
  } else {
    result[5] += 0.15550814877242936;
  }
  if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7080427712211444513) ) ) {
    result[6] += 0.1432946481693458;
  } else {
    result[6] += -0.03443530232407446;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6832277872550962527) ) ) {
      if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.06748916698403611969) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6679588857490850184) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
            if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.5905732247963905168) ) ) {
              result[7] += -0.03472171078902231;
            } else {
              result[7] += 0.11236768797702403;
            }
          } else {
            result[7] += 0.11696846355104155;
          }
        } else {
          result[7] += 0.13586806251071257;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6679588857490850184) ) ) {
          result[7] += 0.17337948939487885;
        } else {
          result[7] += 0.21778759201930922;
        }
      }
    } else {
      result[7] += -0.03468464448604906;
    }
  } else {
    result[7] += -0.03474867233776786;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.9388687831559248131) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[8] += -0.0345896648845284;
      } else {
        result[8] += -0.09723832754402906;
      }
    } else {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
        result[8] += -0.034639362328449545;
      } else {
        result[8] += 0.03153393359754109;
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
      result[8] += -0.03408158174206389;
    } else {
      result[8] += 0.05186124550330666;
    }
  }
  if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
    if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197504240945225229) ) ) {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7671482474614917946) ) ) {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3099551758663680601) ) ) {
            result[9] += 0.016465856844845386;
          } else {
            result[9] += -0.02849673180374898;
          }
        } else {
          result[9] += 0.0628917453152038;
        }
      } else {
        result[9] += -0.03329445896116715;
      }
    } else {
      result[9] += 0.21161395467619734;
    }
  } else {
    if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
      if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.5044509078043210026) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5801683636132243249) ) ) {
          result[9] += -0.0348430782387385;
        } else {
          result[9] += 0.004525312847897195;
        }
      } else {
        result[9] += 0.6557076528890141;
      }
    } else {
      result[9] += -0.034712873222544606;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03467293935411183;
  } else {
    result[10] += 0.1266164027201845;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01063968069743256861) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1625943879968777261) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4473271959888947547) ) ) {
              if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109270705380969835) ) ) {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2284176332525633957) ) ) {
                    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1558109468497091699) ) ) {
                      result[11] += 0.04074298898010813;
                    } else {
                      result[11] += -0.034790898708983706;
                    }
                  } else {
                    if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121101247298024794) ) ) {
                      result[11] += 0.16421529196495577;
                    } else {
                      result[11] += -0.012196131260472823;
                    }
                  }
                } else {
                  result[11] += -0.03391099313245903;
                }
              } else {
                result[11] += 0.05111664230946918;
              }
            } else {
              result[11] += 0.13904093763030775;
            }
          } else {
            result[11] += 0.27423412231705757;
          }
        } else {
          result[11] += -0.035638842682318324;
        }
      } else {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1827267960974166827) ) ) {
          result[11] += -0.035818279373028096;
        } else {
          result[11] += 0.3693924826784799;
        }
      }
    } else {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8420687174592120794) ) ) {
        result[11] += 0.21443801907498378;
      } else {
        result[11] += 0.28970121000602883;
      }
    }
  } else {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6491956528469868815) ) ) {
      if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
        result[11] += 0.13896839236861486;
      } else {
        result[11] += -0.035146133352679465;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (double)0.1694758462050316161) ) ) {
          if ( LIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.09931447741537603735) ) ) {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
              result[11] += 0.28184267477215125;
            } else {
              if ( UNLIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.1021616414857052652) ) ) {
                result[11] += 0.31606096427351416;
              } else {
                if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.021666323191162684) ) ) {
                  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02339072701113089486) ) ) {
                    result[11] += 0.3646948593545578;
                  } else {
                    result[11] += 0.41287878872498823;
                  }
                } else {
                  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02230944142475018918) ) ) {
                    if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1258179577849471709) ) ) {
                      result[11] += 0.3489830258052553;
                    } else {
                      result[11] += 0.367400797954273;
                    }
                  } else {
                    result[11] += 0.3868704909413341;
                  }
                }
              }
            }
          } else {
            result[11] += 0.27051974554527014;
          }
        } else {
          if ( LIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.2716217688493905436) ) ) {
            result[11] += 0.001725543945790199;
          } else {
            result[11] += 0.15407022202749115;
          }
        }
      } else {
        if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198211860239556392) ) ) {
          result[11] += 0.046691006655339776;
        } else {
          result[11] += -0.035166818884302405;
        }
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02359752682029646678) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01053738663935661034) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6312302362859933957) ) ) {
        result[12] += 0.027679326746130484;
      } else {
        result[12] += -0.033749568078334284;
      }
    } else {
      result[12] += 0.08162186645166172;
    }
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6764635425170953953) ) ) {
      if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1676565672064844748) ) ) {
        result[12] += 0.04740821987784725;
      } else {
        result[12] += -0.027744770708554203;
      }
    } else {
      result[12] += 0.6226616197897868;
    }
  }
  if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.6077743444705893117) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
        if ( LIKELY( !(data[93].missing != -1) || (data[93].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3722965996291259239) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.135563196560457816) ) ) {
                result[0] += -0.031728214125937924;
              } else {
                result[0] += 0.14357348163326164;
              }
            } else {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.135563196560457816) ) ) {
                result[0] += -0.035384930810079;
              } else {
                result[0] += 0.010331600332519088;
              }
            }
          } else {
            if ( LIKELY( !(data[77].missing != -1) || (data[77].fvalue <= (double)0.01641105439818723796) ) ) {
              result[0] += -0.03545810154181707;
            } else {
              result[0] += -0.005174075272151919;
            }
          }
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02383269855696708642) ) ) {
            if ( UNLIKELY( !(data[58].missing != -1) || (data[58].fvalue <= (double)0.09994891198341117333) ) ) {
              result[0] += 0.3506504218642992;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.4947126634741793594) ) ) {
                result[0] += -0.035643047173375984;
              } else {
                result[0] += 0.0627617405753891;
              }
            }
          } else {
            if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.3701005068791017316) ) ) {
              result[0] += 0.11820962803012908;
            } else {
              if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.270361437611838451) ) ) {
                result[0] += 0.025739693104007776;
              } else {
                if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01613246262559468736) ) ) {
                  result[0] += 0.0004796408980362178;
                } else {
                  if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02381189247626782843) ) ) {
                    result[0] += -0.01400620490002307;
                  } else {
                    result[0] += -0.03566032983530568;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7369570350073810783) ) ) {
          result[0] += -0.019470737849978128;
        } else {
          result[0] += 0.3344414617955001;
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[56].missing != -1) || (data[56].fvalue <= (double)1.792120644550141639) ) ) {
          result[0] += -0.035653074304217075;
        } else {
          result[0] += 0.06723031489849322;
        }
      } else {
        if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.1118927917471379263) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7722532834193429618) ) ) {
            result[0] += 0.31163966923875885;
          } else {
            result[0] += 0.258094232806749;
          }
        } else {
          result[0] += 0.16963402262277294;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9475499506149932527) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.102546986980341481) ) ) {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3680956210930699801) ) ) {
          result[0] += -0.03485369857531259;
        } else {
          result[0] += 0.15451597966757294;
        }
      } else {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.022644120845814131) ) ) {
          result[0] += -0.03561438668886156;
        } else {
          result[0] += 0.25378437782148705;
        }
      }
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01700452193506691093) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.218215524927980686) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.338232914248930927) ) ) {
            result[0] += 0.14970919449600364;
          } else {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8226535410050448416) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
                result[0] += 0.2578398384944252;
              } else {
                result[0] += 0.14037217384601922;
              }
            } else {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.321235134705145642) ) ) {
                if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868423317290422409) ) ) {
                  result[0] += 0.2547031810490106;
                } else {
                  if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)1.728018669627056747) ) ) {
                    result[0] += 0.30155745726937455;
                  } else {
                    result[0] += 0.2530994798481253;
                  }
                }
              } else {
                result[0] += 0.18514056056674535;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2936476673436070883) ) ) {
            result[0] += -0.00021286189519520012;
          } else {
            result[0] += 0.20062117106551;
          }
        }
      } else {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3194135100530759996) ) ) {
          if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.09477419035424804183) ) ) {
            if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4528605381145307529) ) ) {
              result[0] += 0.02278884037432199;
            } else {
              result[0] += -0.03362577545907574;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.2232840142319784116) ) ) {
              result[0] += -0.02116172514129668;
            } else {
              result[0] += 0.11875591753635642;
            }
          }
        } else {
          result[0] += 0.19154067960029514;
        }
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3895400451821667831) ) ) {
        if ( LIKELY( !(data[42].missing != -1) || (data[42].fvalue <= (double)0.09717005571973523492) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5968190743969560286) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[1] += 0.02477647706948849;
            } else {
              if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.6006947705406436855) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
                  result[1] += -0.03739775380634092;
                } else {
                  result[1] += -0.0497252164173171;
                }
              } else {
                result[1] += -0.05405415613337273;
              }
            }
          } else {
            result[1] += -0.05397212894432313;
          }
        } else {
          result[1] += 0.013715231598433618;
        }
      } else {
        result[1] += 0.05645018833804416;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[1] += 0.07074119521862125;
      } else {
        result[1] += -0.03956643665796477;
      }
    }
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01581463613528749299) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.503056489870696177) ) ) {
        if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3980700287761728129) ) ) {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01594244295691131866) ) ) {
            result[1] += -0.015799561696727395;
          } else {
            result[1] += -0.054914245099111886;
          }
        } else {
          if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( UNLIKELY(  (data[16].missing != -1) && (data[16].fvalue <= (double)-0.7083274832146645439) ) ) {
              if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6284344568935479325) ) ) {
                if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1083066061386540463) ) ) {
                  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6032356958133081593) ) ) {
                    result[1] += 0.07116063156423913;
                  } else {
                    result[1] += 0.05249834890885206;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2679136662915905798) ) ) {
                    result[1] += 0.04990316909205723;
                  } else {
                    result[1] += -0.013828469403889808;
                  }
                }
              } else {
                result[1] += -0.047687949633443;
              }
            } else {
              if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
                result[1] += 0.07170268082135835;
              } else {
                result[1] += 0.06343627104039984;
              }
            }
          } else {
            result[1] += -0.03276927295395442;
          }
        }
      } else {
        if ( UNLIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.01482615096746295151) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.02819468595438179986) ) ) {
            result[1] += 0.009298685333910234;
          } else {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5232591445586814993) ) ) {
              result[1] += 0.07270884127910157;
            } else {
              result[1] += 0.054662843336492566;
            }
          }
        } else {
          result[1] += -0.054411880813497945;
        }
      }
    } else {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          result[1] += -0.05473684344277524;
        } else {
          result[1] += 0.04068317333878194;
        }
      } else {
        if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3729285240379283661) ) ) {
          result[1] += 0.07158707549973606;
        } else {
          result[1] += 0.057254371546839045;
        }
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.03443416229961976;
  } else {
    if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.4669063841584393804) ) ) {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1300100187573274835) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02377658519293713094) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8248698869701465153) ) ) {
              result[2] += 0.20317581852449126;
            } else {
              result[2] += 0.24749644754121178;
            }
          } else {
            result[2] += 0.49112591198227096;
          }
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4549211632673892391) ) ) {
            result[2] += 0.237224270355946;
          } else {
            result[2] += 0.08087200422206778;
          }
        }
      } else {
        result[2] += -0.034801460285766514;
      }
    } else {
      result[2] += -0.03296570730407779;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.1913249152360226579) ) ) {
      result[3] += -0.05677615288729359;
    } else {
      result[3] += 0.06706021865269424;
    }
  } else {
    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
        result[3] += -0.05190342587840219;
      } else {
        result[3] += -0.04005045602306484;
      }
    } else {
      result[3] += -0.056948226836255514;
    }
  }
  if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
    result[4] += -0.03499871990006265;
  } else {
    if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9160101568943966877) ) ) {
      result[4] += 0.22895323427715902;
    } else {
      result[4] += -0.032790902402973714;
    }
  }
  if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.08527217321872027078) ) ) {
    if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[5] += 0.010428782769520585;
    } else {
      result[5] += -0.034436766674134256;
    }
  } else {
    result[5] += 0.15343329145379686;
  }
  if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5938046440629767275) ) ) {
    result[6] += 0.13918748135386788;
  } else {
    result[6] += -0.034435166631374935;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.06756346529129970968) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
        if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
          result[7] += -0.03470765658236394;
        } else {
          result[7] += 0.10517252974270808;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6679588857490850184) ) ) {
          result[7] += 0.10353110423692315;
        } else {
          result[7] += 0.11410820543382467;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4276321378940930451) ) ) {
        result[7] += 0.17423219352548616;
      } else {
        result[7] += 0.1336994725047124;
      }
    }
  } else {
    result[7] += -0.03473560606882855;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)2.121062011767066213) ) ) {
      if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)2.18168564412150312) ) ) {
        result[8] += -0.034691051683589845;
      } else {
        result[8] += -0.06365140069731982;
      }
    } else {
      result[8] += -0.0830702354695799;
    }
  } else {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.06881000000839077035) ) ) {
      result[8] += -0.042459130626606494;
    } else {
      result[8] += 0.05046008201161086;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2773401588208461721) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.01943108423358844844) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.9765693717769303728) ) ) {
          result[9] += 0.42996569183196415;
        } else {
          result[9] += 0.3080038608400725;
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3099551758663680601) ) ) {
          result[9] += 0.15582891900692755;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.74232615100710575) ) ) {
            result[9] += 0.14903282358826614;
          } else {
            result[9] += 0.19771580518122905;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5919646671058724774) ) ) {
        if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[9] += 0.1789384915887049;
        } else {
          result[9] += -0.024829740121393808;
        }
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.36630920134634648) ) ) {
          result[9] += -0.03482583767770866;
        } else {
          result[9] += -0.001371052126161137;
        }
      }
    }
  } else {
    result[9] += -0.034548106818480584;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03465671381601643;
  } else {
    result[10] += 0.11183733302074296;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01063968069743256861) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1040915918584105065) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.3574488871106138999) ) ) {
              result[11] += 0.21074479567159707;
            } else {
              result[11] += -0.03578172132538743;
            }
          } else {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6027520958870253853) ) ) {
              if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03875365587576699855) ) ) {
                result[11] += -0.03456989365287696;
              } else {
                result[11] += 0.036858398504851245;
              }
            } else {
              result[11] += 0.058408131502788535;
            }
          }
        } else {
          result[11] += 0.20991907602226062;
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958026162070415632) ) ) {
          result[11] += 0.12608094631764027;
        } else {
          result[11] += 0.2972893817890036;
        }
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)0.4511556643006282563) ) ) {
        result[11] += -0.035616254783381325;
      } else {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1827267960974166827) ) ) {
          result[11] += -0.03390606697674628;
        } else {
          result[11] += 0.1856997034928816;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6491956528469868815) ) ) {
      if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
        result[11] += 0.11619776216511286;
      } else {
        result[11] += -0.035071297262901695;
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.480052959900232334) ) ) {
        if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.377075612567084828) ) ) {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6037813198721945218) ) ) {
              if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.012257879866479859) ) ) {
                if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01539199452499158405) ) ) {
                  result[11] += 0.25694023772498853;
                } else {
                  result[11] += 0.28521409889544136;
                }
              } else {
                result[11] += 0.25333069131933234;
              }
            } else {
              result[11] += 0.20276793701124537;
            }
          } else {
            result[11] += 0.17654881519706805;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
            result[11] += -0.03603496872456144;
          } else {
            result[11] += 0.013393517563872748;
          }
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[11] += -0.035712336429603524;
        } else {
          result[11] += 0.11801426766357771;
        }
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.102546986980341481) ) ) {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.077547591217599354) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5982284184492060453) ) ) {
        result[12] += 0.274015549638432;
      } else {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.00965267252321922245) ) ) {
          result[12] += -0.034257769034842865;
        } else {
          if ( UNLIKELY( !(data[42].missing != -1) || (data[42].fvalue <= (double)0.0738487369616472461) ) ) {
            result[12] += 0.03584922017370746;
          } else {
            result[12] += -0.02592985847443268;
          }
        }
      }
    } else {
      result[12] += 0.5319870573382669;
    }
  } else {
    result[12] += 0.370666009270774;
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.6077743444705893117) ) ) {
      if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)2.422534363982812522) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)1.773616506442666996) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.503056489870696177) ) ) {
              if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.01063407293379829179) ) ) {
                if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
                  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.01232802648723504806) ) ) {
                    if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1307207651019416939) ) ) {
                      result[0] += -0.03357061939878964;
                    } else {
                      result[0] += 0.00403077747498196;
                    }
                  } else {
                    result[0] += 0.135911280785325;
                  }
                } else {
                  result[0] += -0.035410135210759974;
                }
              } else {
                result[0] += 0.022259054044296928;
              }
            } else {
              if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
                result[0] += 0.22743150996585787;
              } else {
                if ( UNLIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.1067521975600563694) ) ) {
                  result[0] += 0.1146969208491285;
                } else {
                  result[0] += -0.03525284537485232;
                }
              }
            }
          } else {
            result[0] += 0.06299177463301298;
          }
        } else {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
            result[0] += 0.6514173549198099;
          } else {
            result[0] += -0.03494530783180301;
          }
        }
      } else {
        if ( UNLIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.2862199842280605533) ) ) {
          result[0] += 0.21170599227931114;
        } else {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.0161581592354734481) ) ) {
            result[0] += 0.12630497871309282;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.303671257827095975) ) ) {
              result[0] += 0.02942705843276801;
            } else {
              result[0] += -0.03470796061355956;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.399586673885729271) ) ) {
          result[0] += 0.15538175730929857;
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4180904588768805108) ) ) {
            result[0] += 0.20489829183221403;
          } else {
            result[0] += 0.2365142566145908;
          }
        }
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.731000403976756141) ) ) {
          result[0] += -0.0342532180876907;
        } else {
          result[0] += 0.128578379342877;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02309439801696721792) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3228775849985460189) ) ) {
        result[0] += 0.1577523240309902;
      } else {
        if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868423317290422409) ) ) {
          result[0] += 0.19751287769024845;
        } else {
          result[0] += 0.22701943282491968;
        }
      }
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7704629034599390636) ) ) {
          if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3980700287761728129) ) ) {
            result[0] += 0.09809264051651419;
          } else {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.03725019243557075449) ) ) {
              if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197363940419985395) ) ) {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7925765324441547133) ) ) {
                  result[0] += -0.035774983293950395;
                } else {
                  result[0] += 0.040740435356700105;
                }
              } else {
                if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2691798030892054161) ) ) {
                  result[0] += 0.002228564426486092;
                } else {
                  result[0] += -0.03449516500252973;
                }
              }
            } else {
              result[0] += 0.09980813365377987;
            }
          }
        } else {
          result[0] += 0.10197105980517052;
        }
      } else {
        result[0] += 0.2518725721065265;
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3895400451821667831) ) ) {
        if ( LIKELY( !(data[42].missing != -1) || (data[42].fvalue <= (double)0.09717005571973523492) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3719312971477298224) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[1] += 0.023590482219398315;
            } else {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.9377942539926636956) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
                  result[1] += -0.03650904437865729;
                } else {
                  result[1] += -0.048665477344301454;
                }
              } else {
                result[1] += -0.052625937618330385;
              }
            }
          } else {
            result[1] += -0.05210149858479511;
          }
        } else {
          result[1] += 0.012410985327001025;
        }
      } else {
        result[1] += 0.05298424963378543;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[1] += 0.06659374310551867;
      } else {
        result[1] += -0.03926194827207909;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.01730959326324889649) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
            result[1] += 0.067404623651276;
          } else {
            result[1] += 0.06323928150757645;
          }
        } else {
          result[1] += 0.044012183948612275;
        }
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03871733623957592657) ) ) {
            if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2694420212367003575) ) ) {
              result[1] += 0.006823275578714611;
            } else {
              result[1] += 0.06653934046176106;
            }
          } else {
            if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680043385803572653) ) ) {
              result[1] += 0.020793401375738475;
            } else {
              result[1] += -0.019855972220994382;
            }
          }
        } else {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01618656075075956824) ) ) {
            result[1] += -0.04144259161487243;
          } else {
            result[1] += -0.05334194334259081;
          }
        }
      }
    } else {
      result[1] += -0.05364556370834001;
    }
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01577271008729200577) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.493068515723959155) ) ) {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
        result[2] += -0.034436598666301714;
      } else {
        result[2] += 0.050251658541976586;
      }
    } else {
      result[2] += 0.1939383147041976;
    }
  } else {
    if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.3306162507328272993) ) ) {
      result[2] += -0.034534613986481444;
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376649739807756498) ) ) {
        result[2] += 0.18854687614836746;
      } else {
        result[2] += 0.05434889233294873;
      }
    }
  }
  if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889282566824648485) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
          result[3] += -0.05433662923356024;
        } else {
          result[3] += -0.049994616045320614;
        }
      } else {
        result[3] += -0.0396879891025147;
      }
    } else {
      result[3] += 0.06335218219395661;
    }
  } else {
    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.534698905014846404) ) ) {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
        result[3] += -0.04880009817126711;
      } else {
        result[3] += -0.05475121231715321;
      }
    } else {
      if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.269885761277829872) ) ) {
        result[3] += 0.06347735213160931;
      } else {
        result[3] += 0.03958307733875855;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.034941625714963946;
  } else {
    result[4] += 0.18142126816105775;
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01593094710467561279) ) ) {
    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
      result[5] += 0.012092158045391143;
    } else {
      result[5] += -0.034436598416691666;
    }
  } else {
    result[5] += 0.15535802442840546;
  }
  if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5950965427775393168) ) ) {
    result[6] += 0.13528802966513956;
  } else {
    result[6] += -0.03224378084714519;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5801683636132243249) ) ) {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.06756346529129970968) ) ) {
        if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.4805219744909849933) ) ) {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
            result[7] += -0.03470380727016922;
          } else {
            result[7] += 0.09686604518336726;
          }
        } else {
          result[7] += 0.09804427483702076;
        }
      } else {
        result[7] += 0.1495391077338401;
      }
    } else {
      result[7] += -0.0365462944900035;
    }
  } else {
    result[7] += -0.03472251342985085;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)2.121062011767066213) ) ) {
      result[8] += -0.03496941229803732;
    } else {
      result[8] += -0.07912616322050392;
    }
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.06756346529129970968) ) ) {
      result[8] += -0.03307876888163942;
    } else {
      result[8] += 0.04957992053625288;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2423241881182066626) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
          result[9] += 0.04612374303344295;
        } else {
          result[9] += -0.034897098523888274;
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.01967859759586815943) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3722965996291259239) ) ) {
            result[9] += 0.3677895667711258;
          } else {
            result[9] += 0.22264724295029034;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.74232615100710575) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6359230018345859436) ) ) {
              result[9] += 0.13693031580701173;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.440392446464506593) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.135342507482403285) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.8294159917046802777) ) ) {
                    result[9] += 0.13937038249339462;
                  } else {
                    result[9] += -0.0014295462092694944;
                  }
                } else {
                  result[9] += 0.1347884641043446;
                }
              } else {
                result[9] += 0.13696261001864427;
              }
            }
          } else {
            result[9] += 0.16217082784641437;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.009373464933523050283) ) ) {
        result[9] += -0.03482269044217083;
      } else {
        result[9] += -0.0011987668929716775;
      }
    }
  } else {
    result[9] += -0.0345187100900868;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03464016294616818;
  } else {
    result[10] += 0.10055526109171285;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01063968069743256861) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)4.214945378660041264) ) ) {
          if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
              if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7752644520936924355) ) ) {
                result[11] += 0.16727469575287215;
              } else {
                result[11] += -0.007586073377992543;
              }
            } else {
              if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6187052019767984579) ) ) {
                result[11] += -0.03406327776393724;
              } else {
                if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5941776910965133052) ) ) {
                  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8699231033351436659) ) ) {
                    result[11] += -0.020921327705486215;
                  } else {
                    result[11] += 0.042671871597442235;
                  }
                } else {
                  result[11] += -0.03265912631358595;
                }
              }
            }
          } else {
            result[11] += -0.03554397366172828;
          }
        } else {
          result[11] += 0.20677534485425875;
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[11] += -0.0356730740808136;
        } else {
          result[11] += 0.1974798287374674;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5656860549069343547) ) ) {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7749658944394570703) ) ) {
          result[11] += 0.08346690007147341;
        } else {
          result[11] += -0.034660230797524026;
        }
      } else {
        result[11] += 0.2391663407294893;
      }
    }
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.789037658999794389) ) ) {
      if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4724720329713996692) ) ) {
        result[11] += 0.03767911500161064;
      } else {
        result[11] += -0.03488871568833226;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
        if ( LIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.3859061909755484576) ) ) {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02359752682029646678) ) ) {
              result[11] += 0.15194173054579452;
            } else {
              if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.5981590018750568838) ) ) {
                result[11] += 0.1947601927076631;
              } else {
                if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.05820952052614852129) ) ) {
                  result[11] += 0.2080705568031891;
                } else {
                  result[11] += 0.1982852911370337;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.270361437611838451) ) ) {
              if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03680567913374452327) ) ) {
                result[11] += -0.020115781673548223;
              } else {
                result[11] += 0.14491973603007438;
              }
            } else {
              result[11] += 0.19845422126468681;
            }
          }
        } else {
          result[11] += 0.12972811961128297;
        }
      } else {
        if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.004049012212571336672) ) ) {
          result[11] += -0.03512618694798181;
        } else {
          result[11] += 0.03397110346115566;
        }
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7976716790512085042) ) ) {
        result[12] += 0.18171577021620305;
      } else {
        if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[12] += -0.03359189148447182;
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02321671253988670178) ) ) {
            result[12] += -0.03450467722431816;
          } else {
            result[12] += 0.027688729249665058;
          }
        }
      }
    } else {
      result[12] += 0.4176629950460001;
    }
  } else {
    result[12] += 0.5001677501965035;
  }
  if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.6077743444705893117) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.01730959326324889649) ) ) {
          result[0] += -0.03547318224099774;
        } else {
          result[0] += -0.004965863277452381;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376397544737933118) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6189618381496487798) ) ) {
            if ( UNLIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.618794359865027399) ) ) {
              result[0] += 0.2933148054257233;
            } else {
              result[0] += 0.19227747981041957;
            }
          } else {
            result[0] += -0.03060768140558408;
          }
        } else {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.4968499746888909718) ) ) {
            result[0] += 0.24402982769258086;
          } else {
            result[0] += -0.03511009503445002;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.1153190769785403247) ) ) {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4526741816739699442) ) ) {
          result[0] += 0.08203797495334242;
        } else {
          if ( LIKELY( !(data[73].missing != -1) || (data[73].fvalue <= (double)2.743564012101316063) ) ) {
            if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
              result[0] += 0.16737497301162083;
            } else {
              result[0] += 0.18734884960760162;
            }
          } else {
            result[0] += 0.1581681802838139;
          }
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02375893155127177872) ) ) {
          result[0] += 0.05069391657403974;
        } else {
          result[0] += -0.03659718385871511;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02287246651419007001) ) ) {
      if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.4308627519497926772) ) ) {
        result[0] += -0.03577224406302289;
      } else {
        if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3228775849985460189) ) ) {
              result[0] += 0.10178210169561365;
            } else {
              result[0] += 0.1611625560021572;
            }
          } else {
            result[0] += 0.18480951725772332;
          }
        } else {
          if ( LIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2936604105568001999) ) ) {
            result[0] += -0.03568573290459781;
          } else {
            result[0] += 0.17547774946942046;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3194135100530759996) ) ) {
        if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197582957382364865) ) ) {
            if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01054191865444173599) ) ) {
              result[0] += 0.08513201583768755;
            } else {
              result[0] += -0.018820854191190554;
            }
          } else {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1008349618873134179) ) ) {
              result[0] += -0.03436996132574216;
            } else {
              result[0] += 0.00013945530982732967;
            }
          }
        } else {
          result[0] += 0.08223854005251194;
        }
      } else {
        result[0] += 0.1238504185585867;
      }
    }
  }
  if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6992443821141464122) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.731000403976756141) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3895400451821667831) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
                  if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
                    result[1] += 0.0016575048106870797;
                  } else {
                    result[1] += -0.03194900966426393;
                  }
                } else {
                  if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
                    result[1] += -0.05071675296859157;
                  } else {
                    result[1] += -0.047001837836870626;
                  }
                }
              } else {
                if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7672618710374367046) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.102546986980341481) ) ) {
                    result[1] += -0.05082848436898861;
                  } else {
                    result[1] += 0.009385151215578518;
                  }
                } else {
                  result[1] += -0.049447305932594;
                }
              }
            } else {
              result[1] += -0.05046139554147255;
            }
          } else {
            if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
              result[1] += 0.0456241168968649;
            } else {
              result[1] += -0.03884177552864915;
            }
          }
        } else {
          result[1] += 0.015860875066663498;
        }
      } else {
        result[1] += 0.05198215053262219;
      }
    } else {
      result[1] += 0.06127115494376289;
    }
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01581463613528749299) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3980700287761728129) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.489633625089008984) ) ) {
            result[1] += -0.05163386035581989;
          } else {
            result[1] += -0.014360934303911969;
          }
        } else {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
            if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
              if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0127493636678698407) ) ) {
                result[1] += -0.05261519750680934;
              } else {
                if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1106704352095198435) ) ) {
                  if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3697486148213876) ) ) {
                    result[1] += 0.06312991347571603;
                  } else {
                    result[1] += 0.045194583262643674;
                  }
                } else {
                  result[1] += 0.02317259880970457;
                }
              }
            } else {
              result[1] += 0.06365141609022884;
            }
          } else {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3705796779665639362) ) ) {
              result[1] += 0.01674822858132875;
            } else {
              result[1] += -0.030842912072450202;
            }
          }
        }
      } else {
        result[1] += -0.05249016551077825;
      }
    } else {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1525998871572624982) ) ) {
          result[1] += -0.051971366570038785;
        } else {
          result[1] += 0.026445330402813248;
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198408196259561631) ) ) {
          result[1] += 0.05024033485491424;
        } else {
          result[1] += 0.06369175439180993;
        }
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.842496319037251862) ) ) {
      result[2] += -0.03442883361342702;
    } else {
      result[2] += 0.008887931954680793;
    }
  } else {
    if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4136796489669126164) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.18880282969655673;
      } else {
        result[2] += 0.13168596171511646;
      }
    } else {
      result[2] += -0.03468516297620497;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.031327076639174445) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
        result[3] += -0.04929294626568707;
      } else {
        result[3] += -0.042298411824532;
      }
    } else {
      result[3] += -0.052855932807248325;
    }
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02379297786057558983) ) ) {
      result[3] += 0.060300945490636075;
    } else {
      result[3] += -0.0014241770880364974;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03490953757199317;
  } else {
    result[4] += 0.1509526065168182;
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01589713577857479118) ) ) {
    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
      result[5] += 0.011474183972422065;
    } else {
      result[5] += -0.0344364447509581;
    }
  } else {
    result[5] += 0.1553882612381192;
  }
  if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5740772844739022718) ) ) {
    result[6] += 0.13679891331603977;
  } else {
    result[6] += -0.032229654356864784;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2698870447495728686) ) ) {
        if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
          result[7] += -0.034690830836868254;
        } else {
          result[7] += 0.11118428866518289;
        }
      } else {
        if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889283466493614894) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4276321378940930451) ) ) {
            result[7] += 0.12755537822550367;
          } else {
            result[7] += 0.10791854097404271;
          }
        } else {
          result[7] += 0.09301836424704604;
        }
      }
    } else {
      result[7] += -0.034749951763441575;
    }
  } else {
    result[7] += -0.03470943179275524;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.9388687831559248131) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[8] += -0.03456967114418806;
      } else {
        result[8] += -0.08438164178199432;
      }
    } else {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8406341290543647427) ) ) {
        result[8] += 0.02140249910802359;
      } else {
        result[8] += -0.03456995127022331;
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
      result[8] += -0.033989208780587955;
    } else {
      result[8] += 0.04823266162445351;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.5054713436603542887) ) ) {
    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
      if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.01967859759586815943) ) ) {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
            result[9] += 0.2042603340974385;
          } else {
            result[9] += 0.16463297233904708;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.74232615100710575) ) ) {
            result[9] += 0.11887991982977258;
          } else {
            result[9] += 0.1384976111167972;
          }
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
          result[9] += 0.009714859178409405;
        } else {
          result[9] += -0.02636812136980207;
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.36630920134634648) ) ) {
        result[9] += -0.03478960763957167;
      } else {
        result[9] += -0.000876696878870228;
      }
    }
  } else {
    result[9] += -0.034488125246558914;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.031327076639174445) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[10] += -0.034666121356555876;
    } else {
      result[10] += 0.09166201952015803;
    }
  } else {
    result[10] += -0.03462247875875708;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01063968069743256861) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.679560863910465551) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
                result[11] += 0.1471035561626501;
              } else {
                result[11] += -0.01168687874553361;
              }
            } else {
              if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6187052019767984579) ) ) {
                result[11] += -0.03422236834191338;
              } else {
                result[11] += 0.04848413554065713;
              }
            }
          } else {
            result[11] += -0.03554776049250171;
          }
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02371858036918906079) ) ) {
            result[11] += -0.033837684042297235;
          } else {
            result[11] += 0.1730695869377321;
          }
        }
      } else {
        result[11] += 0.1842218135303744;
      }
    } else {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906011883953875108) ) ) {
        result[11] += 0.23556305775772257;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
          result[11] += -0.03390432108399094;
        } else {
          result[11] += 0.15588614186565278;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.789037658999794389) ) ) {
      if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
        result[11] += 0.06590290052147121;
      } else {
        result[11] += -0.035106423307189494;
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.480052959900232334) ) ) {
        if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
          if ( UNLIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.1021616414857052652) ) ) {
            result[11] += 0.13939961955788477;
          } else {
            result[11] += 0.16116362229076198;
          }
        } else {
          if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198370461277046273) ) ) {
            if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.02606308290387496576) ) ) {
              result[11] += 0.16488569714233295;
            } else {
              result[11] += 0.13002480893648005;
            }
          } else {
            if ( UNLIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.4682841811706705548) ) ) {
              result[11] += 0.005970074571684793;
            } else {
              result[11] += -0.03446846589678219;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.2407039349924080807) ) ) {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[11] += -0.03560662138255749;
          } else {
            result[11] += 0.01776670191900455;
          }
        } else {
          result[11] += 0.12151417363295959;
        }
      }
    }
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01048731866143239391) ) ) {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02337244288112987067) ) ) {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6312302362859933957) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.61991967279657334) ) ) {
            result[12] += 0.038778366681092025;
          } else {
            result[12] += -0.034495415861114445;
          }
        } else {
          result[12] += -0.03447140974925687;
        }
      } else {
        result[12] += 0.037909812614312546;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9285972811752244427) ) ) {
        result[12] += 0.38713215388284716;
      } else {
        result[12] += -0.013670184888057813;
      }
    }
  } else {
    if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7592592899811810847) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2806099030406923323) ) ) {
        result[12] += -0.03447289011267577;
      } else {
        result[12] += 0.010976389333709917;
      }
    } else {
      result[12] += 0.7417791594066583;
    }
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.6077743444705893117) ) ) {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.816561841575487168) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)6.727918906444853242) ) ) {
          if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.503056489870696177) ) ) {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.01730959326324889649) ) ) {
                result[0] += -0.03536166134108852;
              } else {
                result[0] += 0.00099035226228068;
              }
            } else {
              if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
                result[0] += 0.22527706590777172;
              } else {
                result[0] += -0.034772047521549644;
              }
            }
          } else {
            if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1580934100766369366) ) ) {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1065361449350549494) ) ) {
                result[0] += -0.035549019125757794;
              } else {
                result[0] += 0.01821902838767775;
              }
            } else {
              result[0] += 0.13566087263418414;
            }
          }
        } else {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
            result[0] += 0.2943913832875809;
          } else {
            result[0] += -0.035018378105569854;
          }
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[0] += -0.035538394773040376;
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
            result[0] += 0.0993601673180748;
          } else {
            result[0] += 0.16179902476671731;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1300100187573274835) ) ) {
        result[0] += 0.0004307382934397583;
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02381693637501984193) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01068823800366174373) ) ) {
            result[0] += 0.14350433565207354;
          } else {
            result[0] += 0.16256840708493783;
          }
        } else {
          if ( UNLIKELY(  (data[63].missing != -1) && (data[63].fvalue <= (double)-0.1627686593290070816) ) ) {
            result[0] += 0.1444131689471687;
          } else {
            result[0] += -0.030712743865393733;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02309439801696721792) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3228775849985460189) ) ) {
        result[0] += 0.11258211217624556;
      } else {
        if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868423317290422409) ) ) {
          result[0] += 0.13734057106854655;
        } else {
          result[0] += 0.15530917037519157;
        }
      }
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3194135100530759996) ) ) {
        if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1292032387258958137) ) ) {
          result[0] += 0.06542441763432556;
        } else {
          if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1008349618873134179) ) ) {
            result[0] += -0.034295160937384245;
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.044648659810386793) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1014208946651340287) ) ) {
                result[0] += -0.02917515093569375;
              } else {
                result[0] += 0.008428821343699907;
              }
            } else {
              result[0] += 0.07265413464965888;
            }
          }
        }
      } else {
        result[0] += 0.12054315019812278;
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.5488077701542303233) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5913382919715390873) ) ) {
          if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7720634196711901875) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.06212713922683858053) ) ) {
                result[1] += -0.02461058434980287;
              } else {
                result[1] += -0.04955448821775279;
              }
            } else {
              result[1] += -0.020990291435829776;
            }
          } else {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2902353283338193757) ) ) {
              result[1] += -0.049023322931082546;
            } else {
              result[1] += -0.04626866044505364;
            }
          }
        } else {
          result[1] += 0.004210788718264274;
        }
      } else {
        if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[1] += 0.060056816085636656;
        } else {
          result[1] += -0.03877216392799208;
        }
      }
    } else {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4980383389955050366) ) ) {
        if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.7148513721040872237) ) ) {
          result[1] += 0.04696192307643166;
        } else {
          result[1] += 0.060998687062276326;
        }
      } else {
        result[1] += -0.04901642545304029;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += 0.060561671654280044;
        } else {
          result[1] += 0.035382975554871444;
        }
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
          if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1083066061386540463) ) ) {
            if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1320964828316336381) ) ) {
              result[1] += 0.00045040896636296216;
            } else {
              result[1] += 0.0599307636428863;
            }
          } else {
            if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680043385803572653) ) ) {
              result[1] += 0.01804320663735792;
            } else {
              result[1] += -0.01887677030620687;
            }
          }
        } else {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01618656075075956824) ) ) {
            result[1] += -0.040089156377872213;
          } else {
            result[1] += -0.05070473728628913;
          }
        }
      }
    } else {
      result[1] += -0.051100243598942996;
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
      result[2] += -0.0344208886046252;
    } else {
      result[2] += 0.0032228657249263465;
    }
  } else {
    if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4473271959888947547) ) ) {
      if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548443414119415773) ) ) {
        result[2] += 0.14366487504776282;
      } else {
        result[2] += 0.127521064551446;
      }
    } else {
      result[2] += -0.02901107774512366;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
      result[3] += -0.05084912523448155;
    } else {
      result[3] += 0.057799269538510285;
    }
  } else {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4804758948180142819) ) ) {
      result[3] += -0.051169410141638824;
    } else {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
        result[3] += -0.04741155046757941;
      } else {
        result[3] += -0.03890262835798542;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03487736503365406;
  } else {
    result[4] += 0.12985149576167332;
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01584303765057360966) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      result[5] += 0.01822083784997981;
    } else {
      result[5] += -0.03443641904844006;
    }
  } else {
    result[5] += 0.1556828735037686;
  }
  if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5957229179118727069) ) ) {
    result[6] += 0.12531275385357502;
  } else {
    result[6] += -0.03216622786090215;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
        result[7] += -0.0346816694996893;
      } else {
        result[7] += 0.07901758927959979;
      }
    } else {
      if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889283466493614894) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4276321378940930451) ) ) {
          result[7] += 0.11126341747797568;
        } else {
          result[7] += 0.0900524124005801;
        }
      } else {
        result[7] += 0.0810939459687088;
      }
    }
  } else {
    result[7] += -0.03469646329477909;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.9388687831559248131) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[8] += -0.03456314217262091;
      } else {
        result[8] += -0.07852639688665626;
      }
    } else {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8406341290543647427) ) ) {
        result[8] += 0.020343580318900042;
      } else {
        result[8] += -0.03456345350415396;
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
      result[8] += -0.033961106380562496;
    } else {
      result[8] += 0.047192007231713864;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
      if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7752644520936924355) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01707713670266891581) ) ) {
            result[9] += 0.12993463726425458;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.74232615100710575) ) ) {
              result[9] += 0.10566494083226148;
            } else {
              result[9] += 0.1203568474154678;
            }
          }
        } else {
          result[9] += 0.1342689322794358;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
          result[9] += 0.00881921155579617;
        } else {
          result[9] += -0.026139080007088006;
        }
      }
    } else {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.009373464933523050283) ) ) {
        result[9] += -0.03478715760683997;
      } else {
        result[9] += 0.000992143125660472;
      }
    }
  } else {
    result[9] += -0.03445638185265843;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
      result[10] += -0.03465777291779642;
    } else {
      result[10] += 0.08431547405912423;
    }
  } else {
    result[10] += -0.034605203947100656;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01063968069743256861) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1083066061386540463) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.644550570957393543) ) ) {
          if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6187052019767984579) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
                result[11] += 0.12403406902412588;
              } else {
                result[11] += -0.020580574570774793;
              }
            } else {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1136835358669352619) ) ) {
                result[11] += -0.03411863153141834;
              } else {
                result[11] += 0.005925202449445384;
              }
            }
          } else {
            result[11] += 0.04057833697128009;
          }
        } else {
          result[11] += 0.21068081570652736;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4276321378940930451) ) ) {
          result[11] += 0.008734713577925029;
        } else {
          result[11] += 0.16353976928963626;
        }
      }
    } else {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[11] += -0.035481494923640805;
        } else {
          result[11] += -0.025628769891505948;
        }
      } else {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1827267960974166827) ) ) {
          result[11] += -0.0356050393765734;
        } else {
          result[11] += 0.14232986448085924;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.789037658999794389) ) ) {
      if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
        result[11] += 0.058501631574960314;
      } else {
        result[11] += -0.03503229049230513;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
        if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6037796008705348383) ) ) {
            if ( LIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1243561432359380631) ) ) {
              if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2609382412217621239) ) ) {
                result[11] += 0.13670991517685088;
              } else {
                if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2532609255406128024) ) ) {
                  result[11] += 0.1373689239779835;
                } else {
                  result[11] += 0.01918946708437718;
                }
              }
            } else {
              result[11] += 0.13887724858894676;
            }
          } else {
            result[11] += 0.10434704499503196;
          }
        } else {
          if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.02341462581904273435) ) ) {
            result[11] += 0.14400215870301666;
          } else {
            result[11] += 0.04496005713444785;
          }
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[11] += -0.03563828222034125;
        } else {
          result[11] += 0.05060748142443865;
        }
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02337244288112987067) ) ) {
    if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.370294095961342107) ) ) {
      if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.6077743444705893117) ) ) {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889286165500515507) ) ) {
            result[12] += 0.03746949690795334;
          } else {
            result[12] += -0.034493167489962735;
          }
        } else {
          result[12] += -0.0344775686877893;
        }
      } else {
        result[12] += 0.03555761917006248;
      }
    } else {
      if ( UNLIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)1.207372616539477805) ) ) {
        result[12] += 0.39181584354724885;
      } else {
        result[12] += -0.03447510308979077;
      }
    }
  } else {
    if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.369629891514933917) ) ) {
      if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1676565672064844748) ) ) {
        result[12] += 0.04316892729341052;
      } else {
        result[12] += -0.025802428103707423;
      }
    } else {
      result[12] += 0.735477464914905;
    }
  }
  if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.1099703511033656711) ) ) {
        if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.03536030611480123;
        } else {
          result[0] += -0.008327998890155628;
        }
      } else {
        result[0] += 0.10508898012239457;
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376397544737933118) ) ) {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4547253021406916784) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.619922385481690652) ) ) {
            result[0] += 0.2258265982582908;
          } else {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4549192254186560924) ) ) {
              result[0] += -0.03604680415215567;
            } else {
              result[0] += -0.0003020113657996907;
            }
          }
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.919828219461336527) ) ) {
            result[0] += 0.17080944352530295;
          } else {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.08096888135210021653) ) ) {
              result[0] += 0.09975548174151445;
            } else {
              if ( UNLIKELY( !(data[46].missing != -1) || (data[46].fvalue <= (double)0.2413149546390083999) ) ) {
                result[0] += 0.14889863272170434;
              } else {
                result[0] += 0.12628567505501462;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5249899308183043622) ) ) {
          result[0] += 0.1817884244006074;
        } else {
          if ( LIKELY( !(data[48].missing != -1) || (data[48].fvalue <= (double)0.9030840312135969272) ) ) {
            result[0] += -0.03544116310659731;
          } else {
            result[0] += -0.0054740093061064485;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02287246651419007001) ) ) {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8166922260006254097) ) ) {
        result[0] += -0.03558291853415059;
      } else {
        if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3228775849985460189) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.5634636160866588472) ) ) {
              result[0] += 0.04148945456576363;
            } else {
              result[0] += 0.15141748666777494;
            }
          } else {
            result[0] += 0.11978469014473132;
          }
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.319811268434055274) ) ) {
            result[0] += -0.03592626480521617;
          } else {
            result[0] += 0.12922839619224957;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.070817902055202664) ) ) {
        if ( UNLIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1442284643492527663) ) ) {
          result[0] += 0.09400663601782785;
        } else {
          if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.03725019243557075449) ) ) {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1008349618873134179) ) ) {
              if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
                result[0] += -0.035086846060071605;
              } else {
                result[0] += 0.021861303202410077;
              }
            } else {
              if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6118458548864200708) ) ) {
                result[0] += -0.022263137974323964;
              } else {
                result[0] += 0.019279021645896413;
              }
            }
          } else {
            result[0] += 0.08088732718080166;
          }
        }
      } else {
        result[0] += 0.09981662550096147;
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.5488077701542303233) ) ) {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5913382919715390873) ) ) {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.759220268744210225) ) ) {
            result[1] += 0.026544374529611243;
          } else {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
              if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
                if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  result[1] += -0.030295843899130655;
                } else {
                  result[1] += -0.049555372797417854;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
                  result[1] += 0.04110464723903226;
                } else {
                  result[1] += 0.011858552991167663;
                }
              }
            } else {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6182897410123405768) ) ) {
                result[1] += -0.04856062728426934;
              } else {
                result[1] += -0.04453662961072915;
              }
            }
          }
        } else {
          result[1] += -0.04773581842619561;
        }
      } else {
        result[1] += 0.007420791630498487;
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.009706948800736031266) ) ) {
          result[1] += 0.05860825339613925;
        } else {
          result[1] += 0.046958528143499205;
        }
      } else {
        result[1] += -0.04750564589645765;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( UNLIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4105093223159403948) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197700186569693459) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.05207477934246570322) ) ) {
              result[1] += 0.03160462692782345;
            } else {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3705796779665639362) ) ) {
                result[1] += -0.01150595197902163;
              } else {
                result[1] += -0.038831129372075376;
              }
            }
          } else {
            if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4540106973991014372) ) ) {
              result[1] += -0.008197797358151442;
            } else {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.04310415771684505959) ) ) {
                result[1] += 0.0576280172999755;
              } else {
                result[1] += 0.05175196020648132;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4701773227110271347) ) ) {
            result[1] += -0.049500847002539566;
          } else {
            result[1] += -0.03749509785982416;
          }
        }
      } else {
        if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += 0.05788760957102837;
        } else {
          result[1] += 0.03565539923377667;
        }
      }
    } else {
      result[1] += -0.049909619007502154;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.0343973327930474;
  } else {
    if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4491636766531212355) ) ) {
      if ( LIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1442911519856499569) ) ) {
        if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03890632932767728452) ) ) {
          result[2] += 0.050284502923993446;
        } else {
          result[2] += 0.0882638678273111;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          result[2] += 0.13205419262571802;
        } else {
          result[2] += 0.11380151096375282;
        }
      }
    } else {
      if ( UNLIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.2455525658175108372) ) ) {
        result[2] += 0.02967494210946486;
      } else {
        result[2] += -0.034686583833989405;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4804758948180142819) ) ) {
      result[3] += -0.04967994352712209;
    } else {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
        result[3] += -0.046487758526474326;
      } else {
        result[3] += -0.03859783201001493;
      }
    }
  } else {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.0388927806847981436) ) ) {
      result[3] += 0.05538171893725892;
    } else {
      result[3] += 0.00447703953168981;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03484522991945913;
  } else {
    result[4] += 0.11431006771993739;
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01578623461716507567) ) ) {
    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
      result[5] += 0.008169456449129002;
    } else {
      result[5] += -0.03443626743579053;
    }
  } else {
    result[5] += 0.1543593757247372;
  }
  if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.619884133704033613) ) ) {
    result[6] += 0.12906820455714005;
  } else {
    result[6] += -0.02993299905883004;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02385602658307566307) ) ) {
        if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
          result[7] += -0.03467262613425865;
        } else {
          result[7] += 0.08856627984474785;
        }
      } else {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.06752635994934781671) ) ) {
          result[7] += 0.07917009372091713;
        } else {
          result[7] += 0.09311960961477377;
        }
      }
    } else {
      result[7] += -0.03475900075645915;
    }
  } else {
    result[7] += -0.034683683959397166;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[8] += -0.03454315161013218;
      } else {
        result[8] += -0.07430600221101702;
      }
    } else {
      result[8] += -0.03455720754948316;
    }
  } else {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.1599964315382430835) ) ) {
      result[8] += -0.04037386597464714;
    } else {
      result[8] += 0.04647425985441784;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.01967859759586815943) ) ) {
          result[9] += 0.15910029224539593;
        } else {
          result[9] += 0.09568940473595773;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
          result[9] += 0.030426095296510972;
        } else {
          result[9] += -0.026058470403947792;
        }
      }
    } else {
      result[9] += -0.03336292472927899;
    }
  } else {
    result[9] += -0.03442367008176971;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03458891424057531;
  } else {
    result[10] += 0.07833356469665033;
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01589172596208748151) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.043568031522789319) ) ) {
          if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.1527580031677362726) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
                if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9873454911718881899) ) ) {
                  result[11] += 0.12072428317878381;
                } else {
                  result[11] += -0.0004516035174034406;
                }
              } else {
                if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6027520958870253853) ) ) {
                  result[11] += -0.03386777262441489;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5994504937089063512) ) ) {
                    result[11] += -0.03258204381999826;
                  } else {
                    result[11] += 0.07205097979153276;
                  }
                }
              }
            } else {
              result[11] += 0.061086764575759706;
            }
          } else {
            result[11] += -0.035452917921842915;
          }
        } else {
          result[11] += 0.13021716221295376;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5656860549069343547) ) ) {
          if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9256908764563110958) ) ) {
            result[11] += 0.09315044508731879;
          } else {
            result[11] += -0.03674267554973933;
          }
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958026162070415632) ) ) {
            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8420687174592120794) ) ) {
              result[11] += 0.04139678037845014;
            } else {
              result[11] += 0.1350786635144263;
            }
          } else {
            result[11] += 0.1604151800938088;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01067680006018130456) ) ) {
        result[11] += -0.03243881909565221;
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02375010472779464851) ) ) {
          result[11] += 0.09964369333494846;
        } else {
          if ( LIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.4050470019312321646) ) ) {
            result[11] += 0.12075577530778646;
          } else {
            result[11] += 0.1400850282232903;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.618191645368454501) ) ) {
      if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.007617258158702913673) ) ) {
        result[11] += -0.034714732917065984;
      } else {
        result[11] += 0.03836978358396926;
      }
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5082734044751929803) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
          if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.1911803138575461358) ) ) {
            result[11] += 0.058828941602530355;
          } else {
            result[11] += 0.10251083539762573;
          }
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02353636956015895884) ) ) {
            result[11] += 0.10568091302190559;
          } else {
            result[11] += 0.12008820181688157;
          }
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[11] += -0.03507054955548926;
        } else {
          result[11] += 0.07892927910942113;
        }
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02359752682029646678) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01050479929169300004) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6312302362859933957) ) ) {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198224257915192492) ) ) {
          result[12] += 0.047079689467652217;
        } else {
          result[12] += -0.03449154796459043;
        }
      } else {
        result[12] += -0.03361780814251136;
      }
    } else {
      result[12] += 0.03212279397157174;
    }
  } else {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5521983535815221389) ) ) {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7077341304289562762) ) ) {
          result[12] += -0.007897091258909044;
        } else {
          result[12] += 0.36212743239577155;
        }
      } else {
        result[12] += -0.033352154180296224;
      }
    } else {
      result[12] += 0.7506035525085988;
    }
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.06941445991431857698) ) ) {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.0382312990769337821) ) ) {
            result[0] += -0.03315825513100391;
          } else {
            result[0] += 0.03644721561391679;
          }
        } else {
          result[0] += 0.11298264432242293;
        }
      } else {
        if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.1099703511033656711) ) ) {
          result[0] += -0.0353253255473777;
        } else {
          result[0] += 0.08704248610774903;
        }
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376397544737933118) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.4631637908997194297) ) ) {
            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6715691337635220082) ) ) {
              result[0] += 0.01568697444620457;
            } else {
              result[0] += -0.037061013471275425;
            }
          } else {
            result[0] += 0.09594766495913487;
          }
        } else {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197345630794598437) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002280578579028448571) ) ) {
              result[0] += 0.14597916416681034;
            } else {
              if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.1849487877502029309) ) ) {
                result[0] += 0.10970268245710144;
              } else {
                result[0] += 0.12258331868847426;
              }
            }
          } else {
            if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2689618565929431937) ) ) {
              result[0] += -0.034883744352802455;
            } else {
              result[0] += 0.14214235594801278;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5118217699541166565) ) ) {
          result[0] += 0.14164033598488815;
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
            result[0] += -0.03558298371531074;
          } else {
            result[0] += 0.015638117250210637;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02287246651419007001) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3228775849985460189) ) ) {
        result[0] += 0.08254581521310131;
      } else {
        if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03703019602276266115) ) ) {
          result[0] += 0.10641326012455983;
        } else {
          result[0] += 0.11669274584260106;
        }
      }
    } else {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631875991615196753) ) ) {
        if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3980700287761728129) ) ) {
          result[0] += 0.08359725436384195;
        } else {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
              result[0] += -0.03385185450766451;
            } else {
              result[0] += 0.020426782156575566;
            }
          } else {
            result[0] += 0.03765660679801265;
          }
        }
      } else {
        result[0] += 0.09832939916974827;
      }
    }
  }
  if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.169081742587877365) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.731000403976756141) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3895400451821667831) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
            if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5968190743969560286) ) ) {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
                  result[1] += -0.034384793063513656;
                } else {
                  result[1] += -0.0462488206567;
                }
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1014208946651340287) ) ) {
                  result[1] += 0.030840934997385928;
                } else {
                  result[1] += -0.04897910434972673;
                }
              }
            } else {
              result[1] += -0.04659571840490531;
            }
          } else {
            result[1] += 0.010971147459135286;
          }
        } else {
          if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[1] += 0.0540896512425851;
          } else {
            result[1] += -0.03833713937839888;
          }
        }
      } else {
        result[1] += 0.04644827011412751;
      }
    } else {
      if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03844148779281945927) ) ) {
        result[1] += 0.0558209008254728;
      } else {
        result[1] += 0.03205790704389276;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
            result[1] += 0.05566866947972745;
          } else {
            result[1] += 0.05069344955837611;
          }
        } else {
          result[1] += 0.03608861939190421;
        }
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197700186569693459) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.01928985497672836349) ) ) {
              result[1] += 0.032922531324076916;
            } else {
              result[1] += -0.018099100545527966;
            }
          } else {
            if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
              result[1] += 0.05492489264091945;
            } else {
              result[1] += 0.007755735236336873;
            }
          }
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01390000285217397012) ) ) {
            result[1] += -0.048493555066451324;
          } else {
            result[1] += -0.03653559004981465;
          }
        }
      }
    } else {
      result[1] += -0.0487977583473905;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.03438693370183471;
  } else {
    if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.4669063841584393804) ) ) {
      if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4136796489669126164) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6832277872550962527) ) ) {
            result[2] += 0.10454054944186808;
          } else {
            result[2] += 0.19640449899218343;
          }
        } else {
          if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4676177913179281886) ) ) {
            if ( LIKELY( !(data[56].missing != -1) || (data[56].fvalue <= (double)1.792120644550141639) ) ) {
              result[2] += -0.03767381415043613;
            } else {
              result[2] += 0.10738516921293728;
            }
          } else {
            result[2] += 0.1109704925267688;
          }
        }
      } else {
        result[2] += -0.03479117884402054;
      }
    } else {
      result[2] += -0.03279484825880129;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[3] += -0.04837652539671578;
    } else {
      result[3] += -0.04476101548412244;
    }
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0237904559098773595) ) ) {
      result[3] += 0.05338154002832889;
    } else {
      result[3] += -0.0038356121873403407;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.034813312504514464;
  } else {
    result[4] += 0.10243652948009054;
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01570643988212143405) ) ) {
    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
      result[5] += 0.005591805873010601;
    } else {
      result[5] += -0.03443622428603366;
    }
  } else {
    result[5] += 0.15480094747494375;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9927185586073418166) ) ) {
    result[6] += 0.12253080459174459;
  } else {
    result[6] += -0.029823631191794226;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
        result[7] += -0.03466670930225126;
      } else {
        result[7] += 0.06805103140498259;
      }
    } else {
      if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889283466493614894) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4276321378940930451) ) ) {
          result[7] += 0.09080579580369541;
        } else {
          result[7] += 0.07368642930949948;
        }
      } else {
        result[7] += 0.07012718577000908;
      }
    }
  } else {
    result[7] += -0.03467118615292311;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[8] += -0.03453874253324213;
      } else {
        result[8] += -0.06978069657605766;
      }
    } else {
      result[8] += -0.03455099927555436;
    }
  } else {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.2433930824819977579) ) ) {
      result[8] += -0.04084681665404143;
    } else {
      result[8] += 0.04567121599924586;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.5054713436603542887) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2773401588208461721) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.01967859759586815943) ) ) {
          result[9] += 0.1305739498984393;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.74232615100710575) ) ) {
            result[9] += 0.08565847291476782;
          } else {
            result[9] += 0.09743682002806459;
          }
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1305725821159978428) ) ) {
          result[9] += -0.017090394052707743;
        } else {
          result[9] += 0.07384224687716254;
        }
      }
    } else {
      result[9] += -0.033274206660007626;
    }
  } else {
    result[9] += -0.03439000244032329;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.034571550734400824;
  } else {
    result[10] += 0.07328952993835092;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01063968069743256861) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.679560863910465551) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1320964828316336381) ) ) {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.456875066748096581) ) ) {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6838843917094391545) ) ) {
                  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.07574037415222267811) ) ) {
                    result[11] += 0.06594028857293155;
                  } else {
                    result[11] += -0.03435360458062722;
                  }
                } else {
                  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8156176587248761267) ) ) {
                    result[11] += 0.0985688479010739;
                  } else {
                    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.151850733053233794) ) ) {
                      result[11] += -0.009619523524196337;
                    } else {
                      result[11] += -0.035858111271648764;
                    }
                  }
                }
              } else {
                result[11] += 0.06657862436116331;
              }
            } else {
              result[11] += -0.035099034594946725;
            }
          } else {
            result[11] += -0.03527366776843846;
          }
        } else {
          result[11] += 0.12039222381044251;
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[11] += -0.03550504208321;
        } else {
          result[11] += 0.10586508485169649;
        }
      }
    } else {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906011883953875108) ) ) {
        result[11] += 0.15340667189711898;
      } else {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3560940123812407765) ) ) {
          if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.08598579468109274204) ) ) {
            result[11] += -0.01671725868493234;
          } else {
            result[11] += 0.02980283785887706;
          }
        } else {
          result[11] += 0.09951082746979475;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.618191645368454501) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8008727114737107522) ) ) {
          result[11] += 0.01577839525218731;
        } else {
          result[11] += -0.035111870550563515;
        }
      } else {
        result[11] += 0.06270764115505131;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)3.139560926486061554) ) ) {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5349253814356403902) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02364796579988320477) ) ) {
            if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[11] += 0.04744956947835068;
            } else {
              result[11] += 0.10693804778286738;
            }
          } else {
            if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
              result[11] += 0.10719784415207874;
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)2.281409742720285294) ) ) {
                if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)1.769567623790790023) ) ) {
                  result[11] += -0.031156620770348857;
                } else {
                  result[11] += 0.1055522733409876;
                }
              } else {
                result[11] += 0.10709192050264438;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
              result[11] += 0.015055365291541327;
            } else {
              result[11] += -0.03574593584924862;
            }
          } else {
            result[11] += 0.08999622159097698;
          }
        }
      } else {
        if ( LIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.08249171816419946512) ) ) {
          result[11] += -0.03543950952274259;
        } else {
          result[11] += 0.015415181490264046;
        }
      }
    }
  }
  if ( LIKELY(  (data[77].missing != -1) && (data[77].fvalue <= (double)-0.02295765145985432035) ) ) {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.819723833417278058) ) ) {
        if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5497225041265615397) ) ) {
            if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.617667120262272662) ) ) {
              result[12] += 0.0634924727049908;
            } else {
              result[12] += -0.03448939734075744;
            }
          } else {
            result[12] += -0.03350769027046444;
          }
        } else {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01047458585643440583) ) ) {
            result[12] += -0.02838127656925305;
          } else {
            result[12] += 0.10584467262658485;
          }
        }
      } else {
        result[12] += 0.2505457322125793;
      }
    } else {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5296011927938067965) ) ) {
        result[12] += 0.5547572852349849;
      } else {
        result[12] += -0.03459055401968207;
      }
    }
  } else {
    result[12] += 0.2687322775444263;
  }
  if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[49].missing != -1) || (data[49].fvalue <= (double)0.2280614482599927495) ) ) {
        if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.01042025011524357753) ) ) {
          result[0] += -0.035229676051068595;
        } else {
          result[0] += -0.005858262148118013;
        }
      } else {
        result[0] += 0.11207974866413024;
      }
    } else {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5778712265833717554) ) ) {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5950965427775393168) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
            result[0] += 0.17034110570063266;
          } else {
            result[0] += -0.03508851585813281;
          }
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701667218619324073) ) ) {
            result[0] += 0.11714621152759212;
          } else {
            if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5118217699541166565) ) ) {
              result[0] += -0.004956956992858418;
            } else {
              result[0] += -0.03477420133639393;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.603941323245218542) ) ) {
            if ( LIKELY( !(data[70].missing != -1) || (data[70].fvalue <= (double)0.1248586472760723903) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[0] += 0.0901236353203106;
              } else {
                result[0] += 0.1027733392280103;
              }
            } else {
              result[0] += 0.10908390804048188;
            }
          } else {
            result[0] += 0.1152429098409849;
          }
        } else {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2505321500177452587) ) ) {
            result[0] += 0.07412435005348247;
          } else {
            result[0] += -0.036500474745673944;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7880685817837016494) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02335415875377330405) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.5143351628331070957) ) ) {
          result[0] += -0.03559144875724774;
        } else {
          result[0] += 0.09712056071723636;
        }
      } else {
        if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.002162700587473706439) ) ) {
          result[0] += -0.035625522095496284;
        } else {
          result[0] += -0.005635940301063292;
        }
      }
    } else {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0127493636678698407) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3721048158263929317) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3099551758663680601) ) ) {
              result[0] += 0.10210984512864402;
            } else {
              result[0] += 0.0568290875985397;
            }
          } else {
            result[0] += 0.09233512680354813;
          }
        } else {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198796919459144128) ) ) {
            result[0] += 0.12930269012804918;
          } else {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2610326502980852559) ) ) {
              result[0] += 0.027898573068822572;
            } else {
              if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2666177823200240327) ) ) {
                result[0] += -0.034391079404481446;
              } else {
                result[0] += -0.009546474134084581;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1683539907328813756) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3719312971477298224) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.102546986980341481) ) ) {
              result[0] += 0.09959640574745415;
            } else {
              result[0] += 0.06714796517991568;
            }
          } else {
            result[0] += 0.047258216707298586;
          }
        } else {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.0161581592354734481) ) ) {
            result[0] += 0.11615406567072521;
          } else {
            result[0] += 0.09638266728385132;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.5717070730123615663) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.045464564472704666;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[1] += 0.015668246448020364;
            } else {
              result[1] += -0.047582189600791455;
            }
          }
        } else {
          result[1] += 0.010852985503452024;
        }
      } else {
        result[1] += 0.040479145154769254;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[1] += 0.05346818036224441;
      } else {
        result[1] += -0.03812046745881219;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
            result[1] += 0.053625042201003864;
          } else {
            result[1] += 0.04922862551647166;
          }
        } else {
          result[1] += 0.02903787913201251;
        }
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197700186569693459) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.01928985497672836349) ) ) {
              result[1] += 0.03111030850185061;
            } else {
              result[1] += -0.017358496898379296;
            }
          } else {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
              result[1] += 0.053080478136662515;
            } else {
              result[1] += 0.007613261618701714;
            }
          }
        } else {
          if ( UNLIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.3064700496888345671) ) ) {
            result[1] += -0.0360963370730092;
          } else {
            result[1] += -0.04746684817713425;
          }
        }
      }
    } else {
      result[1] += -0.047821896462258866;
    }
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.077547591217599354) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.493068515723959155) ) ) {
      if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
        result[2] += -0.03436204475606498;
      } else {
        result[2] += 0.006900730858470985;
      }
    } else {
      result[2] += 0.08789368997404441;
    }
  } else {
    if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[2] += -0.034832635918082035;
    } else {
      result[2] += 0.09628682678553764;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.04688803409253061;
    } else {
      result[3] += 0.05175215815579246;
    }
  } else {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4804758948180142819) ) ) {
      if ( LIKELY(  (data[37].missing != -1) && (data[37].fvalue <= (double)-0.1117079187917503214) ) ) {
        result[3] += -0.047020524136436787;
      } else {
        result[3] += -0.048442930570029574;
      }
    } else {
      result[3] += -0.044048941770924915;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03478165293295081;
  } else {
    result[4] += 0.09308549715644909;
  }
  if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.06796514968818165303) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      result[5] += 0.017579758354324657;
    } else {
      result[5] += -0.03239862123677097;
    }
  } else {
    result[5] += 0.12319841202137813;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.02451254558860394) ) ) {
    result[6] += 0.12849285855851292;
  } else {
    result[6] += -0.029799951071245476;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03891074583698413136) ) ) {
      if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
        result[7] += -0.034657754035894245;
      } else {
        result[7] += 0.07150483605828385;
      }
    } else {
      if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889283466493614894) ) ) {
        result[7] += 0.07519468955306217;
      } else {
        result[7] += 0.06520772313091606;
      }
    }
  } else {
    result[7] += -0.03465901043733484;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5497225041265615397) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[8] += -0.034535169290457995;
      } else {
        result[8] += -0.06657012568000323;
      }
    } else {
      result[8] += -0.03454494441411828;
    }
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
      result[8] += -0.038765360177081744;
    } else {
      result[8] += 0.04486805015614143;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
            result[9] += 0.08531916708019874;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6280292678484594715) ) ) {
              result[9] += 0.08305038723263408;
            } else {
              result[9] += 0.05939092929374607;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.06917869946254807945) ) ) {
            result[9] += 0.13243373729687688;
          } else {
            result[9] += 0.07962413357395227;
          }
        }
      } else {
        result[9] += -0.014898165727791856;
      }
    } else {
      result[9] += -0.033177935936112776;
    }
  } else {
    result[9] += -0.03435539267449249;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
      result[10] += -0.034633726348489866;
    } else {
      result[10] += 0.06906603166582442;
    }
  } else {
    result[10] += -0.03455254661562705;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01063968069743256861) ) ) {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9897634247260547191) ) ) {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1001272620390628448) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)4.214945378660041264) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121101247298024794) ) ) {
              result[11] += 0.09617578722090317;
            } else {
              result[11] += -0.012773912942592093;
            }
          } else {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1127827179560820653) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.033452534228659125) ) ) {
                result[11] += -0.03305390019746807;
              } else {
                if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6187052019767984579) ) ) {
                  result[11] += -0.03544964426664368;
                } else {
                  result[11] += 0.0508139409932521;
                }
              }
            } else {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3699221335000508204) ) ) {
                result[11] += 0.045644294566683924;
              } else {
                result[11] += -0.01986815449354436;
              }
            }
          }
        } else {
          result[11] += 0.10660776937243466;
        }
      } else {
        if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1684254911100461771) ) ) {
          result[11] += 0.14170487232006382;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5765759506980140392) ) ) {
            result[11] += -0.03535990844706343;
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.940950028441762676) ) ) {
              result[11] += 0.03639705424738251;
            } else {
              result[11] += 0.10597439161646367;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01582883689293055132) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[11] += -0.035354288935595286;
        } else {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01067680006018130456) ) ) {
            result[11] += -0.03220493105369738;
          } else {
            result[11] += 0.08461711624246501;
          }
        }
      } else {
        if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.5678968716411519901) ) ) {
          result[11] += 0.09443274974509606;
        } else {
          if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.05511193802382131218) ) ) {
            result[11] += -0.03551370154213647;
          } else {
            result[11] += -0.0003314708605519635;
          }
        }
      }
    }
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.789037658999794389) ) ) {
      if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4724720329713996692) ) ) {
        result[11] += 0.020231737671005924;
      } else {
        result[11] += -0.03445360961882033;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
        if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.02464126917655218643) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6037796008705348383) ) ) {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
              result[11] += 0.08541705996056147;
            } else {
              result[11] += 0.09598342006457232;
            }
          } else {
            result[11] += 0.07653069017980169;
          }
        } else {
          result[11] += 0.06918948334944183;
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[11] += -0.035485576570819896;
        } else {
          result[11] += 0.03926855581159;
        }
      }
    }
  }
  if ( LIKELY( !(data[70].missing != -1) || (data[70].fvalue <= (double)0.7922976455658129469) ) ) {
    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)6.328487615245206754) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.370294095961342107) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.008997256796477030513) ) ) {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7960711628399573803) ) ) {
              result[12] += 0.004892250249808224;
            } else {
              result[12] += -0.03395621931656197;
            }
          } else {
            if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197965801454580204) ) ) {
              result[12] += 0.04438546249382765;
            } else {
              result[12] += -0.0345025737673369;
            }
          }
        } else {
          result[12] += 0.06993728980523922;
        }
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
          result[12] += -0.03449369950878901;
        } else {
          result[12] += 0.5630035601422804;
        }
      }
    } else {
      result[12] += 0.27149787019141275;
    }
  } else {
    result[12] += 0.28176185321842256;
  }
  if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02361896338668694265) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.135342507482403285) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906011883953875108) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.304628613515216085) ) ) {
              result[0] += -0.013635384122508094;
            } else {
              result[0] += -0.03527781327204131;
            }
          } else {
            result[0] += 0.15181296502055003;
          }
        } else {
          if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227915261315229323) ) ) {
              result[0] += -0.036072297126133336;
            } else {
              result[0] += 0.09386747559457877;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.2862610306322435627) ) ) {
              result[0] += 0.1010351547637802;
            } else {
              result[0] += 0.0884262449923085;
            }
          }
        }
      } else {
        result[0] += -0.03565071511485672;
      }
    } else {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7608941298791197516) ) ) {
        if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4671635821151731705) ) ) {
          result[0] += 0.05982345305239054;
        } else {
          if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1022208054169824742) ) ) {
            result[0] += -0.03359914453033357;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
              result[0] += -0.03708521749111183;
            } else {
              result[0] += 0.025826369148565516;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9475499506149932527) ) ) {
          result[0] += -0.02835369208163505;
        } else {
          if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.16710024000618659) ) ) {
            if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8027583770133431829) ) ) {
              result[0] += 0.09310717464508693;
            } else {
              result[0] += -0.011948892345913112;
            }
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01802780269505509236) ) ) {
              result[0] += 0.10774969991525452;
            } else {
              result[0] += 0.07196166512585732;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
        result[0] += -0.035221496336529254;
      } else {
        result[0] += 0.12041064761929526;
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376397544737933118) ) ) {
        if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.7220914708862065101) ) ) {
            result[0] += 0.12873102871326322;
          } else {
            if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)0.8026352657139218527) ) ) {
              if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198546535548441483) ) ) {
                result[0] += 0.09546955537297583;
              } else {
                if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.151295955522484149) ) ) {
                  result[0] += -0.03665960916209969;
                } else {
                  result[0] += 0.08052183267652485;
                }
              }
            } else {
              if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.603941323245218542) ) ) {
                result[0] += 0.09152823353202112;
              } else {
                result[0] += 0.1046153471666823;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4041754537181115325) ) ) {
            result[0] += -0.018627463569599396;
          } else {
            result[0] += 0.0865927886952099;
          }
        }
      } else {
        if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4393740356971341243) ) ) {
          result[0] += 0.09349888260137287;
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
            result[0] += -0.03500242796926689;
          } else {
            result[0] += 0.03720243130943141;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6992443821141464122) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3895400451821667831) ) ) {
        if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += -0.04455498582321596;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.563490236986021076) ) ) {
            result[1] += 0.017961750941555894;
          } else {
            result[1] += -0.04666135367443421;
          }
        }
      } else {
        result[1] += 0.04063298855476225;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[1] += 0.051516535886401975;
      } else {
        result[1] += -0.037905338448899185;
      }
    }
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01581463613528749299) ) ) {
      if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198429758531422973) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2495643781300529163) ) ) {
          if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.04693525621980047;
          } else {
            result[1] += -0.02997107821355638;
          }
        } else {
          if ( UNLIKELY( !(data[64].missing != -1) || (data[64].fvalue <= (double)0.2864877648935045262) ) ) {
            result[1] += 0.02289280344592492;
          } else {
            result[1] += 0.05195059677301177;
          }
        }
      } else {
        if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2697290315089456159) ) ) {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01594244295691131866) ) ) {
            result[1] += -0.009556983932228848;
          } else {
            result[1] += -0.04656637286375324;
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3696572892010386302) ) ) {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197700186569693459) ) ) {
                  if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6327617417443375247) ) ) {
                    result[1] += 0.002778912835108868;
                  } else {
                    result[1] += 0.02497742812521262;
                  }
                } else {
                  if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03886251172102888479) ) ) {
                    result[1] += 0.041453292312107766;
                  } else {
                    result[1] += 0.05143504065826613;
                  }
                }
              } else {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7925765324441547133) ) ) {
                  result[1] += -0.052131106625598764;
                } else {
                  result[1] += -0.00828159891394453;
                }
              }
            } else {
              if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
                result[1] += 0.0518416849013288;
              } else {
                result[1] += 0.04815523323401639;
              }
            }
          } else {
            result[1] += -0.04843049128193267;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7984188353733526755) ) ) {
        result[1] += 0.05062319222295799;
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.046543196371225955;
          } else {
            result[1] += -0.024436482062838234;
          }
        } else {
          result[1] += 0.025568411909279495;
        }
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.03436523668121329;
  } else {
    if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4491636766531212355) ) ) {
      if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3982557217939283745) ) ) {
        if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2698623338572173624) ) ) {
          result[2] += 0.024096802113888306;
        } else {
          result[2] += 0.06255011984230628;
        }
      } else {
        result[2] += 0.0901124076979922;
      }
    } else {
      if ( UNLIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.03474189860417183778) ) ) {
        result[2] += 0.03496717594785809;
      } else {
        result[2] += -0.034645337637437615;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2902353283338193757) ) ) {
      result[3] += -0.046692236725644064;
    } else {
      result[3] += -0.04564249797733119;
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.05523467329530611;
    } else {
      result[3] += 0.05019577827245236;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.034750327932342076;
  } else {
    result[4] += 0.08554978166794948;
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01568141949717636111) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      result[5] += 0.018665965644384913;
    } else {
      result[5] += -0.034436577021308756;
    }
  } else {
    result[5] += 0.12408383385829315;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8480975214126128536) ) ) {
    result[6] += 0.12483613969458399;
  } else {
    result[6] += -0.02969919138715651;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5801683636132243249) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.06752635994934781671) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
            result[7] += -0.034653595802451156;
          } else {
            result[7] += 0.06170185636228387;
          }
        } else {
          result[7] += 0.06272085823340358;
        }
      } else {
        result[7] += 0.08116798272610479;
      }
    } else {
      result[7] += -0.03732048537449009;
    }
  } else {
    result[7] += -0.03464720333675801;
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.007617258158702913673) ) ) {
      result[8] += -0.03444734683959763;
    } else {
      if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
        result[8] += -0.06912896455335547;
      } else {
        result[8] += -0.03454115854289452;
      }
    }
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.160074588930242484) ) ) {
      result[8] += -0.03461004269404115;
    } else {
      result[8] += 0.044100857146979165;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.5054713436603542887) ) ) {
    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8156176587248761267) ) ) {
          result[9] += -0.028825280882024525;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
            result[9] += 0.04904034459372834;
          } else {
            result[9] += -0.03489408502993069;
          }
        }
      } else {
        if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1602661873707439677) ) ) {
            result[9] += 0.0826830848524188;
          } else {
            result[9] += -0.0016115957367867702;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01707713670266891581) ) ) {
            if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0206686510449870034) ) ) {
              result[9] += 0.12201000981921141;
            } else {
              result[9] += 0.07730890897549263;
            }
          } else {
            result[9] += 0.07694861810167883;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.36630920134634648) ) ) {
        result[9] += -0.03470920046395064;
      } else {
        result[9] += -0.005748362932812413;
      }
    }
  } else {
    result[9] += -0.034319783290535234;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.0345366143425389;
  } else {
    result[10] += 0.06545469794007855;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01063968069743256861) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)4.214945378660041264) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121101247298024794) ) ) {
                result[11] += 0.0890728143532062;
              } else {
                result[11] += -0.011280500733257174;
              }
            } else {
              if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6027520958870253853) ) ) {
                result[11] += -0.03369099635107542;
              } else {
                result[11] += 0.037371754043810684;
              }
            }
          } else {
            result[11] += -0.03515651839088181;
          }
        } else {
          result[11] += 0.09018576498268424;
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[11] += -0.03542215812463364;
        } else {
          result[11] += 0.08739954383638063;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4276321378940930451) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.044648659810386793) ) ) {
          result[11] += 0.03459361505134442;
        } else {
          result[11] += -0.03442314364144308;
        }
      } else {
        if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8531516627117848861) ) ) {
          result[11] += 0.10911248088132883;
        } else {
          result[11] += 0.07626929904168567;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02373749498488130286) ) ) {
          result[11] += 0.053020380822964036;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.338232914248930927) ) ) {
            result[11] += 0.0747795039353965;
          } else {
            result[11] += 0.08857661592076294;
          }
        }
      } else {
        if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.1458473708283838099) ) ) {
          if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[11] += -0.03385594096421527;
          } else {
            result[11] += 0.010149105403757425;
          }
        } else {
          result[11] += 0.12412713787294775;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.533379939164722039) ) ) {
        result[11] += -0.03512780630492992;
      } else {
        result[11] += 0.0847515043911968;
      }
    }
  }
  if ( LIKELY( !(data[70].missing != -1) || (data[70].fvalue <= (double)0.8772751001596373888) ) ) {
    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)6.791000144179689002) ) ) {
      if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.06006154908147560284) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7960711628399573803) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197700186569693459) ) ) {
            result[12] += 0.05386778949647388;
          } else {
            result[12] += -0.023612645294792824;
          }
        } else {
          result[12] += -0.03327661819479472;
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.370294095961342107) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01007997681631613886) ) ) {
            result[12] += -0.03291098021248798;
          } else {
            if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199109664226803984) ) ) {
              result[12] += 0.13758220947765396;
            } else {
              result[12] += -0.03447337849657066;
            }
          }
        } else {
          if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197965801454580204) ) ) {
            result[12] += 0.10169980783707357;
          } else {
            result[12] += 0.3698677147780843;
          }
        }
      }
    } else {
      result[12] += 0.22572575516275326;
    }
  } else {
    result[12] += 0.26702155037909986;
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.06941445991431857698) ) ) {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03730974566248201202) ) ) {
            result[0] += -0.032857702173796806;
          } else {
            result[0] += 0.04452270377635509;
          }
        } else {
          result[0] += 0.08502540901591676;
        }
      } else {
        if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)3.395051490693259399) ) ) {
          result[0] += -0.035172278380798346;
        } else {
          result[0] += 0.1184275855539316;
        }
      }
    } else {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5732125615217674719) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
            result[0] += 0.12702402153457074;
          } else {
            result[0] += -0.0351549241925994;
          }
        } else {
          result[0] += -0.03516291936141653;
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5296011927938067965) ) ) {
            result[0] += 0.09505851423674812;
          } else {
            result[0] += 0.08512042993614771;
          }
        } else {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
            result[0] += -0.03665399563588399;
          } else {
            result[0] += 0.0694634120950274;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02309439801696721792) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3228775849985460189) ) ) {
        result[0] += 0.06314299517629741;
      } else {
        result[0] += 0.08207408729430683;
      }
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3194135100530759996) ) ) {
        if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
          if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1008349618873134179) ) ) {
            result[0] += -0.033584411201187776;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
              result[0] += -0.03133140460711358;
            } else {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5406810279414914211) ) ) {
                result[0] += -0.0018183924575363886;
              } else {
                result[0] += 0.06812493880705811;
              }
            }
          }
        } else {
          result[0] += 0.038023626577422205;
        }
      } else {
        result[0] += 0.07755019549573568;
      }
    }
  }
  if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.169081742587877365) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.5717070730123615663) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.04373408353674824;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[1] += 0.013332102904978457;
            } else {
              result[1] += -0.04579552935092938;
            }
          }
        } else {
          result[1] += 0.009898115679616999;
        }
      } else {
        result[1] += 0.036598102790885045;
      }
    } else {
      if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += 0.05058110134410199;
        } else {
          result[1] += 0.018520639944037923;
        }
      } else {
        result[1] += -0.0387465196464501;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += 0.050169331722543994;
        } else {
          result[1] += 0.024863395191828924;
        }
      } else {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6284344568935479325) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197700186569693459) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2610326502980852559) ) ) {
              result[1] += -0.03144486855867142;
            } else {
              result[1] += 0.017870897678526124;
            }
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01067632168010653783) ) ) {
              result[1] += 0.003556669976481175;
            } else {
              result[1] += 0.04948571747517588;
            }
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3045260939432080094) ) ) {
            result[1] += -0.034267318930901194;
          } else {
            result[1] += -0.045784221160168066;
          }
        }
      }
    } else {
      result[1] += -0.04604091595550186;
    }
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.077547591217599354) ) ) {
    if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.833769984893914851) ) ) {
        result[2] += -0.03433153095643616;
      } else {
        result[2] += 0.009995165348821215;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.493068515723959155) ) ) {
          result[2] += -0.034541757622909626;
        } else {
          result[2] += 0.14141033609334713;
        }
      } else {
        result[2] += -0.03757149317130332;
      }
    }
  } else {
    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5127797934485048836) ) ) {
      result[2] += 0.08128184082678226;
    } else {
      result[2] += -0.03482517393561991;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.0457522835556719;
    } else {
      result[3] += -0.04472961457249854;
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.05367569488673257;
    } else {
      result[3] += 0.04880894661080671;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.034719340117291976;
  } else {
    result[4] += 0.07934146672020441;
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[5] += -0.0344359748400918;
    } else {
      result[5] += 0.03432255511580896;
    }
  } else {
    result[5] += 0.1346212234039311;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    result[6] += 0.11994152584924908;
  } else {
    result[6] += -0.0319685260864383;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02385602658307566307) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2.216902008659351608) ) ) {
          result[7] += -0.03463696780268377;
        } else {
          result[7] += 0.06424876290188802;
        }
      } else {
        result[7] += 0.0637300212612674;
      }
    } else {
      result[7] += -0.03479729248261442;
    }
  } else {
    result[7] += -0.034635786794719944;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.9388687831559248131) ) ) {
      if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701667218619324073) ) ) {
        result[8] += -0.03335585099264141;
      } else {
        result[8] += -0.053711807661823;
      }
    } else {
      result[8] += -0.03288383131342097;
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
      result[8] += -0.03373862431539539;
    } else {
      result[8] += 0.043429299918202324;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
      if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[9] += 0.05117866729638048;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01707713670266891581) ) ) {
            result[9] += 0.09992458118781042;
          } else {
            result[9] += 0.07230111361626682;
          }
        }
      } else {
        result[9] += -0.019333150096624726;
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.36630920134634648) ) ) {
        result[9] += -0.03469388074607424;
      } else {
        result[9] += -0.006093787383788159;
      }
    }
  } else {
    result[9] += -0.03428335616451392;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
      result[10] += -0.034617878609001854;
    } else {
      result[10] += 0.062317155333417064;
    }
  } else {
    result[10] += -0.034517089592886116;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064119136912760992) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)4.214945378660041264) ) ) {
        if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4540106973991014372) ) ) {
              if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02273502030030346774) ) ) {
                if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8156176587248761267) ) ) {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2284176332525633957) ) ) {
                    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1395988216203880861) ) ) {
                      result[11] += 0.08058842824635924;
                    } else {
                      result[11] += -0.03410869285538143;
                    }
                  } else {
                    result[11] += 0.0802600751243941;
                  }
                } else {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.0164200224566713425) ) ) {
                    result[11] += -0.033894825273123395;
                  } else {
                    result[11] += 0.010479167822082547;
                  }
                }
              } else {
                result[11] += 0.08160267980819906;
              }
            } else {
              result[11] += -0.03405648117214294;
            }
          } else {
            result[11] += -0.0351544998527675;
          }
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1827267960974166827) ) ) {
            result[11] += -0.03547686479025806;
          } else {
            result[11] += 0.08448705366807545;
          }
        }
      } else {
        result[11] += 0.07966197605242534;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.582136130875904989) ) ) {
        result[11] += 0.10645892269156751;
      } else {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3697486148213876) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3705796779665639362) ) ) {
            result[11] += -0.0127834327889868;
          } else {
            result[11] += 0.026921871282465395;
          }
        } else {
          result[11] += 0.07567103926098394;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.789037658999794389) ) ) {
      if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
        result[11] += 0.015357792841718829;
      } else {
        result[11] += -0.034383932329887686;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02373749498488130286) ) ) {
          if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)1.897990663147650192) ) ) {
            result[11] += -0.008150543248386648;
          } else {
            result[11] += 0.0773221368983901;
          }
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0236422914127955193) ) ) {
            result[11] += 0.07019173298527175;
          } else {
            result[11] += 0.08139671464107312;
          }
        }
      } else {
        if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.004049012212571336672) ) ) {
          result[11] += -0.03460854958484365;
        } else {
          result[11] += 0.019164478066119924;
        }
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02360509266710225651) ) ) {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8672677388249647734) ) ) {
        if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198718202700538304) ) ) {
          result[12] += 0.04087471586815536;
        } else {
          result[12] += -0.03448844099148995;
        }
      } else {
        result[12] += -0.03411858246878602;
      }
    } else {
      result[12] += 0.03766641574387747;
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5983067153409977745) ) ) {
        result[12] += 0.25421994579894197;
      } else {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[12] += -0.032718333109058376;
        } else {
          if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.4197452873697252174) ) ) {
            result[12] += 0.2539439846946247;
          } else {
            result[12] += 0.06427485849243111;
          }
        }
      }
    } else {
      result[12] += 0.3138826781855626;
    }
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.6077743444705893117) ) ) {
      if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)1.854678033977535057) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.503056489870696177) ) ) {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)2.018344205066380237) ) ) {
              if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
                if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.816561841575487168) ) ) {
                  if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    result[0] += -0.026933006721886556;
                  } else {
                    result[0] += -0.03517660521247569;
                  }
                } else {
                  result[0] += 0.026381118259457034;
                }
              } else {
                result[0] += 0.02732751897652222;
              }
            } else {
              result[0] += 0.046710708146778135;
            }
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02363913897640607456) ) ) {
              if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.1912871298504377759) ) ) {
                result[0] += 0.08737261540660346;
              } else {
                result[0] += 0.05515370768595244;
              }
            } else {
              if ( UNLIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.03619827710753675126) ) ) {
                result[0] += 0.01634986147357249;
              } else {
                result[0] += -0.03528225268247179;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
            result[0] += 0.0996362539515435;
          } else {
            result[0] += -0.035118986500348115;
          }
        }
      } else {
        if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.2949242531695401848) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02380621809182460399) ) ) {
            result[0] += 0.08477533277027269;
          } else {
            result[0] += 0.04443136556501371;
          }
        } else {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01613787243640939575) ) ) {
            result[0] += 0.05563437860803111;
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02382198027377184849) ) ) {
              if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[0] += 0.08519862443244458;
              } else {
                result[0] += -0.03519212109635536;
              }
            } else {
              result[0] += -0.03472374420723411;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02378541201376980357) ) ) {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4481929990603614189) ) ) {
          result[0] += 0.04862928519085807;
        } else {
          result[0] += 0.0803599116851789;
        }
      } else {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
          result[0] += 0.07568519917049785;
        } else {
          result[0] += -0.03218794331985612;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02309439801696721792) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3228775849985460189) ) ) {
        result[0] += 0.057618656199576915;
      } else {
        result[0] += 0.07639829498857853;
      }
    } else {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8463879634762788706) ) ) {
        if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1008349618873134179) ) ) {
              result[0] += -0.03456880557902085;
            } else {
              result[0] += -0.007391799421566489;
            }
          } else {
            result[0] += 0.030803050713973854;
          }
        } else {
          result[0] += 0.039838635540725566;
        }
      } else {
        result[0] += 0.06997921099746154;
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.731000403976756141) ) ) {
      if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5953142808208001791) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
            if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5428053622233520725) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
                result[1] += 0.005148456075664425;
              } else {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.9377942539926636956) ) ) {
                  result[1] += -0.038543200802787135;
                } else {
                  result[1] += -0.044638017593517945;
                }
              }
            } else {
              result[1] += -0.043037664817463295;
            }
          } else {
            result[1] += 0.009029637796718205;
          }
        } else {
          if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[1] += 0.045728912270101826;
          } else {
            result[1] += -0.03761035222575975;
          }
        }
      } else {
        result[1] += 0.03286014088332128;
      }
    } else {
      if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.8900792782501997236) ) ) {
        result[1] += 0.03738570098062281;
      } else {
        result[1] += 0.049209077822219824;
      }
    }
  } else {
    if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.202002809051820803) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.958477592097621844) ) ) {
          if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.02205482497686344842) ) ) {
            if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
              if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958026162070415632) ) ) {
                  result[1] += 0.04879931709016539;
                } else {
                  if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.0105534440787750667) ) ) {
                    result[1] += 0.04869991136793007;
                  } else {
                    result[1] += 0.026771190945492136;
                  }
                }
              } else {
                result[1] += 0.015000774488828111;
              }
            } else {
              result[1] += 0.00851224524816681;
            }
          } else {
            result[1] += 0.003682666610359202;
          }
        } else {
          result[1] += -0.022028532115735553;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.256928839343927518) ) ) {
          result[1] += 0.04897015689241991;
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.395332287514440717) ) ) {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
              if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.4229862552089283523) ) ) {
                result[1] += 0.02197622772040573;
              } else {
                if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
                  result[1] += -0.044831385366038555;
                } else {
                  result[1] += -0.053045795639667576;
                }
              }
            } else {
              result[1] += 0.048146579227721274;
            }
          } else {
            if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197257869649185347) ) ) {
              result[1] += 0.0017978878430016628;
            } else {
              result[1] += 0.04828891750973093;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.241896858953469351) ) ) {
        if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.3462538601772598423) ) ) {
          result[1] += 0.026636121665874504;
        } else {
          result[1] += 0.048847308757061864;
        }
      } else {
        if ( LIKELY(  (data[49].missing != -1) && (data[49].fvalue <= (double)-0.0331438026870236116) ) ) {
          if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2284497660510860506) ) ) {
            result[1] += 0.02813313846645513;
          } else {
            result[1] += 0.04957425728605274;
          }
        } else {
          result[1] += -0.012944900800059455;
        }
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
      result[2] += -0.03436026544666771;
    } else {
      result[2] += 0.010529711670447;
    }
  } else {
    if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4136796489669126164) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.08873408624903224;
      } else {
        result[2] += 0.06110256203225466;
      }
    } else {
      result[2] += -0.03471470416479697;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2902353283338193757) ) ) {
      result[3] += -0.044907839507481534;
    } else {
      result[3] += -0.043874743759717935;
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.05234296350253432;
    } else {
      result[3] += 0.04757068592378456;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.034688736327220714;
  } else {
    result[4] += 0.0741655650123288;
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8204006694052594639) ) ) {
      result[5] += -0.03443667725756797;
    } else {
      result[5] += 0.03720791185517166;
    }
  } else {
    result[5] += 0.11488939987661731;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8480975214126128536) ) ) {
    result[6] += 0.11223922496812061;
  } else {
    result[6] += -0.02941855102495984;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5801683636132243249) ) ) {
      if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.06748916698403611969) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
            result[7] += -0.03463724064943315;
          } else {
            result[7] += 0.05571444935413307;
          }
        } else {
          result[7] += 0.056703023247633544;
        }
      } else {
        result[7] += 0.07119680683812897;
      }
    } else {
      result[7] += -0.037326645082182974;
    }
  } else {
    result[7] += -0.03462479283493854;
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.007617258158702913673) ) ) {
      result[8] += -0.03441687330906573;
    } else {
      if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
        result[8] += -0.06458731780134182;
      } else {
        result[8] += -0.034528834834085725;
      }
    }
  } else {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.2433930824819977579) ) ) {
      result[8] += -0.03409293032868144;
    } else {
      result[8] += 0.04286013572397141;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2423241881182066626) ) ) {
      if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
            result[9] += -0.00732994678590479;
          } else {
            result[9] += 0.10394770042720346;
          }
        } else {
          result[9] += 0.07095379383092634;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
          result[9] += 0.010563092469396447;
        } else {
          result[9] += -0.025164099682127225;
        }
      }
    } else {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.009373464933523050283) ) ) {
        result[9] += -0.03471460611946877;
      } else {
        result[9] += -0.0055985303029787185;
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.03461797447112059;
    } else {
      result[9] += -0.0241732962730494;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03450146705592392;
  } else {
    result[10] += 0.0595360338550799;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064119136912760992) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.679560863910465551) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109270705380969835) ) ) {
                result[11] += 0.1294969995629021;
              } else {
                result[11] += -0.014912981668169614;
              }
            } else {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3294166746977344462) ) ) {
                result[11] += -0.03227418384764775;
              } else {
                if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02361896338668694265) ) ) {
                  result[11] += -0.033178167170787046;
                } else {
                  result[11] += 0.05088778641919467;
                }
              }
            }
          } else {
            result[11] += -0.03520483583102429;
          }
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02368201210918701935) ) ) {
            result[11] += -0.03319380810982836;
          } else {
            result[11] += 0.08185130472620611;
          }
        }
      } else {
        result[11] += 0.07558904960881606;
      }
    } else {
      if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
        result[11] += 0.09646707931789396;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5765759506980140392) ) ) {
          result[11] += -0.03566435967198094;
        } else {
          result[11] += 0.06675979878366466;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.789037658999794389) ) ) {
      if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4724720329713996692) ) ) {
        result[11] += 0.01435538125547638;
      } else {
        result[11] += -0.034160646510700825;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02373749498488130286) ) ) {
          if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)1.897990663147650192) ) ) {
            result[11] += -0.00806085238027757;
          } else {
            result[11] += 0.07156472661191719;
          }
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0236422914127955193) ) ) {
            result[11] += 0.06487986740431205;
          } else {
            if ( LIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.09931447741537603735) ) ) {
              result[11] += 0.0753540181662249;
            } else {
              result[11] += 0.08509609632834926;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.004049012212571336672) ) ) {
          result[11] += -0.03451922006772558;
        } else {
          result[11] += 0.018613866204211495;
        }
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02360509266710225651) ) ) {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6312302362859933957) ) ) {
        if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198718202700538304) ) ) {
          result[12] += 0.03151261003086556;
        } else {
          result[12] += -0.03448384188362727;
        }
      } else {
        result[12] += -0.03374325752276897;
      }
    } else {
      result[12] += 0.03610076537000495;
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.060779695253623922) ) ) {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4404152440484555009) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01339498258383770186) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[12] += -0.0005233907657963871;
          } else {
            result[12] += 0.2048103345605089;
          }
        } else {
          result[12] += 0.4212642665410677;
        }
      } else {
        if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1683539907328813756) ) ) {
          result[12] += 0.04577737520778527;
        } else {
          result[12] += -0.03468760964731159;
        }
      }
    } else {
      result[12] += -0.03458120106189005;
    }
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.06941445991431857698) ) ) {
          if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2456553910013743736) ) ) {
            result[0] += -0.03256804312976621;
          } else {
            result[0] += 0.04483249732467883;
          }
        } else {
          result[0] += 0.07481709564252421;
        }
      } else {
        if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.3304630486124701672) ) ) {
          if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.1806163359356856846) ) ) {
            result[0] += -0.03513400925904881;
          } else {
            result[0] += -0.0001949633647434778;
          }
        } else {
          result[0] += 0.10344338340962098;
        }
      }
    } else {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.35192791421776487) ) ) {
        if ( UNLIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5249899308183043622) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6196296108131761349) ) ) {
            result[0] += 0.10246321654180149;
          } else {
            result[0] += -0.023191957638288664;
          }
        } else {
          if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.9363420476767664313) ) ) {
            result[0] += -0.03531054809709221;
          } else {
            result[0] += -0.002839603780966151;
          }
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += 0.07203840814267358;
          } else {
            if ( UNLIKELY( !(data[56].missing != -1) || (data[56].fvalue <= (double)0.1994929327025164179) ) ) {
              result[0] += 0.08711665893265574;
            } else {
              result[0] += 0.07538150242949675;
            }
          }
        } else {
          if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.015857238408216668) ) ) {
            result[0] += -0.035430659297298564;
          } else {
            result[0] += 0.06325461387517772;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02309439801696721792) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3228775849985460189) ) ) {
        result[0] += 0.05277957084967442;
      } else {
        result[0] += 0.07162963397699483;
      }
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5406810279414914211) ) ) {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
          result[0] += 0.028608239096643475;
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.369392444902026329) ) ) {
            result[0] += -0.033765223679129805;
          } else {
            result[0] += 0.001511562115337886;
          }
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958026162070415632) ) ) {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3262626843891289208) ) ) {
            result[0] += -0.03613696165684703;
          } else {
            if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197411949542014353) ) ) {
              result[0] += 0.07676558043427181;
            } else {
              if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6192635509156506624) ) ) {
                result[0] += -0.02513661244863526;
              } else {
                result[0] += 0.047392807521338634;
              }
            }
          }
        } else {
          result[0] += 0.08976920735967955;
        }
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3895400451821667831) ) ) {
        if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += -0.04231352216703961;
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
            result[1] += -0.04458037211348627;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.102546986980341481) ) ) {
              result[1] += -0.04302413767685763;
            } else {
              result[1] += 0.009529137026779816;
            }
          }
        }
      } else {
        result[1] += 0.035273654772090275;
      }
    } else {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
        result[1] += 0.04710289518065302;
      } else {
        result[1] += -0.037434107226427;
      }
    }
  } else {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198004437014410506) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3699951939963300185) ) ) {
            result[1] += 0.0024426451296449985;
          } else {
            result[1] += -0.03817658349764957;
          }
        } else {
          if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1292032387258958137) ) ) {
            result[1] += -0.0014493019651705022;
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
              result[1] += 0.007693218977581925;
            } else {
              if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
                result[1] += 0.023826852718644136;
              } else {
                if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.09689930476456649899) ) ) {
                  result[1] += 0.04749706745284282;
                } else {
                  result[1] += 0.03621064453535197;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.256928839343927518) ) ) {
          result[1] += 0.04771733413621474;
        } else {
          result[1] += -0.0440812227260366;
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7277191341578289618) ) ) {
        if ( UNLIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4105093223159403948) ) ) {
          result[1] += -0.042008701604217026;
        } else {
          if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.3675300067716713026) ) ) {
            result[1] += 0.047611537225559296;
          } else {
            result[1] += -0.014043715497800481;
          }
        }
      } else {
        if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.6568547333550184275) ) ) {
            result[1] += -0.04442967006110417;
          } else {
            result[1] += -0.05871423421465956;
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.421477146086837395) ) ) {
            result[1] += 0.04866865686704237;
          } else {
            result[1] += -0.012213036668615082;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
      result[2] += -0.03434811894431944;
    } else {
      result[2] += 0.010656971481514543;
    }
  } else {
    if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4473271959888947547) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.08272047117456688;
      } else {
        result[2] += 0.05803878997517863;
      }
    } else {
      result[2] += -0.027761850128841584;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.04354315508940096;
  } else {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.043568031522789319) ) ) {
      result[3] += 0.04645984456439425;
    } else {
      result[3] += -0.051185705237303876;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03465851346141269;
  } else {
    result[4] += 0.06979830854014929;
  }
  if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.04821423960068615261) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5831015787781427262) ) ) {
      result[5] += 0.01767527518009219;
    } else {
      result[5] += -0.03214049670237725;
    }
  } else {
    result[5] += 0.10246628528685132;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    result[6] += 0.10780438102612369;
  } else {
    result[6] += -0.03180808079757861;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2698870447495728686) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2.216913971546932594) ) ) {
          result[7] += -0.034619751822281476;
        } else {
          result[7] += 0.05702300515968133;
        }
      } else {
        result[7] += 0.05782198663615909;
      }
    } else {
      result[7] += -0.034793224542825574;
    }
  } else {
    result[7] += -0.034614240921169666;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198103916251270773) ) ) {
      result[8] += -0.04782699559143669;
    } else {
      result[8] += -0.03296460498502364;
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
      result[8] += -0.033631698371796415;
    } else {
      result[8] += 0.042211737772035116;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2423241881182066626) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
          result[9] += 0.01607515485100591;
        } else {
          result[9] += -0.034962338334534944;
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.01967859759586815943) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
            result[9] += 0.09976515534565981;
          } else {
            result[9] += 0.05539542044936858;
          }
        } else {
          result[9] += 0.06341846531665736;
        }
      }
    } else {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.009373464933523050283) ) ) {
        result[9] += -0.03470352951189666;
      } else {
        result[9] += -0.005831003776484752;
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.03460045946151487;
    } else {
      result[9] += -0.02373652501718082;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03448382015450679;
  } else {
    result[10] += 0.05716516906941984;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064119136912760992) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.679560863910465551) ) ) {
          if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4540106973991014372) ) ) {
              if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02273502030030346774) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
                  result[11] += 0.06329561896425742;
                } else {
                  result[11] += -0.033233377577111145;
                }
              } else {
                result[11] += 0.0731806371782112;
              }
            } else {
              result[11] += -0.03384573875344036;
            }
          } else {
            result[11] += -0.03505118522311167;
          }
        } else {
          result[11] += 0.06753692125291756;
        }
      } else {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1827267960974166827) ) ) {
          result[11] += -0.035396927804801574;
        } else {
          result[11] += 0.07324205393014403;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3623215723957393108) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.674638636662801439) ) ) {
          result[11] += 0.03157067630554315;
        } else {
          result[11] += -0.03464222754360886;
        }
      } else {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7655847180658988949) ) ) {
          result[11] += 0.08369964473449408;
        } else {
          result[11] += 0.05785201682333002;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.789037658999794389) ) ) {
      if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4724720329713996692) ) ) {
        result[11] += 0.01351251650584995;
      } else {
        result[11] += -0.03405841370112607;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02373749498488130286) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)2.141635193064730824) ) ) {
            result[11] += -0.004390284582586762;
          } else {
            result[11] += 0.06598137492545111;
          }
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0236422914127955193) ) ) {
            result[11] += 0.06031144654538688;
          } else {
            result[11] += 0.07099972275687737;
          }
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.533379939164722039) ) ) {
          result[11] += -0.03533338639046293;
        } else {
          result[11] += 0.07508024873806707;
        }
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02360509266710225651) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01050479929169300004) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6312302362859933957) ) ) {
        if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.5706248947303227403) ) ) {
          result[12] += 0.03183734423137424;
        } else {
          result[12] += -0.034482362911780695;
        }
      } else {
        result[12] += -0.033706569664857515;
      }
    } else {
      result[12] += 0.036656153538198455;
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.060779695253623922) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5983067153409977745) ) ) {
          result[12] += 0.20856086924943884;
        } else {
          if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.8053770841190394103) ) ) {
            result[12] += 0.08595550286778986;
          } else {
            result[12] += -0.0322476835853263;
          }
        }
      } else {
        result[12] += 0.1745958741815255;
      }
    } else {
      result[12] += -0.03457629931036669;
    }
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.6077743444705893117) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += -0.035005262757043125;
          } else {
            result[0] += 0.006952274730856425;
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.06941445991431857698) ) ) {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03806079381433948722) ) ) {
              result[0] += -0.035366578929250665;
            } else {
              result[0] += 0.03244447289539709;
            }
          } else {
            result[0] += 0.0670752282163716;
          }
        }
      } else {
        if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01597084447219743533) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
            if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01611826186795162902) ) ) {
              result[0] += 0.08003249665900673;
            } else {
              if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01068953286472670676) ) ) {
                result[0] += 0.07566796582243177;
              } else {
                result[0] += 0.013707569001521012;
              }
            }
          } else {
            result[0] += -0.0356777039547303;
          }
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02363913897640607456) ) ) {
            result[0] += 0.04997706989809994;
          } else {
            if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.255087436110478627) ) ) {
              result[0] += 0.005170032860270342;
            } else {
              result[0] += -0.0353900204064482;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.1782719052970157814) ) ) {
        result[0] += 0.0182960919045036;
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02382702416987940441) ) ) {
          result[0] += 0.07104991736746094;
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
            result[0] += 0.07149350396862261;
          } else {
            if ( UNLIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4257229653414040249) ) ) {
              result[0] += 0.03942469170103434;
            } else {
              result[0] += -0.035894756819228116;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9475499506149932527) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02335415875377330405) ) ) {
        result[0] += 0.06813031159190594;
      } else {
        result[0] += -0.035528880522628356;
      }
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01700452193506691093) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1361215068539864126) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3699221335000508204) ) ) {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5970539650723311054) ) ) {
              result[0] += 0.06658339555771246;
            } else {
              result[0] += 0.05492071431254627;
            }
          } else {
            result[0] += 0.0678457268921984;
          }
        } else {
          result[0] += 0.07972297797537961;
        }
      } else {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5325896194295395292) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6123658380703492776) ) ) {
            result[0] += 0.008842864018320311;
          } else {
            result[0] += -0.03275788422693701;
          }
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7704629034599390636) ) ) {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.08982731757416721752) ) ) {
              if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.0388394303150649059) ) ) {
                result[0] += 0.0014763836964972069;
              } else {
                result[0] += -0.03214095412126565;
              }
            } else {
              result[0] += 0.06422468657235646;
            }
          } else {
            result[0] += 0.08314848784620418;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3895400451821667831) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3719312971477298224) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
                result[1] += -0.029829370377527184;
              } else {
                result[1] += -0.042247964256514337;
              }
            } else {
              result[1] += -0.013327081256914522;
            }
          } else {
            result[1] += -0.04177905720428087;
          }
        } else {
          result[1] += 0.00830242228731463;
        }
      } else {
        result[1] += 0.033695400491219135;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[1] += 0.04584961001067277;
      } else {
        result[1] += -0.037274626705632884;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.005976215679226037393) ) ) {
        if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4671635821151731705) ) ) {
          if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1676694716615645397) ) ) {
            result[1] += 0.021764930461146706;
          } else {
            result[1] += -0.04209433279287676;
          }
        } else {
          if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
              if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9897634247260547191) ) ) {
                if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
                  if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6196619769803648481) ) ) {
                    result[1] += 0.008701859644285968;
                  } else {
                    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.865975086310726283) ) ) {
                      result[1] += 0.046019449201504636;
                    } else {
                      result[1] += 0.035801443601036965;
                    }
                  }
                } else {
                  result[1] += -0.043994182101482156;
                }
              } else {
                if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
                  result[1] += 0.04652220497270626;
                } else {
                  result[1] += 0.041026816319138536;
                }
              }
            } else {
              result[1] += 0.0012860091515970405;
            }
          } else {
            result[1] += -0.02133494220438543;
          }
        }
      } else {
        if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4105093223159403948) ) ) {
          result[1] += -0.04333691996759463;
        } else {
          result[1] += 0.04898513645623578;
        }
      }
    } else {
      result[1] += -0.043967174574458125;
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[42].missing != -1) || (data[42].fvalue <= (double)0.07474262301326993485) ) ) {
      result[2] += -0.034334927869844115;
    } else {
      result[2] += 0.004371130732136349;
    }
  } else {
    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5784009581098017438) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.07745301376001809;
      } else {
        result[2] += 0.05306744716324263;
      }
    } else {
      result[2] += -0.022506282709217108;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.04260599743440379;
    } else {
      result[3] += 0.04545826613947652;
    }
  } else {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197994531079804581) ) ) {
      result[3] += -0.0440614541890562;
    } else {
      result[3] += -0.042629310241461604;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.034628605911707085;
  } else {
    result[4] += 0.06607505093356103;
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01568141949717636111) ) ) {
    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
      result[5] += 0.007210278356147198;
    } else {
      result[5] += -0.034435941044702066;
    }
  } else {
    result[5] += 0.0914961847479994;
  }
  if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.61991967279657334) ) ) {
    result[6] += 0.11994655312106371;
  } else {
    result[6] += -0.02687527696892022;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5801683636132243249) ) ) {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.06756346529129970968) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
          if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.5905732247963905168) ) ) {
            result[7] += -0.03462200167224477;
          } else {
            result[7] += 0.05111961876118051;
          }
        } else {
          result[7] += 0.05210005194265965;
        }
      } else {
        result[7] += 0.06383285749901867;
      }
    } else {
      result[7] += -0.037317587064095444;
    }
  } else {
    result[7] += -0.034604115582966784;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198103916251270773) ) ) {
      if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701667218619324073) ) ) {
        result[8] += -0.03451476436399246;
      } else {
        result[8] += -0.05455124402757083;
      }
    } else {
      result[8] += -0.03283650871496652;
    }
  } else {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
      result[8] += -0.03358147651276236;
    } else {
      result[8] += 0.04162786482694486;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2773401588208461721) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.01967859759586815943) ) ) {
          result[9] += 0.07075640214514971;
        } else {
          result[9] += 0.06053195134975979;
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1305725821159978428) ) ) {
          result[9] += -0.017664984986515295;
        } else {
          result[9] += 0.0501155961259377;
        }
      }
    } else {
      result[9] += -0.03274613177356987;
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.034583224725215356;
    } else {
      result[9] += -0.023273621746461973;
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
      result[10] += -0.03459528262736209;
    } else {
      result[10] += 0.055026825702149576;
    }
  } else {
    result[10] += -0.034463423350897644;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6036631336413064153) ) ) {
      if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039999051450601897) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5930608235909559101) ) ) {
            result[11] += 0.05771859853944311;
          } else {
            result[11] += 0.007356754245754074;
          }
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1560584602119888531) ) ) {
            result[11] += -0.0037570974264474056;
          } else {
            result[11] += -0.03394969778581955;
          }
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
          result[11] += -0.0346645979445268;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
            if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
              if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1172188192335981149) ) ) {
                result[11] += 0.004475306322507538;
              } else {
                result[11] += -0.033537761309982594;
              }
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6332419118900941557) ) ) {
                result[11] += 0.10128242895185821;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5765759506980140392) ) ) {
                  result[11] += -0.03724789621867515;
                } else {
                  result[11] += 0.058699771380337634;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.210529505505956005) ) ) {
              if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868243832515844832) ) ) {
                if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.1021616414857052652) ) ) {
                  result[11] += 0.05295396278699986;
                } else {
                  result[11] += 0.06746118034339035;
                }
              } else {
                result[11] += 0.0680798508046149;
              }
            } else {
              if ( LIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.01319153349759450734) ) ) {
                if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038550421807385993) ) ) {
                  result[11] += 0.07254399577091018;
                } else {
                  result[11] += -0.03558884134695682;
                }
              } else {
                result[11] += 0.07138053580675593;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.010524869644988704) ) ) {
        if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4671635821151731705) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02207174774267025089) ) ) {
            result[11] += -0.031980819938394814;
          } else {
            result[11] += 0.07263458793670373;
          }
        } else {
          result[11] += -0.034419616625258186;
        }
      } else {
        result[11] += 0.020518979549657056;
      }
    }
  } else {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.043568031522789319) ) ) {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)0.5617439760773980106) ) ) {
        if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.3890519774860478064) ) ) {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8008727114737107522) ) ) {
              result[11] += -0.013954509423504713;
            } else {
              result[11] += -0.033108259493852064;
            }
          } else {
            result[11] += 0.017694900153805218;
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[11] += -0.03511451558081271;
          } else {
            result[11] += -0.00671257559977624;
          }
        }
      } else {
        result[11] += 0.04612563973285261;
      }
    } else {
      result[11] += 0.0778693956168658;
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02360509266710225651) ) ) {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8672677388249647734) ) ) {
        if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198718202700538304) ) ) {
          result[12] += 0.03649642950324886;
        } else {
          result[12] += -0.034480703401228295;
        }
      } else {
        result[12] += -0.03405338376202761;
      }
    } else {
      result[12] += 0.03657921281231694;
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6108199825892823842) ) ) {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4404152440484555009) ) ) {
          if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
            result[12] += 0.3332308391560325;
          } else {
            if ( LIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-1.00000001800250948e-35) ) ) {
              result[12] += -0.03500219855040949;
            } else {
              result[12] += 0.1444945520246596;
            }
          }
        } else {
          result[12] += -0.029761749007716966;
        }
      } else {
        result[12] += -0.034577431922096585;
      }
    } else {
      result[12] += 0.1764054377926897;
    }
  }
  if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.6077743444705893117) ) ) {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.945333284487767989) ) ) {
            if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[0] += -0.03494827798539384;
            } else {
              result[0] += 0.011791180558253019;
            }
          } else {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.6931314304910922708) ) ) {
              if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.07037565156425555635) ) ) {
                result[0] += 0.06184566892632094;
              } else {
                result[0] += -0.03495193621755086;
              }
            } else {
              result[0] += 0.07761722317177387;
            }
          }
        } else {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
            result[0] += 0.07420158557516202;
          } else {
            result[0] += -0.03506535268733216;
          }
        }
      } else {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
          if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01603914335784167519) ) ) {
            result[0] += 0.07013169280026063;
          } else {
            result[0] += 0.03819808955421132;
          }
        } else {
          if ( LIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.2434901596444382921) ) ) {
            result[0] += -0.033805432531749995;
          } else {
            result[0] += 0.06437706421570741;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02378541201376980357) ) ) {
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += 0.043208678404919015;
        } else {
          result[0] += 0.06677169712956625;
        }
      } else {
        if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.3185492300727958415) ) ) {
          result[0] += 0.08007521061397088;
        } else {
          result[0] += -0.02736494885047492;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02287246651419007001) ) ) {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
          result[0] += 0.029439873156823792;
        } else {
          if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7880685817837016494) ) ) {
            result[0] += 0.05224390871571718;
          } else {
            result[0] += 0.06455094290913316;
          }
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.319811268434055274) ) ) {
          result[0] += -0.03588987719899178;
        } else {
          result[0] += 0.06868223888077202;
        }
      }
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5325896194295395292) ) ) {
        if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1684254911100461771) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199109664226803984) ) ) {
            result[0] += -0.027335828786496135;
          } else {
            result[0] += 0.04463515130144828;
          }
        } else {
          result[0] += -0.03329627661233779;
        }
      } else {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7925765324441547133) ) ) {
          result[0] += -0.03250607417808734;
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631875991615196753) ) ) {
            if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5972105588559143419) ) ) {
              result[0] += 0.05386485464529939;
            } else {
              result[0] += -0.011168690048602568;
            }
          } else {
            result[0] += 0.06789209412201902;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5801683636132243249) ) ) {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02367444626238122962) ) ) {
        if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += -0.041061639430343945;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
            result[1] += 0.014547994784674459;
          } else {
            result[1] += -0.04294992648177136;
          }
        }
      } else {
        result[1] += 0.0130511646688781;
      }
    } else {
      if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03212371186344609858) ) ) {
          result[1] += 0.0460059601120533;
        } else {
          result[1] += -0.008740901861964823;
        }
      } else {
        result[1] += -0.04226799552775988;
      }
    }
  } else {
    if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.07150931649549026325) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.958477592097621844) ) ) {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
              if ( LIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.2711620284367899925) ) ) {
                if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
                  result[1] += 0.045492508134341705;
                } else {
                  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8925561340682643952) ) ) {
                    result[1] += 0.04344243213203922;
                  } else {
                    result[1] += 0.023331926992135668;
                  }
                }
              } else {
                result[1] += 0.013901906002139352;
              }
            } else {
              result[1] += 0.01296162264122753;
            }
          } else {
            result[1] += 0.0015575805453049278;
          }
        } else {
          result[1] += -0.02155040590167293;
        }
      } else {
        if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3479392415564711016) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.046103837241118883) ) ) {
            result[1] += -0.028608441465194177;
          } else {
            result[1] += -0.04270544976825871;
          }
        } else {
          if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.01569335254031511626) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02380306565543515579) ) ) {
              result[1] += -0.04021192478187016;
            } else {
              if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)1.453636907717410276) ) ) {
                result[1] += 0.045701544199898754;
              } else {
                result[1] += 0.031550742226463604;
              }
            }
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2606236310663146427) ) ) {
              result[1] += -0.054049962632590584;
            } else {
              result[1] += -0.042154194251557475;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01617168376818281864) ) ) {
        result[1] += 0.027084297552905534;
      } else {
        result[1] += 0.04543772548283732;
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.837431928686208193) ) ) {
      result[2] += -0.03432062335621178;
    } else {
      result[2] += 0.00991328974237993;
    }
  } else {
    if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4473271959888947547) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.07338828264403148;
      } else {
        result[2] += 0.05088559732329249;
      }
    } else {
      result[2] += -0.02739599631603959;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.042217360226511486;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.049128361934521234;
    } else {
      result[3] += 0.04456002871382028;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03459899966726808;
  } else {
    result[4] += 0.06285545293433481;
  }
  if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.04821423960068615261) ) ) {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8204006694052594639) ) ) {
      result[5] += -0.031967929040148974;
    } else {
      result[5] += 0.019124150922654976;
    }
  } else {
    result[5] += 0.09031386390876969;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.5006032028397574551) ) ) {
    result[6] += 0.1233509504897258;
  } else {
    result[6] += -0.03179969999770654;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02385602658307566307) ) ) {
        if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
          result[7] += -0.034603631372691894;
        } else {
          result[7] += 0.05147367579234793;
        }
      } else {
        result[7] += 0.05326166872810685;
      }
    } else {
      result[7] += -0.0347858366113659;
    }
  } else {
    result[7] += -0.03459443562103768;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    result[8] += -0.03527068822015307;
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[8] += -0.04262433875440254;
    } else {
      result[8] += 0.041558939908482966;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3707623292072619869) ) ) {
          result[9] += 0.06037461098209933;
        } else {
          result[9] += 0.042147701791809225;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
          result[9] += 0.02827272854930294;
        } else {
          result[9] += -0.02477171068454632;
        }
      }
    } else {
      result[9] += -0.03261822440901038;
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.03456627823296717;
    } else {
      result[9] += -0.02278734452875;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.034448200456896484;
  } else {
    result[10] += 0.05319251525978525;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.1913249152360226579) ) ) {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6280911155401268653) ) ) {
      if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.8317954485947177679) ) ) {
          result[11] += -0.03407792665267068;
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01067632168010653783) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121101247298024794) ) ) {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3720591530162184468) ) ) {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4730302610939773333) ) ) {
                  result[11] += 0.051466049746127326;
                } else {
                  result[11] += -0.03525975327464843;
                }
              } else {
                result[11] += 0.06362399873628972;
              }
            } else {
              result[11] += -0.030224042414594844;
            }
          } else {
            result[11] += -0.03464079041018851;
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.795864831687285834) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199109664226803984) ) ) {
            result[11] += 0.011668303281469642;
          } else {
            result[11] += -0.03621448544281932;
          }
        } else {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6332419118900941557) ) ) {
            result[11] += 0.09245017763876519;
          } else {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7800660007274459185) ) ) {
              result[11] += 0.0615618948298814;
            } else {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5325896194295395292) ) ) {
                result[11] += -0.018918882471788842;
              } else {
                result[11] += 0.017349857506908848;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6036631336413064153) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376397544737933118) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5717089510150197285) ) ) {
            result[11] += 0.029265726548264197;
          } else {
            result[11] += -0.03282339640896809;
          }
        } else {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
            if ( UNLIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.1021616414857052652) ) ) {
              if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02273502030030346774) ) ) {
                result[11] += 0.04026518900727077;
              } else {
                result[11] += 0.06709169086761056;
              }
            } else {
              result[11] += 0.06419710911033437;
            }
          } else {
            if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.8714595178205502) ) ) {
              result[11] += -0.03412347309142341;
            } else {
              result[11] += 0.04647912184274779;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02335415875377330405) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.619821271846820232) ) ) {
            result[11] += 0.018146664078495252;
          } else {
            result[11] += -0.0342515007148919;
          }
        } else {
          result[11] += 0.034592699328677555;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5831015787781427262) ) ) {
      result[11] += 0.0891906347387549;
    } else {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9897634247260547191) ) ) {
          result[11] += -0.002534035013950155;
        } else {
          result[11] += -0.03503276607463575;
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
          result[11] += -0.03595628235801496;
        } else {
          result[11] += 0.09659617974472018;
        }
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02360509266710225651) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01050479929169300004) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6312302362859933957) ) ) {
        if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.5706248947303227403) ) ) {
          result[12] += 0.029471394356720984;
        } else {
          result[12] += -0.03447752619372747;
        }
      } else {
        result[12] += -0.033616579284296365;
      }
    } else {
      result[12] += 0.037163794869465874;
    }
  } else {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7976716790512085042) ) ) {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4436564032039089778) ) ) {
          result[12] += 0.24256124800665108;
        } else {
          result[12] += 0.044310616053206554;
        }
      } else {
        if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.23396760303671299) ) ) {
          result[12] += -0.03209945630970218;
        } else {
          result[12] += 0.0559505119307845;
        }
      }
    } else {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
        result[12] += 0.14628031270206573;
      } else {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.663005812816665596) ) ) {
          result[12] += -0.03471814547316224;
        } else {
          result[12] += 0.1209418695167381;
        }
      }
    }
  }
  if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.4907783890339046384) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.007141354067762418871) ) ) {
          result[0] += -0.03488862944539868;
        } else {
          result[0] += 0.0010032749169095303;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6195866052131618895) ) ) {
            if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.2949242531695401848) ) ) {
              result[0] += 0.07592807893499075;
            } else {
              result[0] += 0.05879548417545712;
            }
          } else {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03877928294628725514) ) ) {
              result[0] += -0.03581119346239089;
            } else {
              result[0] += 0.08022684969194456;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
            result[0] += 0.05699454465868279;
          } else {
            result[0] += -0.03511234593570531;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1300100187573274835) ) ) {
        if ( UNLIKELY( !(data[46].missing != -1) || (data[46].fvalue <= (double)1.801895658597179484) ) ) {
          result[0] += 0.06502366487294219;
        } else {
          if ( LIKELY( !(data[54].missing != -1) || (data[54].fvalue <= (double)0.2496580702890671966) ) ) {
            result[0] += -0.03641902039780488;
          } else {
            result[0] += 0.0026556450891316004;
          }
        }
      } else {
        result[0] += 0.06217123890159271;
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02309439801696721792) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
        result[0] += 0.012021992360657534;
      } else {
        if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.319811268434055274) ) ) {
            result[0] += -0.03589515786099908;
          } else {
            result[0] += 0.06553944588145033;
          }
        } else {
          result[0] += 0.061464002639732375;
        }
      }
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5406810279414914211) ) ) {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
          result[0] += 0.02712157876320942;
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.369392444902026329) ) ) {
            result[0] += -0.03347267556057564;
          } else {
            result[0] += -6.89219081731489e-05;
          }
        }
      } else {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8643446201027721321) ) ) {
          if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2515347726943660267) ) ) {
            if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197582957382364865) ) ) {
              result[0] += 0.050440160177438395;
            } else {
              if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6182897410123405768) ) ) {
                result[0] += -0.02632669478113503;
              } else {
                result[0] += 0.018647574864477663;
              }
            }
          } else {
            result[0] += 0.06805963056647697;
          }
        } else {
          result[0] += 0.06305502616476055;
        }
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.731000403976756141) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3895400451821667831) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5968190743969560286) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.759220268744210225) ) ) {
              result[1] += 0.02059440926705518;
            } else {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
                  result[1] += -0.03237479455653001;
                } else {
                  result[1] += -0.04121491171278284;
                }
              } else {
                if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
                  result[1] += 0.04422639491915679;
                } else {
                  result[1] += -0.036873235178307394;
                }
              }
            }
          } else {
            result[1] += -0.0407035444827475;
          }
        } else {
          result[1] += 0.009574080851555597;
        }
      } else {
        result[1] += 0.03288381238682382;
      }
    } else {
      if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.8900792782501997236) ) ) {
        result[1] += 0.03223372468523589;
      } else {
        result[1] += 0.044855822460557894;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
            result[1] += 0.0445959223371927;
          } else {
            result[1] += 0.03953931425357979;
          }
        } else {
          result[1] += 0.022345968204918507;
        }
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197700186569693459) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.01928985497672836349) ) ) {
              result[1] += 0.025248743888296652;
            } else {
              result[1] += -0.01672341929993984;
            }
          } else {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.60222304226160428) ) ) {
              result[1] += 0.043655110792708784;
            } else {
              result[1] += -0.005664338197986032;
            }
          }
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)6.328487615245206754) ) ) {
            result[1] += -0.04240387477317501;
          } else {
            result[1] += -0.02866427448128459;
          }
        }
      }
    } else {
      result[1] += -0.04278685122956341;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.034289927043024845;
  } else {
    if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.4669063841584393804) ) ) {
      if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3982557217939283745) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376649739807756498) ) ) {
            result[2] += 0.01781156884343687;
          } else {
            result[2] += 0.12010959781809324;
          }
        } else {
          result[2] += -0.039022903913130916;
        }
      } else {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198224257915192492) ) ) {
          result[2] += 0.06804659414601158;
        } else {
          if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5107358283455237791) ) ) {
            result[2] += 0.058819040593861324;
          } else {
            result[2] += -0.03491719257617326;
          }
        }
      }
    } else {
      result[2] += -0.03211513575119483;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.04141693991562204;
    } else {
      result[3] += 0.043742637748944865;
    }
  } else {
    result[3] += -0.04166416047160925;
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03464420379789375;
  } else {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6316814848651618464) ) ) {
      result[4] += 0.05994120658479371;
    } else {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.9558084745773579582) ) ) {
        result[4] += 0.05965075856498099;
      } else {
        result[4] += -0.031220080646483017;
      }
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8204006694052594639) ) ) {
      result[5] += -0.03214658729896402;
    } else {
      result[5] += 0.03603979080348995;
    }
  } else {
    result[5] += 0.11770086641818989;
  }
  if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.619922385481690652) ) ) {
    result[6] += 0.11931495904790915;
  } else {
    result[6] += -0.026587594578180457;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5801683636132243249) ) ) {
      if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.06748916698403611969) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
            result[7] += -0.034608864162947096;
          } else {
            result[7] += 0.047569582690142775;
          }
        } else {
          result[7] += 0.04848990973107797;
        }
      } else {
        result[7] += 0.05822649446684294;
      }
    } else {
      result[7] += -0.03728115690696326;
    }
  } else {
    result[7] += -0.03458519647481213;
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
    result[8] += -0.03517415166415578;
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[8] += -0.042178915763778045;
    } else {
      result[8] += 0.04110689402547119;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2423241881182066626) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7752644520936924355) ) ) {
          result[9] += -0.029686779946909644;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
            result[9] += 0.03617746083530959;
          } else {
            result[9] += -0.03499482613405976;
          }
        }
      } else {
        if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[9] += 0.04259447844644907;
        } else {
          result[9] += 0.05786097275842567;
        }
      }
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
        result[9] += -0.0007232791222703979;
      } else {
        result[9] += -0.03417884674347107;
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.034549638072941286;
    } else {
      result[9] += -0.022279591829220777;
    }
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[10] += -0.0345815355047973;
    } else {
      result[10] += 0.05151955388586106;
    }
  } else {
    result[10] += -0.034427025675012386;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064119136912760992) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)4.214945378660041264) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8156176587248761267) ) ) {
                result[11] += 0.10770366177525767;
              } else {
                if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7859106002086083675) ) ) {
                  result[11] += -0.032988179586711394;
                } else {
                  result[11] += -0.005407800179868496;
                }
              }
            } else {
              if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6187052019767984579) ) ) {
                result[11] += -0.03294322991815115;
              } else {
                result[11] += 0.028840703192002336;
              }
            }
          } else {
            result[11] += -0.03499339102683677;
          }
        } else {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9927185586073418166) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1827267960974166827) ) ) {
              result[11] += -0.03258402570759534;
            } else {
              result[11] += 0.06377946141703898;
            }
          } else {
            if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01068672733151411654) ) ) {
              result[11] += -0.0352610360689267;
            } else {
              result[11] += 0.002859400675174031;
            }
          }
        }
      } else {
        result[11] += 0.05003532532018938;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3623215723957393108) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.674638636662801439) ) ) {
          result[11] += 0.025574491448464694;
        } else {
          result[11] += -0.03446726116741664;
        }
      } else {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5549832342097297255) ) ) {
          result[11] += 0.06842463389167786;
        } else {
          result[11] += 0.04750009825998736;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.789037658999794389) ) ) {
      if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
        result[11] += 0.01076207989847866;
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5984633091245811221) ) ) {
          result[11] += -0.003177552144864125;
        } else {
          result[11] += -0.03456722337783467;
        }
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
        if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2158055062499528998) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366057554279654349) ) ) {
            if ( LIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.2218280449352794392) ) ) {
              result[11] += 0.025385872029623897;
            } else {
              result[11] += 0.06543311461085219;
            }
          } else {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.919828219461336527) ) ) {
              result[11] += 0.06107887232840077;
            } else {
              result[11] += 0.05541611413626012;
            }
          }
        } else {
          result[11] += 0.035941451017280426;
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.533379939164722039) ) ) {
          result[11] += -0.0352265278899452;
        } else {
          result[11] += 0.06518623306360173;
        }
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02360509266710225651) ) ) {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8672677388249647734) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.61991967279657334) ) ) {
          result[12] += 0.03383063868011211;
        } else {
          result[12] += -0.034476042093187595;
        }
      } else {
        result[12] += -0.03400333634773011;
      }
    } else {
      result[12] += 0.037380111754308484;
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.060779695253623922) ) ) {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4404152440484555009) ) ) {
        if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5384757477610738752) ) ) {
          result[12] += 0.21192055527867212;
        } else {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.619867205792824838) ) ) {
            result[12] += 0.1079073693156271;
          } else {
            result[12] += -0.026306572387986515;
          }
        }
      } else {
        if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.254425075134593226) ) ) {
          result[12] += 0.03981749789196453;
        } else {
          result[12] += -0.034666408436925526;
        }
      }
    } else {
      result[12] += -0.034566754622939684;
    }
  }
  if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.6077743444705893117) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.01042025011524357753) ) ) {
          result[0] += -0.034844742516253746;
        } else {
          result[0] += -0.0009398724830244773;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376397544737933118) ) ) {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6195321345175198724) ) ) {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.3161789987705551641) ) ) {
              result[0] += 0.07690290512168049;
            } else {
              result[0] += 0.05657900075970365;
            }
          } else {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03877928294628725514) ) ) {
              result[0] += -0.03581594459837174;
            } else {
              result[0] += 0.07708730887286676;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
            result[0] += 0.058558378373301245;
          } else {
            result[0] += -0.03448111971631515;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.731000403976756141) ) ) {
        if ( LIKELY( !(data[44].missing != -1) || (data[44].fvalue <= (double)0.4747864418399008746) ) ) {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01599924599031985264) ) ) {
            result[0] += -0.003200995452190869;
          } else {
            result[0] += -0.03633486233654327;
          }
        } else {
          result[0] += 0.05920818000761902;
        }
      } else {
        if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.02460705325092478468) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.4763760499233852252) ) ) {
            result[0] += 0.06841337829261332;
          } else {
            result[0] += 0.05781431960095983;
          }
        } else {
          result[0] += 0.041079466907617296;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02309439801696721792) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
        result[0] += 0.011410516141133331;
      } else {
        if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += 0.05875105629047473;
        } else {
          if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227915261315229323) ) ) {
            result[0] += -0.035855038538861274;
          } else {
            result[0] += 0.06258929632432061;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.070817902055202664) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9475499506149932527) ) ) {
          result[0] += -0.03539055713908017;
        } else {
          if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03828963855561979407) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0127493636678698407) ) ) {
              result[0] += 0.036794559383513094;
            } else {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2773401588208461721) ) ) {
                result[0] += 0.022252215575161938;
              } else {
                if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2666177823200240327) ) ) {
                  result[0] += -0.03371684137619894;
                } else {
                  result[0] += -0.009542080503318688;
                }
              }
            }
          } else {
            result[0] += 0.07100967695154269;
          }
        }
      } else {
        result[0] += 0.04402666534931741;
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3895400451821667831) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.040139082639081586;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[1] += 0.011659756222095126;
            } else {
              result[1] += -0.041770086187315786;
            }
          }
        } else {
          result[1] += 0.007370139787046429;
        }
      } else {
        result[1] += 0.029492632847346514;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[1] += 0.04276780203742175;
      } else {
        result[1] += -0.036854851964794204;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
            result[1] += 0.04378805989105452;
          } else {
            result[1] += 0.0378421862203708;
          }
        } else {
          result[1] += 0.016771661341753147;
        }
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.958477592097621844) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
              result[1] += -0.014118525359131943;
            } else {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8481349665766537704) ) ) {
                result[1] += 0.045130407171990454;
              } else {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4487077746997004124) ) ) {
                  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6032356958133081593) ) ) {
                    result[1] += 0.043489979103988434;
                  } else {
                    result[1] += 0.028682066558227932;
                  }
                } else {
                  result[1] += 0.014671592877092852;
                }
              }
            }
          } else {
            result[1] += -0.025608548539499607;
          }
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)6.328487615245206754) ) ) {
            result[1] += -0.04184881697789188;
          } else {
            result[1] += -0.0277316935396622;
          }
        }
      }
    } else {
      result[1] += -0.04222652651978732;
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.836574878011415946) ) ) {
      result[2] += -0.03429308879214146;
    } else {
      result[2] += 0.010062901478765944;
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02371353647043705423) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376649739807756498) ) ) {
          result[2] += 0.052383545238670094;
        } else {
          result[2] += 0.09029388602216055;
        }
      } else {
        if ( LIKELY( !(data[73].missing != -1) || (data[73].fvalue <= (double)0.9487011791542866446) ) ) {
          result[2] += 0.012718039433201529;
        } else {
          result[2] += 0.06329740078336771;
        }
      }
    } else {
      result[2] += -0.031234003753955415;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.04111284072803283;
  } else {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.043568031522789319) ) ) {
      result[3] += 0.043006182303731204;
    } else {
      result[3] += -0.04753215234833184;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03454053154952864;
  } else {
    result[4] += 0.05762286239861431;
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.4947126634741793594) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5831015787781427262) ) ) {
      result[5] += 0.017164824200512623;
    } else {
      result[5] += -0.0344452809766978;
    }
  } else {
    result[5] += 0.08058473977559868;
  }
  if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
    result[6] += 0.11949470115154447;
  } else {
    result[6] += -0.026441702609192687;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02385602658307566307) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2.21692300729075642) ) ) {
          result[7] += -0.03458894029303368;
        } else {
          result[7] += 0.047201026362737465;
        }
      } else {
        result[7] += 0.04966049310974765;
      }
    } else {
      result[7] += -0.03477581441773845;
    }
  } else {
    result[7] += -0.03457639202409426;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    result[8] += -0.03524343990691729;
  } else {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.4805219744909849933) ) ) {
      result[8] += -0.039321947070569206;
    } else {
      result[8] += 0.04061550137251106;
    }
  }
  if ( UNLIKELY(  (data[15].missing != -1) && (data[15].fvalue <= (double)-2.053703856899027347) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2773401588208461721) ) ) {
        if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
            result[9] += -0.005646240861414069;
          } else {
            result[9] += 0.08541388553089761;
          }
        } else {
          result[9] += 0.05566541507655017;
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1305725821159978428) ) ) {
          result[9] += -0.01779534613318993;
        } else {
          result[9] += 0.04289748517783213;
        }
      }
    } else {
      result[9] += -0.0323882978549762;
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.03453315430743953;
    } else {
      result[9] += -0.02175714818741829;
    }
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
      result[10] += -0.03457496850476515;
    } else {
      result[10] += 0.050066947601556944;
    }
  } else {
    result[10] += -0.03440852387037974;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064119136912760992) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1109290895755049022) ) ) {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5882064162998722479) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8156176587248761267) ) ) {
              result[11] += 0.0980853054298786;
            } else {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7859106002086083675) ) ) {
                result[11] += -0.03279498708278927;
              } else {
                result[11] += -0.0007005369947637129;
              }
            }
          } else {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6027520958870253853) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7720634196711901875) ) ) {
                result[11] += -0.03449095569686666;
              } else {
                result[11] += -0.018450546296742056;
              }
            } else {
              result[11] += 0.026638899906080746;
            }
          }
        } else {
          result[11] += 0.09395869647789623;
        }
      } else {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
          result[11] += 0.07506973390112887;
        } else {
          if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7914519369226754586) ) ) {
            result[11] += -0.008911811602146727;
          } else {
            result[11] += 0.047607263016463015;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)0.4511556643006282563) ) ) {
        result[11] += -0.034881675796949715;
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02365553164668899103) ) ) {
          result[11] += -0.03408217363228554;
        } else {
          result[11] += 0.05294784861504663;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6280911155401268653) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
        result[11] += 0.020494779669405383;
      } else {
        result[11] += -0.03452213565014256;
      }
    } else {
      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6036631336413064153) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.5876089993422919378) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9285972811752244427) ) ) {
            result[11] += 0.05847095988159152;
          } else {
            if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5931070865636064449) ) ) {
              if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6664244451779278711) ) ) {
                result[11] += 0.0285981324217486;
              } else {
                result[11] += -0.03250545866062574;
              }
            } else {
              result[11] += 0.06012107722805234;
            }
          }
        } else {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198103916251270773) ) ) {
            result[11] += 0.054350367163055774;
          } else {
            result[11] += -0.021884375022114648;
          }
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.6568547333550184275) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02339072701113089486) ) ) {
            result[11] += -0.03381322466053112;
          } else {
            result[11] += 0.029930272212469054;
          }
        } else {
          result[11] += 0.017975697553461775;
        }
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02360509266710225651) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01050479929169300004) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6312302362859933957) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199228652155316377) ) ) {
          result[12] += 0.0218519216592927;
        } else {
          result[12] += -0.025570995730514256;
        }
      } else {
        result[12] += -0.03351445051440793;
      }
    } else {
      result[12] += 0.0378207655584772;
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.060779695253623922) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6307850244566913789) ) ) {
          if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.265032629752936788) ) ) {
            result[12] += 0.18195840264238425;
          } else {
            result[12] += 0.01070772519711304;
          }
        } else {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198249166614756556) ) ) {
            result[12] += 0.07782506786704357;
          } else {
            result[12] += -0.0346177822634996;
          }
        }
      } else {
        result[12] += 0.10752859307324848;
      }
    } else {
      result[12] += -0.03456323901358933;
    }
  }
  if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.503056489870696177) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)2.426716883486857768) ) ) {
          if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.01042025011524357753) ) ) {
            result[0] += -0.03483845618213543;
          } else {
            result[0] += 0.0005565623013066026;
          }
        } else {
          result[0] += 0.07985267976243657;
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
          result[0] += 0.047839253189006795;
        } else {
          result[0] += -0.035585274979263865;
        }
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02363913897640607456) ) ) {
        if ( UNLIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.09885611693652061882) ) ) {
          if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.1955708206850878539) ) ) {
            result[0] += -0.032997180592130734;
          } else {
            result[0] += 0.007643182248422859;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5130492770249733825) ) ) {
            result[0] += 0.07685886605707838;
          } else {
            if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01584303765057360966) ) ) {
              if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02382702416987940441) ) ) {
                result[0] += 0.05872419641224614;
              } else {
                if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.03850432495261061489) ) ) {
                  result[0] += 0.05599183124799982;
                } else {
                  if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01062662417694204726) ) ) {
                    result[0] += 0.012030800371170132;
                  } else {
                    result[0] += -0.03524009262771595;
                  }
                }
              }
            } else {
              result[0] += 0.0045490604942947065;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.1007672447517250769) ) ) {
          result[0] += 0.03312083019141324;
        } else {
          result[0] += -0.03461234763530439;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02309439801696721792) ) ) {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3228775849985460189) ) ) {
            result[0] += 0.024412563831534815;
          } else {
            result[0] += 0.055981468686045886;
          }
        } else {
          result[0] += 0.06691327599646094;
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.319811268434055274) ) ) {
          result[0] += -0.03584921453193731;
        } else {
          result[0] += 0.0600112542572444;
        }
      }
    } else {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7880685817837016494) ) ) {
        if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03755979913172164536) ) ) {
          result[0] += -0.03531085190906754;
        } else {
          result[0] += 0.003198374968806843;
        }
      } else {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5406810279414914211) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
            result[0] += 0.04624774968564422;
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02165877861003031798) ) ) {
              result[0] += -0.0021987558267962436;
            } else {
              result[0] += -0.0313140389295617;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9412434134585615508) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958026162070415632) ) ) {
              if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1673596367082613723) ) ) {
                result[0] += -0.007443483687836626;
              } else {
                result[0] += 0.05238170246413321;
              }
            } else {
              result[0] += 0.07042499681122545;
            }
          } else {
            result[0] += 0.006264297055638384;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.5717070730123615663) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.03971354563514734;
          } else {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
              result[1] += -0.041508107264979964;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
                result[1] += 0.03028478471744968;
              } else {
                result[1] += -0.04199980016272255;
              }
            }
          }
        } else {
          result[1] += 0.007315807163992928;
        }
      } else {
        result[1] += 0.026332869100906608;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[1] += 0.04184191551748833;
      } else {
        result[1] += -0.036719231600039225;
      }
    }
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01581463613528749299) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9256908764563110958) ) ) {
          result[1] += -0.03703224276489771;
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631875991615196753) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.958477592097621844) ) ) {
              if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3980700287761728129) ) ) {
                result[1] += -0.0013598486888752469;
              } else {
                if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
                    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.582136130875904989) ) ) {
                        result[1] += -0.0021419674469861545;
                      } else {
                        result[1] += 0.04214665639373488;
                      }
                    } else {
                      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
                        result[1] += 0.04303384475683247;
                      } else {
                        result[1] += 0.03764364144109515;
                      }
                    }
                  } else {
                    result[1] += 0.021499807419160934;
                  }
                } else {
                  result[1] += -0.004595185003065765;
                }
              }
            } else {
              result[1] += -0.020630905362975602;
            }
          } else {
            result[1] += -0.04296995175473797;
          }
        }
      } else {
        result[1] += -0.041828793723061704;
      }
    } else {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          result[1] += -0.04124741954930138;
        } else {
          result[1] += 0.01749881856016185;
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.619858908223990368) ) ) {
          result[1] += 0.02862548972839679;
        } else {
          result[1] += 0.04300916952536121;
        }
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.836574878011415946) ) ) {
      result[2] += -0.03427809028379825;
    } else {
      result[2] += 0.010664390484697634;
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02371353647043705423) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.945333284487767989) ) ) {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4547253021406916784) ) ) {
          result[2] += 0.015725443389738514;
        } else {
          result[2] += 0.05052875179355506;
        }
      } else {
        result[2] += 0.05829560098478148;
      }
    } else {
      result[2] += -0.031069710993043644;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.04062912906702314;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.046679109326889505;
    } else {
      result[3] += 0.0423345130515081;
    }
  }
  if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
    result[4] += -0.03456630948799352;
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02355465369015997956) ) ) {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.209321689314693193) ) ) {
        result[4] += 0.05437275702011743;
      } else {
        result[4] += -0.03229703030287156;
      }
    } else {
      result[4] += 0.055149831168681246;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      result[5] += 0.02320512963206057;
    } else {
      result[5] += -0.03180357821948131;
    }
  } else {
    result[5] += 0.10401586809832096;
  }
  if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.597836933990247732) ) ) {
    result[6] += 0.11913024701269503;
  } else {
    result[6] += -0.02628598167812307;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5801683636132243249) ) ) {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4804758948180142819) ) ) {
        if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.5905732247963905168) ) ) {
          result[7] += -0.034597150020619624;
        } else {
          result[7] += 0.0446524986754602;
        }
      } else {
        if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.06748916698403611969) ) ) {
          result[7] += 0.04559018397701858;
        } else {
          result[7] += 0.05384013705906359;
        }
      }
    } else {
      result[7] += -0.03724224828176727;
    }
  } else {
    result[7] += -0.0345680112904113;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    result[8] += -0.03522979569911892;
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[8] += -0.037716803197425194;
    } else {
      result[8] += 0.040252397806440986;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.624853897296242633) ) ) {
          result[9] += 0.053788456951860665;
        } else {
          result[9] += 0.035068236451797734;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
          result[9] += 0.025528073538253565;
        } else {
          result[9] += -0.02400810015860875;
        }
      }
    } else {
      result[9] += -0.03224046660481755;
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.03451691069048212;
    } else {
      result[9] += -0.0212075180167421;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.034393457341051044;
  } else {
    result[10] += 0.048726026049724445;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064119136912760992) ) ) {
      if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038330787516608122) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1560584602119888531) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
            result[11] += 0.0744208455927848;
          } else {
            if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.023650487747936981) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.2145836212983644742) ) ) {
                result[11] += 0.010393097476004308;
              } else {
                result[11] += -0.03545622398790581;
              }
            } else {
              if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6013879114574612883) ) ) {
                result[11] += -0.0059520303736389744;
              } else {
                if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039752342938385921) ) ) {
                  result[11] += 0.06041515951483417;
                } else {
                  result[11] += 0.03880196314638967;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
            result[11] += 0.03938010051213962;
          } else {
            if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01068672733151411654) ) ) {
              result[11] += -0.033098683819980386;
            } else {
              result[11] += 0.007611138975131608;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.373439753823053389) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.033452534228659125) ) ) {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
              result[11] += -0.003142816716733556;
            } else {
              result[11] += -0.03492844102550462;
            }
          } else {
            if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4671635821151731705) ) ) {
              result[11] += 0.03900102254951825;
            } else {
              result[11] += -0.02958830583878828;
            }
          }
        } else {
          result[11] += 0.04844895754329503;
        }
      }
    } else {
      if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.328090508794230018) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)0.4511556643006282563) ) ) {
          result[11] += 0.018324547899431103;
        } else {
          result[11] += -0.035510185425155036;
        }
      } else {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6037796008705348383) ) ) {
            result[11] += 0.05618383462360768;
          } else {
            if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.640231701336450798) ) ) {
              result[11] += 0.05839641638761733;
            } else {
              result[11] += 0.007984424133765725;
            }
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[11] += -0.03505924550649728;
          } else {
            result[11] += 0.04483502025145961;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.129804037176955767) ) ) {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.4308627519497926772) ) ) {
            if ( LIKELY(  (data[37].missing != -1) && (data[37].fvalue <= (double)-0.1117079187917503214) ) ) {
              result[11] += -0.032043255818612046;
            } else {
              result[11] += 0.12170442665312897;
            }
          } else {
            result[11] += -0.029529400404996447;
          }
        } else {
          result[11] += -0.0349386787737912;
        }
      } else {
        result[11] += 0.0237669444342222;
      }
    } else {
      result[11] += 0.06020043374449161;
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02360509266710225651) ) ) {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.110873590015022172) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.61991967279657334) ) ) {
          result[12] += 0.035347973903895435;
        } else {
          result[12] += -0.034470733235971135;
        }
      } else {
        result[12] += -0.033945958121568406;
      }
    } else {
      result[12] += 0.038565082808209486;
    }
  } else {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5982284184492060453) ) ) {
        if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6514641469536260887) ) ) {
          result[12] += 0.007224293828040759;
        } else {
          result[12] += 0.1499509194332185;
        }
      } else {
        if ( LIKELY( !(data[70].missing != -1) || (data[70].fvalue <= (double)0.2113914779389726439) ) ) {
          result[12] += -0.03316995415645277;
        } else {
          result[12] += 0.058712636428533714;
        }
      }
    } else {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
        result[12] += 0.11524818400616686;
      } else {
        if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4485341925390928797) ) ) {
          result[12] += 0.08528195471264717;
        } else {
          result[12] += -0.008791783124162476;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3457215489742671566) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02309439801696721792) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
          result[0] += 0.025743655849719;
        } else {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
              if ( UNLIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.4201330470075223533) ) ) {
                result[0] += 0.048440225204321945;
              } else {
                result[0] += 0.007061475980367385;
              }
            } else {
              result[0] += 0.05472699300667421;
            }
          } else {
            if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6197843043942409258) ) ) {
              result[0] += 0.04706774557047095;
            } else {
              result[0] += -0.033861760968399816;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7925765324441547133) ) ) {
          result[0] += -0.035029512770090684;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
            if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198091517241097748) ) ) {
              result[0] += 0.0037947930473393138;
            } else {
              result[0] += -0.03601581238084053;
            }
          } else {
            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6892214870717320307) ) ) {
              if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4431534528014459684) ) ) {
                if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6032356958133081593) ) ) {
                  if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4521723711646160049) ) ) {
                    result[0] += -0.03510917927210873;
                  } else {
                    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198434919010112898) ) ) {
                      result[0] += -0.01587473401090119;
                    } else {
                      result[0] += 0.017481368773607172;
                    }
                  }
                } else {
                  result[0] += 0.03320185184433276;
                }
              } else {
                result[0] += 0.07098801634079167;
              }
            } else {
              result[0] += 0.06873241422144093;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02379802175668314576) ) ) {
        if ( UNLIKELY( !(data[58].missing != -1) || (data[58].fvalue <= (double)0.1184849464528192203) ) ) {
          result[0] += 0.05583461917373218;
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[0] += -0.03497056412722247;
          } else {
            result[0] += 0.07560159743381388;
          }
        }
      } else {
        if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5079350000006834787) ) ) {
          result[0] += 0.03015275277348466;
        } else {
          if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)1.111462641402294338) ) ) {
            result[0] += -0.034986836231172935;
          } else {
            result[0] += -0.0032962120565123367;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.3304630486124701672) ) ) {
          if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.01042025011524357753) ) ) {
            result[0] += -0.03478473321043666;
          } else {
            result[0] += 0.0003223612167261906;
          }
        } else {
          result[0] += 0.098343188002264;
        }
      } else {
        if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227915261315229323) ) ) {
          result[0] += -0.03605969473829212;
        } else {
          result[0] += 0.05817284155025824;
        }
      }
    } else {
      if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[0] += 0.09162731034180321;
      } else {
        if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
          result[0] += 0.05629293927703385;
        } else {
          result[0] += -0.019121876934481623;
        }
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3895400451821667831) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.03930583751953643;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[1] += 0.01053659231016458;
            } else {
              result[1] += -0.04071075834803765;
            }
          }
        } else {
          result[1] += 0.0067597352245887836;
        }
      } else {
        result[1] += 0.027048323997061873;
      }
    } else {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
        result[1] += 0.040992656887315515;
      } else {
        result[1] += -0.03660305404199811;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.005976215679226037393) ) ) {
        if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4671635821151731705) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3699951939963300185) ) ) {
            result[1] += 0.020532727029443757;
          } else {
            result[1] += -0.041728680541239474;
          }
        } else {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
            if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.01730959326324889649) ) ) {
                if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
                  result[1] += 0.04236563193195481;
                } else {
                  result[1] += 0.03639604788464379;
                }
              } else {
                result[1] += 0.014414275133116775;
              }
            } else {
              if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197700186569693459) ) ) {
                  result[1] += 0.007971576543926535;
                } else {
                  result[1] += 0.04126497704075533;
                }
              } else {
                if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6033875391661546184) ) ) {
                  result[1] += -0.043240182459604905;
                } else {
                  result[1] += -0.027156859350538222;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3869534795422291396) ) ) {
              result[1] += 0.02094276312595441;
            } else {
              result[1] += -0.023420194954808068;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4638011979819190445) ) ) {
          result[1] += -0.040585253037238575;
        } else {
          result[1] += 0.0447264186433018;
        }
      }
    } else {
      result[1] += -0.04123928969230944;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.03424477732862117;
  } else {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1300100187573274835) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5824022486379295538) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1679140925017010011) ) ) {
            result[2] += 0.009639312825956326;
          } else {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5941776910965133052) ) ) {
              result[2] += 0.028761114754884957;
            } else {
              result[2] += 0.0933269794866214;
            }
          }
        } else {
          result[2] += -0.03288418509341212;
        }
      } else {
        result[2] += 0.0575198882556416;
      }
    } else {
      result[2] += -0.03478842109606861;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.0401861147431721;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.04588117820172948;
    } else {
      result[3] += 0.04172244472017473;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03448267703181145;
  } else {
    result[4] += 0.05357860863204547;
  }
  if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.04821423960068615261) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5831015787781427262) ) ) {
      result[5] += 0.016958713167654692;
    } else {
      result[5] += -0.03167017671862417;
    }
  } else {
    result[5] += 0.09014962280524;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3717029830968571757) ) ) {
    result[6] += 0.11803553610192702;
  } else {
    result[6] += -0.02611432749349549;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
      if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03891074583698413136) ) ) {
        if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
          result[7] += -0.034584224779690774;
        } else {
          result[7] += 0.04378107029948394;
        }
      } else {
        result[7] += 0.04670823711443392;
      }
    } else {
      result[7] += -0.0347656756849217;
    }
  } else {
    result[7] += -0.03456005919441856;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
      result[8] += -0.05178711834617393;
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
        result[8] += -0.03448963404065812;
      } else {
        result[8] += 0.0402506151218363;
      }
    }
  } else {
    result[8] += -0.03449559032346714;
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2423241881182066626) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7752644520936924355) ) ) {
          result[9] += -0.029761579834290366;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
            result[9] += 0.030940313105309435;
          } else {
            result[9] += -0.03504850570509118;
          }
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376649739807756498) ) ) {
          result[9] += 0.05166121631927675;
        } else {
          result[9] += 0.034006743692062066;
        }
      }
    } else {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.009373464933523050283) ) ) {
        result[9] += -0.03468947189686776;
      } else {
        result[9] += -0.010158332744356891;
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.03450086996993556;
    } else {
      result[9] += -0.02065528791465798;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03437468751253532;
  } else {
    result[10] += 0.04755976321753851;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064119136912760992) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.0387429138283030064) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.679560863910465551) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288268469591914434) ) ) {
              result[11] += 0.05254829700619266;
            } else {
              result[11] += -0.012343866122083758;
            }
          } else {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6027520958870253853) ) ) {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
                result[11] += -0.03434183121427242;
              } else {
                result[11] += -0.018741300881530205;
              }
            } else {
              result[11] += 0.025548833612234024;
            }
          }
        } else {
          result[11] += 0.08155546780437072;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4600137327860867043) ) ) {
          result[11] += 0.0013677451872668468;
        } else {
          result[11] += 0.050470523713282034;
        }
      }
    } else {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02351808543015793465) ) ) {
          result[11] += -0.03477932912798833;
        } else {
          result[11] += -0.0008569152243902154;
        }
      } else {
        if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)0.2067176624512315486) ) ) {
          result[11] += -0.03525012330743261;
        } else {
          result[11] += 0.04881936344716106;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6280911155401268653) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
        result[11] += 0.01959191293786445;
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.261418469357002747) ) ) {
          result[11] += -0.007725453875783809;
        } else {
          result[11] += -0.03521198831666732;
        }
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
        if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6035520750690563929) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9285972811752244427) ) ) {
            result[11] += 0.0543811147221583;
          } else {
            if ( UNLIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.02821589033132558891) ) ) {
              if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2421860587092668216) ) ) {
                result[11] += -0.008419127897068418;
              } else {
                result[11] += 0.05869163545510676;
              }
            } else {
              if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02374506083168709258) ) ) {
                result[11] += 0.04165514483485241;
              } else {
                result[11] += 0.05627385136212269;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3262626843891289208) ) ) {
            result[11] += 0.024303360833562365;
          } else {
            result[11] += -0.03333242905220714;
          }
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.533379939164722039) ) ) {
          result[11] += -0.03409117877667715;
        } else {
          result[11] += 0.08896290129898334;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2781834005959584744) ) ) {
    if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4654297515321642043) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5982284184492060453) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01339498258383770186) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199228652155316377) ) ) {
            result[12] += 0.03390160614776644;
          } else {
            result[12] += -0.03457805902772517;
          }
        } else {
          result[12] += 0.11369027246637259;
        }
      } else {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[12] += -0.03155710929264216;
        } else {
          result[12] += 0.0414342243638945;
        }
      }
    } else {
      if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.1620382808199801183) ) ) {
        result[12] += 0.11382068738940551;
      } else {
        result[12] += 0.031844435722208644;
      }
    }
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02337244288112987067) ) ) {
      result[12] += -0.03445534204592418;
    } else {
      result[12] += 0.035370357227666856;
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3457215489742671566) ) ) {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9475499506149932527) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198977553459016354) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5130492770249733825) ) ) {
            result[0] += 0.050153859345138226;
          } else {
            result[0] += 0.016848202814135963;
          }
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3588777014346508087) ) ) {
            result[0] += -0.0331055252157577;
          } else {
            if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1668502104108449957) ) ) {
              result[0] += -0.03501514891007796;
            } else {
              result[0] += 0.050601978266140116;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5919646671058724774) ) ) {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8124905999336901052) ) ) {
              result[0] += -0.0013046914651068256;
            } else {
              result[0] += -0.03774642231029385;
            }
          } else {
            result[0] += 0.09581972418366369;
          }
        } else {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198309718098810039) ) ) {
            if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199109664226803984) ) ) {
              result[0] += 0.05270293858488;
            } else {
              result[0] += 0.06359383375270278;
            }
          } else {
            if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
              if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
                if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2666177823200240327) ) ) {
                  result[0] += -0.03183861037299052;
                } else {
                  result[0] += 0.009291674663137395;
                }
              } else {
                result[0] += 0.041731464373923936;
              }
            } else {
              if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701667218619324073) ) ) {
                result[0] += 0.05293226118603373;
              } else {
                if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.562133551333246051) ) ) {
                  result[0] += -0.03588562550155532;
                } else {
                  result[0] += 0.054604140535893235;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01069179887226926785) ) ) {
        if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.01474274395022307817) ) ) {
          result[0] += 0.05165008515407535;
        } else {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01617168376818281864) ) ) {
            result[0] += 0.050276355269792704;
          } else {
            result[0] += -0.028157992252105333;
          }
        }
      } else {
        if ( LIKELY( !(data[70].missing != -1) || (data[70].fvalue <= (double)0.1355082638379023763) ) ) {
          if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4214959145050585776) ) ) {
            result[0] += 0.026872159599814528;
          } else {
            if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01614666338323774916) ) ) {
              result[0] += 0.04170257547057899;
            } else {
              if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)2.218887539076220161) ) ) {
                result[0] += -0.03338711371924528;
              } else {
                result[0] += 0.008925933608036639;
              }
            }
          }
        } else {
          result[0] += 0.032868047409573664;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (double)1.484009722571272727) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)2.2104646999004256) ) ) {
            result[0] += -0.034683988294012015;
          } else {
            result[0] += 0.05530799289403723;
          }
        } else {
          if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.8053770841190394103) ) ) {
            result[0] += 0.05505023969337857;
          } else {
            result[0] += -0.019444497867380298;
          }
        }
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.4308627519497926772) ) ) {
          result[0] += -0.036574411293598244;
        } else {
          result[0] += 0.052882168732339044;
        }
      }
    } else {
      result[0] += 0.04669798175036141;
    }
  }
  if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.169081742587877365) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.5717070730123615663) ) ) {
        if ( LIKELY( !(data[42].missing != -1) || (data[42].fvalue <= (double)0.09717005571973523492) ) ) {
          if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5428053622233520725) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[1] += 0.00413680455558692;
            } else {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.07982434462983790946) ) ) {
                result[1] += -0.024317696402722754;
              } else {
                result[1] += -0.04016271442085538;
              }
            }
          } else {
            result[1] += -0.03903926997492357;
          }
        } else {
          result[1] += 0.0057592831527995035;
        }
      } else {
        result[1] += 0.023933009970009873;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[1] += 0.04040851039445614;
      } else {
        result[1] += -0.037054701338626046;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
            result[1] += 0.04174875058133224;
          } else {
            result[1] += 0.03514497001917099;
          }
        } else {
          result[1] += 0.01217639374705945;
        }
      } else {
        if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.343438049588791483) ) ) {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6197085167835402197) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1856591361813167695) ) ) {
              result[1] += 0.026952679338154435;
            } else {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3705796779665639362) ) ) {
                result[1] += -0.007198607052318275;
              } else {
                result[1] += -0.03052110624487775;
              }
            }
          } else {
            if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1292032387258958137) ) ) {
              result[1] += -0.003331319855318109;
            } else {
              result[1] += 0.04070707389274145;
            }
          }
        } else {
          result[1] += -0.04039861362433395;
        }
      }
    } else {
      result[1] += -0.040764493159423966;
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
      result[2] += -0.034244228398074894;
    } else {
      result[2] += 0.0023723259029853868;
    }
  } else {
    if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4473271959888947547) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.058364632341036365;
      } else {
        result[2] += 0.0393025175400852;
      }
    } else {
      result[2] += -0.02623287749761266;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
      result[3] += -0.03959932113371986;
    } else {
      result[3] += 0.041161080184803266;
    }
  } else {
    result[3] += -0.03979935592120896;
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.034453669945160886;
  } else {
    result[4] += 0.05189501402196504;
  }
  if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4455763584367840591) ) ) {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8204006694052594639) ) ) {
      result[5] += -0.03444718880520406;
    } else {
      result[5] += 0.03790819409944756;
    }
  } else {
    result[5] += 0.09218128956355377;
  }
  if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6309079158092387729) ) ) {
    result[6] += 0.1199731424121765;
  } else {
    result[6] += -0.02599327437374484;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5801683636132243249) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
        if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
          result[7] += -0.03458736021491254;
        } else {
          result[7] += 0.04224262505034148;
        }
      } else {
        result[7] += 0.04542062830684471;
      }
    } else {
      result[7] += -0.03716960650382465;
    }
  } else {
    result[7] += -0.03455251113683655;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    result[8] += -0.035167337636230894;
  } else {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.5905732247963905168) ) ) {
      result[8] += -0.049449957840551874;
    } else {
      result[8] += 0.04000675391097757;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
      if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
          result[9] += 0.05069127693505586;
        } else {
          result[9] += 0.032130951266435843;
        }
      } else {
        result[9] += -0.016973082312870733;
      }
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
        result[9] += 0.004544650111739209;
      } else {
        result[9] += -0.03414602915139571;
      }
    }
  } else {
    result[9] += -0.033892812156960425;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.0343555421462438;
  } else {
    result[10] += 0.04647458459915792;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064119136912760992) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197994531079804581) ) ) {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1827267960974166827) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6438362138560046466) ) ) {
              result[11] += 0.08211007437783077;
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[11] += -0.0016025770104296639;
              } else {
                result[11] += -0.03489650068510655;
              }
            }
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.36630920134634648) ) ) {
              result[11] += -0.033347130022062056;
            } else {
              result[11] += 0.04818798005408986;
            }
          }
        } else {
          if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2271878412671015368) ) ) {
            result[11] += 0.0549352798667053;
          } else {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (double)0.2272333720235279464) ) ) {
              result[11] += 0.012639558006424278;
            } else {
              result[11] += -0.03501735892815504;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02273502030030346774) ) ) {
          result[11] += -0.03486854245654441;
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01181939501496042516) ) ) {
            result[11] += 0.045558753145822764;
          } else {
            result[11] += -0.03300992256628623;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3623215723957393108) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.674638636662801439) ) ) {
          result[11] += 0.020411335639327288;
        } else {
          result[11] += -0.034382619727417026;
        }
      } else {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3706436059008083039) ) ) {
          result[11] += 0.05431488880004516;
        } else {
          result[11] += 0.03750849537008421;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6491956528469868815) ) ) {
      if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
        result[11] += 0.034999926709896954;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5497225041265615397) ) ) {
          result[11] += 0.0006534120335919083;
        } else {
          result[11] += -0.0343238721923034;
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1506379465711845389) ) ) {
          result[11] += 0.012774467160820781;
        } else {
          result[11] += -0.035131481576080516;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.4947126634741793594) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9285972811752244427) ) ) {
            result[11] += 0.05252554830212301;
          } else {
            if ( UNLIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.03875257006431604562) ) ) {
              if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.04966706999681128748) ) ) {
                result[11] += -0.018937570673979366;
              } else {
                result[11] += 0.05270162226842901;
              }
            } else {
              result[11] += 0.0528322444300877;
            }
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            if ( UNLIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.4227681319350181099) ) ) {
              result[11] += 0.011087739712113623;
            } else {
              result[11] += -0.03551779920996778;
            }
          } else {
            result[11] += 0.03930216624217113;
          }
        }
      }
    }
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2781834005959584744) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.819723833417278058) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
          result[12] += -0.03159748200666413;
        } else {
          result[12] += 0.013680287517194486;
        }
      } else {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6309079158092387729) ) ) {
          result[12] += 0.10182973896540494;
        } else {
          result[12] += -0.034843866152856;
        }
      }
    } else {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197165855916416666) ) ) {
        if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01580922632163648742) ) ) {
          result[12] += 0.1623303286975692;
        } else {
          result[12] += 0.08283591943478821;
        }
      } else {
        result[12] += -0.03452367092509119;
      }
    }
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02279302512669598504) ) ) {
      result[12] += -0.034454695862356596;
    } else {
      result[12] += 0.035028500057210595;
    }
  }
  if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.3304630486124701672) ) ) {
        if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.01042025011524357753) ) ) {
          result[0] += -0.03473197791457674;
        } else {
          result[0] += -0.00042297329806041065;
        }
      } else {
        result[0] += 0.07232225487834522;
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376397544737933118) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.056440621248962985) ) ) {
            result[0] += 0.05788175929727481;
          } else {
            if ( LIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.4669063841584393804) ) ) {
              result[0] += -0.0330314832323563;
            } else {
              result[0] += 0.03151562264707082;
            }
          }
        } else {
          result[0] += 0.05428923218703995;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
          result[0] += 0.04979214232744276;
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
            result[0] += -0.034917732383528854;
          } else {
            result[0] += -0.0072568392181652265;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9475499506149932527) ) ) {
      if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1749932324263867578) ) ) {
        if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2512838783853185709) ) ) {
          result[0] += -0.034390078967847904;
        } else {
          result[0] += 0.05018989491010931;
        }
      } else {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8166922260006254097) ) ) {
          result[0] += -0.037346397225992804;
        } else {
          result[0] += 0.05097173378074397;
        }
      }
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01700452193506691093) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
          result[0] += 0.014113793408906523;
        } else {
          if ( UNLIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227915261315229323) ) ) {
              result[0] += -0.03693261574411628;
            } else {
              result[0] += 0.054429299650657084;
            }
          } else {
            result[0] += 0.051069979290828;
          }
        }
      } else {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5325896194295395292) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
            result[0] += 0.0267054801819466;
          } else {
            result[0] += -0.030763354871307245;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9718388349668332094) ) ) {
            if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198548801993158941) ) ) {
              result[0] += 0.06464260515020995;
            } else {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8463879634762788706) ) ) {
                if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9316972172496786886) ) ) {
                  result[0] += 0.017859110257622695;
                } else {
                  result[0] += -0.0278402643451307;
                }
              } else {
                result[0] += 0.05500563208055892;
              }
            }
          } else {
            result[0] += -0.0068571595156977265;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6992443821141464122) ) ) {
    if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.5488077701542303233) ) ) {
      if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
          if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4853260837506496173) ) ) {
            if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[1] += -0.038604028207876125;
            } else {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
                result[1] += -0.04015986692588999;
              } else {
                result[1] += -0.011902459626322486;
              }
            }
          } else {
            result[1] += 0.01866169028145811;
          }
        } else {
          if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[1] += 0.0375038587225774;
          } else {
            result[1] += -0.03621867967876109;
          }
        }
      } else {
        result[1] += 0.0071347858649505195;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[1] += 0.039692063842402696;
      } else {
        result[1] += -0.0442131376262326;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
            result[1] += 0.041167431255246016;
          } else {
            result[1] += 0.03514249306902048;
          }
        } else {
          result[1] += 0.017720273593203217;
        }
      } else {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6284344568935479325) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197700186569693459) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2610326502980852559) ) ) {
              result[1] += -0.02590861810536692;
            } else {
              result[1] += 0.01196162473409902;
            }
          } else {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.60222304226160428) ) ) {
              result[1] += 0.03992357612448517;
            } else {
              result[1] += -0.005574340968943821;
            }
          }
        } else {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.321235134705145642) ) ) {
            result[1] += -0.040199665866354345;
          } else {
            result[1] += -0.02562755029620432;
          }
        }
      }
    } else {
      result[1] += -0.04039478425190769;
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[42].missing != -1) || (data[42].fvalue <= (double)0.0738487369616472461) ) ) {
      result[2] += -0.03423031956052395;
    } else {
      result[2] += 0.010976188250729574;
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02371353647043705423) ) ) {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.077547591217599354) ) ) {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4547253021406916784) ) ) {
          result[2] += 0.011653866706205962;
        } else {
          result[2] += 0.04207913873189992;
        }
      } else {
        result[2] += 0.053080945980406205;
      }
    } else {
      result[2] += -0.030938666845566926;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.039403836934291656;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.0446709956967257;
    } else {
      result[3] += 0.04065332502245614;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03442454642755333;
  } else {
    result[4] += 0.05039156455010151;
  }
  if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01568141949717636111) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      result[5] += 0.018403984508304157;
    } else {
      result[5] += -0.03443675704105221;
    }
  } else {
    result[5] += 0.08698912285822702;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.147956477092209271) ) ) {
    result[6] += 0.11670991316159274;
  } else {
    result[6] += -0.02855193583789715;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2698870447495728686) ) ) {
        if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
          result[7] += -0.03456373894431453;
        } else {
          result[7] += 0.04108523750204597;
        }
      } else {
        result[7] += 0.04438976752138678;
      }
    } else {
      result[7] += -0.034751119390408036;
    }
  } else {
    result[7] += -0.03454536104253048;
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
    result[8] += -0.03504028388721781;
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[8] += -0.036129029364541;
    } else {
      result[8] += 0.03915666989643959;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5968190743969560286) ) ) {
          result[9] += -0.02274682922645001;
        } else {
          result[9] += 0.05882896693957363;
        }
      } else {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.919828219461336527) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6280292678484594715) ) ) {
              result[9] += 0.05019695695783999;
            } else {
              result[9] += 0.0362750773942893;
            }
          } else {
            result[9] += 0.052378402021647556;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6359230018345859436) ) ) {
            result[9] += 0.051673269381799;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411986527813700709) ) ) {
              result[9] += -0.03918404055567564;
            } else {
              result[9] += 0.04768014063624253;
            }
          }
        }
      }
    } else {
      result[9] += -0.03185008481996723;
    }
  } else {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
      result[9] += -0.03406609414165066;
    } else {
      result[9] += -0.003772213455590646;
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
      result[10] += -0.03455245140859958;
    } else {
      result[10] += 0.045527441376394764;
    }
  } else {
    result[10] += -0.034331283723230216;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064119136912760992) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1127827179560820653) ) ) {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5882064162998722479) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4540106973991014372) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
              result[11] += 0.038556898716221366;
            } else {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4545285182290580983) ) ) {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6332419118900941557) ) ) {
                  result[11] += -0.032597551932563966;
                } else {
                  result[11] += -0.0067365794543182865;
                }
              } else {
                result[11] += 0.10422214772976524;
              }
            }
          } else {
            result[11] += -0.034328125277743315;
          }
        } else {
          result[11] += 0.07136640240394164;
        }
      } else {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6332419118900941557) ) ) {
          result[11] += 0.06466642536459953;
        } else {
          if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7914519369226754586) ) ) {
            result[11] += -0.007165229792463561;
          } else {
            result[11] += 0.0351654477120163;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[11] += -0.03480911452137452;
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02382702416987940441) ) ) {
            result[11] += -0.0316428845120252;
          } else {
            result[11] += 0.03717522188577182;
          }
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.023650487747936981) ) ) {
          result[11] += -0.03526609542020595;
        } else {
          result[11] += 0.04583953811512123;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.1021616414857052652) ) ) {
            result[11] += 0.0397873978084254;
          } else {
            result[11] += 0.05069157988386101;
          }
        } else {
          result[11] += 0.016626066979630875;
        }
      } else {
        if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5384757477610738752) ) ) {
          result[11] += 0.08928903807994001;
        } else {
          if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1745302913615082996) ) ) {
            result[11] += -0.035258346563505384;
          } else {
            result[11] += 0.026134996091467022;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.533379939164722039) ) ) {
        result[11] += -0.034519527476902574;
      } else {
        result[11] += 0.050407372606446094;
      }
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02360509266710225651) ) ) {
    if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.603941323245218542) ) ) {
      if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.3617003147349385772) ) ) {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
          result[12] += 0.0014363733056816203;
        } else {
          result[12] += -0.034492745687298404;
        }
      } else {
        result[12] += 0.10993901129329958;
      }
    } else {
      result[12] += -0.03445418482036315;
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.060779695253623922) ) ) {
      if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.5978075737164213477) ) ) {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4460040145072581841) ) ) {
          result[12] += 0.1395332865430577;
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
              result[12] += -0.01999626332354489;
            } else {
              result[12] += 0.08347146908068497;
            }
          } else {
            result[12] += 0.08562234529010647;
          }
        }
      } else {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3640316309875374912) ) ) {
          result[12] += -0.02786681494265941;
        } else {
          result[12] += 0.05736019178831487;
        }
      }
    } else {
      result[12] += -0.034562689274976396;
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
        result[0] += 0.008749196663338506;
      } else {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.01474274395022307817) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.959205621047357071) ) ) {
            if ( UNLIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5249899308183043622) ) ) {
              result[0] += 0.04518824041611079;
            } else {
              result[0] += 0.019617738469929206;
            }
          } else {
            result[0] += 0.0496357232243786;
          }
        } else {
          if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4257229653414040249) ) ) {
            result[0] += -0.029946526928581227;
          } else {
            result[0] += 0.05708230124235031;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3262626843891289208) ) ) {
        if ( LIKELY( !(data[49].missing != -1) || (data[49].fvalue <= (double)0.02409942093967811991) ) ) {
          if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.7268832326049657899) ) ) {
            result[0] += -0.00019716160518506407;
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.736928258521945212) ) ) {
              result[0] += -0.03431551163640184;
            } else {
              result[0] += -0.011187255789010503;
            }
          }
        } else {
          result[0] += 0.008470620853595248;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5838217903595387392) ) ) {
            result[0] += -0.03668938376431542;
          } else {
            result[0] += 0.042364400789448996;
          }
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3705796779665639362) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6123658380703492776) ) ) {
              result[0] += 0.06762342935621093;
            } else {
              result[0] += -0.02630770180199746;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.056595642949257785) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.403462557376244035) ) ) {
                if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.9696737176793504) ) ) {
                  result[0] += 0.05315121535218729;
                } else {
                  result[0] += 0.03498658052955208;
                }
              } else {
                result[0] += 0.062088798212234605;
              }
            } else {
              result[0] += 0.02533271611494295;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (double)1.484009722571272727) ) ) {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.1388805087860199294) ) ) {
            if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)2.841585542098368222) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)1.773616506442666996) ) ) {
                result[0] += -0.03455514079919726;
              } else {
                result[0] += 0.0044946744345704375;
              }
            } else {
              result[0] += 0.013941198556132078;
            }
          } else {
            result[0] += 0.06085053964438758;
          }
        } else {
          if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.3605556751855631958) ) ) {
            result[0] += 0.04755688717238225;
          } else {
            result[0] += -0.01881531153111755;
          }
        }
      } else {
        result[0] += 0.07485060207246819;
      }
    } else {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)0.9633422796052185655) ) ) {
        result[0] += -0.028928437252741183;
      } else {
        result[0] += 0.051741993441529424;
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.2449294293334160211) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01859965460797209993) ) ) {
          if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[1] += 0.003173423835153335;
            } else {
              if ( LIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[1] += -0.039365051948112566;
              } else {
                result[1] += -0.014442643562196742;
              }
            }
          } else {
            result[1] += -0.03838332667510811;
          }
        } else {
          result[1] += 0.0034474110216120997;
        }
      } else {
        result[1] += 0.026671343042980643;
      }
    } else {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
        result[1] += 0.03883089620158013;
      } else {
        result[1] += -0.03628957939969252;
      }
    }
  } else {
    if ( UNLIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
        if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9807782994563922774) ) ) {
          result[1] += -0.04673934764319318;
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.958477592097621844) ) ) {
            if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
              if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4540106973991014372) ) ) {
                result[1] += 0.01765091390686766;
              } else {
                result[1] += 0.04036116890210156;
              }
            } else {
              result[1] += 0.016498808204640166;
            }
          } else {
            result[1] += -0.018996918431960205;
          }
        }
      } else {
        if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3479392415564711016) ) ) {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (double)0.7152924186807817497) ) ) {
              result[1] += -0.039578082177483084;
            } else {
              result[1] += -0.018200780309195242;
            }
          } else {
            result[1] += -0.0009065052554182355;
          }
        } else {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5567310657996207279) ) ) {
            result[1] += 0.04069278568241878;
          } else {
            if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.3849848583505821042) ) ) {
              result[1] += -0.007108009263817275;
            } else {
              if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.03743970550878063935) ) ) {
                result[1] += -0.05894101434236693;
              } else {
                result[1] += -0.040225687251880436;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.007744908929624002777) ) ) {
        result[1] += 0.04058435864242787;
      } else {
        result[1] += 0.001598218637829662;
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.835951568429749381) ) ) {
      result[2] += -0.03421003087370719;
    } else {
      result[2] += 0.010499955444423588;
    }
  } else {
    if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4473271959888947547) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.05466046789917378;
      } else {
        result[2] += 0.03540460028090808;
      }
    } else {
      result[2] += -0.025738035720660676;
    }
  }
  if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889282566824648485) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6178797367254322825) ) ) {
      result[3] += -0.03966266174206764;
    } else {
      result[3] += 0.04004590058448219;
    }
  } else {
    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.534698905014846404) ) ) {
      result[3] += -0.03901523725195972;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3201160238932743152) ) ) {
        result[3] += 0.04015072940627052;
      } else {
        result[3] += 0.019637968639705017;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.03439522655368467;
  } else {
    result[4] += 0.049048041706521675;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      result[5] += 0.02185111619688525;
    } else {
      result[5] += -0.031454808716264555;
    }
  } else {
    result[5] += 0.09960462733036955;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.216784397334843115) ) ) {
    result[6] += 0.11499620462077521;
  } else {
    result[6] += -0.025590150628220492;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
        if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
          result[7] += -0.034596492813135024;
        } else {
          result[7] += 0.04023250899791176;
        }
      } else {
        result[7] += 0.043227862344568706;
      }
    } else {
      result[7] += -0.03710187373198557;
    }
  } else {
    result[7] += -0.034538594626848204;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    result[8] += -0.03512474041245393;
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
      result[8] += -0.047549359441670984;
    } else {
      result[8] += 0.03945283276902416;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5930608235909559101) ) ) {
          result[9] += -0.020914204233953407;
        } else {
          result[9] += 0.059676009780997824;
        }
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5976020433148727662) ) ) {
          result[9] += 0.048458532525104014;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
            result[9] += 0.013242693093738983;
          } else {
            if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6041784411470666472) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411986527813700709) ) ) {
                result[9] += -0.03896386236820954;
              } else {
                result[9] += 0.04629630171496945;
              }
            } else {
              result[9] += 0.07633621115161547;
            }
          }
        }
      }
    } else {
      result[9] += -0.0316745951020364;
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.03445355346100774;
    } else {
      result[9] += -0.01840695340521873;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.034315908182711845;
  } else {
    result[10] += 0.044639119834142975;
  }
  if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064119136912760992) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1127827179560820653) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.154290312938517138) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8156176587248761267) ) ) {
              result[11] += 0.07121466757923221;
            } else {
              result[11] += -0.0336782473993733;
            }
          } else {
            if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6187052019767984579) ) ) {
              result[11] += -0.03305774481516845;
            } else {
              result[11] += 0.020816903657700937;
            }
          }
        } else {
          result[11] += 0.04387964596810355;
        }
      } else {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6332419118900941557) ) ) {
          result[11] += 0.06118169809270704;
        } else {
          if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7914519369226754586) ) ) {
            result[11] += -0.007111844891383233;
          } else {
            result[11] += 0.03303878462175297;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[11] += -0.03477606258238302;
      } else {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01067680006018130456) ) ) {
          if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7944706466287062563) ) ) {
            result[11] += 0.0015961657388355215;
          } else {
            result[11] += -0.03370806225367744;
          }
        } else {
          result[11] += 0.0493255398291275;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.1605174800572652105) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6037796008705348383) ) ) {
            result[11] += 0.049311023572413626;
          } else {
            result[11] += 0.03735456252483263;
          }
        } else {
          result[11] += 0.010888110586705734;
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0158538827534072356) ) ) {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.4647713663903036974) ) ) {
            result[11] += -0.0352745754596088;
          } else {
            result[11] += 0.01738333073378141;
          }
        } else {
          result[11] += 0.11651749614544635;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.533379939164722039) ) ) {
        result[11] += -0.034462060696168036;
      } else {
        result[11] += 0.04717528881178904;
      }
    }
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2781834005959584744) ) ) {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)0.6185029006365517779) ) ) {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6715691337635220082) ) ) {
          result[12] += -0.01967661766420426;
        } else {
          if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6309079158092387729) ) ) {
            result[12] += 0.10615453396274871;
          } else {
            result[12] += -0.019656306036833035;
          }
        }
      } else {
        if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01591404144162520198) ) ) {
          result[12] += 0.2262088970955235;
        } else {
          result[12] += 0.07768794030610783;
        }
      }
    } else {
      result[12] += -0.034549717604664354;
    }
  } else {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)0.5617439760773980106) ) ) {
      result[12] += -0.03446025673571354;
    } else {
      result[12] += 0.034856512859848525;
    }
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.3304630486124701672) ) ) {
          if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.001312957208327953859) ) ) {
            result[0] += -0.034663634083380516;
          } else {
            result[0] += 0.0008677345761730724;
          }
        } else {
          result[0] += 0.06524122742955465;
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.06941445991431857698) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4150983744959742539) ) ) {
            result[0] += -0.035584399785684555;
          } else {
            result[0] += 0.03098263380430793;
          }
        } else {
          result[0] += 0.0496294382225845;
        }
      }
    } else {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5732125615217674719) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197125784411698923) ) ) {
            result[0] += 0.05216373021458683;
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.3574488871106138999) ) ) {
              result[0] += 0.06019440101254269;
            } else {
              result[0] += -0.036289421426729924;
            }
          }
        } else {
          result[0] += -0.0346214868076525;
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02379802175668314576) ) ) {
          result[0] += 0.05037167565701601;
        } else {
          if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2687715910408044473) ) ) {
            result[0] += 0.07153843431956317;
          } else {
            result[0] += -0.03584713771153847;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02309439801696721792) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
        result[0] += 0.017300135228637353;
      } else {
        result[0] += 0.048118040693345965;
      }
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5406810279414914211) ) ) {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
          result[0] += 0.02248381814103987;
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.369392444902026329) ) ) {
            result[0] += -0.032760484544832685;
          } else {
            result[0] += -0.0005835067446778108;
          }
        }
      } else {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7925765324441547133) ) ) {
          result[0] += -0.03603374002750881;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9412434134585615508) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
              result[0] += 0.017451695022157217;
            } else {
              result[0] += 0.05622488426205687;
            }
          } else {
            result[0] += 0.0045479285590111105;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.1910760349870249397) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01859965460797209993) ) ) {
          if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.03800751306171503;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[1] += 0.009839580555464633;
            } else {
              result[1] += -0.03904410124692929;
            }
          }
        } else {
          result[1] += 0.003262614916711458;
        }
      } else {
        result[1] += 0.025727182538459653;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.7392383594868053853) ) ) {
          result[1] += 0.0276676526260109;
        } else {
          result[1] += 0.04098435863943412;
        }
      } else {
        result[1] += -0.03619247227531809;
      }
    }
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01581463613528749299) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += 0.04002327000483015;
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3696572892010386302) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
              result[1] += -0.01666637323354628;
            } else {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3705796779665639362) ) ) {
                result[1] += 0.04062989452943928;
              } else {
                if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6037959590944369515) ) ) {
                  result[1] += -0.011148598757828556;
                } else {
                  if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03886251172102888479) ) ) {
                    result[1] += 0.010372068525205782;
                  } else {
                    result[1] += 0.03948663143242911;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)7.068507661540377462) ) ) {
              result[1] += -0.04178488459560482;
            } else {
              result[1] += -0.004481462087784554;
            }
          }
        }
      } else {
        result[1] += -0.039778681304490186;
      }
    } else {
      if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1525998871572624982) ) ) {
          result[1] += -0.039349191299573684;
        } else {
          result[1] += 0.013152775399025578;
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198633683609775513) ) ) {
          result[1] += 0.021505438539413876;
        } else {
          result[1] += 0.04013899595607543;
        }
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[42].missing != -1) || (data[42].fvalue <= (double)0.07303588765814973682) ) ) {
      result[2] += -0.03419187132514769;
    } else {
      result[2] += 0.0075933088849356786;
    }
  } else {
    if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4136796489669126164) ) ) {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6264306018581181634) ) ) {
        result[2] += 0.026460282724702546;
      } else {
        result[2] += 0.04995648660882784;
      }
    } else {
      result[2] += -0.034680412841337695;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.038740865593708436;
  } else {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.043568031522789319) ) ) {
      result[3] += 0.0397580509837781;
    } else {
      result[3] += -0.04418040329688523;
    }
  }
  if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
    result[4] += -0.03443995307743272;
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02355465369015997956) ) ) {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.209321689314693193) ) ) {
        result[4] += 0.047273680998284856;
      } else {
        result[4] += -0.031506888321652805;
      }
    } else {
      result[4] += 0.04753719526503809;
    }
  }
  if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5831015787781427262) ) ) {
      result[5] += 0.01609978562188974;
    } else {
      result[5] += -0.028452959922753897;
    }
  } else {
    result[5] += 0.09224981765746221;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8375070702631787212) ) ) {
    result[6] += 0.11796857014630432;
  } else {
    result[6] += -0.02549011127799638;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
        if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
          result[7] += -0.034592988442866054;
        } else {
          result[7] += 0.039193030408453;
        }
      } else {
        result[7] += 0.04214154037794479;
      }
    } else {
      result[7] += -0.03694741045607674;
    }
  } else {
    result[7] += -0.034532198461107624;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    result[8] += -0.0350845445936341;
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
      result[8] += -0.04671087821272486;
    } else {
      result[8] += 0.03912625239591057;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)2.795914393643698315) ) ) {
      if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
          result[9] += 0.04693658604274714;
        } else {
          result[9] += 0.027544234903341444;
        }
      } else {
        result[9] += -0.01566557741585868;
      }
    } else {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
        result[9] += 0.007744934298922618;
      } else {
        result[9] += -0.03374457210206886;
      }
    }
  } else {
    if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
      result[9] += -0.03398170245023877;
    } else {
      result[9] += -0.002536491600774004;
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
      result[10] += -0.03454304788705649;
    } else {
      result[10] += 0.043860140766238905;
    }
  } else {
    result[10] += -0.03428985468290335;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.1913249152360226579) ) ) {
    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.618191645368454501) ) ) {
      if ( LIKELY(  (data[37].missing != -1) && (data[37].fvalue <= (double)-0.06997171335009318149) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.1521079133547661166) ) ) {
          result[11] += -0.03381662810999595;
        } else {
          result[11] += 0.01604372396905251;
        }
      } else {
        if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038230936370628799) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1560584602119888531) ) ) {
            if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9807782994563922774) ) ) {
              result[11] += 0.07782629639389446;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
                result[11] += -0.03490513855070916;
              } else {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2610326502980852559) ) ) {
                  result[11] += 0.06287642266895198;
                } else {
                  result[11] += 0.02099208213275906;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.563490236986021076) ) ) {
              result[11] += 0.020282148094924395;
            } else {
              result[11] += -0.03326344996962568;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7680422137337700184) ) ) {
            result[11] += -0.0326291137391485;
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.987201281335210901) ) ) {
              result[11] += -0.024026029502735104;
            } else {
              result[11] += 0.05648407417843194;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376397544737933118) ) ) {
          result[11] += -0.033268344706847024;
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02364796579988320477) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7443588083057181004) ) ) {
              result[11] += 0.024816873266644526;
            } else {
              result[11] += 0.04470599115193585;
            }
          } else {
            result[11] += 0.04789292950299892;
          }
        }
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)2.211403389904619932) ) ) {
          result[11] += -0.03496273914687835;
        } else {
          result[11] += 0.02438674082065486;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2764711403718060345) ) ) {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)5.909810236799731165) ) ) {
        if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[11] += -0.03475532894849927;
        } else {
          result[11] += -0.0016167392623867747;
        }
      } else {
        result[11] += 0.04500617337041676;
      }
    } else {
      result[11] += 0.04842499554768313;
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02374001693293508256) ) ) {
    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8672677388249647734) ) ) {
      result[12] += 0.004114214010273372;
    } else {
      result[12] += -0.03446672195227702;
    }
  } else {
    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.2674448279882132296) ) ) {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8420687174592120794) ) ) {
        if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-2.75564553069109186) ) ) {
          result[12] += 0.050461240041682356;
        } else {
          result[12] += -0.029203276467961323;
        }
      } else {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4404152440484555009) ) ) {
          result[12] += 0.0934741001509344;
        } else {
          result[12] += -0.03477352887203946;
        }
      }
    } else {
      result[12] += -0.03455984667061257;
    }
  }
}

