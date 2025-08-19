
#include "header.h"

void predict_unit2(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
      result[5] += -0.01661616707659314;
    } else {
      result[5] += 0.11710012015227553;
    }
  } else {
    result[5] += -0.034439095913331046;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
    result[6] += 0.05325613653773367;
  } else {
    result[6] += -0.027756222466117517;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
      result[7] += 0.0012627282485317708;
    } else {
      result[7] += 0.025952108580962134;
    }
  } else {
    result[7] += -0.03444297365436376;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
      result[8] += -0.03571666448760398;
    } else {
      result[8] += -0.01391241828897495;
    }
  } else {
    result[8] += 0.024262445200344887;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
        result[9] += -0.038549743506334486;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          result[9] += -0.014752092250261802;
        } else {
          result[9] += 0.04107547866630257;
        }
      }
    } else {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4900450642267554779) ) ) {
        result[9] += 0.041370582828025367;
      } else {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3102553107906722563) ) ) {
          result[9] += -0.026276287260284917;
        } else {
          if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.859953023313256959) ) ) {
            if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6129182817967010477) ) ) {
              if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7750110408925473537) ) ) {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
                  result[9] += 0.02847972198857022;
                } else {
                  result[9] += -0.019985511312684386;
                }
              } else {
                result[9] += 0.08700789951494235;
              }
            } else {
              result[9] += -0.011153490098956796;
            }
          } else {
            result[9] += -0.027067137936208404;
          }
        }
      }
    }
  } else {
    result[9] += -0.03324382114464791;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.032284044427905716;
  } else {
    result[10] += 0.035268309552776385;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2273057443152013413) ) ) {
    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6185896019737596729) ) ) {
      if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
        if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.604004431918678808) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
            if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5386605008935624328) ) ) {
              if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.06963703127492545941) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.20695775318755727) ) ) {
                  result[11] += 0.035308023529669746;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6831714853785343378) ) ) {
                    if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7322873972955102895) ) ) {
                      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
                        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6932836104142902078) ) ) {
                          result[11] += -0.030791997785075215;
                        } else {
                          result[11] += 0.018299742648820914;
                        }
                      } else {
                        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2672709234353339292) ) ) {
                          result[11] += -0.02994505261138525;
                        } else {
                          result[11] += 0.006833983756398975;
                        }
                      }
                    } else {
                      result[11] += 0.021570639630432716;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8207116639730824836) ) ) {
                      result[11] += 0.0365556667070227;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8956157687730027517) ) ) {
                        result[11] += -0.03385215728357178;
                      } else {
                        result[11] += 0.011743331981855919;
                      }
                    }
                  }
                }
              } else {
                result[11] += 0.054947226367979496;
              }
            } else {
              result[11] += -0.03300472776729858;
            }
          } else {
            result[11] += -0.03915600720988268;
          }
        } else {
          result[11] += -0.0317128124931668;
        }
      } else {
        result[11] += -0.03235580658126733;
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0252899032165606226) ) ) {
        if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.3970774598598831862) ) ) {
          result[11] += -0.03748382858117273;
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.07756598182340869452) ) ) {
            result[11] += -0.02068563067652797;
          } else {
            result[11] += 0.03637718381229558;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
          result[11] += 0.00040163509975656755;
        } else {
          if ( LIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.3892291717456373701) ) ) {
            result[11] += 0.03428338394625593;
          } else {
            result[11] += 0.004952952827702266;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[11] += -0.03451368252739423;
      } else {
        result[11] += 0.028544478285792763;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7234889581658809909) ) ) {
        result[11] += -0.010786247322671829;
      } else {
        result[11] += 0.030892174444578854;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)0.6187917260814692622) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.3310912535127845113) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6890255270564503709) ) ) {
        result[12] += -0.01205134577204739;
      } else {
        result[12] += 0.02520255154400302;
      }
    } else {
      if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2418892081941573513) ) ) {
        if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200934757475272674) ) ) {
          result[12] += 0.09405205518704607;
        } else {
          result[12] += 0.045491471893294416;
        }
      } else {
        result[12] += -0.0005216073360348591;
      }
    }
  } else {
    result[12] += -0.03474356917387986;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
        result[0] += 0.0006819019011392842;
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.123228904269717221) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01056770185813778358) ) ) {
            result[0] += -0.06185061229988366;
          } else {
            result[0] += 0.023258484906943877;
          }
        } else {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01035889073783014154) ) ) {
            result[0] += 0.030528610415749512;
          } else {
            result[0] += -0.0033781126396562047;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.4969912859511854131) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
            if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201030210324205427) ) ) {
              result[0] += 0.013666028994420987;
            } else {
              result[0] += -0.03460034485894191;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3129766802022028171) ) ) {
                result[0] += -0.035709611858200666;
              } else {
                result[0] += 0.007338104183659396;
              }
            } else {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3117937359514476037) ) ) {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4368887279138904955) ) ) {
                  if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3886661232356607987) ) ) {
                    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
                      result[0] += 0.0354195394582384;
                    } else {
                      result[0] += 0.007395286228676054;
                    }
                  } else {
                    result[0] += -0.02210292646210705;
                  }
                } else {
                  result[0] += 0.02229328213194445;
                }
              } else {
                result[0] += 0.032764566898730724;
              }
            }
          }
        } else {
          result[0] += -0.03911948288525094;
        }
      } else {
        result[0] += -0.029130428824554952;
      }
    }
  } else {
    if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5616485544745142278) ) ) {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.934665260726280422) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.118254613143700338) ) ) {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01602270079496645114) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4330923179424004399) ) ) {
              result[0] += 0.012931610995610902;
            } else {
              result[0] += 0.042091604369297826;
            }
          } else {
            result[0] += -0.014611894220567823;
          }
        } else {
          result[0] += -0.03714580206713834;
        }
      } else {
        result[0] += -0.03477634958155465;
      }
    } else {
      if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.09589176861408833796) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[0] += -0.03447513484476431;
        } else {
          result[0] += 7.031318000537257e-06;
        }
      } else {
        result[0] += 0.026778145306997733;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
      result[1] += -0.034734949968374514;
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6581356384813585869) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3153348370419435942) ) ) {
            if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.631613573303760778) ) ) {
              if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03920684852128885484) ) ) {
                if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
                  result[1] += -0.009100428806242067;
                } else {
                  result[1] += 0.022379491921666276;
                }
              } else {
                result[1] += -0.027637342824155618;
              }
            } else {
              result[1] += 0.04251576878664937;
            }
          } else {
            result[1] += -0.036445100562994215;
          }
        } else {
          result[1] += -0.03630018274993015;
        }
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.135782671746872863) ) ) {
          result[1] += 0.01566494198344476;
        } else {
          result[1] += -0.016340712164950418;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.07128092195383493868) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201811748255463552) ) ) {
            result[1] += -0.026619859352890726;
          } else {
            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7494567179442497284) ) ) {
              if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01814955373264689684) ) ) {
                if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.0392434320385037852) ) ) {
                  result[1] += 0.0005435735752145108;
                } else {
                  result[1] += 0.03487551020711012;
                }
              } else {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
                  result[1] += -0.017077687345412037;
                } else {
                  if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5792326526672063602) ) ) {
                    result[1] += 0.00852001941656351;
                  } else {
                    result[1] += 0.0350937295547165;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9211797709816441637) ) ) {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
                  result[1] += -0.020038081359093535;
                } else {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3429443568699601097) ) ) {
                    result[1] += 0.03943318621207209;
                  } else {
                    result[1] += 0.007653985993905339;
                  }
                }
              } else {
                result[1] += -0.02650622738388041;
              }
            }
          }
        } else {
          result[1] += 0.03460639987691421;
        }
      } else {
        if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3475211658439765761) ) ) {
          result[1] += -0.033234684844875094;
        } else {
          if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.0151634931686636179) ) ) {
            if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01611314260380755994) ) ) {
              result[1] += -0.013087650903982886;
            } else {
              result[1] += 0.029736931723103516;
            }
          } else {
            result[1] += -0.03599577424492773;
          }
        }
      }
    } else {
      result[1] += 0.03442731328232638;
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
    result[2] += -0.03148765192534186;
  } else {
    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5434823061206194295) ) ) {
      if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.3937074974179520792) ) ) {
        if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.2808566399600715413) ) ) {
          result[2] += 0.00565696194127746;
        } else {
          result[2] += 0.036296365274643305;
        }
      } else {
        result[2] += 0.057163058362611596;
      }
    } else {
      result[2] += -0.03466589893014347;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03535360236107329;
    } else {
      result[3] += 0.03483011030063981;
    }
  } else {
    result[3] += -0.0350776121699437;
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.264291521592176615) ) ) {
      result[4] += 0.006558657999702394;
    } else {
      result[4] += -0.03404185780458954;
    }
  } else {
    result[4] += 0.03536704104500087;
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.010926839157595403) ) ) {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
      result[5] += 0.03033212036780602;
    } else {
      result[5] += -0.034440771629237484;
    }
  } else {
    result[5] += 0.10002534905129734;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.024999863302111104;
  } else {
    result[6] += 0.08363952822219525;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.4809722452288033856) ) ) {
      result[7] += 0.0010891147988377312;
    } else {
      result[7] += 0.02531059396431505;
    }
  } else {
    result[7] += -0.03444232377921023;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
      result[8] += -0.035697711109520726;
    } else {
      result[8] += -0.013417711711814417;
    }
  } else {
    result[8] += 0.024553170941823802;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6320649457863874998) ) ) {
      if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[9] += -0.021864608011639915;
      } else {
        result[9] += 0.04152227828303432;
      }
    } else {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6301498834625898215) ) ) {
        result[9] += -0.02374523356170269;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01057181316517303779) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1404983016608492563) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
                result[9] += 0.02286227004321476;
              } else {
                result[9] += -0.027521558512533514;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
                result[9] += 0.04357529874851709;
              } else {
                result[9] += 0.013588243207207053;
              }
            }
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6449313698140944906) ) ) {
              result[9] += -0.04132563776024625;
            } else {
              result[9] += 0.008533735942292845;
            }
          }
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4573588634800199171) ) ) {
            result[9] += 0.03212074282860225;
          } else {
            result[9] += -0.03529827273557077;
          }
        }
      }
    }
  } else {
    result[9] += -0.03315221183890028;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03214255793759844;
  } else {
    result[10] += 0.03521736845176781;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.057108140249295891) ) ) {
        if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.09006767164919422808) ) ) {
          result[11] += -0.03470522740493078;
        } else {
          result[11] += 0.0014404181062274183;
        }
      } else {
        if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680046924847954093) ) ) {
          result[11] += -0.004562816711970042;
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3046883387851465064) ) ) {
            result[11] += 0.0354922163318281;
          } else {
            result[11] += 0.009637593593339006;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1174113232083231068) ) ) {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3429443568699601097) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01050949440611674904) ) ) {
            result[11] += -0.03285483174065793;
          } else {
            result[11] += -0.008723938604164509;
          }
        } else {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6831714853785343378) ) ) {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
                result[11] += 0.016705692135072257;
              } else {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.612309128331080865) ) ) {
                  result[11] += -0.024086607472606218;
                } else {
                  result[11] += 0.0077899767213724415;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8207116639730824836) ) ) {
                result[11] += 0.03517949388459142;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.045107198229514589) ) ) {
                  if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7390534623792704982) ) ) {
                    result[11] += -0.02762704385053566;
                  } else {
                    result[11] += 0.004726132868279484;
                  }
                } else {
                  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3471407636898510285) ) ) {
                    result[11] += 0.008448547622258893;
                  } else {
                    result[11] += 0.03340685921316642;
                  }
                }
              }
            }
          } else {
            result[11] += -0.033995520815455545;
          }
        }
      } else {
        result[11] += 0.0304822312561184;
      }
    }
  } else {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.255857088039638914) ) ) {
        result[11] += -0.03251046964086087;
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
          result[11] += 0.051165399442843915;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
            result[11] += -0.03300339984102697;
          } else {
            result[11] += 0.02257033143664551;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
        result[11] += -0.033940910382419594;
      } else {
        result[11] += 0.018334201372289145;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2799341577276758808) ) ) {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4246669720681797711) ) ) {
          result[12] += 0.01716454402614772;
        } else {
          result[12] += -0.030129910366624758;
        }
      } else {
        result[12] += 0.06683280516132639;
      }
    } else {
      result[12] += -0.03475662976339043;
    }
  } else {
    result[12] += 0.04816048091860145;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3605171091795755789) ) ) {
      if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8179725024608467399) ) ) {
          result[0] += -0.05368954867036137;
        } else {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
            if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4555806576005108632) ) ) {
              result[0] += -0.03852790052240725;
            } else {
              if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6524198290745862883) ) ) {
                result[0] += 0.03060807267339673;
              } else {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.697922548919576724) ) ) {
                  if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5792326526672063602) ) ) {
                    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6031305061879833618) ) ) {
                      if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1670518704122749554) ) ) {
                        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
                          result[0] += -0.016520288074353667;
                        } else {
                          result[0] += 0.022153290138366262;
                        }
                      } else {
                        result[0] += -0.04381784525724506;
                      }
                    } else {
                      result[0] += 0.03221641167094039;
                    }
                  } else {
                    result[0] += -0.035181258337311665;
                  }
                } else {
                  if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1658824978687271356) ) ) {
                    if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.166228978622370932) ) ) {
                      result[0] += 0.0633524366144894;
                    } else {
                      result[0] += 0.016103554336123156;
                    }
                  } else {
                    result[0] += 0.003747494194410895;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6449313698140944906) ) ) {
              result[0] += 0.030540571644269442;
            } else {
              result[0] += 0.017311128161548315;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)1.225833330808600241) ) ) {
            result[0] += 0.035198816168292915;
          } else {
            result[0] += 0.00019958627199476148;
          }
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
            result[0] += -0.019470266619920906;
          } else {
            result[0] += 0.022011883405242093;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02548887318089767054) ) ) {
        result[0] += 0.02665352505829053;
      } else {
        if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.1154315204727957428) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5232492766698920716) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02517302575184957383) ) ) {
              result[0] += 0.021503405069323547;
            } else {
              result[0] += -0.02970910828637769;
            }
          } else {
            result[0] += 0.011627173043130584;
          }
        } else {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.8501382866352817924) ) ) {
            result[0] += -0.03793793045343854;
          } else {
            result[0] += -0.012746099197557753;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08044689421173033261) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.277331842728165245) ) ) {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01612124187031319447) ) ) {
            result[0] += 0.03187336444019395;
          } else {
            result[0] += -0.03612997127332581;
          }
        } else {
          result[0] += 0.03162110436593063;
        }
      } else {
        result[0] += -0.029389705917748008;
      }
    } else {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
        result[0] += -0.03415768841770495;
      } else {
        if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.09589176861408833796) ) ) {
          if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.554464413527477662) ) ) {
            result[0] += 0.0019581252932744163;
          } else {
            result[0] += -0.03533308645280777;
          }
        } else {
          result[0] += 0.04340237345675566;
        }
      }
    }
  }
  if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3475211658439765761) ) ) {
    if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5971525348704809222) ) ) {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9420121573033438667) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7690883896431585098) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
            if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200415046673598551) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
                result[1] += 0.013245035909516945;
              } else {
                result[1] += -0.012925715230930498;
              }
            } else {
              result[1] += -0.039185449797062004;
            }
          } else {
            result[1] += -0.0367706041079507;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[1] += 0.03798821161256175;
          } else {
            result[1] += -0.035412673225629604;
          }
        }
      } else {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
          result[1] += 0.03416088518856257;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1720197088307830191) ) ) {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7882889073897575427) ) ) {
              result[1] += 0.002598146402413323;
            } else {
              result[1] += 0.03252419671254273;
            }
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
              result[1] += -0.04560116824854526;
            } else {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.608016698623364604) ) ) {
                if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2096629731955549081) ) ) {
                  result[1] += 0.0093744381771427;
                } else {
                  result[1] += 0.035723547937605994;
                }
              } else {
                if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7494567179442497284) ) ) {
                  result[1] += 0.006871821634547564;
                } else {
                  result[1] += -0.015674505874367244;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)3.955665202556394533) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0224361451719029964) ) ) {
          result[1] += -0.034334646279802365;
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1304655573545890068) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.128406986927365407) ) ) {
              result[1] += -0.008895823843911648;
            } else {
              result[1] += 0.03137346006801834;
            }
          } else {
            result[1] += -0.0329730575448484;
          }
        }
      } else {
        result[1] += 0.036601233216249446;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.302711647983323617) ) ) {
        if ( LIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.390520860844205675) ) ) {
          if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += 0.03497040077969205;
          } else {
            result[1] += -0.0033891551089490915;
          }
        } else {
          result[1] += -0.0426808723652253;
        }
      } else {
        result[1] += 0.03484803485529181;
      }
    } else {
      result[1] += -0.03589877944908413;
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
    result[2] += -0.031300860741996964;
  } else {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.144023460861483793) ) ) {
          result[2] += 0.027637725147944266;
        } else {
          result[2] += -0.01884643479140894;
        }
      } else {
        result[2] += -0.036868452527104356;
      }
    } else {
      if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.3113132420658634714) ) ) {
        result[2] += 0.06873723436715026;
      } else {
        result[2] += 0.021945925411679324;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.034935176998981105;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.04091187148092761;
    } else {
      result[3] += 0.03481565644355584;
    }
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.032324860143382594;
  } else {
    result[4] += 0.03363882189204632;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
      result[5] += -0.01563185304669296;
    } else {
      result[5] += 0.10110440265932255;
    }
  } else {
    result[5] += -0.03443976792245638;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701102284419148958) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[6] += -0.017080874849557254;
    } else {
      result[6] += 0.10627669688844997;
    }
  } else {
    result[6] += -0.03450310946764424;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
      result[7] += 0.0006983291000558041;
    } else {
      result[7] += 0.024749738188022792;
    }
  } else {
    result[7] += -0.03444172000067007;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
      result[8] += -0.03567509370853909;
    } else {
      result[8] += -0.012445924863940678;
    }
  } else {
    result[8] += 0.0247415048143018;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.077954077688123347) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08044689421173033261) ) ) {
        result[9] += 0.006984980329141783;
      } else {
        result[9] += 0.0388171313521417;
      }
    } else {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7850888210986576299) ) ) {
        result[9] += -0.025909111249184512;
      } else {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7834887779531077845) ) ) {
          result[9] += 0.030536829398053866;
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.757888087624309037) ) ) {
            result[9] += -0.009004899039577087;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
              result[9] += 0.044898558367121484;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
                result[9] += -0.016634063373886128;
              } else {
                result[9] += 0.02747881127035084;
              }
            }
          }
        }
      }
    }
  } else {
    result[9] += -0.03305473304272655;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    result[10] += 0.029445047051878472;
  } else {
    result[10] += -0.031820743639364275;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2273057443152013413) ) ) {
    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6185896019737596729) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
          if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1596133617324846932) ) ) {
            if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2072850554298408809) ) ) {
              result[11] += 0.005886032221981793;
            } else {
              result[11] += 0.04799324342959801;
            }
          } else {
            result[11] += -0.03720080520905227;
          }
        } else {
          result[11] += -0.037858671024134295;
        }
      } else {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[11] += -0.03464096749123557;
        } else {
          result[11] += 0.011301157693284106;
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.257223684349944914) ) ) {
        if ( LIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.3382178824878270817) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6040645790317221708) ) ) {
            result[11] += 0.03314153092260088;
          } else {
            result[11] += -0.00236606706743582;
          }
        } else {
          result[11] += -0.034809212093178235;
        }
      } else {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
          result[11] += 0.03944144825341905;
        } else {
          if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[11] += -0.04022038532833151;
          } else {
            result[11] += 0.022470479608793805;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.868347105958318988) ) ) {
        result[11] += -0.03384383866359128;
      } else {
        result[11] += 0.04047932522626643;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7234889581658809909) ) ) {
        result[11] += -0.01080428756012381;
      } else {
        result[11] += 0.029079239335214467;
      }
    }
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.3045232590571290143) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
      if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6494325973844891076) ) ) {
        result[12] += -0.021856273778826055;
      } else {
        result[12] += 0.0330078428091855;
      }
    } else {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2082742240538978107) ) ) {
        if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201625265091686989) ) ) {
          result[12] += 0.042621828307470244;
        } else {
          result[12] += 0.0025741936482997626;
        }
      } else {
        result[12] += 0.053430216452133326;
      }
    }
  } else {
    result[12] += -0.023109897057125704;
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.06899662408387258195) ) ) {
            result[0] += -0.022967907442837818;
          } else {
            result[0] += 0.02616144784470727;
          }
        } else {
          result[0] += -0.03448151566732017;
        }
      } else {
        result[0] += 0.022399750244827783;
      }
    } else {
      if ( LIKELY( !(data[93].missing != -1) || (data[93].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4582281153312064981) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02517302575184957383) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9007706456508135506) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
                result[0] += 0.0039263755522283336;
              } else {
                result[0] += 0.03945481748181329;
              }
            } else {
              result[0] += -0.010118417270843533;
            }
          } else {
            if ( UNLIKELY( !(data[43].missing != -1) || (data[43].fvalue <= (double)0.01275049588099940422) ) ) {
              result[0] += -0.008358281595004468;
            } else {
              result[0] += -0.04814225552796261;
            }
          }
        } else {
          result[0] += -0.04725029718637141;
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
          result[0] += 0.03541799347274845;
        } else {
          result[0] += -0.014674291960843733;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02481126217740968823) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
        result[0] += -0.0020319319541639504;
      } else {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7962891231175072138) ) ) {
          result[0] += -0.0030386315941038832;
        } else {
          result[0] += 0.03272060697116291;
        }
      }
    } else {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7898889505353073881) ) ) {
        result[0] += -0.034873333494504916;
      } else {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
          result[0] += 0.031438947455158635;
        } else {
          if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.3750052716748266124) ) ) {
            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.5672297815236728713) ) ) {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146003291738276308) ) ) {
                result[0] += -0.03113136061004601;
              } else {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.697922548919576724) ) ) {
                  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7509167515560504214) ) ) {
                    result[0] += 0.005882276188346026;
                  } else {
                    result[0] += -0.030650806220946614;
                  }
                } else {
                  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6711727485260744475) ) ) {
                    result[0] += 0.04900329892105996;
                  } else {
                    result[0] += 0.010967304503902943;
                  }
                }
              }
            } else {
              result[0] += -0.022632598045260424;
            }
          } else {
            result[0] += 0.030243074317172887;
          }
        }
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4186074840297701605) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
          result[1] += -0.03228798426889309;
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.749887871896559477) ) ) {
            if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
              result[1] += 0.008023697285337205;
            } else {
              result[1] += 0.03610951797263365;
            }
          } else {
            result[1] += -0.015462532694244876;
          }
        }
      } else {
        result[1] += 0.03256897639626097;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
        result[1] += -0.03472676369051135;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5502918566492193131) ) ) {
          if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
            result[1] += 0.015911922296305354;
          } else {
            result[1] += -0.03520497893697037;
          }
        } else {
          result[1] += 0.030925222841575686;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201312059297520163) ) ) {
            result[1] += -0.02380312488193138;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3919779259888919176) ) ) {
                result[1] += -0.003955117869968637;
              } else {
                result[1] += 0.03717646100314345;
              }
            } else {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8476189931579628523) ) ) {
                if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2685262930609947363) ) ) {
                  result[1] += -0.01601381691164054;
                } else {
                  if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01814955373264689684) ) ) {
                    if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6355114499862949407) ) ) {
                      result[1] += 0.03284403298271828;
                    } else {
                      result[1] += 0.0029780467368805343;
                    }
                  } else {
                    if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121881725528086682) ) ) {
                      result[1] += -0.009323911871879908;
                    } else {
                      result[1] += 0.010126819870062597;
                    }
                  }
                }
              } else {
                result[1] += -0.033430127279874405;
              }
            }
          }
        } else {
          result[1] += 0.03422809025295672;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.255857088039638914) ) ) {
          result[1] += 0.034868744638426985;
        } else {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.3888381089418453951) ) ) {
            result[1] += -0.001801632265927032;
          } else {
            result[1] += -0.034669885537978486;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.25444770141758899) ) ) {
        result[1] += 0.034715484831174384;
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201377986752524274) ) ) {
          result[1] += -0.02557303056498286;
        } else {
          result[1] += 0.029720997798161862;
        }
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.031274411749367195;
  } else {
    if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.526339333886107541) ) ) {
      result[2] += 0.0548968549023296;
    } else {
      if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5372318930257430347) ) ) {
        result[2] += 0.02788193035176075;
      } else {
        if ( UNLIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.100491129229969306) ) ) {
          result[2] += 0.009120457910814572;
        } else {
          result[2] += -0.02625263481495096;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.035333030669612145;
    } else {
      result[3] += 0.034775811041237024;
    }
  } else {
    result[3] += -0.035031128512791214;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
    if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.620141768434670948) ) ) {
      result[4] += 0.035399623576363795;
    } else {
      result[4] += -0.02573126434303573;
    }
  } else {
    result[4] += -0.033715401782079685;
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.010926839157595403) ) ) {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
      result[5] += 0.03195894930176446;
    } else {
      result[5] += -0.034441111775505;
    }
  } else {
    result[5] += 0.08430549148608185;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.024068265408014905;
  } else {
    result[6] += 0.07158405948075616;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
    result[7] += 0.020080539858065207;
  } else {
    result[7] += -0.034441147582966236;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.03577068745956697;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      result[8] += -0.03443750524337683;
    } else {
      result[8] += 0.04431673002107376;
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1404983016608492563) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5414388684968288734) ) ) {
          result[9] += -0.019682491774715767;
        } else {
          result[9] += 0.03345503006617301;
        }
      } else {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4426256042670973501) ) ) {
          result[9] += 0.03388126165005149;
        } else {
          result[9] += -0.018178424465823517;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5906532180874056737) ) ) {
          if ( LIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1611788290939180912) ) ) {
            result[9] += -0.038678701789684376;
          } else {
            result[9] += 0.027496547153720966;
          }
        } else {
          result[9] += 0.017112102882470125;
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[9] += -0.02300737729539262;
        } else {
          result[9] += 0.04384651533990019;
        }
      }
    }
  } else {
    result[9] += -0.03291568544120769;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
    result[10] += 0.029035460609913247;
  } else {
    result[10] += -0.03164840879009275;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01051187463662500016) ) ) {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.258155518086436997) ) ) {
        if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.5094803989495694241) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01057992758721586907) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7234889581658809909) ) ) {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
                result[11] += 0.009706278124709929;
              } else {
                result[11] += -0.013563302280459665;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8207116639730824836) ) ) {
                result[11] += 0.034312047978450555;
              } else {
                result[11] += 0.006445108194236127;
              }
            }
          } else {
            result[11] += -0.03460026684150078;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5773093211169014749) ) ) {
            result[11] += -0.002623318067264556;
          } else {
            result[11] += 0.032366953925774496;
          }
        }
      } else {
        result[11] += -0.03448594488522005;
      }
    } else {
      if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1407910841014318182) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
          result[11] += -0.006359953546111734;
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.921320729542432826) ) ) {
            result[11] += 0.03324294547169112;
          } else {
            result[11] += -0.005901752131746346;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.946040802375038625) ) ) {
          result[11] += 0.008107431962601809;
        } else {
          result[11] += -0.02805930519063485;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.255857088039638914) ) ) {
        result[11] += -0.032322101316920336;
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.1222920907438003191) ) ) {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973872850282432312) ) ) {
            result[11] += 0.004751727037383022;
          } else {
            result[11] += 0.03357641516282276;
          }
        } else {
          result[11] += -0.022230832697732378;
        }
      }
    } else {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[11] += -0.03386889343004299;
      } else {
        result[11] += 0.015849232414491227;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2082742240538978107) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9941897295049778593) ) ) {
          result[12] += 0.0172787497733177;
        } else {
          result[12] += -0.026371752128429567;
        }
      } else {
        result[12] += 0.06752418279412874;
      }
    } else {
      result[12] += -0.03477037693004273;
    }
  } else {
    result[12] += 0.04672071689970833;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
        result[0] += 0.00015832661361269164;
      } else {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8179725024608467399) ) ) {
          result[0] += -0.014189434251638112;
        } else {
          if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.02474108230019015503) ) ) {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.046474724619319785) ) ) {
              result[0] += 0.002679020997780896;
            } else {
              result[0] += 0.032404743997481285;
            }
          } else {
            result[0] += 0.00524855888540123;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.4969912859511854131) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6200989557517333495) ) ) {
            result[0] += 0.01080488298314166;
          } else {
            result[0] += -0.03452999251337641;
          }
        } else {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02481126217740968823) ) ) {
            if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6658871760124075445) ) ) {
              result[0] += 0.03549036799467883;
            } else {
              result[0] += 0.00535978132103271;
            }
          } else {
            result[0] += 0.004565067200743624;
          }
        }
      } else {
        result[0] += -0.028389982211612673;
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
          result[0] += 0.022300315557619542;
        } else {
          result[0] += -0.03522439199593656;
        }
      } else {
        result[0] += 0.02909033561219566;
      }
    } else {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01235643288758264853) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
          result[0] += -0.03386230125216542;
        } else {
          if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.563493261814696722) ) ) {
            result[0] += 0.016214261024751108;
          } else {
            result[0] += -0.022123934478559218;
          }
        }
      } else {
        result[0] += 0.035182542172040976;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
      result[1] += -0.034659884277909586;
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
            result[1] += -0.03001129980094537;
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7674883464976085534) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
                result[1] += 0.038590833198053745;
              } else {
                result[1] += -0.03271550561772159;
              }
            } else {
              result[1] += -0.020957710216298088;
            }
          }
        } else {
          if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5616485544745142278) ) ) {
            result[1] += 0.0008427893684450706;
          } else {
            result[1] += 0.030755960084557946;
          }
        }
      } else {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5267468939089369195) ) ) {
          result[1] += 0.02912055954844618;
        } else {
          result[1] += -0.035631359997104976;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5984827857644668958) ) ) {
              result[1] += -0.013334766440352855;
            } else {
              result[1] += 0.03713497002217356;
            }
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7706884327887083552) ) ) {
              if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7176464536934513694) ) ) {
                  result[1] += 0.03325885599275379;
                } else {
                  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6509262132295375869) ) ) {
                    result[1] += -0.03061584093348268;
                  } else {
                    if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7494567179442497284) ) ) {
                      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.752509980424918901) ) ) {
                        if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8425672530836286755) ) ) {
                          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.333338310990991538) ) ) {
                            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.646642341910059759) ) ) {
                              result[1] += 0.033532650756449796;
                            } else {
                              result[1] += 0.002501339041487737;
                            }
                          } else {
                            result[1] += 0.03844434365659019;
                          }
                        } else {
                          result[1] += -0.017944646473042888;
                        }
                      } else {
                        result[1] += 0.045032402938233546;
                      }
                    } else {
                      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8274420233688559723) ) ) {
                        result[1] += 0.003843116921132744;
                      } else {
                        result[1] += -0.02369462588742569;
                      }
                    }
                  }
                }
              } else {
                result[1] += -0.030526393516991584;
              }
            } else {
              result[1] += -0.0321794049131208;
            }
          }
        } else {
          result[1] += 0.03413432006794606;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.255857088039638914) ) ) {
          result[1] += 0.03484047279015445;
        } else {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.3888381089418453951) ) ) {
            result[1] += -0.0020228782832396736;
          } else {
            result[1] += -0.034567039158684906;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.25444770141758899) ) ) {
        result[1] += 0.034682486794526145;
      } else {
        result[1] += 0.020286966510716917;
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.031069822838103858;
  } else {
    if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.526339333886107541) ) ) {
      result[2] += 0.05499167669234547;
    } else {
      if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4555097672478464754) ) ) {
        result[2] += 0.035189924668992026;
      } else {
        if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2691375978218087384) ) ) {
          result[2] += 0.007014507895484686;
        } else {
          result[2] += -0.026217492737366246;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
      result[3] += -0.03517893528803493;
    } else {
      result[3] += 0.034732678528145156;
    }
  } else {
    result[3] += -0.0350134366120311;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    result[4] += -0.033949344051202764;
  } else {
    if ( UNLIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.549159102295871393) ) ) {
      result[4] += 0.03677241751012336;
    } else {
      result[4] += -0.023292451165091963;
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
      result[5] += -0.014672787738769516;
    } else {
      result[5] += 0.08671306208752622;
    }
  } else {
    result[5] += -0.0344405588527422;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
    result[6] += 0.046598672196625925;
  } else {
    result[6] += -0.0269546020326571;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
    result[7] += 0.01957708673273552;
  } else {
    result[7] += -0.03444061895006289;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.035776124858159834;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      result[8] += -0.034437161992498;
    } else {
      result[8] += 0.04512156615530515;
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02545617531996219318) ) ) {
          if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03926013208742445276) ) ) {
            result[9] += -0.04363559302047537;
          } else {
            result[9] += 0.05167225259944967;
          }
        } else {
          result[9] += -0.040249352814469154;
        }
      } else {
        result[9] += 0.026490443564889925;
      }
    } else {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8026892956997068174) ) ) {
        result[9] += 0.04181371944008603;
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9299632234874292136) ) ) {
          result[9] += -0.025053588443236283;
        } else {
          if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.859953023313256959) ) ) {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7671941759983568199) ) ) {
              if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7834887779531077845) ) ) {
                result[9] += 0.030374940201862644;
              } else {
                result[9] += -0.0007997707301379682;
              }
            } else {
              result[9] += 0.05284151519804092;
            }
          } else {
            result[9] += -0.0266917989755653;
          }
        }
      }
    }
  } else {
    result[9] += -0.03280139830166951;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    result[10] += 0.028664648965916324;
  } else {
    result[10] += -0.03146559959286399;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
      if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.1187546139110651072) ) ) {
        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1573287542631459368) ) ) {
          if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680046924847954093) ) ) {
            result[11] += -0.006855632597645108;
          } else {
            result[11] += 0.03503186414190977;
          }
        } else {
          result[11] += -0.02654691399990247;
        }
      } else {
        result[11] += -0.026077110198558916;
      }
    } else {
      if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1174113232083231068) ) ) {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3429443568699601097) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01050949440611674904) ) ) {
            result[11] += -0.03247085835169858;
          } else {
            result[11] += -0.008068443282171772;
          }
        } else {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9482729632619105731) ) ) {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3820048534398107765) ) ) {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121881725528086682) ) ) {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2285326955924526227) ) ) {
                    if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2612217416717404483) ) ) {
                      result[11] += 0.017675660560769645;
                    } else {
                      result[11] += -0.01605359494492259;
                    }
                  } else {
                    result[11] += 0.02931794463082035;
                  }
                } else {
                  if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
                    result[11] += -0.038509658147776724;
                  } else {
                    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.107751703712507974) ) ) {
                      result[11] += 0.01719050671662594;
                    } else {
                      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1141210343149451079) ) ) {
                        result[11] += -0.036572034818403494;
                      } else {
                        result[11] += 0.023695370378389834;
                      }
                    }
                  }
                }
              } else {
                result[11] += 0.017015380526408108;
              }
            } else {
              result[11] += -0.023435529007634293;
            }
          } else {
            result[11] += -0.0335904687665132;
          }
        }
      } else {
        result[11] += 0.02947097999024921;
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3134096532613027675) ) ) {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973872850282432312) ) ) {
          result[11] += 0.0008354955043970466;
        } else {
          result[11] += 0.043917825381857435;
        }
      } else {
        result[11] += -0.001416706040192689;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
        result[11] += -0.03382183563936761;
      } else {
        result[11] += 0.01729501304484106;
      }
    }
  }
  if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.06169476235787722807) ) ) {
    if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4410114951078237255) ) ) {
      if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6105985854132262025) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
          result[12] += -0.017549743386981464;
        } else {
          result[12] += 0.03865910413895445;
        }
      } else {
        result[12] += 0.04180556342177634;
      }
    } else {
      if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6201106865256021949) ) ) {
        result[12] += 0.021070461537219365;
      } else {
        result[12] += -0.02804590521014939;
      }
    }
  } else {
    result[12] += -0.028203642625006367;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
        result[0] += 0.0004363008530799418;
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.123228904269717221) ) ) {
          if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6309976433819838304) ) ) {
            result[0] += -0.03998371201970206;
          } else {
            result[0] += 0.00645396231653546;
          }
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.4293439263737330869) ) ) {
            result[0] += 0.030422214170618612;
          } else {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.2283033769925234824) ) ) {
              result[0] += 0.03526741939556467;
            } else {
              result[0] += -0.02465570096216424;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4669522501553799443) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
          if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.552347567456332178) ) ) {
            result[0] += -0.03304545157182157;
          } else {
            result[0] += 0.009932691717997091;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.237248754256069061) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3534483363738425976) ) ) {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)2.81764075380878376) ) ) {
                result[0] += -0.028762681517589306;
              } else {
                result[0] += 0.008172584688970334;
              }
            } else {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.331999447987429308) ) ) {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.07972073567814264) ) ) {
                  if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.051689767643777529) ) ) {
                    result[0] += 0.016134546663326477;
                  } else {
                    result[0] += -0.00981138544667124;
                  }
                } else {
                  result[0] += 0.029382877060764218;
                }
              } else {
                result[0] += -0.020362221879137096;
              }
            }
          } else {
            result[0] += -0.028207739160756574;
          }
        }
      } else {
        result[0] += -0.034378594139319;
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.227669744999093426) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
          result[0] += 0.021308233472035396;
        } else {
          result[0] += -0.034944361135206874;
        }
      } else {
        result[0] += 0.02948854783208005;
      }
    } else {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
        result[0] += -0.0340787027744119;
      } else {
        if ( LIKELY(  (data[49].missing != -1) && (data[49].fvalue <= (double)-0.0371582545590232044) ) ) {
          if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.443328783641416424) ) ) {
            result[0] += 0.0033210951248760267;
          } else {
            result[0] += -0.037974424607623625;
          }
        } else {
          result[0] += 0.042238471817403256;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.558895114986639574) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
      result[1] += -0.034628384023304384;
    } else {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8567430584850248554) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2988241001254555163) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5912475240206701566) ) ) {
            result[1] += 0.02760635268014797;
          } else {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
              result[1] += -0.017920683763808672;
            } else {
              result[1] += -0.03630968399574445;
            }
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
            result[1] += 0.035341004678706676;
          } else {
            result[1] += -0.035286042890991846;
          }
        }
      } else {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8078418734481481733) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[1] += 0.03825870717317741;
          } else {
            result[1] += -0.03245607358486102;
          }
        } else {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.5717725536435908085) ) ) {
            result[1] += -0.04032697782789569;
          } else {
            result[1] += 0.015083239161705349;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3919779259888919176) ) ) {
              result[1] += -0.012950089921469342;
            } else {
              result[1] += 0.03703082621831814;
            }
          } else {
            if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288170262485434092) ) ) {
              if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
                if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
                  if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1121209633565839053) ) ) {
                    result[1] += 0.02982947645415436;
                  } else {
                    result[1] += -0.0007088099269339109;
                  }
                } else {
                  result[1] += -0.011859044115320114;
                }
              } else {
                result[1] += -0.03024016011235034;
              }
            } else {
              result[1] += -0.03147910303193353;
            }
          }
        } else {
          result[1] += 0.03401954975953066;
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
          result[1] += 0.03481634412002502;
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)1.608395177546450006) ) ) {
            result[1] += -0.0335197547493717;
          } else {
            result[1] += -0.010999455344116343;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.25444770141758899) ) ) {
        result[1] += 0.0346500328741974;
      } else {
        result[1] += 0.01969376709975014;
      }
    }
  }
  if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.078487982970989245) ) ) {
    result[2] += -0.03023242367751162;
  } else {
    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5434823061206194295) ) ) {
      if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.3937074974179520792) ) ) {
        if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.2808566399600715413) ) ) {
          result[2] += 0.004515403250284245;
        } else {
          result[2] += 0.035303434234588746;
        }
      } else {
        result[2] += 0.05757271142579178;
      }
    } else {
      result[2] += -0.03500109123230743;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.034874187881313655;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.04027821292516984;
    } else {
      result[3] += 0.03474401389764457;
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2545589699450032106) ) ) {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.946040802375038625) ) ) {
      result[4] += -0.03446035681514416;
    } else {
      result[4] += -0.0040975522659857854;
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6123728509228160144) ) ) {
      result[4] += -0.03447392796191737;
    } else {
      if ( UNLIKELY( !(data[44].missing != -1) || (data[44].fvalue <= (double)0.03513151952047766785) ) ) {
        result[4] += 0.07377934309526213;
      } else {
        result[4] += 0.035067046919068805;
      }
    }
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.010926839157595403) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      result[5] += 0.03342200080358047;
    } else {
      result[5] += -0.034441724558648246;
    }
  } else {
    result[5] += 0.07234522396596303;
  }
  if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5616485544745142278) ) ) {
    result[6] += 0.04483219937291002;
  } else {
    result[6] += -0.02669858552908691;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    result[7] += 0.01913278771265359;
  } else {
    result[7] += -0.03444011543444805;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.03576469364166968;
  } else {
    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3158683217040489377) ) ) {
      result[8] += 0.04119984619744673;
    } else {
      result[8] += -0.034435877291514594;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02545617531996219318) ) ) {
          if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03926013208742445276) ) ) {
            result[9] += -0.04319850823430199;
          } else {
            result[9] += 0.050053779923113766;
          }
        } else {
          result[9] += -0.04046628259320496;
        }
      } else {
        result[9] += 0.026061325843681784;
      }
    } else {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.5554231563853312403) ) ) {
        result[9] += 0.042077211081990945;
      } else {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3102553107906722563) ) ) {
          result[9] += -0.024489384121747868;
        } else {
          if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.859953023313256959) ) ) {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7671941759983568199) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2939107877510283573) ) ) {
                result[9] += 0.03007067483417081;
              } else {
                result[9] += -0.00014205015760032885;
              }
            } else {
              if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6421243376913067236) ) ) {
                result[9] += 0.10720140804318376;
              } else {
                result[9] += -0.009798559449441302;
              }
            }
          } else {
            result[9] += -0.02580937637360001;
          }
        }
      }
    }
  } else {
    result[9] += -0.032728372654095055;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03152605539328508;
  } else {
    result[10] += 0.03505930790978516;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02529546880817297796) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200790668063795863) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.160503442631537957) ) ) {
        if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
          result[11] += 0.010855027319798568;
        } else {
          result[11] += -0.03589317333156347;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.853656798879314338) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3399707811849296824) ) ) {
            result[11] += 0.009051214584718583;
          } else {
            result[11] += -0.01637385791621234;
          }
        } else {
          result[11] += 0.02865622313675984;
        }
      }
    } else {
      result[11] += -0.033596851165945574;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6309976433819838304) ) ) {
        if ( UNLIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6200842007653090127) ) ) {
            result[11] += 0.027081603555736317;
          } else {
            result[11] += -0.014650762287065668;
          }
        } else {
          result[11] += -0.034518953711734406;
        }
      } else {
        result[11] += 0.034928463511200984;
      }
    } else {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.2982666562988280368) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6304238142250363497) ) ) {
              result[11] += -0.031220956961309096;
            } else {
              result[11] += 0.006067783532522715;
            }
          } else {
            result[11] += -0.026961769758767243;
          }
        } else {
          result[11] += 0.03976271964531647;
        }
      } else {
        result[11] += -0.03447741745369474;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4246669720681797711) ) ) {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2848388912985063692) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6581356384813585869) ) ) {
          result[12] += 0.009193902133519996;
        } else {
          result[12] += 0.04666002217253029;
        }
      } else {
        result[12] += -0.022385156640202315;
      }
    } else {
      result[12] += -0.029451555251087336;
    }
  } else {
    result[12] += 0.04563587648175551;
  }
  if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)2.81764075380878376) ) ) {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8156587383423387072) ) ) {
                result[0] += 0.009093177762853833;
              } else {
                result[0] += -0.037466974996488586;
              }
            } else {
              result[0] += 0.029697030763598514;
            }
          } else {
            result[0] += 0.026172167471174512;
          }
        } else {
          result[0] += 0.0353225726967776;
        }
      } else {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6185896019737596729) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6458850674358144195) ) ) {
              if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041841056122270182) ) ) {
                result[0] += 0.013612670210731252;
              } else {
                if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5808059554814645198) ) ) {
                  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5945582549050253407) ) ) {
                    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6033696181219915244) ) ) {
                      result[0] += -0.010112178499563253;
                    } else {
                      result[0] += 0.013082446786458968;
                    }
                  } else {
                    result[0] += -0.028588118997120344;
                  }
                } else {
                  result[0] += 0.027782705110997733;
                }
              }
            } else {
              result[0] += -0.03129105220438097;
            }
          } else {
            result[0] += 0.04058316915352768;
          }
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3121803190399296546) ) ) {
            result[0] += -0.057478619949357344;
          } else {
            result[0] += 0.012517371581461767;
          }
        }
      }
    } else {
      result[0] += -0.05147059122240024;
    }
  } else {
    if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.5847349523888909495) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[0] += -0.03341076293809896;
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.0838954839898143484) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
            result[0] += -0.05326812881741372;
          } else {
            result[0] += -0.0020121755171583064;
          }
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
            result[0] += 0.02615052782922695;
          } else {
            result[0] += -0.031697856884846116;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.733546608010884116) ) ) {
        result[0] += -0.010584246746934952;
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.3474904705732462795) ) ) {
          result[0] += 0.03520478570446594;
        } else {
          result[0] += 0.00863155323135188;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6994687281936161627) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
      result[1] += -0.034600151570321154;
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201194826360171275) ) ) {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7674883464976085534) ) ) {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7722884759342584227) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08044689421173033261) ) ) {
                result[1] += 0.006600062643320345;
              } else {
                result[1] += -0.03668592389489443;
              }
            } else {
              if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03079256918949048807) ) ) {
                result[1] += 0.009451986676424277;
              } else {
                result[1] += 0.036869008133398995;
              }
            }
          } else {
            result[1] += -0.032535818830272754;
          }
        } else {
          result[1] += 0.02448921693263146;
        }
      } else {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
          result[1] += -0.007281906553955199;
        } else {
          result[1] += -0.03557827684413962;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3144147692913561998) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8938629297277626007) ) ) {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.833637527598977246) ) ) {
            result[1] += 0.03472336349438956;
          } else {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5470715462473844104) ) ) {
              result[1] += -0.00981818594600838;
            } else {
              result[1] += 0.03817861519450616;
            }
          }
        } else {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906447706809286435) ) ) {
            result[1] += -0.0262604088720152;
          } else {
            if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6494325973844891076) ) ) {
              result[1] += 0.03929968047306627;
            } else {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6200703192402791109) ) ) {
                result[1] += -0.03218494693749538;
              } else {
                result[1] += 0.026847670326812772;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
            result[1] += -0.04023442178370156;
          } else {
            result[1] += 0.03530942506924098;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
            if ( UNLIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.4232772636905523522) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7738885190798082681) ) ) {
                if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041671670938614236) ) ) {
                  result[1] += -0.01606742271008808;
                } else {
                  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6033696181219915244) ) ) {
                    result[1] += 0.017029497597145997;
                  } else {
                    result[1] += -0.010906045837409601;
                  }
                }
              } else {
                result[1] += -0.03385481769032345;
              }
            } else {
              result[1] += 0.031160957723909234;
            }
          } else {
            if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[1] += -0.03450083756559903;
            } else {
              result[1] += -0.010363362447219283;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.2014722153586092634) ) ) {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.0801838321993227493) ) ) {
          result[1] += 0.029689776201388865;
        } else {
          result[1] += -0.012194548000879333;
        }
      } else {
        result[1] += 0.03439226407795238;
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.03062857383318791;
  } else {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        result[2] += 0.02051883992833086;
      } else {
        result[2] += -0.03679278254348489;
      }
    } else {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201624029503586266) ) ) {
        result[2] += 0.015902054111788713;
      } else {
        result[2] += 0.06643506070977577;
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03535631323515639;
    } else {
      result[3] += 0.03470851282812013;
    }
  } else {
    result[3] += -0.03497760066575369;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
    if ( LIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1227270498983878827) ) ) {
      result[4] += -0.008653553812350999;
    } else {
      result[4] += 0.03608693285663829;
    }
  } else {
    result[4] += -0.033596773927699226;
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.010926839157595403) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[5] += 0.02590610471482547;
    } else {
      result[5] += -0.03444219134339851;
    }
  } else {
    result[5] += 0.0672154099905901;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.023207777788957513;
  } else {
    result[6] += 0.06330628262229292;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
      result[7] += -0.002354173977342016;
    } else {
      result[7] += 0.02317297498107894;
    }
  } else {
    result[7] += -0.034439649903050366;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.035757431551066116;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      result[8] += -0.03443678029858244;
    } else {
      result[8] += 0.04681395154836625;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
        result[9] += -0.038508497072105644;
      } else {
        result[9] += 0.01094835402253644;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.039282253531597311) ) ) {
        result[9] += 0.0421708381119285;
      } else {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7850888210986576299) ) ) {
          result[9] += -0.023924408063090933;
        } else {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198893558585907293) ) ) {
            result[9] += 0.022288594448114134;
          } else {
            result[9] += -0.017834313819332433;
          }
        }
      }
    }
  } else {
    result[9] += -0.032604216460417855;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03133863243629049;
  } else {
    result[10] += 0.03502221218265294;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02530103440270330475) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200790668063795863) ) ) {
      if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.2714622295096305593) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
          result[11] += 0.006372748619193958;
        } else {
          result[11] += -0.026578488523076125;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
          if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)1.385162956976028648) ) ) {
            result[11] += 0.015847810239036;
          } else {
            result[11] += -0.03661993142138735;
          }
        } else {
          result[11] += 0.03406266394351309;
        }
      }
    } else {
      result[11] += -0.033530286626597315;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6309976433819838304) ) ) {
        if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.554464413527477662) ) ) {
          result[11] += 0.010215757389629205;
        } else {
          result[11] += -0.027883227663312665;
        }
      } else {
        result[11] += 0.03466591193796015;
      }
    } else {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.378897720191467835) ) ) {
        if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)0.6327829245745081321) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.06781165786423296038) ) ) {
              if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6205255095164382562) ) ) {
                result[11] += -0.02340668786200371;
              } else {
                result[11] += 0.009920821829519323;
              }
            } else {
              result[11] += 0.008879098832972217;
            }
          } else {
            result[11] += -0.025901199468587068;
          }
        } else {
          result[11] += 0.03897437363502164;
        }
      } else {
        result[11] += -0.03447560117406027;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2799341577276758808) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9941897295049778593) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.45735601814746768) ) ) {
            result[12] += -0.010888348863418985;
          } else {
            result[12] += 0.037251011662856486;
          }
        } else {
          result[12] += -0.02930039561001233;
        }
      } else {
        result[12] += 0.06567598205293737;
      }
    } else {
      result[12] += -0.03480984274045625;
    }
  } else {
    result[12] += 0.04434477271881659;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
        result[0] += 0.00030525577069586963;
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5984827857644668958) ) ) {
          result[0] += -0.009292172158415947;
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3135355528138214498) ) ) {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9606217943037372864) ) ) {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.057108140249295891) ) ) {
                result[0] += 0.028122383242208355;
              } else {
                result[0] += -0.015558944163139141;
              }
            } else {
              result[0] += 0.03256808615273291;
            }
          } else {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.4293439263737330869) ) ) {
              result[0] += 0.025039360029536845;
            } else {
              result[0] += -0.021328694708206586;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4669522501553799443) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
            result[0] += 0.030867540548145635;
          } else {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
              result[0] += -0.020854978061824292;
            } else {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.01325947259934787473) ) ) {
                result[0] += 0.008036437920234736;
              } else {
                result[0] += -0.02267751564580435;
              }
            }
          }
        } else {
          result[0] += -0.03967772003335477;
        }
      } else {
        result[0] += -0.03432331859621033;
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.318967915299489979) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1560695414882870835) ) ) {
          result[0] += 0.02832959632544701;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
            result[0] += 0.0011449336660615222;
          } else {
            result[0] += -0.0408361071688951;
          }
        }
      } else {
        result[0] += 0.029023541383038563;
      }
    } else {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01235643288758264853) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
          result[0] += -0.03400679035670874;
        } else {
          result[0] += 0.004030584326230927;
        }
      } else {
        result[0] += 0.035077442889155784;
      }
    }
  }
  if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3475211658439765761) ) ) {
    if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5971525348704809222) ) ) {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9420121573033438667) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6449313698140944906) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
            if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200415046673598551) ) ) {
              result[1] += 0.005423738889476492;
            } else {
              result[1] += -0.03897769874406704;
            }
          } else {
            result[1] += -0.03713209389142708;
          }
        } else {
          result[1] += 0.005080459445649912;
        }
      } else {
        if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2101666293889873638) ) ) {
          result[1] += 0.033658619947254734;
        } else {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
            result[1] += -0.040707356224963714;
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.020034280071924648) ) ) {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.08385732502784855324) ) ) {
                if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.974254548799861286) ) ) {
                  if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1673079343172020617) ) ) {
                    result[1] += 0.03064555558979174;
                  } else {
                    result[1] += -0.0005451994203764371;
                  }
                } else {
                  result[1] += 0.05752251885924439;
                }
              } else {
                result[1] += 0.006019456431319501;
              }
            } else {
              if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6033696181219915244) ) ) {
                if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3874430536939720837) ) ) {
                  result[1] += 0.015386707668697281;
                } else {
                  result[1] += -0.02016750809347085;
                }
              } else {
                result[1] += -0.02939994220050328;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)7.709044675805505342) ) ) {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7922081436597668835) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1468100803942329613) ) ) {
            result[1] += -0.03252763403578197;
          } else {
            result[1] += 0.03612167111814535;
          }
        } else {
          if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.05058617767289633887) ) ) {
            result[1] += -0.03451994580212328;
          } else {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.178672468935237333) ) ) {
              result[1] += 0.027278197946000796;
            } else {
              result[1] += -0.033831469576469826;
            }
          }
        }
      } else {
        result[1] += 0.027586309890058187;
      }
    }
  } else {
    if ( UNLIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.557088507945728395) ) ) {
        result[1] += 0.03375197927657083;
      } else {
        result[1] += -0.030278419186391098;
      }
    } else {
      result[1] += 0.03408027486325803;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.4503997851553450116) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        result[2] += 0.021750093968648382;
      } else {
        result[2] += -0.03664952335449917;
      }
    } else {
      result[2] += -0.03459689767493101;
    }
  } else {
    if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.210719825535872235) ) ) {
      result[2] += 0.06812595198030788;
    } else {
      result[2] += 0.017876163968516334;
    }
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.522020456991491355) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
      if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
        result[3] += -0.03536159652426974;
      } else {
        result[3] += 0.034587034855626336;
      }
    } else {
      result[3] += -0.034952728763981304;
    }
  } else {
    result[3] += 0.03446564152234469;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2545589699450032106) ) ) {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.946040802375038625) ) ) {
      result[4] += -0.03445913186015822;
    } else {
      result[4] += -0.0018291971385257472;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2741420333276946564) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05367169018473523512) ) ) {
        result[4] += 0.0754818564885737;
      } else {
        result[4] += 0.035048116380038505;
      }
    } else {
      result[4] += -0.03448280410848076;
    }
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.010926839157595403) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      result[5] += 0.032545448545941755;
    } else {
      result[5] += -0.03444098203769212;
    }
  } else {
    result[5] += 0.06226510059359556;
  }
  if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5616485544745142278) ) ) {
    result[6] += 0.04221052256382643;
  } else {
    result[6] += -0.02614566737752346;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[7] += 0.018166139420451814;
  } else {
    result[7] += -0.03443920656297843;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.03573555074144803;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      result[8] += -0.034436492673422824;
    } else {
      result[8] += 0.0484793568660788;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5906532180874056737) ) ) {
          result[9] += -0.034161948795669826;
        } else {
          result[9] += 0.014899044903383816;
        }
      } else {
        result[9] += 0.02527372753249284;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.039282253531597311) ) ) {
        result[9] += 0.04232501273744013;
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9299632234874292136) ) ) {
          result[9] += -0.023509706130115163;
        } else {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039579944366416653) ) ) {
            result[9] += 0.021904479470744517;
          } else {
            result[9] += -0.017382974487018137;
          }
        }
      }
    }
  } else {
    result[9] += -0.03248026366604059;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.031140483477787643;
  } else {
    result[10] += 0.0349885959673638;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02530103440270330475) ) ) {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201284907209793085) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9547384627961618131) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3399707811849296824) ) ) {
            result[11] += 0.007900681790514232;
          } else {
            result[11] += -0.017099675135630835;
          }
        } else {
          result[11] += 0.0303874554027333;
        }
      } else {
        result[11] += -0.03025004969754676;
      }
    } else {
      if ( LIKELY( !(data[48].missing != -1) || (data[48].fvalue <= (double)2.483921648875702992) ) ) {
        result[11] += -0.03338539702916794;
      } else {
        result[11] += 0.006572380634166312;
      }
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6309976433819838304) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.009494748980021217727) ) ) {
          result[11] += -0.034832975884019214;
        } else {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.620134506536565655) ) ) {
            result[11] += 0.03401796522574865;
          } else {
            result[11] += -0.004504480141821689;
          }
        }
      } else {
        result[11] += 0.03449230677551063;
      }
    } else {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
        if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)0.1270551678970518183) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6304238142250363497) ) ) {
              result[11] += -0.030997406201851697;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.06781165786423296038) ) ) {
                result[11] += -0.006840398455024056;
              } else {
                result[11] += 0.010509675248899219;
              }
            }
          } else {
            result[11] += -0.027817720428324724;
          }
        } else {
          result[11] += 0.0383976845613132;
        }
      } else {
        result[11] += -0.03447146933164243;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2799341577276758808) ) ) {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4246669720681797711) ) ) {
          result[12] += 0.015676099656336775;
        } else {
          result[12] += -0.0289344089948125;
        }
      } else {
        result[12] += 0.06537921942552602;
      }
    } else {
      result[12] += -0.03479984247602306;
    }
  } else {
    result[12] += 0.043542598722373496;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.194912770072289715) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
        if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.049820097983093836) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1143841639192145349) ) ) {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3156363718509596628) ) ) {
                result[0] += 0.013278726166227857;
              } else {
                result[0] += -0.034822414621265105;
              }
            } else {
              result[0] += 0.01867963829918361;
            }
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.757888087624309037) ) ) {
              if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8026892956997068174) ) ) {
                result[0] += -0.014221075906433895;
              } else {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906447706809286435) ) ) {
                  result[0] += 0.03063859863828637;
                } else {
                  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7797011598290618517) ) ) {
                    result[0] += -0.021661390275867214;
                  } else {
                    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288170262485434092) ) ) {
                      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3133014099965277799) ) ) {
                        result[0] += 0.013975331152196069;
                      } else {
                        result[0] += -0.007758602304704583;
                      }
                    } else {
                      result[0] += 0.02890985396920287;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.06651620267946474485) ) ) {
                if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7546880013332092352) ) ) {
                  result[0] += -0.044929373476241895;
                } else {
                  if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.45302016113419874) ) ) {
                    result[0] += 0.009904364299078096;
                  } else {
                    result[0] += -0.03213147146597105;
                  }
                }
              } else {
                result[0] += 0.021857617431589132;
              }
            }
          }
        } else {
          result[0] += 0.0468644192645762;
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
          result[0] += -0.03383260401407799;
        } else {
          result[0] += -8.807320645337792e-05;
        }
      }
    } else {
      result[0] += -0.052110972266014785;
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[0] += -0.033311785235487695;
      } else {
        if ( UNLIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.06609260577981382334) ) ) {
          result[0] += -0.006318876906644763;
        } else {
          result[0] += 0.022910682934030674;
        }
      }
    } else {
      result[0] += 0.033829859274994045;
    }
  }
  if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3475211658439765761) ) ) {
    if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5971525348704809222) ) ) {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9283635806041566907) ) ) {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
            if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200415046673598551) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
                result[1] += 0.012929447490974542;
              } else {
                result[1] += -0.012109519567826172;
              }
            } else {
              result[1] += -0.037620443572190104;
            }
          } else {
            result[1] += -0.03717137742485605;
          }
        } else {
          result[1] += 0.008248607730210395;
        }
      } else {
        if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6703432192151691504) ) ) {
          result[1] += 0.03363045155949384;
        } else {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
            result[1] += -0.042722885831731915;
          } else {
            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7494567179442497284) ) ) {
              if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200638259261300744) ) ) {
                result[1] += -0.010695102726054562;
              } else {
                result[1] += 0.023993355805411894;
              }
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3741592770462854878) ) ) {
                result[1] += -0.04195189729884941;
              } else {
                if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.897003262226470532) ) ) {
                  result[1] += 0.030061956990128227;
                } else {
                  result[1] += -0.012446580846602343;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)3.955665202556394533) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.03475013694161962;
          } else {
            result[1] += -0.005749342157627927;
          }
        } else {
          result[1] += 0.010514401075218663;
        }
      } else {
        result[1] += 0.033200389508801234;
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.25444770141758899) ) ) {
      result[1] += 0.03402760984655433;
    } else {
      if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03439331883104694565) ) ) {
        result[1] += 0.028934225079766118;
      } else {
        result[1] += -0.03319605335509998;
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
    result[2] += -0.030145567846735867;
  } else {
    if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.526339333886107541) ) ) {
      result[2] += 0.0556587408636422;
    } else {
      result[2] += 0.008912467737192776;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.03482662096336166;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03965514949563423;
    } else {
      result[3] += 0.03468563651711009;
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    result[4] += -0.03379824445395158;
  } else {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
      result[4] += 0.03736545656849501;
    } else {
      result[4] += -0.02405654784914907;
    }
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.010926839157595403) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
      result[5] += 0.031718776856446806;
    } else {
      result[5] += -0.03444077976903839;
    }
  } else {
    result[5] += 0.05844133553972922;
  }
  if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5616485544745142278) ) ) {
    result[6] += 0.04059550834803364;
  } else {
    result[6] += -0.025719145168836877;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
      result[7] += -0.0034848071378926213;
    } else {
      result[7] += 0.022344581044634014;
    }
  } else {
    result[7] += -0.03443879913796366;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.03571436971108945;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      result[8] += -0.03443621717927013;
    } else {
      result[8] += 0.04774459174200683;
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02545617531996219318) ) ) {
          if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.0105763572412265975) ) ) {
            result[9] += -0.03832896807622337;
          } else {
            result[9] += 0.02927802519023551;
          }
        } else {
          result[9] += -0.03954352285275285;
        }
      } else {
        result[9] += 0.024147880998609508;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.039282253531597311) ) ) {
        result[9] += 0.04237828874865814;
      } else {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8274420233688559723) ) ) {
          result[9] += -0.023611237429644296;
        } else {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7140394947178604346) ) ) {
            if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6277376571851565057) ) ) {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
                result[9] += 0.025597449425118737;
              } else {
                result[9] += -0.012280368632490738;
              }
            } else {
              result[9] += 0.07153689283624642;
            }
          } else {
            result[9] += -0.006714808779588103;
          }
        }
      }
    }
  } else {
    result[9] += -0.032293163809077936;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.030931642947145836;
  } else {
    result[10] += 0.03495534732385796;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2273057443152013413) ) ) {
    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6372956455064343606) ) ) {
      if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
          if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5386605008935624328) ) ) {
            if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.604004431918678808) ) ) {
              if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6185950284719347048) ) ) {
                if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198785150243614206) ) ) {
                  result[11] += 0.007782185548707922;
                } else {
                  result[11] += -0.015984690728248468;
                }
              } else {
                result[11] += 0.027867253984212425;
              }
            } else {
              result[11] += -0.030449547464440174;
            }
          } else {
            result[11] += -0.033337537491717806;
          }
        } else {
          result[11] += -0.03825821047654278;
        }
      } else {
        result[11] += -0.03455321136841668;
      }
    } else {
      if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.08667723401116583792) ) ) {
        if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038036919182355744) ) ) {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
            result[11] += 0.03192841525866116;
          } else {
            result[11] += -0.002766908230336503;
          }
        } else {
          result[11] += -0.02448741453988504;
        }
      } else {
        if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.1853389534217340651) ) ) {
          result[11] += -0.03222962105169967;
        } else {
          result[11] += 0.005208859792512264;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[11] += -0.03452792073580927;
      } else {
        result[11] += 0.026374989221123014;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7017175228607138715) ) ) {
        result[11] += -0.014045090156117488;
      } else {
        result[11] += 0.02728793925381528;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6123728509228160144) ) ) {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2848388912985063692) ) ) {
        if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2799341577276758808) ) ) {
          result[12] += 0.00718121833794581;
        } else {
          result[12] += 0.06050152778811967;
        }
      } else {
        result[12] += -0.018257407634094083;
      }
    } else {
      result[12] += -0.03483294050361564;
    }
  } else {
    result[12] += 0.04216840574009414;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.194912770072289715) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02540956347415987762) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.4293439263737330869) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8179725024608467399) ) ) {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8466904822023296751) ) ) {
              result[0] += 0.0031578453125549535;
            } else {
              result[0] += -0.04808256492423769;
            }
          } else {
            result[0] += 0.0157127048966922;
          }
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.007254933974569999) ) ) {
            result[0] += 0.01435945632413283;
          } else {
            result[0] += 0.03505688016890261;
          }
        }
      } else {
        result[0] += -0.0291558839438433;
      }
    } else {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4850921819328771201) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2560152540382960029) ) ) {
          if ( LIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1402272218249946412) ) ) {
            if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03919509212844381196) ) ) {
              result[0] += 0.01039899282584768;
            } else {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3133014099965277799) ) ) {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6343024246918286257) ) ) {
                  result[0] += -0.03404336777778242;
                } else {
                  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4573588634800199171) ) ) {
                    result[0] += 0.0224614409575557;
                  } else {
                    result[0] += -0.00990835141245903;
                  }
                }
              } else {
                result[0] += -0.031220118794455867;
              }
            }
          } else {
            if ( LIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1227270498983878827) ) ) {
              if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03773833112301570175) ) ) {
                result[0] += 0.015148792822606815;
              } else {
                result[0] += 0.056026787858887914;
              }
            } else {
              result[0] += -8.828553547225512e-05;
            }
          }
        } else {
          result[0] += 0.04721574382622411;
        }
      } else {
        if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4387468555117943203) ) ) {
          result[0] += 0.006153217576076325;
        } else {
          result[0] += -0.025125405347524016;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[0] += -0.03319296011353935;
      } else {
        result[0] += 0.00714291296183897;
      }
    } else {
      result[0] += 0.03350934518388985;
    }
  }
  if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3475211658439765761) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6285419272653612888) ) ) {
      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042943895481022176) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6581356384813585869) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
            if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03902320481200315799) ) ) {
              if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2919728949150694475) ) ) {
                result[1] += 0.023825879418653714;
              } else {
                if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5737185163116343967) ) ) {
                  result[1] += -0.04334124474080132;
                } else {
                  result[1] += 0.018002625210063707;
                }
              }
            } else {
              result[1] += -0.03871403634609013;
            }
          } else {
            result[1] += -0.03662607158813872;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.128406986927365407) ) ) {
            result[1] += -0.02115338432611724;
          } else {
            result[1] += 0.02043845184548959;
          }
        }
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2855774686981291111) ) ) {
          if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.01869964522527401904) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2040676014547820605) ) ) {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3133014099965277799) ) ) {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3136338714526223925) ) ) {
                  if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6200263303440011198) ) ) {
                    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7754885622253581134) ) ) {
                      result[1] += -0.011081180957684792;
                    } else {
                      result[1] += 0.016782541519160612;
                    }
                  } else {
                    if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03922309542579623109) ) ) {
                      result[1] += -0.00362666801645645;
                    } else {
                      if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01814955373264689684) ) ) {
                        result[1] += 0.03212000787028862;
                      } else {
                        result[1] += 0.004249100718346505;
                      }
                    }
                  }
                } else {
                  result[1] += -0.04467630178378474;
                }
              } else {
                result[1] += 0.04398217787933723;
              }
            } else {
              result[1] += -0.03955930726365556;
            }
          } else {
            result[1] += -0.046030443596674894;
          }
        } else {
          result[1] += 0.034102619565925384;
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)7.709044675805505342) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5434823061206194295) ) ) {
          result[1] += -0.034170248706682185;
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02517859134637990062) ) ) {
            result[1] += -0.033140001432473615;
          } else {
            result[1] += 0.017133301576910582;
          }
        }
      } else {
        result[1] += 0.025704457052886178;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042317978440173709) ) ) {
        result[1] += 0.0037615697830169752;
      } else {
        result[1] += 0.03421730963652999;
      }
    } else {
      result[1] += -0.03605893962265041;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[2] += -0.029360319337297915;
      } else {
        if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924095673946937507) ) ) {
          result[2] += -0.010220383488953256;
        } else {
          result[2] += 0.03496542287151329;
        }
      }
    } else {
      result[2] += -0.03602522868488869;
    }
  } else {
    if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.3113132420658634714) ) ) {
      result[2] += 0.06879454615164032;
    } else {
      result[2] += 0.017471249814031215;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03535429730810716;
    } else {
      result[3] += 0.03465358184889455;
    }
  } else {
    result[3] += -0.03492792849529441;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4077139161094445741) ) ) {
      result[4] += -0.005259796160887924;
    } else {
      result[4] += 0.036298790070534215;
    }
  } else {
    result[4] += -0.03343726048541997;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
    result[5] += -0.016422823872119845;
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201886563096957738) ) ) {
      result[5] += 0.07169957793392302;
    } else {
      result[5] += 0.010930971682367105;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
    result[6] += 0.04067842006123831;
  } else {
    result[6] += -0.025769730071533607;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.033689319998482459) ) ) {
    result[7] += 0.016927997290626298;
  } else {
    result[7] += -0.03443841744297631;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.03570437243586358;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      result[8] += -0.03443596042740488;
    } else {
      result[8] += 0.04760221105144917;
    }
  }
  if ( UNLIKELY(  (data[16].missing != -1) && (data[16].fvalue <= (double)-0.7084573502120999899) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03926013208742445276) ) ) {
        result[9] += -0.033336679592549746;
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02545617531996219318) ) ) {
          result[9] += 0.04656019970644116;
        } else {
          result[9] += 0.0012092987819344678;
        }
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.039282253531597311) ) ) {
        result[9] += 0.04246066082206166;
      } else {
        if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.859953023313256959) ) ) {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3102553107906722563) ) ) {
            result[9] += -0.02128035610761322;
          } else {
            result[9] += 0.02183939098814479;
          }
        } else {
          result[9] += -0.026561557759941134;
        }
      }
    }
  } else {
    result[9] += -0.03214017307867342;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.030711258262609235;
  } else {
    result[10] += 0.0349242759344895;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02533929785816911584) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201284907209793085) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9547384627961618131) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.014435986621954092) ) ) {
            result[11] += 0.006413230803305725;
          } else {
            result[11] += -0.020461193204143142;
          }
        } else {
          result[11] += 0.02926276657419365;
        }
      } else {
        result[11] += -0.026156388022979586;
      }
    } else {
      result[11] += -0.033826800628276955;
    }
  } else {
    if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01594575776457836727) ) ) {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)0.3182557053233023292) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973872850282432312) ) ) {
            result[11] += -0.028332984983612152;
          } else {
            if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.659887908299829129) ) ) {
              result[11] += 0.008485822985096696;
            } else {
              if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.2909647945728325302) ) ) {
                result[11] += -0.03327031996792231;
              } else {
                result[11] += 0.010219438155817722;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2819572531823988371) ) ) {
            if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4546363280872787738) ) ) {
              result[11] += 0.03255121421058315;
            } else {
              result[11] += 0.006124108512578002;
            }
          } else {
            result[11] += 0.0400241189100636;
          }
        }
      } else {
        result[11] += -0.03408598917800472;
      }
    } else {
      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038488430920975203) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2545589699450032106) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5089252727474612437) ) ) {
            result[11] += 0.03342752647990508;
          } else {
            result[11] += 0.013700734559444738;
          }
        } else {
          result[11] += -0.02616674588113457;
        }
      } else {
        result[11] += -0.028846847388393517;
      }
    }
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.3045232590571290143) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6890255270564503709) ) ) {
          result[12] += 0.0019650160110106962;
        } else {
          result[12] += 0.037706296925915955;
        }
      } else {
        result[12] += -0.034519109229684486;
      }
    } else {
      result[12] += 0.04204480352392617;
    }
  } else {
    result[12] += -0.021015072862665043;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.129433012656459123) ) ) {
      result[0] += 0.01563542382621786;
    } else {
      result[0] += -0.03656926324117377;
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.408570331450285762) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.2165417180659529039) ) ) {
              result[0] += 0.004739342660919252;
            } else {
              result[0] += -0.057406239679151365;
            }
          } else {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.077954077688123347) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
                result[0] += 0.023149758844624158;
              } else {
                result[0] += -0.0438143637794775;
              }
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
                result[0] += 0.0005034236876703768;
              } else {
                result[0] += 0.03181441606928427;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[61].missing != -1) || (data[61].fvalue <= (double)0.363285646895536829) ) ) {
            result[0] += 0.030870099039593667;
          } else {
            result[0] += 0.003147157568165102;
          }
        }
      } else {
        if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03893163262841061595) ) ) {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.331999447987429308) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
              result[0] += -0.03537440742974885;
            } else {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3117937359514476037) ) ) {
                if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03699419415973542735) ) ) {
                  if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3911596599046904266) ) ) {
                    result[0] += 0.006649580424860783;
                  } else {
                    result[0] += 0.06954865062391212;
                  }
                } else {
                  result[0] += -0.023421056455238724;
                }
              } else {
                result[0] += 0.04037136164310218;
              }
            }
          } else {
            result[0] += -0.022798461873065196;
          }
        } else {
          if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.3113132420658634714) ) ) {
            result[0] += 3.4771393210502105e-05;
          } else {
            result[0] += -0.026044691191306868;
          }
        }
      }
    } else {
      result[0] += -0.03444125145108139;
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4099809178911676399) ) ) {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7978891662630570591) ) ) {
              result[1] += -0.028855353305967092;
            } else {
              result[1] += 0.009988924145204268;
            }
          } else {
            result[1] += -0.03346479344641547;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.6251558437350327457) ) ) {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.315620908527420363) ) ) {
                result[1] += -0.023448237990742117;
              } else {
                result[1] += 0.033352608260613835;
              }
            } else {
              result[1] += -0.026259176643409765;
            }
          } else {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906447706809286435) ) ) {
              if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3781759635673554998) ) ) {
                result[1] += -0.03679895888815517;
              } else {
                result[1] += 0.018288077356448208;
              }
            } else {
              if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2081189779796225603) ) ) {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7859546517444143676) ) ) {
                  result[1] += 0.031919517195726166;
                } else {
                  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7656308030195185799) ) ) {
                    result[1] += -0.06740736656137114;
                  } else {
                    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.760940684083004304) ) ) {
                      result[1] += 0.03524294300367677;
                    } else {
                      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6421243376913067236) ) ) {
                        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6290623373692068032) ) ) {
                          if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041351576500771925) ) ) {
                            result[1] += -0.014654243411106242;
                          } else {
                            result[1] += 0.013050012783759316;
                          }
                        } else {
                          result[1] += -0.034527486258075495;
                        }
                      } else {
                        result[1] += 0.028406192443382883;
                      }
                    }
                  }
                }
              } else {
                result[1] += -0.03738815374281094;
              }
            }
          }
        }
      } else {
        result[1] += 0.03190168357414648;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
        result[1] += -0.03460021354380014;
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2526644215816800654) ) ) {
          result[1] += 0.03473291713238193;
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
            result[1] += -0.049745287229723927;
          } else {
            if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
              result[1] += 0.0358789148395131;
            } else {
              result[1] += -0.035024473753995325;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.02402024516028879175) ) ) {
      result[1] += 0.034227281649463086;
    } else {
      if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.007537630248567310856) ) ) {
        result[1] += 0.031580235366766726;
      } else {
        result[1] += -0.01057507853011789;
      }
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
      if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.4503997851553450116) ) ) {
        if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1662008098993101035) ) ) {
          result[2] += -0.006140929202066726;
        } else {
          result[2] += 0.03243971702546461;
        }
      } else {
        result[2] += -0.03461560717436418;
      }
    } else {
      result[2] += -0.03598313245299905;
    }
  } else {
    if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1687987108749532672) ) ) {
      result[2] += 0.06304330267828238;
    } else {
      result[2] += 0.01964062315630577;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.034801496664978504;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03928782963668387;
    } else {
      result[3] += 0.03465316621450675;
    }
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3883480444146680255) ) ) {
      result[4] += -0.003899053327414692;
    } else {
      result[4] += 0.03635167704276589;
    }
  } else {
    result[4] += -0.03337099935647486;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
    result[5] += -0.015689794155243898;
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01569670532306870897) ) ) {
      result[5] += -0.0002649592319391103;
    } else {
      result[5] += 0.07907915323120603;
    }
  }
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
    result[6] += -0.01849622000765445;
  } else {
    result[6] += 0.0396049528857505;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[7] += 0.01658257722726688;
  } else {
    result[7] += -0.03443805714000119;
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
    result[8] += -0.035711052942101584;
  } else {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
      result[8] += -0.03443469206826818;
    } else {
      result[8] += 0.046757496872200044;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03903137856556406632) ) ) {
        result[9] += -0.028512308092069134;
      } else {
        result[9] += 0.011729092726934735;
      }
    } else {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.5554231563853312403) ) ) {
        result[9] += 0.04261206405076654;
      } else {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3102553107906722563) ) ) {
          result[9] += -0.022122459511291208;
        } else {
          result[9] += 0.01631157508880643;
        }
      }
    }
  } else {
    result[9] += -0.03204925013405065;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03047899654083433;
  } else {
    result[10] += 0.03489568781381039;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02530103440270330475) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201284907209793085) ) ) {
      if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.2714622295096305593) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
            result[11] += 0.03668630914989897;
          } else {
            result[11] += -0.0041613970135314735;
          }
        } else {
          result[11] += -0.03239599029983252;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6279941440495658833) ) ) {
          result[11] += -0.004454871444313689;
        } else {
          result[11] += 0.031070461031961677;
        }
      }
    } else {
      result[11] += -0.03281144876493747;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6309976433819838304) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.009494748980021217727) ) ) {
          result[11] += -0.03485111840739454;
        } else {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.620134506536565655) ) ) {
            result[11] += 0.032164900870158934;
          } else {
            result[11] += -0.004108012301435021;
          }
        }
      } else {
        result[11] += 0.034215807333097384;
      }
    } else {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.2982666562988280368) ) ) {
          if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6304238142250363497) ) ) {
            result[11] += -0.030808712302336002;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.06781165786423296038) ) ) {
              result[11] += -0.007893230867447495;
            } else {
              result[11] += 0.007589114438896111;
            }
          }
        } else {
          result[11] += 0.038675533196180625;
        }
      } else {
        result[11] += -0.03446689383170883;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2082742240538978107) ) ) {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4246669720681797711) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.45735601814746768) ) ) {
            result[12] += -0.007350379902061816;
          } else {
            result[12] += 0.03549667153180098;
          }
        } else {
          result[12] += -0.028461349850318434;
        }
      } else {
        result[12] += 0.06632251533906272;
      }
    } else {
      result[12] += -0.03482921401168611;
    }
  } else {
    result[12] += 0.0413977565735902;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
      result[0] += 0.002322386342689681;
    } else {
      result[0] += -0.03664564515474521;
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.408570331450285762) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.138033741550859679) ) ) {
          if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.4706642822900930501) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
              result[0] += -6.720699616310095e-05;
            } else {
              result[0] += -0.043512856255690895;
            }
          } else {
            result[0] += 0.036019302606524965;
          }
        } else {
          if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2103482758849794243) ) ) {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (double)0.141659794179517351) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7722884759342584227) ) ) {
                result[0] += 0.022176073727070058;
              } else {
                result[0] += 0.0008636887504111163;
              }
            } else {
              result[0] += 0.046241434672484594;
            }
          } else {
            result[0] += 0.030670133824118904;
          }
        }
      } else {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4850921819328771201) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4368887279138904955) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.01605389607708152325) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2939107877510283573) ) ) {
                result[0] += -0.02270617447410895;
              } else {
                if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3886661232356607987) ) ) {
                  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288170262485434092) ) ) {
                    result[0] += 0.004910108784433666;
                  } else {
                    result[0] += 0.031124439535578325;
                  }
                } else {
                  result[0] += -0.026009937603592607;
                }
              }
            } else {
              result[0] += -0.0434823040687279;
            }
          } else {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03699419415973542735) ) ) {
              if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03773833112301570175) ) ) {
                result[0] += 0.01420641052172925;
              } else {
                result[0] += 0.04919174863788442;
              }
            } else {
              result[0] += -0.0014431125649269246;
            }
          }
        } else {
          if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4353591269115003048) ) ) {
            result[0] += 0.012047062459588512;
          } else {
            result[0] += -0.02711039783928029;
          }
        }
      }
    } else {
      result[0] += -0.03443512876694334;
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4099809178911676399) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6449313698140944906) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.914166641557065507) ) ) {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.0371428925898378906) ) ) {
              result[1] += -0.027990133267451953;
            } else {
              result[1] += -0.05535077701427805;
            }
          } else {
            result[1] += -0.002551719450921842;
          }
        } else {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.760940684083004304) ) ) {
            if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2096629731955549081) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121881725528086682) ) ) {
                result[1] += -0.07189441080513516;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
                  result[1] += 0.03298848781491687;
                } else {
                  if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631546034338769158) ) ) {
                    result[1] += 0.03188582960482123;
                  } else {
                    result[1] += -0.03722186654771722;
                  }
                }
              }
            } else {
              result[1] += 0.03160822361351568;
            }
          } else {
            if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041841056122270182) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.752509980424918901) ) ) {
                result[1] += -0.03402332852082725;
              } else {
                result[1] += -0.01339881273157403;
              }
            } else {
              if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2081189779796225603) ) ) {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2245348391126071319) ) ) {
                  if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3136106764673134428) ) ) {
                    if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2088125373279557662) ) ) {
                      result[1] += 0.0021221374372239724;
                    } else {
                      result[1] += 0.02954653411309945;
                    }
                  } else {
                    result[1] += -0.03835052873232577;
                  }
                } else {
                  result[1] += 0.038724841724662874;
                }
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1720197088307830191) ) ) {
                  result[1] += 0.011084302251768834;
                } else {
                  result[1] += -0.036550043500548454;
                }
              }
            }
          }
        }
      } else {
        result[1] += 0.03155802032207893;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)3.143420129103045024) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
          result[1] += -0.03422352992323655;
        } else {
          result[1] += 0.0009547597875922278;
        }
      } else {
        result[1] += 0.02733192432385807;
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.25444770141758899) ) ) {
      result[1] += 0.0344987843869581;
    } else {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1119865138912414376) ) ) {
        result[1] += 0.028208606621887417;
      } else {
        result[1] += -0.019574942350501348;
      }
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
      if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[2] += -0.02882728007783304;
      } else {
        if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924095673946937507) ) ) {
          result[2] += -0.008977108531935259;
        } else {
          result[2] += 0.03427199436366864;
        }
      }
    } else {
      result[2] += -0.035929787482690545;
    }
  } else {
    if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201624029503586266) ) ) {
      result[2] += 0.009319431796319623;
    } else {
      result[2] += 0.06824232879632387;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.0353414424552575;
    } else {
      result[3] += 0.03462241100771294;
    }
  } else {
    result[3] += -0.034897888723017245;
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      result[4] += -0.03445215391224441;
    } else {
      result[4] += 0.007992461233444373;
    }
  } else {
    result[4] += 0.033174755054036095;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
    result[5] += -0.01489357119253116;
  } else {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201391643784606167) ) ) {
      result[5] += 0.06497893468879172;
    } else {
      result[5] += 0.011012571627356844;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.021792825990128672;
  } else {
    result[6] += 0.05414524099189373;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[7] += 0.016045801050174977;
  } else {
    result[7] += -0.034437712198260154;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.03568580835383898;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      result[8] += -0.0344357019046139;
    } else {
      result[8] += 0.05039828757421271;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5906532180874056737) ) ) {
          result[9] += -0.032949932651715856;
        } else {
          result[9] += 0.012502339751054518;
        }
      } else {
        result[9] += 0.023190312780009336;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.039282253531597311) ) ) {
        result[9] += 0.04261264443272204;
      } else {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3102553107906722563) ) ) {
          result[9] += -0.021799206049647364;
        } else {
          result[9] += 0.015921985194513575;
        }
      }
    }
  } else {
    result[9] += -0.03188302596940222;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3163244897484577822) ) ) {
    result[10] += 0.027690610622164887;
  } else {
    result[10] += -0.029835389209388077;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02529546880817297796) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201284907209793085) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.160503442631537957) ) ) {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.051689767643777529) ) ) {
          result[11] += -0.03829291587923257;
        } else {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
            result[11] += 0.023468759243412896;
          } else {
            result[11] += -0.034885280812724045;
          }
        }
      } else {
        if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.2714622295096305593) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6774123108820169215) ) ) {
            result[11] += 0.01129102579142472;
          } else {
            result[11] += -0.013990003395633454;
          }
        } else {
          if ( UNLIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.2946823935148192297) ) ) {
            result[11] += 0.04638494097990252;
          } else {
            result[11] += 0.01301789459849654;
          }
        }
      }
    } else {
      result[11] += -0.03269943429535671;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6309976433819838304) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.009494748980021217727) ) ) {
          result[11] += -0.03486404127472373;
        } else {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201702378457567555) ) ) {
            result[11] += 0.024852280918434715;
          } else {
            result[11] += -0.006810926920549782;
          }
        }
      } else {
        result[11] += 0.03407814933823492;
      }
    } else {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
        if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)0.1270551678970518183) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6304238142250363497) ) ) {
              result[11] += -0.030216380578721877;
            } else {
              result[11] += 0.005074996415340203;
            }
          } else {
            result[11] += -0.02689190181381236;
          }
        } else {
          result[11] += 0.03749513127874411;
        }
      } else {
        result[11] += -0.03446446757321927;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4246669720681797711) ) ) {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
        result[12] += 0.03315967317002235;
      } else {
        result[12] += -0.03481801872842203;
      }
    } else {
      result[12] += -0.02818111452252952;
    }
  } else {
    result[12] += 0.0405597988841992;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.098734136948379625) ) ) {
      result[0] += 0.013075804717792327;
    } else {
      result[0] += -0.0365920761463562;
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.408570331450285762) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.496998585836840867) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4555383721268900787) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3129766802022028171) ) ) {
                result[0] += -0.07408100337953498;
              } else {
                result[0] += -0.003688461323343789;
              }
            } else {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.077954077688123347) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
                  result[0] += 0.016630657076289353;
                } else {
                  result[0] += -0.04866417212762004;
                }
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
                  result[0] += 0.00016447019765825213;
                } else {
                  result[0] += 0.03142424472071316;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
              result[0] += 0.03288585001288927;
            } else {
              result[0] += 0.008470808699052706;
            }
          }
        } else {
          if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4582281153312064981) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
              if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
                if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.5537531122795912308) ) ) {
                  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
                    result[0] += 0.0019818497282457106;
                  } else {
                    result[0] += 0.03012667777998525;
                  }
                } else {
                  result[0] += 0.040707167751291844;
                }
              } else {
                result[0] += -0.01837514092921461;
              }
            } else {
              result[0] += -0.038094349508051885;
            }
          } else {
            result[0] += -0.03623076268300951;
          }
        }
      } else {
        result[0] += -0.04801500885299022;
      }
    } else {
      result[0] += -0.034431484189509254;
    }
  }
  if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.07128092195383493868) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02543878283887865757) ) ) {
      if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3145694025267490868) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6581356384813585869) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5810222695237325929) ) ) {
              result[1] += 0.02094812179500468;
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
                result[1] += -0.05323668318966702;
              } else {
                result[1] += 0.016704308853066435;
              }
            }
          } else {
            result[1] += -0.037412614259950114;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[1] += 0.02614638031809892;
          } else {
            result[1] += -0.02387863437988716;
          }
        }
      } else {
        result[1] += -0.03429784086706656;
      }
    } else {
      if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.01182126646209493044) ) ) {
        if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.443328783641416424) ) ) {
          if ( LIKELY(  (data[49].missing != -1) && (data[49].fvalue <= (double)-0.04032363907274264664) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1720197088307830191) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7418876561688098059) ) ) {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3592888799096040642) ) ) {
                  result[1] += -0.0041569434429598725;
                } else {
                  result[1] += 0.028521678328032266;
                }
              } else {
                result[1] += -0.018203103460949367;
              }
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3148322790269169058) ) ) {
                  result[1] += -0.008437744523148084;
                } else {
                  result[1] += -0.04414873640435735;
                }
              } else {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7494567179442497284) ) ) {
                  if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6200788226884972332) ) ) {
                    result[1] += -0.007916134314523246;
                  } else {
                    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7437435813157849962) ) ) {
                      result[1] += 0.010233154470482182;
                    } else {
                      result[1] += 0.03236402317470341;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2939107877510283573) ) ) {
                    result[1] += 0.0003235613598183329;
                  } else {
                    result[1] += -0.029978491288031185;
                  }
                }
              }
            }
          } else {
            result[1] += -0.03475975376402198;
          }
        } else {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.620175034495356825) ) ) {
            result[1] += -0.00827317027519108;
          } else {
            if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)5.904964682830830647) ) ) {
              result[1] += 0.032820479167418634;
            } else {
              result[1] += 0.009120598975684135;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01997058726767987624) ) ) {
          result[1] += -0.03410468095158497;
        } else {
          result[1] += 0.00981427599035598;
        }
      }
    }
  } else {
    result[1] += 0.03375278115093605;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701102284419148958) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6202093014700189588) ) ) {
      result[2] += 0.041568788944687095;
    } else {
      if ( UNLIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1446416671780691998) ) ) {
        result[2] += -0.016466874021210557;
      } else {
        result[2] += 0.011938897632223977;
      }
    }
  } else {
    result[2] += -0.03466693224142921;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.035328212990221854;
    } else {
      result[3] += 0.034606949595730976;
    }
  } else {
    result[3] += -0.034885373437385694;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3883480444146680255) ) ) {
      result[4] += -0.0024947365930291657;
    } else {
      result[4] += 0.03639421235859436;
    }
  } else {
    result[4] += -0.03324664724975131;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
    result[5] += -0.014110349732412564;
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01569670532306870897) ) ) {
      result[5] += 0.00032554529563691924;
    } else {
      result[5] += 0.07205057747540387;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.02123675017205082;
  } else {
    result[6] += 0.05133220852239233;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[7] += 0.015533152940463767;
  } else {
    result[7] += -0.0344373987677694;
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
    result[8] += -0.0356919181063959;
  } else {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8406727060037487709) ) ) {
      result[8] += 0.04555745636759746;
    } else {
      result[8] += -0.0344347211693924;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
        result[9] += -0.03837542237758822;
      } else {
        result[9] += 0.009758198000349636;
      }
    } else {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.5554231563853312403) ) ) {
        result[9] += 0.04263488123473014;
      } else {
        if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.859953023313256959) ) ) {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3102553107906722563) ) ) {
            result[9] += -0.019191467613442738;
          } else {
            result[9] += 0.020599601011501392;
          }
        } else {
          result[9] += -0.025943304007266122;
        }
      }
    }
  } else {
    result[9] += -0.031707483200718714;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[10] += 0.02726598540839163;
  } else {
    result[10] += -0.029545454092056424;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02530103440270330475) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200790668063795863) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.160503442631537957) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.20695775318755727) ) ) {
          result[11] += 0.009651714413924584;
        } else {
          result[11] += -0.03376027328457116;
        }
      } else {
        if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.2698835488855645948) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.853656798879314338) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.757072353270465959) ) ) {
              result[11] += 0.0068818201915093235;
            } else {
              result[11] += -0.01908740568998247;
            }
          } else {
            result[11] += 0.022130508404530184;
          }
        } else {
          result[11] += 0.031655632978508645;
        }
      }
    } else {
      result[11] += -0.033093921928240004;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6309976433819838304) ) ) {
        if ( UNLIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.4688954308400637983) ) ) {
          result[11] += 0.009449735882525958;
        } else {
          result[11] += -0.034510834329647806;
        }
      } else {
        result[11] += 0.03382695745699332;
      }
    } else {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
        if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1761657080028403988) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6304238142250363497) ) ) {
              result[11] += -0.029490900010033568;
            } else {
              result[11] += 0.0051645350728771805;
            }
          } else {
            result[11] += -0.02382408619275882;
          }
        } else {
          result[11] += 0.03895563383983757;
        }
      } else {
        result[11] += -0.03446196034850168;
      }
    }
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.3045232590571290143) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[12] += 0.010068027621709122;
    } else {
      result[12] += 0.04057909927965613;
    }
  } else {
    result[12] += -0.020444948416804706;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.194912770072289715) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
      if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4555851256733903232) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.152697254182033726) ) ) {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924338860476576235) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
              result[0] += -0.002501461005342369;
            } else {
              result[0] += 0.0223294417121014;
            }
          } else {
            result[0] += -0.027426187665259064;
          }
        } else {
          result[0] += -0.03728920391966568;
        }
      } else {
        if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.09320229921168095288) ) ) {
          result[0] += 0.030279165996804094;
        } else {
          result[0] += -0.003497513811531864;
        }
      }
    } else {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4850921819328771201) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.247040140504424688) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6185896019737596729) ) ) {
            if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
              result[0] += 0.005399565628564194;
            } else {
              result[0] += 0.046970046623174354;
            }
          } else {
            result[0] += -0.02219011742501867;
          }
        } else {
          result[0] += -0.03184106331006919;
        }
      } else {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.010926839157595403) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.98620564860557236) ) ) {
            result[0] += -0.034450426057081276;
          } else {
            result[0] += -0.003961467375224374;
          }
        } else {
          if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-1.00000001800250948e-35) ) ) {
            result[0] += -0.01698830972731341;
          } else {
            result[0] += 0.02200752215647254;
          }
        }
      }
    }
  } else {
    if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6042839456515165519) ) ) {
      result[0] += -0.03725316106110655;
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.408570331450285762) ) ) {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.2826872010724469919) ) ) {
          result[0] += 0.028791217674114158;
        } else {
          result[0] += 0.004295734598994083;
        }
      } else {
        result[0] += -0.03442766759949751;
      }
    }
  }
  if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3475211658439765761) ) ) {
    if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5971525348704809222) ) ) {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5530096912683611921) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7978891662630570591) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5912475240206701566) ) ) {
            result[1] += 0.006173031902296905;
          } else {
            if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5737185163116343967) ) ) {
              result[1] += -0.03875313763598236;
            } else {
              if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.487179741805226385) ) ) {
                result[1] += 0.01408462365903026;
              } else {
                result[1] += -0.035295268397128994;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6311229509888406364) ) ) {
              result[1] += 0.03391770779651845;
            } else {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7690883896431585098) ) ) {
                if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201479027394767307) ) ) {
                  result[1] += -0.016524497725170194;
                } else {
                  result[1] += -0.04342585870969712;
                }
              } else {
                result[1] += 0.008864335422065044;
              }
            }
          } else {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3130849234669778047) ) ) {
              if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1676582117311516129) ) ) {
                result[1] += 0.03289801328445371;
              } else {
                if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3874430536939720837) ) ) {
                  if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1283369947460293592) ) ) {
                    result[1] += -0.008941695503012203;
                  } else {
                    if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3133014099965277799) ) ) {
                      result[1] += 0.020179653560888;
                    } else {
                      result[1] += 0.05123642492359077;
                    }
                  }
                } else {
                  result[1] += -0.01767334670813195;
                }
              }
            } else {
              result[1] += -0.0393327384128;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)0.3681595734062035885) ) ) {
          result[1] += 0.03381512388817322;
        } else {
          result[1] += -0.008312692633471558;
        }
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)3.955665202556394533) ) ) {
        if ( LIKELY( !(data[42].missing != -1) || (data[42].fvalue <= (double)0.09731526685488182948) ) ) {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
            result[1] += -0.034351109422401244;
          } else {
            result[1] += 0.0083153294347707;
          }
        } else {
          result[1] += -0.001090032991243565;
        }
      } else {
        result[1] += 0.030769046138517716;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.2864227622420181807) ) ) {
        if ( LIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.4251498764808200881) ) ) {
          result[1] += 0.02742341129472689;
        } else {
          result[1] += -0.005535425127214728;
        }
      } else {
        result[1] += 0.03461711995579279;
      }
    } else {
      result[1] += -0.0360950633019798;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
      if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.4503997851553450116) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5906532180874056737) ) ) {
          result[2] += 0.031065392140589825;
        } else {
          result[2] += -0.0059361663877710875;
        }
      } else {
        result[2] += -0.034645376644153035;
      }
    } else {
      result[2] += -0.035887754949965524;
    }
  } else {
    result[2] += 0.03879944498717422;
  }
  if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924334254671090622) ) ) {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
      result[3] += 0.034520179590847196;
    } else {
      result[3] += -0.036237623981013316;
    }
  } else {
    if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2688332255423682704) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
        result[3] += 0.032234461775982715;
      } else {
        result[3] += -0.03458104179164581;
      }
    } else {
      result[3] += -0.03467061974991919;
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    result[4] += -0.0335589977258006;
  } else {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
      result[4] += 0.03792727161585768;
    } else {
      result[4] += -0.021703610014345395;
    }
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
    result[5] += -0.013306717533351322;
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01569670532306870897) ) ) {
      result[5] += 0.0015820000565544658;
    } else {
      result[5] += 0.06875401003892384;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.02051537951837921;
  } else {
    result[6] += 0.048346298035400914;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
      result[7] += -0.0067177814380340595;
    } else {
      result[7] += 0.02065176829148148;
    }
  } else {
    result[7] += -0.03443709507898307;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.035698265437043596;
  } else {
    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3158683217040489377) ) ) {
      result[8] += 0.04558548957119288;
    } else {
      result[8] += -0.034434493116634816;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.077954077688123347) ) ) {
      if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[9] += -0.01857971820980991;
      } else {
        result[9] += 0.04259876387442574;
      }
    } else {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7850888210986576299) ) ) {
        result[9] += -0.02178762114385552;
      } else {
        result[9] += 0.010781843399228061;
      }
    }
  } else {
    result[9] += -0.03153455787394203;
  }
  if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.601025912473557633) ) ) {
    result[10] += 0.026594235621632014;
  } else {
    result[10] += -0.029222476585841727;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02533929785816911584) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200790668063795863) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.160503442631537957) ) ) {
        if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
          result[11] += 0.007551657923991953;
        } else {
          result[11] += -0.035444876822746905;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9007706456508135506) ) ) {
          result[11] += -0.0004871504121457127;
        } else {
          result[11] += 0.0248469355096692;
        }
      }
    } else {
      result[11] += -0.03352674016391041;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
      if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680046924847954093) ) ) {
        if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9420121573033438667) ) ) {
          result[11] += 0.024587721070799734;
        } else {
          result[11] += -0.032637754505263475;
        }
      } else {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6312911643245187054) ) ) {
          result[11] += -0.0004898576337373531;
        } else {
          result[11] += 0.03364663360776767;
        }
      }
    } else {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.08281284098172810026) ) ) {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2819572531823988371) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6304238142250363497) ) ) {
              result[11] += -0.028863883833432392;
            } else {
              result[11] += 0.005229672282124613;
            }
          } else {
            result[11] += -0.028287079287115654;
          }
        } else {
          result[11] += 0.030212407364379537;
        }
      } else {
        result[11] += -0.0318596003858276;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2799341577276758808) ) ) {
        result[12] += -0.0009955493683636682;
      } else {
        result[12] += 0.06410182154774449;
      }
    } else {
      result[12] += -0.03484673549030481;
    }
  } else {
    result[12] += 0.03985525367532238;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
    if ( UNLIKELY(  (data[16].missing != -1) && (data[16].fvalue <= (double)-0.7084573502120999899) ) ) {
      result[0] += -0.001257752251238041;
    } else {
      result[0] += -0.03678112400432095;
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.408570331450285762) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)2.81764075380878376) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7738885190798082681) ) ) {
                result[0] += -0.007798043073863569;
              } else {
                result[0] += -0.0382040670187933;
              }
            } else {
              result[0] += 0.014106251992576948;
            }
          } else {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.01605389607708152325) ) ) {
              if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9687903016561022485) ) ) {
                if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0252342472800112759) ) ) {
                  if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4553892674670077523) ) ) {
                    result[0] += -0.008949228466490138;
                  } else {
                    result[0] += 0.020817381740795563;
                  }
                } else {
                  result[0] += -0.042246812066135286;
                }
              } else {
                if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534555915019199787) ) ) {
                  result[0] += 0.030777556606562027;
                } else {
                  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
                    result[0] += 0.031966003784277476;
                  } else {
                    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.07972073567814264) ) ) {
                      result[0] += 0.002007327055622171;
                    } else {
                      result[0] += 0.025892478390001503;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.018446736858197112;
            }
          }
        } else {
          result[0] += -0.03435497091239266;
        }
      } else {
        result[0] += -0.05021044602492329;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[0] += -0.03450415732490538;
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.025468002206515402) ) ) {
          result[0] += 0.01614655690939994;
        } else {
          result[0] += -0.016796786796023307;
        }
      }
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02543878283887865757) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6285419272653612888) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8567430584850248554) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5810222695237325929) ) ) {
              result[1] += 0.015038062784876032;
            } else {
              result[1] += -0.015009110181827962;
            }
          } else {
            result[1] += -0.03759537355118506;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[1] += 0.03414032790467603;
          } else {
            result[1] += -0.030479622114710885;
          }
        }
      } else {
        result[1] += -0.03443097864103158;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
          if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.006190866369865219779) ) ) {
            if ( LIKELY( !(data[43].missing != -1) || (data[43].fvalue <= (double)0.8385950863339161065) ) ) {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7494567179442497284) ) ) {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
                  if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7418876561688098059) ) ) {
                    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9606217943037372864) ) ) {
                      result[1] += -0.0016305374932018503;
                    } else {
                      result[1] += 0.03536665594419637;
                    }
                  } else {
                    result[1] += -0.005598034519882552;
                  }
                } else {
                  if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7156028676966986746) ) ) {
                    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6295406941023361513) ) ) {
                      if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.1458410221669886042) ) ) {
                        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6311229509888406364) ) ) {
                          result[1] += 0.01220008632759015;
                        } else {
                          result[1] += -0.037855335109618984;
                        }
                      } else {
                        result[1] += 0.028354949771585498;
                      }
                    } else {
                      if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2099024163039080737) ) ) {
                        if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6509262132295375869) ) ) {
                          result[1] += -0.026153154660582226;
                        } else {
                          result[1] += 0.030668704053607346;
                        }
                      } else {
                        result[1] += -0.05963954659075025;
                      }
                    }
                  } else {
                    result[1] += 0.023298832133918566;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6890255270564503709) ) ) {
                  result[1] += -0.053637547808441835;
                } else {
                  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.3573647567481237353) ) ) {
                    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5060454762598264322) ) ) {
                      if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5418922565409921566) ) ) {
                        result[1] += 0.023941666198013332;
                      } else {
                        result[1] += -0.044374861523948636;
                      }
                    } else {
                      result[1] += 0.04156309234379205;
                    }
                  } else {
                    result[1] += -0.037808841195474646;
                  }
                }
              }
            } else {
              result[1] += -0.04232546987928624;
            }
          } else {
            result[1] += -0.03947558491438322;
          }
        } else {
          if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.3714294002701965525) ) ) {
            result[1] += 0.03248564105642971;
          } else {
            result[1] += -0.009844287885452278;
          }
        }
      } else {
        result[1] += -0.03539438028497441;
      }
    }
  } else {
    if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.0219706185980568236) ) ) {
      result[1] += 0.03407979182191176;
    } else {
      result[1] += 0.008544253375627076;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5994263347602458714) ) ) {
        result[2] += -0.02794053508889924;
      } else {
        if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3988745145851049778) ) ) {
          result[2] += -0.008186632527058596;
        } else {
          result[2] += 0.0341968493076701;
        }
      }
    } else {
      result[2] += -0.035831960626049514;
    }
  } else {
    result[2] += 0.03837855787204681;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03532885435797104;
    } else {
      result[3] += 0.034582586653099566;
    }
  } else {
    result[3] += -0.034860775041390235;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    result[4] += -0.0334984051379438;
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2545589699450032106) ) ) {
      result[4] += -0.014024548636769121;
    } else {
      if ( UNLIKELY( !(data[44].missing != -1) || (data[44].fvalue <= (double)0.09416809738685628928) ) ) {
        result[4] += 0.07218972636699368;
      } else {
        result[4] += 0.03481606776633465;
      }
    }
  }
  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5557878426946177841) ) ) {
    result[5] += -0.01743960721837382;
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1626153153041936805) ) ) {
      result[5] += 0.05994691771086079;
    } else {
      result[5] += 0.013455074791260962;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.019978369688872226;
  } else {
    result[6] += 0.04581072583056928;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[7] += 0.014615869454071458;
  } else {
    result[7] += -0.03443681132709608;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    result[8] += -0.024788822787956005;
  } else {
    result[8] += 0.02587695491031169;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411362640307710192) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1404983016608492563) ) ) {
          result[9] += 0.00012520418030736476;
        } else {
          result[9] += 0.03867953834716075;
        }
      } else {
        result[9] += -0.0028980734143570015;
      }
    } else {
      result[9] += 0.035294429439641666;
    }
  } else {
    result[9] += -0.0313356857924999;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.030570916951676175;
  } else {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
      result[10] += -0.0005471824943351273;
    } else {
      result[10] += 0.034807932367690066;
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02533929785816911584) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200790668063795863) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.160503442631537957) ) ) {
        if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
          result[11] += 0.007003626933414329;
        } else {
          result[11] += -0.035300058964670096;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9007706456508135506) ) ) {
          result[11] += -0.0005820164320173233;
        } else {
          result[11] += 0.024186617870287225;
        }
      }
    } else {
      result[11] += -0.033464652212170765;
    }
  } else {
    if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6372956455064343606) ) ) {
      if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
          result[11] += -0.0051609157794751115;
        } else {
          result[11] += 0.010659237898210884;
        }
      } else {
        result[11] += -0.034582776952508436;
      }
    } else {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.400555149944672229) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
          result[11] += -0.00515849423006501;
        } else {
          result[11] += 0.03121268889450325;
        }
      } else {
        result[11] += -0.03450539234933487;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2082742240538978107) ) ) {
        result[12] += -0.0003354999428912836;
      } else {
        result[12] += 0.06561880791875893;
      }
    } else {
      result[12] += -0.03483572186238262;
    }
  } else {
    result[12] += 0.038715162233222696;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.098734136948379625) ) ) {
      result[0] += 0.017360851911048185;
    } else {
      result[0] += -0.036629437720049014;
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.869093511418218001) ) ) {
            result[0] += -0.019724433424045992;
          } else {
            result[0] += 0.012951726650350702;
          }
        } else {
          result[0] += 0.03140945252793619;
        }
      } else {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4582281153312064981) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.247040140504424688) ) ) {
              if ( LIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.127916837808266015) ) ) {
                result[0] += 0.004438803478551634;
              } else {
                result[0] += -0.024770261470914445;
              }
            } else {
              result[0] += -0.031430647500257536;
            }
          } else {
            if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
              result[0] += 0.05672139085803562;
            } else {
              result[0] += 0.002903151993241859;
            }
          }
        } else {
          result[0] += -0.03021570442799359;
        }
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
        result[0] += -0.03660598866158298;
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02547078500232157969) ) ) {
          result[0] += 0.013351556297347914;
        } else {
          if ( UNLIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4093825433613223486) ) ) {
            result[0] += 0.0011543275232480741;
          } else {
            result[0] += -0.03896986213633752;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3475211658439765761) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6285419272653612888) ) ) {
      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042943895481022176) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.051689767643777529) ) ) {
          if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-2.133129891167238057) ) ) {
            result[1] += 0.021502950342148667;
          } else {
            if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2988241001254555163) ) ) {
              result[1] += -0.030881359389276154;
            } else {
              result[1] += 0.0006523164072980522;
            }
          }
        } else {
          result[1] += 0.007337759916881253;
        }
      } else {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3153348370419435942) ) ) {
          result[1] += 0.03329246916394939;
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)7.453514125476583096) ) ) {
            if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.6031942790939345267) ) ) {
              if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01055861370603066417) ) ) {
                result[1] += -0.061051432145232856;
              } else {
                result[1] += -0.0002300707876293;
              }
            } else {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1020286349587507663) ) ) {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2245348391126071319) ) ) {
                  if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041423957829911151) ) ) {
                    result[1] += -0.005140272176557811;
                  } else {
                    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01327865683365758893) ) ) {
                      result[1] += -0.006845240476387518;
                    } else {
                      result[1] += 0.026404183040128065;
                    }
                  }
                } else {
                  result[1] += 0.047115496891563295;
                }
              } else {
                result[1] += 0.04445204590046994;
              }
            }
          } else {
            result[1] += -0.036242744460550064;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)3.955665202556394533) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
          result[1] += -0.03408570067099386;
        } else {
          result[1] += 0.010716650559589437;
        }
      } else {
        result[1] += 0.030077328317319626;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      if ( UNLIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.302711647983323617) ) ) {
        if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041841056122270182) ) ) {
          result[1] += -0.009745346516277278;
        } else {
          result[1] += 0.027007160931400764;
        }
      } else {
        result[1] += 0.03460672866324038;
      }
    } else {
      result[1] += -0.03609025402981029;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6514852184452392114) ) ) {
      result[2] += -0.03474500413925234;
    } else {
      if ( UNLIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.1683616869647484304) ) ) {
        result[2] += 0.011605148557140501;
      } else {
        result[2] += -0.024015046324459284;
      }
    }
  } else {
    result[2] += 0.037816468584469624;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.035317726778677894;
    } else {
      result[3] += 0.03456866675613448;
    }
  } else {
    result[3] += -0.03485161511062076;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    result[4] += -0.03343503942335717;
  } else {
    if ( UNLIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.5576741053950976523) ) ) {
      result[4] += 0.03804827650111155;
    } else {
      result[4] += -0.014363305801897978;
    }
  }
  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6181786995525672124) ) ) {
    result[5] += -0.007664604676205903;
  } else {
    result[5] += 0.038017385458446455;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.01943228039963508;
  } else {
    result[6] += 0.04363219945513385;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[7] += 0.01399814898591401;
  } else {
    result[7] += -0.03443654284052929;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.03571224625814425;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
      result[8] += -0.034435684337014924;
    } else {
      result[8] += 0.05270169862572878;
    }
  }
  if ( UNLIKELY(  (data[16].missing != -1) && (data[16].fvalue <= (double)-0.7084573502120999899) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
        result[9] += -0.0382092191220982;
      } else {
        result[9] += 0.008236806707085516;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.039282253531597311) ) ) {
        result[9] += 0.04254807471940188;
      } else {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
            result[9] += 0.014848737536010088;
          } else {
            result[9] += -0.015755756180705197;
          }
        } else {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6687016783315548052) ) ) {
            result[9] += 0.051531836987606675;
          } else {
            result[9] += -0.011701898537514967;
          }
        }
      }
    }
  } else {
    result[9] += -0.031032147478803014;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.030320702605086475;
  } else {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
      result[10] += -0.005016564818967243;
    } else {
      result[10] += 0.03425020667230722;
    }
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02529546880817297796) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6200779576468181675) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
        if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.2698835488855645948) ) ) {
          result[11] += 0.003378198271948562;
        } else {
          result[11] += 0.03761559919944892;
        }
      } else {
        result[11] += -0.020372988802784337;
      }
    } else {
      result[11] += -0.03285572206641062;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6309976433819838304) ) ) {
        if ( UNLIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.4688954308400637983) ) ) {
          result[11] += 0.008200611592970742;
        } else {
          result[11] += -0.034500251986953445;
        }
      } else {
        result[11] += 0.03349980990173688;
      }
    } else {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5167220984273855899) ) ) {
          result[11] += 0.0014388875788342952;
        } else {
          result[11] += 0.03797292413843818;
        }
      } else {
        result[11] += -0.0344583050376313;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    result[12] += 0.007188193316211634;
  } else {
    result[12] += 0.037627929371354035;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.2441152842941978485) ) ) {
    if ( LIKELY(  (data[62].missing != -1) && (data[62].fvalue <= (double)-0.2005212959786446258) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.496998585836840867) ) ) {
          if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.049820097983093836) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1143841639192145349) ) ) {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8156587383423387072) ) ) {
                  result[0] += 0.010306801603977315;
                } else {
                  result[0] += -0.03440934699907753;
                }
              } else {
                result[0] += 0.007887811169064724;
              }
            } else {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
                result[0] += -0.047128748413894736;
              } else {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
                  if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4555806576005108632) ) ) {
                    result[0] += -0.06802097980537251;
                  } else {
                    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3686375322916744524) ) ) {
                      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.01605389607708152325) ) ) {
                        if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042771367694231843) ) ) {
                          result[0] += 0.04198674854313623;
                        } else {
                          if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7834887779531077845) ) ) {
                            if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041841056122270182) ) ) {
                              result[0] += 0.01798420077885411;
                            } else {
                              result[0] += -0.025420473724885692;
                            }
                          } else {
                            result[0] += 0.01705752511322583;
                          }
                        }
                      } else {
                        result[0] += -0.01617369736939281;
                      }
                    } else {
                      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7797011598290618517) ) ) {
                        result[0] += -0.046825636085333175;
                      } else {
                        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6046033861991916281) ) ) {
                          result[0] += 0.012187401661925674;
                        } else {
                          result[0] += -0.040596959355938586;
                        }
                      }
                    }
                  }
                } else {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4083224490285358166) ) ) {
                    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8179725024608467399) ) ) {
                      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
                        result[0] += 0.015458844680448326;
                      } else {
                        result[0] += -0.034578448259555174;
                      }
                    } else {
                      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
                        result[0] += 0.024647099109572163;
                      } else {
                        result[0] += -0.008255212203088946;
                      }
                    }
                  } else {
                    result[0] += 0.03730554370955946;
                  }
                }
              }
            }
          } else {
            result[0] += 0.04248005216854773;
          }
        } else {
          result[0] += -0.047828478570921394;
        }
      } else {
        result[0] += -0.04955595006293261;
      }
    } else {
      result[0] += -0.03128010406014986;
    }
  } else {
    result[0] += -0.03444346003860637;
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4099809178911676399) ) ) {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.6031942790939345267) ) ) {
          result[1] += -0.03304989827595384;
        } else {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
            if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198276039103393087) ) ) {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8291165553407531252) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
                  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8380126130109860627) ) ) {
                    result[1] += -0.0020456712069027985;
                  } else {
                    result[1] += 0.036282193569508625;
                  }
                } else {
                  if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6304238142250363497) ) ) {
                    result[1] += 0.023679037731369708;
                  } else {
                    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906447706809286435) ) ) {
                      if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03858425638752763925) ) ) {
                        result[1] += -0.037117834624078694;
                      } else {
                        result[1] += 0.011832196368043424;
                      }
                    } else {
                      result[1] += -0.001949907113849583;
                    }
                  }
                }
              } else {
                result[1] += -0.0284979927487801;
              }
            } else {
              if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3975119378133404324) ) ) {
                if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02362370367465634058) ) ) {
                  result[1] += 0.020447087262084003;
                } else {
                  result[1] += -0.02640295126108982;
                }
              } else {
                result[1] += 0.031599955307189655;
              }
            }
          } else {
            result[1] += -0.03462313571206625;
          }
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6202117124377256596) ) ) {
          result[1] += -0.0020767396681047345;
        } else {
          result[1] += 0.03393473012801898;
        }
      }
    } else {
      if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.1449740909824458746) ) ) {
        result[1] += -0.03382277837721708;
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5683565155183151196) ) ) {
          result[1] += 0.03088123194245633;
        } else {
          result[1] += -0.03575491965653955;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01615228905622571529) ) ) {
      result[1] += 0.007890400891191123;
    } else {
      result[1] += 0.03399078973777376;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
      if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-2.758297861239732196) ) ) {
        if ( LIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1662008098993101035) ) ) {
          result[2] += -0.003966447599033851;
        } else {
          result[2] += 0.04073692900954584;
        }
      } else {
        result[2] += -0.013612959647516307;
      }
    } else {
      result[2] += -0.03582986071782389;
    }
  } else {
    result[2] += 0.03731879687424121;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.03530867888411481;
    } else {
      result[3] += 0.03455629452674896;
    }
  } else {
    result[3] += -0.034840211781800225;
  }
  if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.631613573303760778) ) ) {
    result[4] += 0.032106453995341594;
  } else {
    result[4] += -0.030969903274638794;
  }
  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6181786995525672124) ) ) {
    result[5] += -0.006808256488380007;
  } else {
    result[5] += 0.03650009047513858;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.018757972681543392;
  } else {
    result[6] += 0.04170747556592293;
  }
  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5502918566492193131) ) ) {
    result[7] += 0.01348026695054122;
  } else {
    result[7] += -0.03443626956763706;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619621763013154303) ) ) {
    result[8] += -0.03244895880408108;
  } else {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
      result[8] += -0.03443391832858355;
    } else {
      result[8] += 0.04752883409855292;
    }
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7151259868991829416) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5906532180874056737) ) ) {
          result[9] += -0.03260336186985012;
        } else {
          result[9] += 0.007406055256539216;
        }
      } else {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5196707425421068782) ) ) {
          result[9] += -0.020593244045134997;
        } else {
          result[9] += 0.044938390921285015;
        }
      }
    } else {
      if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6330028230889548357) ) ) {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3157059568068864563) ) ) {
          result[9] += 0.03167573677154423;
        } else {
          result[9] += 2.2615855401451094e-05;
        }
      } else {
        result[9] += 0.058293371939454934;
      }
    }
  } else {
    result[9] += -0.034447091578001694;
  }
  if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6228069031667470279) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[10] += -0.014917808069221999;
    } else {
      result[10] += 0.03477712225501042;
    }
  } else {
    result[10] += -0.03443567149837119;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02533929785816911584) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201284907209793085) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.01331399111720688) ) ) {
          result[11] += 0.0003651515032588213;
        } else {
          result[11] += 0.029513869992957444;
        }
      } else {
        result[11] += -0.02296628485938616;
      }
    } else {
      result[11] += -0.03336571371616883;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9578475847829736045) ) ) {
      if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680046924847954093) ) ) {
        if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1688167567511480449) ) ) {
          result[11] += 0.017939156390250757;
        } else {
          result[11] += -0.03299083127109942;
        }
      } else {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3046883387851465064) ) ) {
          result[11] += 0.033208752756319425;
        } else {
          result[11] += 0.0017888528654278527;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6696481797049700369) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
          if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6703432192151691504) ) ) {
            result[11] += 0.007759251424814246;
          } else {
            result[11] += -0.02793040090565897;
          }
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2819572531823988371) ) ) {
            result[11] += 0.005230535244128373;
          } else {
            result[11] += 0.03610239212266813;
          }
        }
      } else {
        result[11] += -0.038163994009314514;
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5423557276411776762) ) ) {
      result[12] += 0.014962209314455266;
    } else {
      result[12] += -0.02548292327286154;
    }
  } else {
    result[12] += 0.03405970598982824;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
    if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5616485544745142278) ) ) {
      result[0] += 0.001751420772385682;
    } else {
      result[0] += -0.03684129846533595;
    }
  } else {
    if ( LIKELY(  (data[62].missing != -1) && (data[62].fvalue <= (double)-0.2005212959786446258) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[0] += 0.00023710584796063762;
          } else {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8026892956997068174) ) ) {
              result[0] += -0.007160479096766953;
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8179725024608467399) ) ) {
                result[0] += 0.002190929278732033;
              } else {
                if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2919728949150694475) ) ) {
                  result[0] += 0.02888924773957047;
                } else {
                  result[0] += -0.0014644137062037228;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4850921819328771201) ) ) {
            if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03882147468724474193) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.757888087624309037) ) ) {
                if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7706884327887083552) ) ) {
                  if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7834887779531077845) ) ) {
                    result[0] += -0.023204249273227354;
                  } else {
                    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7802886916620078717) ) ) {
                      result[0] += 0.034800369507500886;
                    } else {
                      result[0] += -0.003812958320893569;
                    }
                  }
                } else {
                  result[0] += 0.029199189538906704;
                }
              } else {
                result[0] += -0.03941835177884108;
              }
            } else {
              if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03699419415973542735) ) ) {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3962520193348720299) ) ) {
                  result[0] += 0.01349055806830147;
                } else {
                  result[0] += 0.04872891333571276;
                }
              } else {
                result[0] += -0.0012219735357187921;
              }
            }
          } else {
            if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4353591269115003048) ) ) {
              result[0] += 0.013561753949976888;
            } else {
              result[0] += -0.024728774093046496;
            }
          }
        }
      } else {
        result[0] += -0.04977608652833672;
      }
    } else {
      result[0] += -0.031052428573862943;
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02543878283887865757) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6285419272653612888) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.051689767643777529) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5861387095656613866) ) ) {
            result[1] += 0.020565568920461394;
          } else {
            if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5737185163116343967) ) ) {
              result[1] += -0.034690551450276115;
            } else {
              result[1] += -0.00452801694619285;
            }
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[1] += 0.024185082148445475;
          } else {
            result[1] += -0.020918719373548555;
          }
        }
      } else {
        result[1] += -0.03436514546430649;
      }
    } else {
      if ( LIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.2641229410420192214) ) ) {
        if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4186074840297701605) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7418876561688098059) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3919779259888919176) ) ) {
                result[1] += -0.01332916331886125;
              } else {
                result[1] += 0.03349938972049918;
              }
            } else {
              result[1] += -0.016525303783494347;
            }
          } else {
            if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4487757066240845583) ) ) {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7494567179442497284) ) ) {
                if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198276039103393087) ) ) {
                  if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7738885190798082681) ) ) {
                    result[1] += -0.00023905180600395707;
                  } else {
                    result[1] += -0.01993436110136486;
                  }
                } else {
                  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6185950284719347048) ) ) {
                    result[1] += 0.030687193178082387;
                  } else {
                    result[1] += 0.003506795931066082;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6518059545354392137) ) ) {
                  result[1] += -0.04934991126572591;
                } else {
                  if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7834887779531077845) ) ) {
                    result[1] += 0.015804337014228897;
                  } else {
                    result[1] += -0.016684095486173917;
                  }
                }
              }
            } else {
              result[1] += -0.03430276806862447;
            }
          }
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.868347105958318988) ) ) {
            result[1] += 0.03207397502390759;
          } else {
            result[1] += -0.029617042523062784;
          }
        }
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
          result[1] += -0.037485708137043355;
        } else {
          result[1] += -0.005360279240324987;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7272797406239109863) ) ) {
      result[1] += 0.03439660866417177;
    } else {
      if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.08290020270556157367) ) ) {
        result[1] += 0.026358139609476184;
      } else {
        result[1] += -0.010930926701912903;
      }
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5994263347602458714) ) ) {
        result[2] += -0.02687478999631699;
      } else {
        if ( LIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1662008098993101035) ) ) {
          result[2] += -0.00800039917950182;
        } else {
          result[2] += 0.03355553495839449;
        }
      }
    } else {
      result[2] += -0.035723617603170325;
    }
  } else {
    result[2] += 0.03677662368911483;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.522020456991491355) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[3] += -0.03531681534856458;
      } else {
        result[3] += 0.03442247419605759;
      }
    } else {
      result[3] += -0.03482562759712881;
    }
  } else {
    result[3] += 0.03428593541303978;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    result[4] += -0.033312192629349736;
  } else {
    if ( UNLIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.5595551332561439217) ) ) {
      result[4] += 0.038449206040535304;
    } else {
      result[4] += -0.00016146754566600638;
    }
  }
  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5089252727474612437) ) ) {
    result[5] += -0.009603366341622049;
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1626153153041936805) ) ) {
      result[5] += 0.06160156930723079;
    } else {
      result[5] += 0.005668778471341513;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.01807504000138424;
  } else {
    result[6] += 0.039620390257528046;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[7] += 0.0131757180119802;
  } else {
    result[7] += -0.034436072247476884;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.03567376669310262;
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
      result[8] += -0.025466611043940237;
    } else {
      result[8] += 0.05080165418811344;
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.149682406897054587) ) ) {
      if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[9] += -0.017028062002538022;
      } else {
        result[9] += 0.042467571208292254;
      }
    } else {
      result[9] += 0.007042144539290357;
    }
  } else {
    result[9] += -0.030580523432457585;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.028598003375666658;
  } else {
    result[10] += 0.034759637463437694;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.604004431918678808) ) ) {
    if ( LIKELY( !(data[62].missing != -1) || (data[62].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6372956455064343606) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4435132990554971899) ) ) {
          result[11] += 0.004492687737036785;
        } else {
          result[11] += -0.0221173166552312;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02529546880817297796) ) ) {
          if ( LIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.1643432386477124973) ) ) {
            result[11] += -0.03321818747342611;
          } else {
            result[11] += 0.012991530405455677;
          }
        } else {
          result[11] += 0.02881942886736314;
        }
      }
    } else {
      result[11] += -0.03339951790806108;
    }
  } else {
    result[11] += -0.03390137815488325;
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.3045232590571290143) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[12] += 0.009850056714029947;
    } else {
      result[12] += 0.03797274118361239;
    }
  } else {
    result[12] += -0.019205478397517052;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.2441152842941978485) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.049820097983093836) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.2990974588533866219) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.331999447987429308) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
                result[0] += -0.01709847909057682;
              } else {
                if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6800961342014862909) ) ) {
                  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565621971708705262) ) ) {
                    result[0] += 0.0042684977042353935;
                  } else {
                    result[0] += 0.027921725703321947;
                  }
                } else {
                  if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6185896019737596729) ) ) {
                    result[0] += 0.03956099682031062;
                  } else {
                    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.5697406167283413092) ) ) {
                      result[0] += -0.014365962867289752;
                    } else {
                      result[0] += 0.022257675209232927;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6199687967477197637) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
                  result[0] += 0.01332483432375921;
                } else {
                  result[0] += -0.014740044200060289;
                }
              } else {
                result[0] += -0.04769547062084127;
              }
            }
          } else {
            if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)1.560276108794468097) ) ) {
              if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.1400334941196602345) ) ) {
                result[0] += -0.00331053239186136;
              } else {
                result[0] += -0.03348934900102885;
              }
            } else {
              result[0] += 0.02131242661055533;
            }
          }
        } else {
          result[0] += -0.049519599721767976;
        }
      } else {
        result[0] += 0.043054658608810886;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[0] += -0.034515707413900754;
      } else {
        result[0] += -0.0006217179545614834;
      }
    }
  } else {
    result[0] += -0.03444186114971834;
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
    if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.757888087624309037) ) ) {
      if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.549159102295871393) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6449313698140944906) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02362370367465634058) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
              if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6201106865256021949) ) ) {
                result[1] += 0.008952937268435846;
              } else {
                result[1] += -0.03514420753717802;
              }
            } else {
              result[1] += -0.03721886711443141;
            }
          } else {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03829117977286821545) ) ) {
              result[1] += 0.010062466333034245;
            } else {
              result[1] += -0.025298605945504586;
            }
          }
        } else {
          if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6031305061879833618) ) ) {
            if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2695115290691975085) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.333338310990991538) ) ) {
                if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2099024163039080737) ) ) {
                  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6509262132295375869) ) ) {
                    result[1] += -0.002564361196598098;
                  } else {
                    result[1] += 0.03173099456051816;
                  }
                } else {
                  result[1] += -0.06904616090422859;
                }
              } else {
                result[1] += 0.028709759043933945;
              }
            } else {
              result[1] += 0.03695036980940868;
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.752509980424918901) ) ) {
              result[1] += -0.045512092865064656;
            } else {
              if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1666620795644256636) ) ) {
                result[1] += 0.04099443770559753;
              } else {
                if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6033696181219915244) ) ) {
                  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6518059545354392137) ) ) {
                    result[1] += -0.032882796602296475;
                  } else {
                    if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6355114499862949407) ) ) {
                      result[1] += 0.033262532375800104;
                    } else {
                      result[1] += -0.007748121202388363;
                    }
                  }
                } else {
                  result[1] += -0.04480437241458149;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5984827857644668958) ) ) {
          result[1] += 0.03464622693789585;
        } else {
          result[1] += -0.0032938937226689034;
        }
      }
    } else {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3986784014483515937) ) ) {
        result[1] += -0.034120353095840834;
      } else {
        if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.248326097743798796) ) ) {
          if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042394578819912931) ) ) {
            result[1] += -0.013950205707003411;
          } else {
            result[1] += 0.028817727529032368;
          }
        } else {
          result[1] += -0.035052562565604684;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01616106326278636193) ) ) {
      result[1] += 0.004942240269450255;
    } else {
      result[1] += 0.03383182495596929;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.4503997851553450116) ) ) {
      result[2] += 0.0068127204061031255;
    } else {
      result[2] += -0.034670780886584145;
    }
  } else {
    result[2] += 0.03605827112629736;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.034722102104332;
  } else {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.046340101499774411) ) ) {
      result[3] += 0.03456008834570961;
    } else {
      result[3] += -0.038167537364101105;
    }
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3605171091795755789) ) ) {
      result[4] += 0.0019832358608590298;
    } else {
      result[4] += 0.03709374723347175;
    }
  } else {
    result[4] += -0.03277552891366559;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
    result[5] += -0.010476424275914024;
  } else {
    result[5] += 0.03475637831246759;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7679533710113547462) ) ) {
    result[6] += -0.0009479964311964012;
  } else {
    result[6] += 0.041059546176643084;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[7] += 0.012688267792715128;
  } else {
    result[7] += -0.03443586005573828;
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
    result[8] += -0.03568401180551902;
  } else {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1593949673457252525) ) ) {
      result[8] += -0.004289199518002374;
    } else {
      result[8] += 0.037101832537426806;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
        result[9] += -0.038072373289347386;
      } else {
        result[9] += 0.008486381146992461;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.039282253531597311) ) ) {
        result[9] += 0.04246127449839459;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
              result[9] += 0.020460408064672024;
            } else {
              result[9] += -0.012975434377184382;
            }
          } else {
            result[9] += 0.046028576449042305;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411362640307710192) ) ) {
            result[9] += -0.02260389096296076;
          } else {
            result[9] += 0.026128773972952237;
          }
        }
      }
    }
  } else {
    result[9] += -0.030433638587967982;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.028252639132179784;
  } else {
    result[10] += 0.034742420883176715;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.604004431918678808) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.339450912986019482) ) ) {
      if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4513264295938905213) ) ) {
        if ( LIKELY( !(data[44].missing != -1) || (data[44].fvalue <= (double)0.47745003686260723) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6831714853785343378) ) ) {
            if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5423557276411776762) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.20695775318755727) ) ) {
                result[11] += 0.01842383751452422;
              } else {
                result[11] += -0.0033197807412917706;
              }
            } else {
              result[11] += -0.030790200329742036;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8207116639730824836) ) ) {
              result[11] += 0.026557539960115128;
            } else {
              result[11] += 0.006733730848658428;
            }
          }
        } else {
          result[11] += -0.0344386777741446;
        }
      } else {
        if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2696200498543257495) ) ) {
          result[11] += -0.022259067131298167;
        } else {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.3283120857262517567) ) ) {
            result[11] += -0.0209260966660077;
          } else {
            if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.04717240670341981551) ) ) {
              result[11] += 0.0302359991022253;
            } else {
              if ( UNLIKELY( !(data[44].missing != -1) || (data[44].fvalue <= (double)0.0729792818517055325) ) ) {
                result[11] += -0.025305088552105;
              } else {
                result[11] += 0.021579269766722482;
              }
            }
          }
        }
      }
    } else {
      result[11] += -0.0344785108278233;
    }
  } else {
    result[11] += -0.03385487235691325;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2082742240538978107) ) ) {
      result[12] += -0.0038644535293855847;
    } else {
      result[12] += 0.030278730756718327;
    }
  } else {
    result[12] += 0.037119661627228746;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.052887410750197095) ) ) {
      result[0] += 0.015145737694873204;
    } else {
      result[0] += -0.03677002412351865;
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.408570331450285762) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.496998585836840867) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02534834194599817556) ) ) {
            if ( LIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2903175272918419592) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (double)0.141659794179517351) ) ) {
                result[0] += 0.0073702856944345835;
              } else {
                result[0] += 0.04078705113561238;
              }
            } else {
              result[0] += 0.02893577239034415;
            }
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.663485542036863607) ) ) {
              result[0] += 0.002873638731335849;
            } else {
              if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5764246983890970455) ) ) {
                result[0] += -0.032037123813795955;
              } else {
                result[0] += 0.0018291641465422712;
              }
            }
          }
        } else {
          result[0] += -0.049639009029340424;
        }
      } else {
        result[0] += -0.04708031341049926;
      }
    } else {
      result[0] += -0.03442117717470088;
    }
  }
  if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.07128092195383493868) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02543878283887865757) ) ) {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7674883464976085534) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8567430584850248554) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
            if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5711888656457729807) ) ) {
              result[1] += 0.0027904965054289382;
            } else {
              result[1] += -0.035272801195369484;
            }
          } else {
            result[1] += -0.038021618690619305;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[1] += 0.03280279690695888;
          } else {
            result[1] += -0.029773301720150958;
          }
        }
      } else {
        result[1] += -0.03411505177612926;
      }
    } else {
      if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.009992620323456264178) ) ) {
        if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4186074840297701605) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7418876561688098059) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3919779259888919176) ) ) {
                result[1] += -0.012761492916962582;
              } else {
                result[1] += 0.033698802227999626;
              }
            } else {
              result[1] += -0.01603253825987604;
            }
          } else {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288170262485434092) ) ) {
              if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5975437851334178818) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2448772186320965494) ) ) {
                  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.020034280071924648) ) ) {
                    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5470715462473844104) ) ) {
                      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7176464536934513694) ) ) {
                        result[1] += 0.006760835326607545;
                      } else {
                        result[1] += -0.03762606992217017;
                      }
                    } else {
                      result[1] += 0.030860951419617314;
                    }
                  } else {
                    result[1] += -0.014998850881841332;
                  }
                } else {
                  result[1] += -0.04519914481893167;
                }
              } else {
                if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7738885190798082681) ) ) {
                  result[1] += 0.033143538394487186;
                } else {
                  result[1] += -0.005064049673394123;
                }
              }
            } else {
              if ( LIKELY( !(data[62].missing != -1) || (data[62].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[1] += -0.03414298790455658;
              } else {
                result[1] += 0.03709331283341189;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
            if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[1] += 0.03491212430555241;
            } else {
              result[1] += -0.02985873831598611;
            }
          } else {
            result[1] += 0.03266811024557509;
          }
        }
      } else {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.00745241304659836467) ) ) {
          result[1] += -0.033591700250723715;
        } else {
          result[1] += 4.7548158275412395e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01615228905622571529) ) ) {
      result[1] += 0.0041922864633992234;
    } else {
      result[1] += 0.03410292623850685;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701102284419148958) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201602162771583382) ) ) {
      result[2] += 0.04477932427652561;
    } else {
      result[2] += 0.003559813228423307;
    }
  } else {
    result[2] += -0.03481869153574166;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03531733893929231;
    } else {
      result[3] += 0.03453065948000865;
    }
  } else {
    result[3] += -0.034814717806866735;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3605171091795755789) ) ) {
      result[4] += 0.002494895990489371;
    } else {
      result[4] += 0.03711137685599215;
    }
  } else {
    result[4] += -0.032665725877142386;
  }
  if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6458850674358144195) ) ) {
    result[5] += -0.001717894097990152;
  } else {
    result[5] += 0.03391304753215826;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.01724215458127244;
  } else {
    result[6] += 0.03735314370786055;
  }
  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5502918566492193131) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
      result[7] += -0.010394971273458339;
    } else {
      result[7] += 0.01872911423675929;
    }
  } else {
    result[7] += -0.03443562699485404;
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
    result[8] += -0.03566195416181985;
  } else {
    result[8] += 0.02078380578839769;
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7151259868991829416) ) ) {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6330028230889548357) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411362640307710192) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
          result[9] += -0.0235234921351661;
        } else {
          result[9] += 0.0063934994235386716;
        }
      } else {
        result[9] += 0.03465058714575566;
      }
    } else {
      result[9] += 0.06777238633963771;
    }
  } else {
    result[9] += -0.034447876852830475;
  }
  if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6228069031667470279) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[10] += -0.017378053515910888;
    } else {
      result[10] += 0.034101848634657275;
    }
  } else {
    result[10] += -0.034435038403056756;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.604004431918678808) ) ) {
    if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.378897720191467835) ) ) {
      if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6372956455064343606) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6831714853785343378) ) ) {
          if ( LIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
            result[11] += -0.0009688528467673273;
          } else {
            result[11] += -0.035075920749244906;
          }
        } else {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03919509212844381196) ) ) {
            result[11] += 0.02431902296438377;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8000345600721433525) ) ) {
              result[11] += 0.02398555819110729;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8956157687730027517) ) ) {
                result[11] += -0.029864288992856123;
              } else {
                result[11] += 0.003856552791826158;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
          result[11] += -0.029264886652360492;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
            result[11] += -0.01124613099335582;
          } else {
            if ( LIKELY( !(data[70].missing != -1) || (data[70].fvalue <= (double)0.04199559180656883134) ) ) {
              result[11] += 0.03160231578065073;
            } else {
              if ( LIKELY( !(data[70].missing != -1) || (data[70].fvalue <= (double)0.3461349437638273074) ) ) {
                result[11] += -0.01956106744126554;
              } else {
                result[11] += 0.03439309333615082;
              }
            }
          }
        }
      }
    } else {
      result[11] += -0.034476706793649496;
    }
  } else {
    result[11] += -0.033798023174938144;
  }
  if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.3310912535127845113) ) ) {
      result[12] += 0.006656701126036963;
    } else {
      result[12] += 0.06886090217285848;
    }
  } else {
    result[12] += -0.011992346102671959;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.2441152842941978485) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.408570331450285762) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
        if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.049820097983093836) ) ) {
          if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01055406962952331468) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
              if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4555383721268900787) ) ) {
                result[0] += 0.0009556532556689948;
              } else {
                result[0] += -0.03294830327173657;
              }
            } else {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.01605389607708152325) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631546034338769158) ) ) {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5773093211169014749) ) ) {
                      result[0] += 0.02184051681022186;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
                        result[0] += -0.021037836126110463;
                      } else {
                        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2448772186320965494) ) ) {
                          result[0] += 0.006646818660294669;
                        } else {
                          result[0] += 0.028204670845599862;
                        }
                      }
                    }
                  } else {
                    result[0] += -0.017631623766957184;
                  }
                } else {
                  result[0] += 0.02871881860679267;
                }
              } else {
                result[0] += -0.015238066518547944;
              }
            }
          } else {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
              result[0] += -0.0006965788142309574;
            } else {
              result[0] += -0.024513304704557863;
            }
          }
        } else {
          result[0] += 0.04161605994297285;
        }
      } else {
        result[0] += -0.04868194437908491;
      }
    } else {
      result[0] += -0.034414823804579886;
    }
  } else {
    result[0] += -0.03444065870012714;
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4099809178911676399) ) ) {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.6031942790939345267) ) ) {
          result[1] += -0.03234973109490644;
        } else {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
            if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6040625572012682243) ) ) {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8291165553407531252) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1468100803942329613) ) ) {
                    result[1] += -0.004445908041136383;
                  } else {
                    result[1] += 0.03555114953305605;
                  }
                } else {
                  if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6311229509888406364) ) ) {
                    result[1] += 0.04454774126694734;
                  } else {
                    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
                      result[1] += -0.02343819090120879;
                    } else {
                      result[1] += -0.0006175243901122786;
                    }
                  }
                }
              } else {
                result[1] += -0.031229339018201636;
              }
            } else {
              if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03921420805100057222) ) ) {
                result[1] += -0.0037249007919696216;
              } else {
                result[1] += 0.027718511642814567;
              }
            }
          } else {
            result[1] += -0.03458851788729841;
          }
        }
      } else {
        result[1] += 0.030059425067987436;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)3.143420129103045024) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
          result[1] += -0.03449958790406644;
        } else {
          result[1] += -0.011303994356060868;
        }
      } else {
        result[1] += 0.026624762940755727;
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7272797406239109863) ) ) {
      result[1] += 0.03432302896223415;
    } else {
      result[1] += 0.01317288292856988;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5994263347602458714) ) ) {
        result[2] += -0.025910750217629838;
      } else {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5906532180874056737) ) ) {
          result[2] += 0.03250007132434738;
        } else {
          result[2] += -0.005480198648796879;
        }
      }
    } else {
      result[2] += -0.03570926031275647;
    }
  } else {
    result[2] += 0.03550201286737396;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03531916524225618;
    } else {
      result[3] += 0.034521187084638943;
    }
  } else {
    result[3] += -0.034807173459098416;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3605171091795755789) ) ) {
      result[4] += 0.002502659832828172;
    } else {
      result[4] += 0.03712488233159672;
    }
  } else {
    result[4] += -0.032545767452396165;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
    result[5] += -0.00918289224873617;
  } else {
    result[5] += 0.03274831455564973;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.016610950594427253;
  } else {
    result[6] += 0.035870666348357574;
  }
  if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.601025912473557633) ) ) {
    result[7] += 0.011477747337209144;
  } else {
    result[7] += -0.034435436728238934;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.03563809642230257;
  } else {
    result[8] += 0.021429684814552288;
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7151259868991829416) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5906532180874056737) ) ) {
          result[9] += -0.031951511008934515;
        } else {
          result[9] += 0.006419905283195927;
        }
      } else {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3130849234669778047) ) ) {
          result[9] += -0.013127144699699668;
        } else {
          result[9] += 0.04670496156719059;
        }
      }
    } else {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8375459600460725129) ) ) {
        result[9] += 0.03525840043047684;
      } else {
        if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6330028230889548357) ) ) {
          result[9] += 0.0060688514780034885;
        } else {
          result[9] += 0.04931348305124295;
        }
      }
    }
  } else {
    result[9] += -0.03444762607198781;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.02894543180258731;
  } else {
    result[10] += 0.025266317034258197;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.604004431918678808) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.339450912986019482) ) ) {
      if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6372956455064343606) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6819786066284765358) ) ) {
          if ( LIKELY( !(data[76].missing != -1) || (data[76].fvalue <= (double)1.036977249510693255) ) ) {
            if ( LIKELY( !(data[76].missing != -1) || (data[76].fvalue <= (double)0.4798603971672130153) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6831714853785343378) ) ) {
                result[11] += -0.003502357430781279;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8207116639730824836) ) ) {
                  result[11] += 0.024266700599489915;
                } else {
                  result[11] += 0.006697723431945635;
                }
              }
            } else {
              result[11] += -0.024627159122560992;
            }
          } else {
            result[11] += 0.03839837928508962;
          }
        } else {
          result[11] += -0.03747144839132351;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
          result[11] += -0.028786337683539047;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5319589089888333566) ) ) {
            result[11] += -0.011216987126698826;
          } else {
            if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.02227185099121847117) ) ) {
              result[11] += 0.032194734142010656;
            } else {
              result[11] += 0.009335140504762585;
            }
          }
        }
      }
    } else {
      result[11] += -0.034472734972959655;
    }
  } else {
    result[11] += -0.03373293543691401;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    result[12] += 0.005879661701042589;
  } else {
    result[12] += 0.03556439881921335;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.859953023313256959) ) ) {
      result[0] += 0.0028814908938890474;
    } else {
      result[0] += -0.036682421746966454;
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02542347745902670889) ) ) {
          if ( LIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2903175272918419592) ) ) {
            result[0] += 0.010374624678757762;
          } else {
            result[0] += 0.031376581797766534;
          }
        } else {
          if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4582281153312064981) ) ) {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4078704968464516578) ) ) {
              result[0] += 0.0020805033754834426;
            } else {
              if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3702778695712657941) ) ) {
                result[0] += 0.04705099155512726;
              } else {
                result[0] += 0.004964210232702364;
              }
            }
          } else {
            result[0] += -0.029941938479425976;
          }
        }
      } else {
        result[0] += -0.04905474697457781;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
        result[0] += -0.0373767459209461;
      } else {
        if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01055818093701236214) ) ) {
          result[0] += 0.01022596862272522;
        } else {
          result[0] += -0.020338863803874296;
        }
      }
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02543878283887865757) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6285419272653612888) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8567430584850248554) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5810222695237325929) ) ) {
              result[1] += 0.015165434363527594;
            } else {
              result[1] += -0.013842497255999084;
            }
          } else {
            result[1] += -0.03811221227319047;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
            result[1] += 0.03219298954809497;
          } else {
            result[1] += -0.02873167324216772;
          }
        }
      } else {
        result[1] += -0.0342491264422199;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
          if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.06216614491068821885) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7418876561688098059) ) ) {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3919779259888919176) ) ) {
                  result[1] += -0.011026385043342852;
                } else {
                  result[1] += 0.033400256398549835;
                }
              } else {
                result[1] += -0.015783027555376174;
              }
            } else {
              if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.606424786646028724) ) ) {
                  if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03867047475123081696) ) ) {
                    result[1] += -0.030934834971634923;
                  } else {
                    result[1] += 0.006618284900327718;
                  }
                } else {
                  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288170262485434092) ) ) {
                    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5884854435699485853) ) ) {
                      result[1] += 0.02964099872478956;
                    } else {
                      result[1] += -0.0015741141619073314;
                    }
                  } else {
                    result[1] += -0.032540723063627486;
                  }
                }
              } else {
                result[1] += 0.02040609969685547;
              }
            }
          } else {
            result[1] += -0.04005195639067553;
          }
        } else {
          if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += 0.034812237201973684;
          } else {
            if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2988241001254555163) ) ) {
              result[1] += -0.03445892197841973;
            } else {
              result[1] += 0.035353082037203026;
            }
          }
        }
      } else {
        result[1] += -0.03541905559501274;
      }
    }
  } else {
    if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.2686521877312643691) ) ) {
      result[1] += 0.0009792138929924407;
    } else {
      result[1] += 0.033700141409045835;
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
    result[2] += -0.02689430302232203;
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7017175228607138715) ) ) {
      result[2] += 0.04353782377632594;
    } else {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5906532180874056737) ) ) {
        result[2] += 0.011443792109310586;
      } else {
        result[2] += -0.02116666056989062;
      }
    }
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.0684155971796704121) ) ) {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.069919466118069984) ) ) {
      if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4809228381780851769) ) ) {
        result[3] += -0.03387378586655296;
      } else {
        if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.522020456991491355) ) ) {
          result[3] += -0.03456431155649209;
        } else {
          result[3] += 0.034561450279515536;
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.15401237022116554) ) ) {
        result[3] += 0.034546187673611256;
      } else {
        result[3] += -0.03771120480129879;
      }
    }
  } else {
    result[3] += 0.03334327961082783;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    result[4] += -0.03301570489077624;
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2545589699450032106) ) ) {
      result[4] += -0.009156187970507542;
    } else {
      result[4] += 0.04127197899330582;
    }
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
    result[5] += -0.008427293241918914;
  } else {
    result[5] += 0.03189744082007828;
  }
  result[6] += 0;
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[7] += 0.011131733427898059;
  } else {
    result[7] += -0.03443529587954158;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.03561797198776565;
  } else {
    result[8] += 0.020883012812987822;
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7151259868991829416) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411362640307710192) ) ) {
      if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1676582117311516129) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7368513205754015916) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6222345050799448218) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.947255632047349305) ) ) {
              result[9] += 0.007180548040177126;
            } else {
              result[9] += -0.03497589606236775;
            }
          } else {
            result[9] += 0.016039153732056628;
          }
        } else {
          result[9] += -0.019984365013546203;
        }
      } else {
        result[9] += 0.03890036291417851;
      }
    } else {
      result[9] += 0.033391611939608636;
    }
  } else {
    result[9] += -0.03444729348621979;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.02719030998647455;
  } else {
    result[10] += 0.03470177267723128;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.604004431918678808) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.339450912986019482) ) ) {
      if ( UNLIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07272301454593708969) ) ) {
        if ( LIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
          if ( LIKELY( !(data[76].missing != -1) || (data[76].fvalue <= (double)1.036977249510693255) ) ) {
            result[11] += 0.0022483003115796917;
          } else {
            result[11] += 0.0382123910121279;
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
            result[11] += -0.03476878775350677;
          } else {
            result[11] += 0.007014426978591397;
          }
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02541512906869020441) ) ) {
          result[11] += -0.028865211157847355;
        } else {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.3283120857262517567) ) ) {
            result[11] += -0.008005120795110092;
          } else {
            result[11] += 0.027219823823818753;
          }
        }
      }
    } else {
      result[11] += -0.034470184513044795;
    }
  } else {
    result[11] += -0.033651496358317955;
  }
  if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.3310912535127845113) ) ) {
      result[12] += 0.006270582666609035;
    } else {
      result[12] += 0.06897022731972695;
    }
  } else {
    result[12] += -0.011970015410040242;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.980962009341198482) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.049820097983093836) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02542347745902670889) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4555851256733903232) ) ) {
            result[0] += 0.006076380874831517;
          } else {
            if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.02474108230019015503) ) ) {
              result[0] += 0.031409057884443224;
            } else {
              result[0] += 0.004105244440958387;
            }
          }
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2127820753294112632) ) ) {
            result[0] += 0.0022394847465123714;
          } else {
            result[0] += -0.030692504598804453;
          }
        }
      } else {
        result[0] += 0.04449225996471136;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
        result[0] += -0.03750351790681811;
      } else {
        if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01611584235836580406) ) ) {
          result[0] += 0.0031233256408295636;
        } else {
          result[0] += -0.03239371126933817;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.67258527885692132) ) ) {
      result[0] += -0.03972219814309666;
    } else {
      result[0] += 0.017234476252288373;
    }
  }
  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.03913809540547408261) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.1964249034382896386) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01327865683365758893) ) ) {
            if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2687923358271706586) ) ) {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6581356384813585869) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
                  result[1] += -0.001992849539523502;
                } else {
                  result[1] += -0.03810884741764445;
                }
              } else {
                if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3138580896439420176) ) ) {
                  if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1677298399680404728) ) ) {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
                      result[1] += 0.02884800670467933;
                    } else {
                      result[1] += -0.02981238163898583;
                    }
                  } else {
                    result[1] += 0.035442786814767466;
                  }
                } else {
                  result[1] += -0.03638626163689944;
                }
              }
            } else {
              result[1] += -0.04113123617264351;
            }
          } else {
            if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03919200317927835214) ) ) {
              if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5687773417518663388) ) ) {
                result[1] += 0.034187662662572144;
              } else {
                result[1] += 0.005331124430531329;
              }
            } else {
              if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6042670693850009656) ) ) {
                result[1] += 0.01649667184412352;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.1611915875678956445) ) ) {
                  result[1] += 0.00959603199823573;
                } else {
                  if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1673333860246105365) ) ) {
                    result[1] += -0.026339500355936057;
                  } else {
                    result[1] += -0.002693353650181363;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[44].missing != -1) || (data[44].fvalue <= (double)0.04195860077201046118) ) ) {
            result[1] += 0.029479334315069435;
          } else {
            result[1] += -0.036541877375682694;
          }
        }
      } else {
        result[1] += -0.035544124338046185;
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)3.955665202556394533) ) ) {
        result[1] += -0.0345813408840139;
      } else {
        result[1] += 0.021270162969366173;
      }
    }
  } else {
    result[1] += 0.0342284660434317;
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
    result[2] += -0.02647113980726576;
  } else {
    if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.3937074974179520792) ) ) {
      result[2] += 0.0049593703869083615;
    } else {
      result[2] += 0.04973794109480117;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.03469288281220849;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.037727136045756365;
    } else {
      result[3] += 0.03453005567362131;
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2545589699450032106) ) ) {
    result[4] += -0.028848089920235062;
  } else {
    result[4] += 0.0345811735355187;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7672902167979661625) ) ) {
    result[5] += -0.007660910091346394;
  } else {
    result[5] += 0.030886637203779287;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
    result[6] += 0.03385639417414026;
  } else {
    result[6] += -0.009453055494471778;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
    result[7] += 0.010632821868371176;
  } else {
    result[7] += -0.034435120054376905;
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
    result[8] += -0.035611103283042435;
  } else {
    result[8] += 0.0211740854998387;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
        result[9] += -0.026925727954823682;
      } else {
        result[9] += 0.006747664658754385;
      }
    } else {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8179725024608467399) ) ) {
        result[9] += 0.04142358321481845;
      } else {
        result[9] += 0.009402243626174535;
      }
    }
  } else {
    result[9] += -0.029367240036084163;
  }
  if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6228069031667470279) ) ) {
    result[10] += 0.02201268108123974;
  } else {
    result[10] += -0.034434583054983675;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.604004431918678808) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.339450912986019482) ) ) {
      if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01612124187031319447) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4261827014272487335) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6019828000817896152) ) ) {
            if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198191867677270706) ) ) {
              result[11] += 0.0026512525832911174;
            } else {
              result[11] += -0.01951627125382547;
            }
          } else {
            result[11] += 0.02277672988588122;
          }
        } else {
          result[11] += -0.033957539511807015;
        }
      } else {
        if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.3283120857262517567) ) ) {
          result[11] += -0.013255549171719639;
        } else {
          if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03903137856556406632) ) ) {
            result[11] += -0.022009445641557823;
          } else {
            if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.02069317536439339508) ) ) {
              result[11] += 0.02976757255912073;
            } else {
              result[11] += 0.002787401271735706;
            }
          }
        }
      }
    } else {
      result[11] += -0.034467845018446325;
    }
  } else {
    result[11] += -0.03357205341115043;
  }
  if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6202117124377256596) ) ) {
    result[12] += 0.030844851470545304;
  } else {
    result[12] += 0.0045017743944660415;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.2441152842941978485) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.408570331450285762) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
        if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.049820097983093836) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02542347745902670889) ) ) {
            if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201618691574436459) ) ) {
              result[0] += 0.006422586234868046;
            } else {
              result[0] += 0.023932871161843672;
            }
          } else {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9687903016561022485) ) ) {
              result[0] += -0.01860351117953854;
            } else {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.663485542036863607) ) ) {
                result[0] += 0.00505053131862625;
              } else {
                result[0] += -0.011826245878722873;
              }
            }
          }
        } else {
          result[0] += 0.04120434610512963;
        }
      } else {
        result[0] += -0.04829568229650895;
      }
    } else {
      result[0] += -0.03440359326497638;
    }
  } else {
    result[0] += -0.03443899785513617;
  }
  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.03913809540547408261) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.1964249034382896386) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.567875513741955662) ) ) {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01327865683365758893) ) ) {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
              if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02362370367465634058) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
                  result[1] += 0.027759036779184187;
                } else {
                  if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
                    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8852288359006353913) ) ) {
                      result[1] += -0.0020174498954293393;
                    } else {
                      result[1] += -0.03620067598452307;
                    }
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
                      result[1] += 0.03154677596156063;
                    } else {
                      result[1] += -0.03487838017476374;
                    }
                  }
                }
              } else {
                result[1] += -0.04763468398775065;
              }
            } else {
              result[1] += -0.03600572041539478;
            }
          } else {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1242856781709405778) ) ) {
              if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5687773417518663388) ) ) {
                result[1] += 0.03402014840047723;
              } else {
                result[1] += 0.003966572272145553;
              }
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.716535977018746717) ) ) {
                result[1] += 0.020067090696083482;
              } else {
                result[1] += -0.00621440305927823;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.004822435581602372949) ) ) {
            result[1] += 0.029709889995023275;
          } else {
            result[1] += -0.027122475297302346;
          }
        }
      } else {
        result[1] += -0.035527086974565296;
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)3.955665202556394533) ) ) {
        result[1] += -0.03455999887100556;
      } else {
        result[1] += 0.02053177395263354;
      }
    }
  } else {
    result[1] += 0.03418319447175102;
  }
  if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5786855224598528302) ) ) {
    if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)0.4791935386714787914) ) ) {
      result[2] += 0.004335348435939107;
    } else {
      result[2] += 0.04940133985374769;
    }
  } else {
    result[2] += -0.02862530764665712;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.03531687373457994;
    } else {
      result[3] += 0.034497717276245864;
    }
  } else {
    result[3] += -0.034785833330956216;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    result[4] += -0.032846092765190016;
  } else {
    result[4] += 0.03363274405814245;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4405754919781003642) ) ) {
    result[5] += 0.030980873667600484;
  } else {
    result[5] += -0.007865416902386629;
  }
  result[6] += 0;
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2919728949150694475) ) ) {
    result[7] += -0.0354772271190091;
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2855774686981291111) ) ) {
      result[7] += 0.02419335763694381;
    } else {
      result[7] += -0.03466394729142932;
    }
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.03558576295486508;
  } else {
    result[8] += 0.02097718557620898;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5906532180874056737) ) ) {
          result[9] += -0.030714362754705623;
        } else {
          result[9] += 0.007313688501394231;
        }
      } else {
        result[9] += 0.021248146402812088;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.039282253531597311) ) ) {
        result[9] += 0.04200672397483578;
      } else {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7140394947178604346) ) ) {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7671941759983568199) ) ) {
            result[9] += 0.0029897125724363685;
          } else {
            result[9] += 0.06978103554412476;
          }
        } else {
          result[9] += -0.009327464622652867;
        }
      }
    }
  } else {
    result[9] += -0.02905926130160975;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.026454544693618617;
  } else {
    result[10] += 0.034678146262580326;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5808059554814645198) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.339450912986019482) ) ) {
      if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6372956455064343606) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5386605008935624328) ) ) {
          if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03722443587557353745) ) ) {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03858425638752763925) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7234889581658809909) ) ) {
                result[11] += -0.0028533211267052503;
              } else {
                result[11] += 0.012485541693886826;
              }
            } else {
              if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03840237900925811548) ) ) {
                result[11] += -0.03711296836988528;
              } else {
                result[11] += -0.004262833652450858;
              }
            }
          } else {
            result[11] += 0.015350625041770406;
          }
        } else {
          result[11] += -0.023135923691892036;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02530103440270330475) ) ) {
          if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1174113232083231068) ) ) {
            result[11] += -0.026620233566352337;
          } else {
            result[11] += 0.025753579542494683;
          }
        } else {
          result[11] += 0.028086803748188418;
        }
      }
    } else {
      result[11] += -0.03446667952009296;
    }
  } else {
    result[11] += -0.03490692735529599;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    result[12] += 0.00539140975902583;
  } else {
    result[12] += 0.03402536155606132;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.992958367271291609) ) ) {
      result[0] += 0.015527456467933983;
    } else {
      result[0] += -0.037354724288851136;
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)2.81764075380878376) ) ) {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8125319923846624492) ) ) {
              result[0] += 0.0008755760303429473;
            } else {
              result[0] += -0.037810835808738036;
            }
          } else {
            result[0] += 0.010275450398185018;
          }
        } else {
          if ( LIKELY(  (data[62].missing != -1) && (data[62].fvalue <= (double)-0.5408516206567370865) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.01605389607708152325) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5454297194200495857) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631546034338769158) ) ) {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794991264735208147) ) ) {
                    result[0] += 0.020723146548640343;
                  } else {
                    result[0] += -0.014378338347015858;
                  }
                } else {
                  result[0] += 0.0387213022975748;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
                  result[0] += -0.017029837802016775;
                } else {
                  result[0] += 0.012516317915848618;
                }
              }
            } else {
              result[0] += -0.019691582023801127;
            }
          } else {
            result[0] += -0.020787617533908245;
          }
        }
      } else {
        result[0] += -0.04868643419091762;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
        result[0] += -0.03791072590524449;
      } else {
        result[0] += -0.00523285756055387;
      }
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8125319923846624492) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
              if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5854045214509916439) ) ) {
                result[1] += 0.018007112326259726;
              } else {
                result[1] += -0.01979844535126759;
              }
            } else {
              result[1] += -0.037315308672198205;
            }
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5414388684968288734) ) ) {
              if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.1458410221669886042) ) ) {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9134284065746335335) ) ) {
                  if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
                    result[1] += 0.032399909304594694;
                  } else {
                    if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973090349756556838) ) ) {
                      if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3146853774532936687) ) ) {
                        result[1] += -0.01142856683561186;
                      } else {
                        result[1] += 0.029227989119993126;
                      }
                    } else {
                      result[1] += -0.03796137642124437;
                    }
                  }
                } else {
                  result[1] += -0.0805293660316007;
                }
              } else {
                result[1] += 0.0364238466618171;
              }
            } else {
              if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6041841056122270182) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1751599491883950865) ) ) {
                  result[1] += -0.01189777227562444;
                } else {
                  result[1] += -0.038890423375383544;
                }
              } else {
                if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619536435150199849) ) ) {
                  result[1] += 0.011614796640039686;
                } else {
                  result[1] += -0.010958086941977828;
                }
              }
            }
          }
        } else {
          result[1] += -0.03604172585663947;
        }
      } else {
        if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
          result[1] += 0.002785116991678787;
        } else {
          result[1] += 0.03334515840595367;
        }
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)3.143420129103045024) ) ) {
        result[1] += -0.03265960384315031;
      } else {
        result[1] += 0.026059893677342728;
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7272797406239109863) ) ) {
      result[1] += 0.03424928120522298;
    } else {
      result[1] += 0.01185598935919965;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1312147400220772531) ) ) {
      result[2] += 0.006263011553490528;
    } else {
      result[2] += -0.032175416630501136;
    }
  } else {
    result[2] += 0.034608056895142965;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.03468193463913992;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03754487396124051;
    } else {
      result[3] += 0.03451778526998779;
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    result[4] += -0.03274359585475015;
  } else {
    result[4] += 0.03324224892926301;
  }
  result[5] += 0;
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1843972432368344017) ) ) {
    result[6] += 0.032823124894051266;
  } else {
    result[6] += -0.008445617953359384;
  }
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2919728949150694475) ) ) {
    result[7] += -0.03547426784541951;
  } else {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
      result[7] += 0.023746574131963242;
    } else {
      result[7] += -0.03465429252666663;
    }
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.035585605266199846;
  } else {
    result[8] += 0.020502230911553468;
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7151259868991829416) ) ) {
    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6765185432257453391) ) ) {
      if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03884672132219828961) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.052013227850654431) ) ) {
          if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6494325973844891076) ) ) {
            result[9] += -0.00020546982704688967;
          } else {
            result[9] += 0.045755435236819415;
          }
        } else {
          result[9] += 0.03614388806805955;
        }
      } else {
        result[9] += -0.023270550533191776;
      }
    } else {
      result[9] += 0.03954950337256603;
    }
  } else {
    result[9] += -0.03444798325407266;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.02601959998336579;
  } else {
    result[10] += 0.03466628898669793;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.604004431918678808) ) ) {
    if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.378897720191467835) ) ) {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4376948632108994541) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6200626008156692182) ) ) {
          if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
            result[11] += 0.0017300479265740497;
          } else {
            if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.1577616093033338551) ) ) {
              result[11] += -0.03959736853328183;
            } else {
              result[11] += 0.00427683396762371;
            }
          }
        } else {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7750110408925473537) ) ) {
            if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5981697855541171505) ) ) {
              result[11] += -0.01935835682878839;
            } else {
              result[11] += 0.03592325106856677;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
              result[11] += -0.021778607690908704;
            } else {
              result[11] += 0.011075370449686112;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02531077419094289807) ) ) {
          result[11] += 0.0036726342418152507;
        } else {
          result[11] += 0.031993329857578814;
        }
      }
    } else {
      result[11] += -0.034466577966898344;
    }
  } else {
    result[11] += -0.033423378740197615;
  }
  result[12] += 0;
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.2441152842941978485) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.049820097983093836) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02542347745902670889) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
            result[0] += 0.005210889528231858;
          } else {
            if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.2604575090452669328) ) ) {
              result[0] += 0.03482290763843307;
            } else {
              result[0] += 0.006459172493659377;
            }
          }
        } else {
          if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4582281153312064981) ) ) {
            result[0] += 0.0018018260158720878;
          } else {
            result[0] += -0.029731277573143002;
          }
        }
      } else {
        result[0] += 0.042169940890551115;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        result[0] += -0.034507832777150485;
      } else {
        result[0] += -0.002320595413080086;
      }
    }
  } else {
    result[0] += -0.03443805161021269;
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02543878283887865757) ) ) {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7077860028025079187) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.128899642609948684) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5861387095656613866) ) ) {
            result[1] += 0.0380680669268687;
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.051689767643777529) ) ) {
              result[1] += -0.022218961555974436;
            } else {
              result[1] += 0.005933497332511821;
            }
          }
        } else {
          result[1] += -0.04366500646876107;
        }
      } else {
        result[1] += -0.034140538189575236;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
          if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.006190866369865219779) ) ) {
            if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.05360688182398986451) ) ) {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9956278315750470842) ) ) {
                if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6295406941023361513) ) ) {
                  if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9115349274719516393) ) ) {
                    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6301498834625898215) ) ) {
                      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7978891662630570591) ) ) {
                        result[1] += -0.019447316947344105;
                      } else {
                        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3741592770462854878) ) ) {
                          result[1] += -0.004357930145493465;
                        } else {
                          result[1] += 0.02657617684803503;
                        }
                      }
                    } else {
                      result[1] += -0.03421999715877985;
                    }
                  } else {
                    result[1] += 0.022111510167985536;
                  }
                } else {
                  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2245348391126071319) ) ) {
                    result[1] += -0.058162226276639445;
                  } else {
                    result[1] += 0.008138240975514207;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6290623373692068032) ) ) {
                  result[1] += 0.03430385600938516;
                } else {
                  if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5934799557587445706) ) ) {
                    if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7859546517444143676) ) ) {
                      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
                        result[1] += -0.01312063865543008;
                      } else {
                        result[1] += 0.02903189978068377;
                      }
                    } else {
                      result[1] += -0.028704143687092884;
                    }
                  } else {
                    result[1] += 0.026045678877059872;
                  }
                }
              }
            } else {
              result[1] += -0.040759660364394754;
            }
          } else {
            result[1] += -0.04181212877221203;
          }
        } else {
          if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += 0.034763425919098784;
          } else {
            if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2988241001254555163) ) ) {
              result[1] += -0.03479286552873005;
            } else {
              result[1] += 0.03521620843990046;
            }
          }
        }
      } else {
        result[1] += -0.035363223187744486;
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.25444770141758899) ) ) {
      result[1] += 0.03418427993988688;
    } else {
      result[1] += 0.010871395662577122;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.949522397453373523) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
      result[2] += 0.010367878853333953;
    } else {
      result[2] += -0.03562649966379577;
    }
  } else {
    result[2] += 0.033698128435914146;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.185136226760709538) ) ) {
      result[3] += -0.035309184322963906;
    } else {
      result[3] += 0.03448390833640733;
    }
  } else {
    result[3] += -0.0347718428006242;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    result[4] += -0.03263270566607511;
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2545589699450032106) ) ) {
      result[4] += -0.008623053076511763;
    } else {
      result[4] += 0.042643175499897074;
    }
  }
  result[5] += 0;
  result[6] += 0;
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2919728949150694475) ) ) {
    result[7] += -0.0354807175395615;
  } else {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
      result[7] += -0.016357899272953707;
    } else {
      result[7] += 0.01862368976098509;
    }
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
    result[8] += -0.035577098530510706;
  } else {
    result[8] += 0.020550647492715877;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4455075528344836777) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411362640307710192) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6364320151400605363) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1404983016608492563) ) ) {
          result[9] += 0.0007207087553419159;
        } else {
          result[9] += 0.03750063869554459;
        }
      } else {
        result[9] += -0.004384073543156177;
      }
    } else {
      result[9] += 0.031676564415185876;
    }
  } else {
    result[9] += -0.028425458801996262;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.02556904964856458;
  } else {
    result[10] += 0.03465484578656113;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.604004431918678808) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.339450912986019482) ) ) {
      if ( UNLIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07272301454593708969) ) ) {
        if ( LIKELY( !(data[76].missing != -1) || (data[76].fvalue <= (double)1.036977249510693255) ) ) {
          if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5386605008935624328) ) ) {
            result[11] += 0.0017309505369299703;
          } else {
            result[11] += -0.02479438534319962;
          }
        } else {
          result[11] += 0.03555445190783809;
        }
      } else {
        if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.02227185099121847117) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3136106764673134428) ) ) {
            result[11] += 0.0374229675162902;
          } else {
            if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03293685061634032268) ) ) {
              result[11] += 0.0036269748270812236;
            } else {
              result[11] += 0.03263708257698746;
            }
          }
        } else {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5967180628753120386) ) ) {
            result[11] += -0.025387086744243205;
          } else {
            result[11] += 0.012132689831299594;
          }
        }
      }
    } else {
      result[11] += -0.0344631483359867;
    }
  } else {
    result[11] += -0.033353555838911385;
  }
  if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2685624525135682505) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.3310912535127845113) ) ) {
      result[12] += 0.006050147673414163;
    } else {
      result[12] += 0.06721611920811606;
    }
  } else {
    result[12] += -0.012344521840466985;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.980962009341198482) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.049820097983093836) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02542347745902670889) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4157964282199893558) ) ) {
              result[0] += -0.0015036304994395695;
            } else {
              result[0] += 0.019010799870003623;
            }
          } else {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3605171091795755789) ) ) {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3864370910863018649) ) ) {
                result[0] += 0.0015637818093345848;
              } else {
                result[0] += 0.04732071316267591;
              }
            } else {
              if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)0.9848163283748062602) ) ) {
                result[0] += -0.017752287623701974;
              } else {
                result[0] += 0.004992035205814183;
              }
            }
          }
        } else {
          result[0] += -0.04921898919610819;
        }
      } else {
        result[0] += 0.04343182508184089;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
        result[0] += -0.03822796775932742;
      } else {
        result[0] += -0.005471435016325851;
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.67258527885692132) ) ) {
      result[0] += -0.04112918381128338;
    } else {
      result[0] += 0.015864259533614748;
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4410114951078237255) ) ) {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5912475240206701566) ) ) {
              result[1] += 0.005878605700029852;
            } else {
              result[1] += -0.033418421049712946;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.6251558437350327457) ) ) {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
                  result[1] += -0.008890587342224568;
                } else {
                  result[1] += 0.033047170851571994;
                }
              } else {
                result[1] += -0.022314451752197574;
              }
            } else {
              if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6311229509888406364) ) ) {
                result[1] += 0.03718710201231113;
              } else {
                if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6201391643784606167) ) ) {
                  result[1] += -0.03246178045648502;
                } else {
                  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906447706809286435) ) ) {
                    result[1] += -0.01997851665370481;
                  } else {
                    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7859546517444143676) ) ) {
                      result[1] += 0.027639949131572163;
                    } else {
                      if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619536435150199849) ) ) {
                        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6196852137990794818) ) ) {
                          result[1] += -0.002546803664366189;
                        } else {
                          result[1] += 0.0280912006707442;
                        }
                      } else {
                        result[1] += -0.018297770632614094;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          result[1] += -0.035927743554323904;
        }
      } else {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += 0.03474924511403386;
        } else {
          result[1] += 0.007407703701602006;
        }
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
        result[1] += -0.03434160266097874;
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2526644215816800654) ) ) {
          result[1] += 0.034453118724822096;
        } else {
          result[1] += -0.020765251758141538;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7272797406239109863) ) ) {
      result[1] += 0.03417594988323515;
    } else {
      result[1] += 0.010335720626363279;
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865247434682950844) ) ) {
    result[2] += -0.025722147520256734;
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7017175228607138715) ) ) {
      result[2] += 0.04300719277824926;
    } else {
      if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3988745145851049778) ) ) {
        result[2] += -0.02319172151793873;
      } else {
        result[2] += 0.011104043357976604;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9973065323808424365) ) ) {
    result[3] += -0.034673608078652794;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03734947758327878;
    } else {
      result[3] += 0.03450716945687401;
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    result[4] += -0.0325249281953525;
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2545589699450032106) ) ) {
      result[4] += -0.007440591402621602;
    } else {
      result[4] += 0.04303491857385764;
    }
  }
  result[5] += 0;
  result[6] += 0;
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08069322205302205397) ) ) {
    result[7] += -0.027610922402534988;
  } else {
    result[7] += 0.013454435430305191;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6192270884203031622) ) ) {
    result[8] += -0.035557212394762956;
  } else {
    result[8] += 0.020303572145238216;
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7151259868991829416) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03926013208742445276) ) ) {
        result[9] += -0.032660033415112595;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7133519935793480871) ) ) {
          result[9] += -0.006088769892405137;
        } else {
          result[9] += 0.03886785331288114;
        }
      }
    } else {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7140394947178604346) ) ) {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7671941759983568199) ) ) {
          result[9] += 0.01630683121067241;
        } else {
          result[9] += 0.06149180552567164;
        }
      } else {
        result[9] += -0.0036310233993714102;
      }
    }
  } else {
    result[9] += -0.034448713112593725;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.025084414061924673;
  } else {
    result[10] += 0.03464390914617738;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.604004431918678808) ) ) {
    if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.378897720191467835) ) ) {
      if ( UNLIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07272301454593708969) ) ) {
        result[11] += 0.0014367779525459754;
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02530103440270330475) ) ) {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.077187319491657025) ) ) {
            result[11] += -0.032962963541725156;
          } else {
            result[11] += 0.012637415329036;
          }
        } else {
          if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.02476656194780175665) ) ) {
            if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03903108307575337693) ) ) {
              result[11] += 0.002452766579877809;
            } else {
              result[11] += 0.032106966148881914;
            }
          } else {
            result[11] += -0.0013125635744475543;
          }
        }
      }
    } else {
      result[11] += -0.034463381788387676;
    }
  } else {
    result[11] += -0.03327899300957684;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    result[12] += 0.005085079301682856;
  } else {
    result[12] += 0.03364167480073981;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1773768997600204955) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[0] += 0.010572387556953609;
    } else {
      result[0] += -0.03810552597052247;
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3068695584203817162) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02542347745902670889) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
            result[0] += 0.0070744880344842265;
          } else {
            result[0] += 0.030435607101596266;
          }
        } else {
          if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.240958415319217467) ) ) {
            result[0] += 0.0022451149243013463;
          } else {
            result[0] += -0.03209149624505288;
          }
        }
      } else {
        result[0] += -0.048485187690508;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.527540431619500927) ) ) {
        result[0] += -0.03847502451406666;
      } else {
        result[0] += -0.005320286066526526;
      }
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.350394523837886274) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4099809178911676399) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7106036819621696088) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9967767353672805086) ) ) {
            if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5737185163116343967) ) ) {
              if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5912475240206701566) ) ) {
                result[1] += 0.0014071291255540826;
              } else {
                result[1] += -0.040535405980226195;
              }
            } else {
              result[1] += 0.0061795888728131;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7418876561688098059) ) ) {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109686194058244313) ) ) {
                  result[1] += -0.005819523812526377;
                } else {
                  result[1] += 0.03299442696589977;
                }
              } else {
                result[1] += -0.021887635437883624;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.3117070291246812896) ) ) {
                if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.694110952891262678) ) ) {
                  if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.07972073567814264) ) ) {
                    result[1] += 0.0014123166309964008;
                  } else {
                    result[1] += -0.03596785334564819;
                  }
                } else {
                  result[1] += 0.02455359788008179;
                }
              } else {
                result[1] += -0.039110013404666126;
              }
            }
          }
        } else {
          result[1] += -0.03849180800583084;
        }
      } else {
        result[1] += 0.0291082839802113;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)3.143420129103045024) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.847531153659410341) ) ) {
          result[1] += -0.03383965583057104;
        } else {
          result[1] += -0.0016553110180256114;
        }
      } else {
        result[1] += 0.02559800750765975;
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7272797406239109863) ) ) {
      result[1] += 0.034139594917361606;
    } else {
      result[1] += 0.010144486283271761;
    }
  }
  if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6201094870353908162) ) ) {
    result[2] += 0.013260518748686391;
  } else {
    result[2] += -0.01447352582356263;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.0684155971796704121) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
      if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03924328727704508302) ) ) {
        result[3] += 0.033427983274769174;
      } else {
        result[3] += -0.024410767329562544;
      }
    } else {
      result[3] += -0.03476592714076806;
    }
  } else {
    result[3] += 0.03311682686189795;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490161108091449416) ) ) {
    result[4] += -0.03239976025142992;
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2545589699450032106) ) ) {
      result[4] += -0.007431293026712638;
    } else {
      result[4] += 0.043455037399590384;
    }
  }
  result[5] += 0;
  result[6] += 0;
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2919728949150694475) ) ) {
    result[7] += -0.035559297848113645;
  } else {
    if ( UNLIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5454550820796514321) ) ) {
      result[7] += 0.023469625808157066;
    } else {
      result[7] += -0.03445784730171809;
    }
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
    result[8] += -0.03554496405079869;
  } else {
    result[8] += 0.02031918637585686;
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7151259868991829416) ) ) {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6330028230889548357) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411362640307710192) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7368513205754015916) ) ) {
          result[9] += 0.0061430730237594725;
        } else {
          result[9] += -0.019997275791282215;
        }
      } else {
        result[9] += 0.03192970854855504;
      }
    } else {
      result[9] += 0.04727659702545847;
    }
  } else {
    result[9] += -0.03444851022282863;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.024603635166411723;
  } else {
    result[10] += 0.034632946938614025;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5808059554814645198) ) ) {
    if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.378897720191467835) ) ) {
      if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07272301454593708969) ) ) {
        if ( LIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9891704152963823882) ) ) {
          result[11] += 0.002892403676913337;
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
            result[11] += -0.034794663305673434;
          } else {
            result[11] += 0.002271630035196065;
          }
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02530103440270330475) ) ) {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.077187319491657025) ) ) {
            result[11] += -0.032745177696825806;
          } else {
            result[11] += 0.012265302089429322;
          }
        } else {
          if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.02476656194780175665) ) ) {
            if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03903108307575337693) ) ) {
              result[11] += 0.002134140583084929;
            } else {
              result[11] += 0.03176314304804208;
            }
          } else {
            result[11] += -0.0008420491975329407;
          }
        }
      }
    } else {
      result[11] += -0.03446218201162111;
    }
  } else {
    result[11] += -0.03497449934745364;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    result[12] += 0.004979269492751276;
  } else {
    result[12] += 0.032722395619453754;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.980962009341198482) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.254988442282501504) ) ) {
      if ( LIKELY(  (data[62].missing != -1) && (data[62].fvalue <= (double)-0.5575216148410923056) ) ) {
        if ( LIKELY( !(data[44].missing != -1) || (data[44].fvalue <= (double)0.5327318575148112245) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9687903016561022485) ) ) {
            result[0] += -0.006264152137539383;
          } else {
            result[0] += 0.007229810532983954;
          }
        } else {
          result[0] += 0.036911108701079894;
        }
      } else {
        result[0] += -0.026423567714826138;
      }
    } else {
      result[0] += -0.048455989821885495;
    }
  } else {
    if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[0] += -0.041856938914247445;
    } else {
      result[0] += 0.014396986105805394;
    }
  }
  if ( LIKELY( !(data[60].missing != -1) || (data[60].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2929349970111463364) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.366806864338301786) ) ) {
        if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4099809178911676399) ) ) {
          if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.6031942790939345267) ) ) {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.833637527598977246) ) ) {
              result[1] += -0.02078990260810163;
            } else {
              result[1] += -0.05636870484514289;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3687689760330343236) ) ) {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6518282617875235108) ) ) {
                result[1] += -0.00849453650837069;
              } else {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.388061384056159531) ) ) {
                  result[1] += 0.033856955277357194;
                } else {
                  result[1] += -0.02457904314636446;
                }
              }
            } else {
              if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288170262485434092) ) ) {
                if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6311229509888406364) ) ) {
                  result[1] += 0.04143247624830552;
                } else {
                  if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6509262132295375869) ) ) {
                    result[1] += -0.019591780353121948;
                  } else {
                    if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7754885622253581134) ) ) {
                      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7786886485164580263) ) ) {
                        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7390534623792704982) ) ) {
                          result[1] += 0.024622072705973417;
                        } else {
                          result[1] += -0.011042110412135936;
                        }
                      } else {
                        result[1] += -0.03870067171242592;
                      }
                    } else {
                      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8656051182175807934) ) ) {
                        result[1] += 0.03348354539638388;
                      } else {
                        result[1] += 0.0007877625548572139;
                      }
                    }
                  }
                }
              } else {
                result[1] += -0.0319219739099648;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6201630627563677889) ) ) {
            result[1] += 0.006144998520275431;
          } else {
            result[1] += 0.03350776000119705;
          }
        }
      } else {
        result[1] += -0.03550790923347595;
      }
    } else {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.4334140450164167269) ) ) {
        result[1] += -0.0347976288568939;
      } else {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2819572531823988371) ) ) {
          result[1] += 0.02125978030574686;
        } else {
          result[1] += -0.036249946160329706;
        }
      }
    }
  } else {
    result[1] += 0.034098301840083896;
  }
  if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.3937074974179520792) ) ) {
    result[2] += 0.0010537699354556727;
  } else {
    result[2] += 0.03405710380813626;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.184643571078126123) ) ) {
    if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3989547004639905636) ) ) {
      result[3] += 0.03426439667197999;
    } else {
      result[3] += -0.018914906204653407;
    }
  } else {
    result[3] += -0.0347572095416243;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211148324762586492) ) ) {
    result[4] += 0.03282297780756131;
  } else {
    result[4] += -0.03173210806779842;
  }
  result[5] += 0;
  result[6] += 0;
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2919728949150694475) ) ) {
    result[7] += -0.03558299077246799;
  } else {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4792661302204438978) ) ) {
      result[7] += 0.02302037985504857;
    } else {
      result[7] += -0.03465243371527482;
    }
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619555813926788157) ) ) {
    result[8] += -0.035528020095516026;
  } else {
    result[8] += 0.02021523503510195;
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7151259868991829416) ) ) {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6921522730141266289) ) ) {
        result[9] += -0.02559058505606649;
      } else {
        result[9] += 0.010769488627885794;
      }
    } else {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8375459600460725129) ) ) {
        result[9] += 0.03326091567328759;
      } else {
        result[9] += 0.009651146501209932;
      }
    }
  } else {
    result[9] += -0.03444823404504654;
  }
  if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7082867501122614984) ) ) {
    result[10] += 0.021677881852796534;
  } else {
    result[10] += -0.03443373762694202;
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6044214583257518925) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.339450912986019482) ) ) {
      if ( UNLIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07272301454593708969) ) ) {
        result[11] += 0.0013087731338029109;
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02531355698674906882) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2127820753294112632) ) ) {
            result[11] += -0.029920528754097685;
          } else {
            result[11] += 0.01688199940257234;
          }
        } else {
          if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.02324105395891285994) ) ) {
            if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03903108307575337693) ) ) {
              result[11] += 0.0016522599745394386;
            } else {
              result[11] += 0.03143254164678873;
            }
          } else {
            result[11] += 0.0004450324412010352;
          }
        }
      }
    } else {
      result[11] += -0.034459334859931606;
    }
  } else {
    result[11] += -0.033050864411968514;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.313522359658089833) ) ) {
    result[12] += 0.004800479211399334;
  } else {
    result[12] += 0.03172535704380034;
  }
}

