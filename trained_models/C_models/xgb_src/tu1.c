
#include "header.h"

void predict_unit1(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
        result[5] += -0.08594484;
      } else {
        result[5] += -0;
      }
    } else {
      result[5] += 0.016340237;
    }
  } else {
    result[5] += -0.09318869;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.30081537366)) {
        result[6] += -0.082292944;
      } else {
        result[6] += -0;
      }
    } else {
      result[6] += 0.03392594;
    }
  } else {
    result[6] += -0.090270385;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      result[7] += -0.0013095863;
    } else {
      result[7] += 0.024355607;
    }
  } else {
    result[7] += -0.09361337;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61931306124)) {
      result[8] += -0.07294371;
    } else {
      result[8] += 0.080453835;
    }
  } else {
    result[8] += -0.09363629;
  }
  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
        result[9] += -0.07183556;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018120289)) {
          result[9] += 0.059016302;
        } else {
          result[9] += -0;
        }
      }
    } else {
      if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
          result[9] += -0.042621557;
        } else {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90621083975)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.691501379)) {
              result[9] += -0.03883027;
            } else {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
                result[9] += -0;
              } else {
                result[9] += 0.0386182;
              }
            }
          } else {
            result[9] += 0.08096839;
          }
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
          result[9] += 0.08737514;
        } else {
          result[9] += -0;
        }
      }
    }
  } else {
    result[9] += -0.09313497;
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.08556467;
  } else {
    result[10] += 0.08419663;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.072805792093)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)-0.055533468723)) {
        if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.12653501332)) {
          result[11] += -0.07004445;
        } else {
          result[11] += -0;
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
          result[11] += 0.05660173;
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.67777997255)) {
            result[11] += -0.035495587;
          } else {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038621056825)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.66160225868)) {
                  result[11] += 0.0032602008;
                } else {
                  result[11] += 0.060479384;
                }
              } else {
                result[11] += -0.00875815;
              }
            } else {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.082331426442)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
                    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.55644726753)) {
                      result[11] += -0.009596647;
                    } else {
                      result[11] += -0.10331088;
                    }
                  } else {
                    result[11] += -0;
                  }
                } else {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77148842812)) {
                    result[11] += -0.00034423618;
                  } else {
                    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
                      result[11] += 0.047065493;
                    } else {
                      result[11] += -0;
                    }
                  }
                }
              } else {
                if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
                  if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.13308440149)) {
                    result[11] += 0.038607523;
                  } else {
                    if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
                      result[11] += -0.0030650923;
                    } else {
                      result[11] += 0.014230718;
                    }
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.1101660728)) {
                    if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.044618733227)) {
                      result[11] += -0.041745037;
                    } else {
                      result[11] += -0;
                    }
                  } else {
                    if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
                      result[11] += 0.041052043;
                    } else {
                      result[11] += -0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.32745957375)) {
        result[11] += -0.035328083;
      } else {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010523018427)) {
          result[11] += -0.010636915;
        } else {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30468061566)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
              result[11] += 0.08887863;
            } else {
              result[11] += 0.0126456125;
            }
          } else {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.94137781858)) {
              result[11] += -0.0046625235;
            } else {
              result[11] += 0.06267639;
            }
          }
        }
      }
    }
  } else {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1.2824162245)) {
        result[11] += -0.09285941;
      } else {
        result[11] += -0.009033104;
      }
    } else {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.0077007142827)) {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.57856816053)) {
          result[11] += -0;
        } else {
          result[11] += 0.040624846;
        }
      } else {
        result[11] += -0.019843638;
      }
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.7954890728)) {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.8958209753)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
              result[12] += -0;
            } else {
              result[12] += -0.055379752;
            }
          } else {
            result[12] += 0.104296714;
          }
        } else {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            result[12] += -0.0072236476;
          } else {
            result[12] += -0.08087026;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.07795444876)) {
          result[12] += 0.15158068;
        } else {
          result[12] += 0.04244272;
        }
      }
    } else {
      result[12] += -0.08767699;
    }
  } else {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010369817726)) {
      result[12] += -0.09286415;
    } else {
      result[12] += -0;
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.17268300056)) {
    if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16502712667)) {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.63763225079)) {
        if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13474625349)) {
              result[0] += -0.08173431;
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.86948847771)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)-0.22371928394)) {
                  result[0] += -0;
                } else {
                  result[0] += -0.039847;
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
                  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
                    result[0] += 0.069922015;
                  } else {
                    result[0] += -0;
                  }
                } else {
                  if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16619649529)) {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6017807126)) {
                      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62008029222)) {
                        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016886473)) {
                          result[0] += -0;
                        } else {
                          result[0] += -0.055525135;
                        }
                      } else {
                        result[0] += 0.018442148;
                      }
                    } else {
                      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
                        result[0] += -0;
                      } else {
                        result[0] += -0.0877288;
                      }
                    }
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.0186066628)) {
                      result[0] += 0.0660538;
                    } else {
                      result[0] += -0;
                    }
                  }
                }
              }
            }
          } else {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
              if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.56114780903)) {
                  result[0] += -0;
                } else {
                  if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.95358139277)) {
                    result[0] += 0.084325336;
                  } else {
                    result[0] += 0.029370226;
                  }
                }
              } else {
                result[0] += -0;
              }
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.071116350591)) {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021154165)) {
                  if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
                    result[0] += 0.016907167;
                  } else {
                    result[0] += -0;
                  }
                } else {
                  result[0] += -0;
                }
              } else {
                result[0] += -0.021890124;
              }
            }
          }
        } else {
          result[0] += 0.07742005;
        }
      } else {
        result[0] += -0.057877302;
      }
    } else {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010022087954)) {
        if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.16620278358)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018883228)) {
            result[0] += -0;
          } else {
            result[0] += 0.02997629;
          }
        } else {
          result[0] += 0.07866885;
        }
      } else {
        result[0] += -0.006759772;
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63046061993)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.54742503166)) {
          result[0] += -0;
        } else {
          result[0] += -0.072678044;
        }
      } else {
        result[0] += -0.09252699;
      }
    } else {
      if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.12430794537)) {
        if ( (data[36].missing != -1) && (data[36].fvalue < (float)1.5222791433)) {
          result[0] += -0.0566395;
        } else {
          result[0] += 0.004432669;
        }
      } else {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.66162455082)) {
          result[0] += 0.07145365;
        } else {
          result[0] += -0;
        }
      }
    }
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.40983131528)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.33438891172)) {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010495104827)) {
          result[1] += -0.09237241;
        } else {
          result[1] += -0.021811442;
        }
      } else {
        result[1] += 0.020267991;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61976313591)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.68586885929)) {
          result[1] += 0.05754157;
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
            result[1] += -0.057694312;
          } else {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.40275913477)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.1452716887)) {
                    result[1] += -0.106176466;
                  } else {
                    result[1] += 0.011419601;
                  }
                } else {
                  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80862355232)) {
                    result[1] += -0.006221395;
                  } else {
                    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54431396723)) {
                      result[1] += 0.04566261;
                    } else {
                      result[1] += -0;
                    }
                  }
                }
              } else {
                result[1] += -0.085782126;
              }
            } else {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78268873692)) {
                result[1] += 0.07810997;
              } else {
                if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
                  result[1] += -0.031456806;
                } else {
                  result[1] += 0.038926776;
                }
              }
            }
          }
        }
      } else {
        if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
          if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16697607934)) {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26880708337)) {
              result[1] += 0.027611468;
            } else {
              result[1] += -0;
            }
          } else {
            result[1] += -0.04803999;
          }
        } else {
          result[1] += 0.07660364;
        }
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
        if ( (data[51].missing != -1) && (data[51].fvalue < (float)-0.082552723587)) {
          result[1] += 0.08528381;
        } else {
          result[1] += -0.036694758;
        }
      } else {
        result[1] += 0.0953014;
      }
    } else {
      result[1] += -0.07214117;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.11440932006)) {
        result[2] += -0;
      } else {
        result[2] += 0.07636682;
      }
    } else {
      result[2] += -0.075539514;
    }
  } else {
    result[2] += -0.08858758;
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09219025;
  } else {
    result[3] += 0.09229927;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)2.1672489643)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
      result[4] += -0.09337288;
    } else {
      result[4] += -0;
    }
  } else {
    if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.26204559207)) {
      result[4] += -0;
    } else {
      result[4] += 0.115318276;
    }
  }
  if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
      result[5] += -0.09303104;
    } else {
      result[5] += -0;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021172047)) {
      result[5] += -0.019303333;
    } else {
      result[5] += 0.020143148;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.018215337768)) {
      result[6] += -0.09328551;
    } else {
      result[6] += -0.02100228;
    }
  } else {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.86625015736)) {
      result[6] += 0.04234191;
    } else {
      result[6] += -0.076408684;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.32027640939)) {
      result[7] += -0.039155684;
    } else {
      result[7] += 0.03852333;
    }
  } else {
    result[7] += -0.09320267;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
      result[8] += -0.07209339;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.56967777014)) {
        result[8] += 0.11365085;
      } else {
        result[8] += 0.018198768;
      }
    }
  } else {
    result[8] += -0.09323899;
  }
  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)3.6675543785)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1061306)) {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62777519226)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62646782398)) {
                result[9] += -0.051356822;
              } else {
                result[9] += 0.020497452;
              }
            } else {
              result[9] += -0.08860879;
            }
          } else {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.86629867554)) {
              result[9] += 0.086936146;
            } else {
              result[9] += -0;
            }
          }
        } else {
          result[9] += 0.049784746;
        }
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)0.053351785988)) {
          result[9] += 0.061992493;
        } else {
          result[9] += -0.0006272111;
        }
      }
    } else {
      result[9] += 0.05740505;
    }
  } else {
    result[9] += -0.092619054;
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.09031022;
  } else {
    result[10] += 0.08267193;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.60121154785)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)0.24895755947)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
          if ( (data[48].missing != -1) && (data[48].fvalue < (float)-0.30105000734)) {
            if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.60602760315)) {
                if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.61824411154)) {
                  if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.0041107409634)) {
                    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61550068855)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
                        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
                          if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.35726323724)) {
                            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60414254665)) {
                              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.67777997255)) {
                                result[11] += -0.041321535;
                              } else {
                                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.11714296788)) {
                                    result[11] += 0.032477815;
                                  } else {
                                    result[11] += -0;
                                  }
                                } else {
                                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.63977259398)) {
                                    if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.9437801838)) {
                                      result[11] += -0.0716337;
                                    } else {
                                      result[11] += -0;
                                    }
                                  } else {
                                    result[11] += 0.026662203;
                                  }
                                }
                              }
                            } else {
                              result[11] += -0.06824152;
                            }
                          } else {
                            result[11] += 0.04351927;
                          }
                        } else {
                          result[11] += -0.05901;
                        }
                      } else {
                        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038802653551)) {
                          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6040418148)) {
                            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
                              result[11] += 0.06989905;
                            } else {
                              if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.03643072024)) {
                                result[11] += -0;
                              } else {
                                result[11] += 0.032456994;
                              }
                            }
                          } else {
                            result[11] += -0;
                          }
                        } else {
                          if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.17355711758)) {
                            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.85384505987)) {
                              result[11] += -0;
                            } else {
                              result[11] += -0.02449826;
                            }
                          } else {
                            result[11] += 0.002515639;
                          }
                        }
                      }
                    } else {
                      result[11] += 0.046583105;
                    }
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021154165)) {
                      result[11] += -0;
                    } else {
                      result[11] += 0.054790433;
                    }
                  }
                } else {
                  result[11] += -0.017563201;
                }
              } else {
                result[11] += 0.05022757;
              }
            } else {
              result[11] += -0.052692406;
            }
          } else {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16675952077)) {
              result[11] += 0.09504717;
            } else {
              result[11] += -0;
            }
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025232160464)) {
            result[11] += -0.090586156;
          } else {
            result[11] += -0.017169803;
          }
        }
      } else {
        if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.016044974327)) {
          result[11] += -0;
        } else {
          if ( (data[48].missing != -1) && (data[48].fvalue < (float)0.14331261814)) {
            result[11] += 0.09531228;
          } else {
            result[11] += -0;
          }
        }
      }
    } else {
      result[11] += -0.08865541;
    }
  } else {
    result[11] += -0.09201814;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.95877230167)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.67777997255)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
              result[12] += -0.072993666;
            } else {
              result[12] += 0.0007583694;
            }
          } else {
            result[12] += 0.06405503;
          }
        } else {
          result[12] += -0.058873143;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.07795444876)) {
          result[12] += 0.13871314;
        } else {
          result[12] += 0.034541946;
        }
      }
    } else {
      result[12] += -0.085676335;
    }
  } else {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      result[12] += -0.09225554;
    } else {
      result[12] += -0;
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.17268300056)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1565849781)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02535321191)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62011039257)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
            result[0] += -0.058247883;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.7244440317)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6194216013)) {
                result[0] += -0.011461983;
              } else {
                result[0] += 0.00783535;
              }
            } else {
              if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                result[0] += -0;
              } else {
                result[0] += 0.07345908;
              }
            }
          }
        } else {
          result[0] += 0.090365686;
        }
      } else {
        if ( (data[77].missing != -1) && (data[77].fvalue < (float)-0.031930278987)) {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
            if ( (data[49].missing != -1) && (data[49].fvalue < (float)-0.040266092867)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.56967777014)) {
                  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.89404076338)) {
                    result[0] += 0.053089052;
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
                      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.037399079651)) {
                        result[0] += 0.060595654;
                      } else {
                        if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0606098175)) {
                          result[0] += -0.012901954;
                        } else {
                          result[0] += 0.01038977;
                        }
                      }
                    } else {
                      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                        result[0] += -0.04621036;
                      } else {
                        result[0] += -0;
                      }
                    }
                  }
                } else {
                  if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20948132873)) {
                    result[0] += -0.03135233;
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
                  result[0] += 0.064990506;
                } else {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.55644726753)) {
                    result[0] += -0.004816758;
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.9127392769)) {
                      result[0] += 0.07202173;
                    } else {
                      if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.53069013357)) {
                        result[0] += -0.032187212;
                      } else {
                        result[0] += 0.017999934;
                      }
                    }
                  }
                }
              }
            } else {
              result[0] += -0.038065813;
            }
          } else {
            result[0] += -0.05683281;
          }
        } else {
          result[0] += 0.05717495;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007021904)) {
        result[0] += -0.09119804;
      } else {
        result[0] += -0;
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.0095211574808)) {
          result[0] += -0.092797495;
        } else {
          result[0] += -0.01397033;
        }
      } else {
        result[0] += -0.0077216513;
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025418607518)) {
        if ( (data[93].missing != -1) && (data[93].fvalue < (float)1)) {
          result[0] += -0;
        } else {
          result[0] += 0.07932212;
        }
      } else {
        if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.13939358294)) {
          result[0] += -0.069527544;
        } else {
          result[0] += 0.0021832415;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.54742503166)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
              result[1] += -0.06263712;
            } else {
              result[1] += 0.014282675;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62020581961)) {
              result[1] += 0.06493587;
            } else {
              result[1] += 0.009686184;
            }
          }
        } else {
          result[1] += -0.10695265;
        }
      } else {
        result[1] += -0.09993058;
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
          result[1] += 0.07520451;
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3104484081)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
              result[1] += -0.08839533;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018990517)) {
                result[1] += -0.042554084;
              } else {
                result[1] += 0.043921627;
              }
            }
          } else {
            result[1] += 0.079637334;
          }
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61469757557)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025360168889)) {
              result[1] += -0.013323126;
            } else {
              result[1] += -0.105830155;
            }
          } else {
            result[1] += 0.03815223;
          }
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.9585189819)) {
            result[1] += 0.080048114;
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.86948847771)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.33477210999)) {
                result[1] += 0.07332886;
              } else {
                result[1] += 0.0010592768;
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.0186066628)) {
                result[1] += -0.09680259;
              } else {
                result[1] += -0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.024659089744)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
        if ( (data[51].missing != -1) && (data[51].fvalue < (float)-0.082552723587)) {
          result[1] += 0.08027386;
        } else {
          result[1] += -0.03840932;
        }
      } else {
        result[1] += 0.09484754;
      }
    } else {
      if ( (data[44].missing != -1) && (data[44].fvalue < (float)0.041231166571)) {
        result[1] += -0;
      } else {
        result[1] += -0.03438461;
      }
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.088465184;
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.30081537366)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
        result[2] += 0.055296086;
      } else {
        result[2] += -0.011156889;
      }
    } else {
      result[2] += -0.030279398;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    result[3] += 0.09267359;
  } else {
    result[3] += -0.09190451;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
    result[4] += -0.08866806;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
      result[4] += -0.019078575;
    } else {
      result[4] += 0.11377598;
    }
  }
  if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
      result[5] += -0.09253514;
    } else {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13342361152)) {
        result[5] += -0.047217146;
      } else {
        result[5] += -0;
      }
    }
  } else {
    result[5] += 0.012304618;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
    result[6] += -0.0113222515;
  } else {
    result[6] += -0.08503618;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.11647147685)) {
      result[7] += -0.0006749337;
    } else {
      result[7] += 0.02032542;
    }
  } else {
    result[7] += -0.09271475;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61961978674)) {
      result[8] += -0.072779305;
    } else {
      result[8] += 0.055029035;
    }
  } else {
    result[8] += -0.092761606;
  }
  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61992967129)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.1340187043)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
              result[9] += -0.08109378;
            } else {
              result[9] += -0.0054160436;
            }
          } else {
            result[9] += -0;
          }
        } else {
          result[9] += 0.043258734;
        }
      } else {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010411580093)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.42648643255)) {
            if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62777519226)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1328552961)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.63977259398)) {
                  result[9] += 0.05777631;
                } else {
                  result[9] += -0.0734373;
                }
              } else {
                result[9] += 0.09510575;
              }
            } else {
              result[9] += 0.15032536;
            }
          } else {
            result[9] += -0.0010027586;
          }
        } else {
          result[9] += -0.03569929;
        }
      }
    } else {
      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.74951910973)) {
        result[9] += -0.07943075;
      } else {
        result[9] += 0.013172105;
      }
    }
  } else {
    result[9] += -0.091998145;
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
      result[10] += -0.08857055;
    } else {
      result[10] += -0;
    }
  } else {
    result[10] += 0.080902204;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025296164677)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018245459)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59280967712)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
              result[11] += -0;
            } else {
              result[11] += 0.01771823;
            }
          } else {
            result[11] += -0.0134264985;
          }
        } else {
          result[11] += -0.05255082;
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.46552827954)) {
          result[11] += 0.054962564;
        } else {
          result[11] += -0;
        }
      }
    } else {
      result[11] += -0.08296023;
    }
  } else {
    if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015943732113)) {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)1.1005766392)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.61824411154)) {
              if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.34602001309)) {
                result[11] += -0;
              } else {
                result[11] += 0.04341529;
              }
            } else {
              result[11] += -0.021014512;
            }
          } else {
            result[11] += -0.06034743;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16732256114)) {
              result[11] += 0.06507306;
            } else {
              if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.35726323724)) {
                result[11] += -0;
              } else {
                result[11] += 0.052679382;
              }
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.53381425142)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                result[11] += -0.030492682;
              } else {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.9127392769)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.2646687031)) {
                      result[11] += 0.020251986;
                    } else {
                      result[11] += -0.019539874;
                    }
                  } else {
                    result[11] += 0.04712233;
                  }
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0943808556)) {
                    result[11] += -0.037031654;
                  } else {
                    result[11] += 0.01141796;
                  }
                }
              }
            } else {
              result[11] += 0.06908742;
            }
          }
        }
      } else {
        result[11] += -0.05849183;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.25882396102)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
          result[11] += 0.08186024;
        } else {
          result[11] += 0.009739176;
        }
      } else {
        result[11] += -0.0048170066;
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.27142873406)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.73670840263)) {
            result[12] += -0.07120706;
          } else {
            result[12] += 0.005720668;
          }
        } else {
          result[12] += 0.108396634;
        }
      } else {
        result[12] += -0.08688017;
      }
    } else {
      result[12] += -0.092096955;
    }
  } else {
    if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
      result[12] += -0;
    } else {
      result[12] += 0.095326826;
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.4874599874)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)-0.22371928394)) {
        result[0] += 0.0866835;
      } else {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43720659614)) {
          if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.16032426059)) {
            if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
                  result[0] += -0.08037266;
                } else {
                  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62008029222)) {
                    result[0] += -0.032644432;
                  } else {
                    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61965614557)) {
                      result[0] += 0.057521913;
                    } else {
                      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                        result[0] += -0.044879034;
                      } else {
                        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
                          result[0] += 0.06767823;
                        } else {
                          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
                            result[0] += -0.050974853;
                          } else {
                            result[0] += 0.0011709542;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31538122892)) {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79868918657)) {
                    result[0] += -0;
                  } else {
                    result[0] += 0.0336428;
                  }
                } else {
                  result[0] += -0;
                }
              }
            } else {
              result[0] += 0.056420356;
            }
          } else {
            result[0] += -0.09067208;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007510662)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60427767038)) {
              result[0] += 0.021530481;
            } else {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
                result[0] += -0.03810373;
              } else {
                result[0] += 0.0015538516;
              }
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.95358139277)) {
              result[0] += 0.0054068402;
            } else {
              result[0] += 0.07484519;
            }
          }
        }
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        result[0] += -0.07795719;
      } else {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.36591973901)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45322018862)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
              result[0] += -0.0066038314;
            } else {
              result[0] += 0.007777982;
            }
          } else {
            result[0] += 0.051711384;
          }
        } else {
          if ( (data[51].missing != -1) && (data[51].fvalue < (float)-0.0050377990119)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
              result[0] += -0.020341918;
            } else {
              result[0] += 0.018008027;
            }
          } else {
            result[0] += -0.07107427;
          }
        }
      }
    }
  } else {
    if ( (data[36].missing != -1) && (data[36].fvalue < (float)1.6671026945)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.7286472321)) {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.015412813053)) {
          result[0] += -0.0943102;
        } else {
          result[0] += -0;
        }
      } else {
        result[0] += -0;
      }
    } else {
      result[0] += 0.031041494;
    }
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010486016981)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.99576175213)) {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.33438891172)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-2.2499501705)) {
              result[1] += -0;
            } else {
              result[1] += -0.09375612;
            }
          } else {
            result[1] += -0;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.7146641016)) {
            result[1] += 0.070425004;
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                  if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20938225091)) {
                    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62329429388)) {
                      result[1] += -0;
                    } else {
                      result[1] += 0.06786232;
                    }
                  } else {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60414910316)) {
                      result[1] += -0;
                    } else {
                      result[1] += -0.021713987;
                    }
                  }
                } else {
                  result[1] += -0.09192191;
                }
              } else {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.087370470166)) {
                  result[1] += 0.049126647;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
                    result[1] += 0.03139594;
                  } else {
                    result[1] += -0.028175436;
                  }
                }
              }
            } else {
              result[1] += -0.07224156;
            }
          }
        }
      } else {
        if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.03177870065)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.30081537366)) {
            result[1] += 0.013723647;
          } else {
            if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
              result[1] += 0.017696662;
            } else {
              result[1] += 0.09067156;
            }
          }
        } else {
          result[1] += -0;
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.9638373852)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.63155788183)) {
          result[1] += -0.0050098575;
        } else {
          if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.14739742875)) {
            result[1] += -0.08848324;
          } else {
            result[1] += -0.019416537;
          }
        }
      } else {
        result[1] += 0.04702664;
      }
    }
  } else {
    result[1] += 0.094594486;
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.08714582;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
        result[2] += 0.05511214;
      } else {
        result[2] += -0;
      }
    } else {
      result[2] += -0.03677545;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    result[3] += 0.09121767;
  } else {
    result[3] += -0.09122298;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.196121335)) {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
      result[4] += -0.01953168;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.57992994785)) {
        result[4] += 0.15537703;
      } else {
        result[4] += 0.027525958;
      }
    }
  } else {
    result[4] += -0.08719997;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.87554603815)) {
      result[5] += -0.07829299;
    } else {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.57848584652)) {
        result[5] += 0.09100008;
      } else {
        result[5] += -0.021585505;
      }
    }
  } else {
    result[5] += -0.09155063;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      result[6] += -0.09187261;
    } else {
      result[6] += -0.022411805;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      result[6] += 0.044095866;
    } else {
      result[6] += -0.07061021;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      result[7] += -0.021479491;
    } else {
      result[7] += 0.017332802;
    }
  } else {
    result[7] += -0.0921552;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
    result[8] += -0.09233138;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
      result[8] += -0.078783624;
    } else {
      result[8] += 0.14063695;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
    if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.1452716887)) {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1061306)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78048282862)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.5295907259)) {
              result[9] += -0.039538007;
            } else {
              result[9] += 0.008308025;
            }
          } else {
            if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039066262543)) {
              result[9] += 0.0014532369;
            } else {
              result[9] += 0.11517576;
            }
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.1498845816)) {
            result[9] += 0.12570684;
          } else {
            result[9] += 0.025302533;
          }
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
          result[9] += -0.073836945;
        } else {
          result[9] += -0;
        }
      }
    } else {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
        result[9] += -0;
      } else {
        result[9] += -0.055046767;
      }
    }
  } else {
    if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.028995452449)) {
      result[9] += -0.09134823;
    } else {
      result[9] += -0;
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.083364419639)) {
      result[10] += -0.09211026;
    } else {
      result[10] += -0.026805516;
    }
  } else {
    result[10] += 0.07904642;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.60121154785)) {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.63977259398)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.9727897644)) {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
            if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010543142445)) {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13394863904)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.67777997255)) {
                  result[11] += -0.018743169;
                } else {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.2248044759)) {
                    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.66160225868)) {
                      result[11] += 0.008694616;
                    } else {
                      result[11] += 0.0596344;
                    }
                  } else {
                    result[11] += -0;
                  }
                }
              } else {
                if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
                  result[11] += -0.065823205;
                } else {
                  result[11] += -0;
                }
              }
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
                result[11] += 0.06881994;
              } else {
                if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.46779358387)) {
                  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.53381425142)) {
                    result[11] += -0;
                  } else {
                    result[11] += -0.016279427;
                  }
                } else {
                  result[11] += 0.04514581;
                }
              }
            }
          } else {
            result[11] += -0.074658416;
          }
        } else {
          result[11] += -0.055094145;
        }
      } else {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.5391829014)) {
          if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.10644187778)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
              if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.25986525416)) {
                if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62003588676)) {
                  result[11] += 0.11173673;
                } else {
                  result[11] += 0.005389128;
                }
              } else {
                result[11] += -0;
              }
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.1778291464)) {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62004899979)) {
                  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.051874365658)) {
                    result[11] += -0.05327489;
                  } else {
                    result[11] += -0;
                  }
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1251373291)) {
                    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
                      result[11] += -0;
                    } else {
                      result[11] += 0.06264408;
                    }
                  } else {
                    result[11] += -0.0031894108;
                  }
                }
              } else {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007844448)) {
                  result[11] += 0.08577927;
                } else {
                  result[11] += -0;
                }
              }
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.36380371451)) {
              result[11] += -0;
            } else {
              result[11] += -0.06369083;
            }
          }
        } else {
          result[11] += 0.116869904;
        }
      }
    } else {
      result[11] += -0.08521991;
    }
  } else {
    result[11] += -0.09028398;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        result[12] += -0.016263634;
      } else {
        result[12] += 0.032023117;
      }
    } else {
      if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.056726031005)) {
        result[12] += -0.09115662;
      } else {
        result[12] += -0.010525181;
      }
    }
  } else {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78673630953)) {
      result[12] += -0.035398852;
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.64524072409)) {
        result[12] += 0.08678662;
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.82568901777)) {
          result[12] += -0.041265555;
        } else {
          result[12] += 0.032612562;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.32027640939)) {
    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.079797491431)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0803849697)) {
        if ( (data[35].missing != -1) && (data[35].fvalue < (float)1.214324832)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6006770134)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.66713088751)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.50672495365)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.34276419878)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3814028502)) {
                    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
                      if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
                        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
                          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80862355232)) {
                            result[0] += -0;
                          } else {
                            result[0] += -0.07011732;
                          }
                        } else {
                          if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.079797036946)) {
                            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.085147149861)) {
                              result[0] += -0;
                            } else {
                              result[0] += 0.031350695;
                            }
                          } else {
                            result[0] += -0.01595913;
                          }
                        }
                      } else {
                        result[0] += 0.027673343;
                      }
                    } else {
                      result[0] += -0.11519395;
                    }
                  } else {
                    result[0] += 0.053073384;
                  }
                } else {
                  if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.40983131528)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
                      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
                          if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62777519226)) {
                            result[0] += 0.059530325;
                          } else {
                            result[0] += -0;
                          }
                        } else {
                          result[0] += -0;
                        }
                      } else {
                        result[0] += 0.07293429;
                      }
                    } else {
                      result[0] += -0;
                    }
                  } else {
                    if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.23322466016)) {
                      result[0] += -0.059635665;
                    } else {
                      result[0] += 0.0016202981;
                    }
                  }
                }
              } else {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6041829586)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.54725086689)) {
                    result[0] += -0.06535663;
                  } else {
                    result[0] += -0;
                  }
                } else {
                  result[0] += -0.111031674;
                }
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.88496041298)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60414606333)) {
                    if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
                      result[0] += 0.06775058;
                    } else {
                      result[0] += -0;
                    }
                  } else {
                    result[0] += -0;
                  }
                } else {
                  result[0] += -0;
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.9531545639)) {
                  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
                    result[0] += 0.008859415;
                  } else {
                    result[0] += -0.09038818;
                  }
                } else {
                  if ( (data[78].missing != -1) && (data[78].fvalue < (float)0.0078478725627)) {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
                      result[0] += -0;
                    } else {
                      result[0] += 0.010014242;
                    }
                  } else {
                    result[0] += 0.09469827;
                  }
                }
              }
            }
          } else {
            result[0] += 0.06576702;
          }
        } else {
          result[0] += 0.057781927;
        }
      } else {
        if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.1452716887)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            result[0] += -0.11402323;
          } else {
            result[0] += -0.017220417;
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
            result[0] += -0.011020526;
          } else {
            result[0] += 0.014711409;
          }
        }
      }
    } else {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.0057230344974)) {
        result[0] += -0.08888167;
      } else {
        result[0] += -0;
      }
    }
  } else {
    result[0] += -0.084945075;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61979103088)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.26939401031)) {
              if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
                if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
                  result[1] += -0.058472272;
                } else {
                  result[1] += 0.013565288;
                }
              } else {
                result[1] += 0.014377089;
              }
            } else {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038106448948)) {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                  result[1] += 0.13840367;
                } else {
                  result[1] += -0;
                }
              } else {
                result[1] += -0;
              }
            }
          } else {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
              result[1] += -0.07513197;
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0376743078)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
                    result[1] += -0.019675212;
                  } else {
                    result[1] += -0;
                  }
                } else {
                  result[1] += 0.045405645;
                }
              } else {
                result[1] += -0.024404626;
              }
            }
          }
        } else {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.098413728178)) {
            result[1] += -0.07337777;
          } else {
            result[1] += -0;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039194416255)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78048282862)) {
            result[1] += 0.04091242;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61469757557)) {
              result[1] += -0.072676174;
            } else {
              result[1] += -0;
            }
          }
        } else {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.5635496974)) {
            result[1] += 0.0821727;
          } else {
            result[1] += 0.0035516825;
          }
        }
      }
    } else {
      result[1] += -0.07836055;
    }
  } else {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.041249547154)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
        if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.095295451581)) {
          result[1] += 0.017771494;
        } else {
          result[1] += 0.094163634;
        }
      } else {
        result[1] += 0.0048490567;
      }
    } else {
      if ( (data[53].missing != -1) && (data[53].fvalue < (float)0.48858639598)) {
        result[1] += -0.011874625;
      } else {
        result[1] += -0;
      }
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.085631065;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
        result[2] += 0.04863757;
      } else {
        result[2] += -0.007844167;
      }
    } else {
      result[2] += -0.032027386;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    result[3] += 0.090679966;
  } else {
    result[3] += -0.09045191;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
    if ( (data[67].missing != -1) && (data[67].fvalue < (float)-0.00552511774)) {
      result[4] += -0.09191075;
    } else {
      result[4] += -0;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)1.797724247)) {
      result[4] += -0;
    } else {
      result[4] += 0.0919096;
    }
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
        result[5] += -0.07753198;
      } else {
        result[5] += -0;
      }
    } else {
      if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20845749974)) {
        result[5] += 0.09750957;
      } else {
        result[5] += -0.00079340726;
      }
    }
  } else {
    result[5] += -0.090746;
  }
  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62265974283)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62008976936)) {
      result[6] += -0;
    } else {
      result[6] += -0.050404347;
    }
  } else {
    result[6] += -0.0907404;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.32027640939)) {
      result[7] += -0.043775495;
    } else {
      result[7] += 0.03371275;
    }
  } else {
    result[7] += -0.09148342;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
    result[8] += -0.09172515;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
      result[8] += -0.07552711;
    } else {
      result[8] += 0.14099629;
    }
  }
  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025312861428)) {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44750031829)) {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
            result[9] += -0.08585533;
          } else {
            result[9] += 0.021139931;
          }
        } else {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6194216013)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3740458488)) {
                result[9] += -0;
              } else {
                result[9] += 0.055413518;
              }
            } else {
              result[9] += 0.08353742;
            }
          } else {
            result[9] += -0.028623272;
          }
        }
      } else {
        result[9] += 0.114147656;
      }
    } else {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59719163179)) {
        result[9] += -0;
      } else {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)1.9582731724)) {
          result[9] += -0.08017826;
        } else {
          result[9] += -0.006221781;
        }
      }
    }
  } else {
    result[9] += -0.09053218;
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.08187309;
  } else {
    result[10] += 0.07710983;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.60121154785)) {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
      if ( (data[25].missing != -1) && (data[25].fvalue < (float)28.495761871)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025336515158)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.041795373)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.016826236621)) {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.87554603815)) {
                  result[11] += -0.0018594991;
                } else {
                  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59280967712)) {
                    result[11] += 0.02678684;
                  } else {
                    result[11] += -0;
                  }
                }
              } else {
                result[11] += -0.048319705;
              }
            } else {
              result[11] += 0.052914225;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
              result[11] += -0.087536454;
            } else {
              result[11] += -0.0043258197;
            }
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.021839931607)) {
            if ( (data[48].missing != -1) && (data[48].fvalue < (float)-0.063644595444)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
                result[11] += 0.006715632;
              } else {
                if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20921711624)) {
                  result[11] += 0.108041756;
                } else {
                  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.40302154422)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.08362476;
                  }
                }
              }
            } else {
              result[11] += -0.0068308064;
            }
          } else {
            if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20812723041)) {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.11971406639)) {
                result[11] += -0.027238974;
              } else {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62006723881)) {
                  if ( (data[73].missing != -1) && (data[73].fvalue < (float)0.93308752775)) {
                    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.79971778393)) {
                        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
                          result[11] += -0.007910014;
                        } else {
                          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
                            result[11] += 0.056796968;
                          } else {
                            result[11] += -0;
                          }
                        }
                      } else {
                        if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.25506868958)) {
                          result[11] += -0;
                        } else {
                          result[11] += -0.035113245;
                        }
                      }
                    } else {
                      result[11] += -0.06363317;
                    }
                  } else {
                    result[11] += 0.02877723;
                  }
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
                    result[11] += -0.009217167;
                  } else {
                    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.2718229294)) {
                        result[11] += -0.0052778474;
                      } else {
                        result[11] += 0.022840902;
                      }
                    } else {
                      result[11] += 0.059460744;
                    }
                  }
                }
              }
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.071116350591)) {
                result[11] += 0.06376027;
              } else {
                result[11] += 0.0062984577;
              }
            }
          }
        }
      } else {
        result[11] += 0.10125639;
      }
    } else {
      result[11] += -0.08320701;
    }
  } else {
    result[11] += -0.08750353;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.7954890728)) {
      if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.23636563122)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.23471385241)) {
          result[12] += -0.05797435;
        } else {
          result[12] += 0.00011284966;
        }
      } else {
        result[12] += 0.042257097;
      }
    } else {
      if ( (data[93].missing != -1) && (data[93].fvalue < (float)1)) {
        result[12] += -0.083878756;
      } else {
        result[12] += -0;
      }
    }
  } else {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
      result[12] += -0;
    } else {
      result[12] += 0.08344013;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
    if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16463732719)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6006770134)) {
        if ( (data[47].missing != -1) && (data[47].fvalue < (float)0.032373789698)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6017807126)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3814028502)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77148842812)) {
                      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
                        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
                          result[0] += 0.010068848;
                        } else {
                          result[0] += -0.016771434;
                        }
                      } else {
                        result[0] += 0.034028403;
                      }
                    } else {
                      if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.31900882721)) {
                        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60428506136)) {
                          result[0] += -0.032839283;
                        } else {
                          result[0] += 0.0076938276;
                        }
                      } else {
                        if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
                          result[0] += -0;
                        } else {
                          if ( (data[56].missing != -1) && (data[56].fvalue < (float)0.68352377415)) {
                            result[0] += 0.040909354;
                          } else {
                            result[0] += -0;
                          }
                        }
                      }
                    }
                  } else {
                    result[0] += -0.022792935;
                  }
                } else {
                  result[0] += -0.11349459;
                }
              } else {
                result[0] += 0.0466114;
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.4234700203)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                  if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20895290375)) {
                    result[0] += -0.0320478;
                  } else {
                    result[0] += 0.034890193;
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.4091620445)) {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60421293974)) {
                      result[0] += 0.020636788;
                    } else {
                      result[0] += 0.10103861;
                    }
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                result[0] += -0.014790803;
              }
            }
          } else {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16680283844)) {
              result[0] += -0.045079187;
            } else {
              result[0] += -0;
            }
          }
        } else {
          result[0] += -0.049064927;
        }
      } else {
        result[0] += 0.07649345;
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025312861428)) {
        result[0] += 0.0730584;
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)9.3075933456)) {
          result[0] += -0;
        } else {
          result[0] += 0.025431128;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
      result[0] += -0.08802969;
    } else {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.073027424514)) {
          result[0] += -0.019682154;
        } else {
          result[0] += 0.043996178;
        }
      } else {
        if ( (data[93].missing != -1) && (data[93].fvalue < (float)1)) {
          result[0] += -0.06596784;
        } else {
          result[0] += -0;
        }
      }
    }
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.17268300056)) {
            result[1] += -0.09016012;
          } else {
            result[1] += -0;
          }
        } else {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
              result[1] += 0.114792556;
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3104484081)) {
                result[1] += -0.11284809;
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.25304949284)) {
                  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                    result[1] += -0.037500124;
                  } else {
                    result[1] += 0.03338764;
                  }
                } else {
                  result[1] += 0.06001243;
                }
              }
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
              result[1] += -0.08585534;
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54431396723)) {
                if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                  result[1] += -0;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
                    result[1] += 0.08211327;
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012881041)) {
                      result[1] += -0;
                    } else {
                      result[1] += 0.049513385;
                    }
                  }
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
                  result[1] += -0.07363106;
                } else {
                  if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20895290375)) {
                    result[1] += 0.07349486;
                  } else {
                    result[1] += -0.0014754388;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          result[1] += 0.07752707;
        } else {
          result[1] += -0;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
        result[1] += -0.097048484;
      } else {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.59351676702)) {
          result[1] += -0;
        } else {
          result[1] += 0.029546198;
        }
      }
    }
  } else {
    result[1] += 0.09400761;
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.083918795;
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45147165656)) {
      result[2] += 0.014074679;
    } else {
      if ( (data[48].missing != -1) && (data[48].fvalue < (float)-0.29714852571)) {
        result[2] += 0.0030632573;
      } else {
        result[2] += -0.07305868;
      }
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.08963133;
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
      result[3] += 0.052295417;
    } else {
      result[3] += 0.09453897;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)2.1672489643)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
      result[4] += -0.09144924;
    } else {
      result[4] += -0;
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
      result[4] += 0.106638685;
    } else {
      result[4] += 0.0028308812;
    }
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.045129265636)) {
      result[5] += -0.09093263;
    } else {
      result[5] += -0;
    }
  } else {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62265974283)) {
      result[5] += -0.022803279;
    } else {
      result[5] += 0.0711351;
    }
  }
  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59406167269)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      result[6] += 0.0072809546;
    } else {
      result[6] += -0.07532482;
    }
  } else {
    result[6] += -0.089918524;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.11647147685)) {
      result[7] += -0.0057937293;
    } else {
      result[7] += 0.014852526;
    }
  } else {
    result[7] += -0.09074582;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    result[8] += 0.023584729;
  } else {
    result[8] += -0.09085722;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.53311687708)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
        result[9] += 0.062942825;
      } else {
        result[9] += -0;
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          result[9] += 0.04966895;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
            if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62777519226)) {
              result[9] += -0;
            } else {
              result[9] += 0.058337126;
            }
          } else {
            result[9] += -0.048843835;
          }
        }
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.6165232658)) {
          result[9] += -0.080213144;
        } else {
          result[9] += -0;
        }
      }
    }
  } else {
    if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.0328274481)) {
      result[9] += -0.089514494;
    } else {
      result[9] += -0;
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
      result[10] += -0;
    } else {
      result[10] += -0.08367936;
    }
  } else {
    result[10] += 0.07501933;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.60121154785)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
      if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.41261711717)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.072805792093)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.0278730392)) {
                  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
                    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59280967712)) {
                      if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
                        result[11] += -0;
                      } else {
                        result[11] += 0.056849062;
                      }
                    } else {
                      result[11] += -0.025392924;
                    }
                  } else {
                    if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0606098175)) {
                      result[11] += 0.04458389;
                    } else {
                      result[11] += -0;
                    }
                  }
                } else {
                  result[11] += -0.022857945;
                }
              } else {
                if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6041829586)) {
                    result[11] += -0.059634004;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
                      result[11] += -0.028919164;
                    } else {
                      result[11] += 0.036600873;
                    }
                  }
                } else {
                  result[11] += 0.011860966;
                }
              }
            } else {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038802653551)) {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62002325058)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
                    result[11] += 0.07499951;
                  } else {
                    result[11] += 0.020324305;
                  }
                } else {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.24775236845)) {
                    result[11] += 0.021902326;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.071803093)) {
                      result[11] += -0.027019436;
                    } else {
                      result[11] += 0.005229342;
                    }
                  }
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                  result[11] += -0.03345966;
                } else {
                  if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.44573503733)) {
                    result[11] += -0.013699505;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1328552961)) {
                      result[11] += 0.039067164;
                    } else {
                      result[11] += -0;
                    }
                  }
                }
              }
            }
          } else {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62383723259)) {
              result[11] += 0.07765159;
            } else {
              result[11] += -0;
            }
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025219637901)) {
            result[11] += -0.08478108;
          } else {
            result[11] += -0;
          }
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025307295844)) {
          result[11] += -0;
        } else {
          result[11] += 0.07627159;
        }
      }
    } else {
      result[11] += -0.08195777;
    }
  } else {
    result[11] += -0.087691024;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025232160464)) {
    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        result[12] += -0.013716159;
      } else {
        result[12] += 0.024662364;
      }
    } else {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.008917838335)) {
        result[12] += -0.089647315;
      } else {
        result[12] += -0.017118854;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.64524072409)) {
        result[12] += 0.055835105;
      } else {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.73308742046)) {
          result[12] += -0.05010872;
        } else {
          result[12] += 0.015879825;
        }
      }
    } else {
      result[12] += -0.044045843;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.32027640939)) {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)-0.081141009927)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0803849697)) {
        if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20878776908)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
            result[0] += 0.07141068;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                result[0] += -0.11387946;
              } else {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
                  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13370315731)) {
                    result[0] += -0.0038485003;
                  } else {
                    result[0] += 0.04800644;
                  }
                } else {
                  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038821898401)) {
                    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
                      result[0] += -0;
                    } else {
                      result[0] += -0.055040784;
                    }
                  } else {
                    result[0] += -0;
                  }
                }
              }
            } else {
              if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.11440932006)) {
                if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
                  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
                      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6194216013)) {
                        result[0] += -0.017617267;
                      } else {
                        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59171414375)) {
                          result[0] += 0.019572623;
                        } else {
                          result[0] += -0;
                        }
                      }
                    } else {
                      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                        result[0] += -0;
                      } else {
                        result[0] += 0.06939983;
                      }
                    }
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62646782398)) {
                      result[0] += -0;
                    } else {
                      result[0] += -0.068856515;
                    }
                  }
                } else {
                  result[0] += 0.0663228;
                }
              } else {
                if ( (data[73].missing != -1) && (data[73].fvalue < (float)0.51107466221)) {
                  result[0] += -0.023330364;
                } else {
                  result[0] += -0;
                }
              }
            }
          }
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78268873692)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.44429585338)) {
              result[0] += -0;
            } else {
              result[0] += -0.03763407;
            }
          } else {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.16745822132)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.051844842732)) {
                result[0] += -0;
              } else {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.052392564714)) {
                  result[0] += 0.07949766;
                } else {
                  result[0] += 0.021623729;
                }
              }
            } else {
              result[0] += -0;
            }
          }
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
            result[0] += -0.110894345;
          } else {
            result[0] += -0;
          }
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.9127392769)) {
            result[0] += 0.028979436;
          } else {
            result[0] += -0.007182514;
          }
        }
      }
    } else {
      if ( (data[51].missing != -1) && (data[51].fvalue < (float)0.17534758151)) {
        result[0] += -0.08658733;
      } else {
        result[0] += -0.0064795497;
      }
    }
  } else {
    result[0] += -0.080506936;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.92445510626)) {
            if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.04483281076)) {
                result[1] += -0.056156904;
              } else {
                result[1] += -0;
              }
            } else {
              result[1] += 0.04784784;
            }
          } else {
            result[1] += -0.093230836;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36735785007)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60428506136)) {
              result[1] += -0;
            } else {
              result[1] += 0.08160048;
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.0429239273)) {
                    result[1] += 0.03615441;
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012094259)) {
                      result[1] += -0;
                    } else {
                      result[1] += -0.009558918;
                    }
                  }
                } else {
                  result[1] += -0.0841547;
                }
              } else {
                if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                  result[1] += -0.0075055175;
                } else {
                  if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20964646339)) {
                    result[1] += 0.06626077;
                  } else {
                    result[1] += -0;
                  }
                }
              }
            } else {
              result[1] += -0.041431338;
            }
          }
        }
      } else {
        if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.03810730949)) {
          result[1] += 0.07960238;
        } else {
          result[1] += -0;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
        result[1] += -0.09582612;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
          result[1] += 0.026900707;
        } else {
          result[1] += -0;
        }
      }
    }
  } else {
    result[1] += 0.09359435;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
      result[2] += -0.02609639;
    } else {
      result[2] += 0.03701176;
    }
  } else {
    result[2] += -0.08111279;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.53914117813)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.5222806931)) {
        result[3] += -0;
      } else {
        result[3] += 0.06805624;
      }
    } else {
      result[3] += 0.09433725;
    }
  } else {
    result[3] += -0.08891905;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62014520168)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
      result[4] += -0;
    } else {
      result[4] += 0.09028615;
    }
  } else {
    result[4] += -0.08251363;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
        result[5] += -0.07345353;
      } else {
        result[5] += -0;
      }
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.57948327065)) {
        result[5] += 0.08074874;
      } else {
        result[5] += -0;
      }
    }
  } else {
    result[5] += -0.08871815;
  }
  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59406167269)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007111311)) {
        result[6] += 0.0439918;
      } else {
        result[6] += -0;
      }
    } else {
      result[6] += -0.072719455;
    }
  } else {
    result[6] += -0.08884159;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.32027640939)) {
      result[7] += -0.040150527;
    } else {
      result[7] += 0.02921716;
    }
  } else {
    result[7] += -0.08988315;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
    result[8] += -0.09029438;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61931306124)) {
      result[8] += -0.07281274;
    } else {
      result[8] += 0.13758902;
    }
  }
  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61980682611)) {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43870261312)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.1340187043)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.76172238588)) {
            result[9] += -0.034145333;
          } else {
            result[9] += -0;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
              result[9] += 0.018978152;
            } else {
              result[9] += 0.10218436;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1061306)) {
              if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.38475292921)) {
                result[9] += -0.065545484;
              } else {
                result[9] += -0;
              }
            } else {
              result[9] += 0.032967784;
            }
          }
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
          result[9] += -0.08326163;
        } else {
          result[9] += 0.040265188;
        }
      }
    } else {
      result[9] += -0.06770798;
    }
  } else {
    result[9] += -0.08848746;
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
      result[10] += -0;
    } else {
      result[10] += -0.08172997;
    }
  } else {
    result[10] += 0.072907306;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.60102975368)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
      if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.41261711717)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.072805792093)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.0278730392)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.6263246536)) {
                  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62854719162)) {
                    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.68586885929)) {
                      result[11] += -0.028475977;
                    } else {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4864132404)) {
                        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                          result[11] += 0.044128653;
                        } else {
                          result[11] += -0;
                        }
                      } else {
                        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
                          result[11] += -0.037416365;
                        } else {
                          result[11] += -0;
                        }
                      }
                    }
                  } else {
                    result[11] += -0.05581496;
                  }
                } else {
                  if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
                    result[11] += 0.03538638;
                  } else {
                    if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.43176159263)) {
                      result[11] += -0.020505654;
                    } else {
                      result[11] += 0.019603498;
                    }
                  }
                }
              } else {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)8.1014785767)) {
                  result[11] += -0.089696944;
                } else {
                  result[11] += 0.0043316823;
                }
              }
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.38749140501)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.1273295879)) {
                  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62000399828)) {
                    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.58880263567)) {
                      result[11] += 0.014155795;
                    } else {
                      result[11] += 0.09989745;
                    }
                  } else {
                    result[11] += -0;
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.3176026344)) {
                    result[11] += -0.018902266;
                  } else {
                    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43720659614)) {
                      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.89751946926)) {
                        result[11] += -0;
                      } else {
                        result[11] += 0.05731368;
                      }
                    } else {
                      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                        result[11] += -0;
                      } else {
                        result[11] += -0.012792459;
                      }
                    }
                  }
                }
              } else {
                result[11] += -0.037746895;
              }
            }
          } else {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16675952077)) {
              result[11] += 0.09015875;
            } else {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024169132113)) {
                result[11] += -0;
              } else {
                result[11] += 0.038879853;
              }
            }
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
            result[11] += -0.100104116;
          } else {
            result[11] += -0.0014677491;
          }
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.72947192192)) {
          result[11] += -0;
        } else {
          result[11] += 0.07635352;
        }
      }
    } else {
      result[11] += -0.0793532;
    }
  } else {
    result[11] += -0.08604476;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.54036176205)) {
        result[12] += -0.022038108;
      } else {
        result[12] += -0.08871851;
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.33438891172)) {
        result[12] += 0.09263424;
      } else {
        result[12] += -0.0685483;
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039009898901)) {
      result[12] += 0.060731515;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.0963844061)) {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.54562628269)) {
          result[12] += -0.06275259;
        } else {
          result[12] += -0;
        }
      } else {
        result[12] += 0.052164838;
      }
    }
  }
  if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02535321191)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62011039257)) {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62884157896)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.25304949284)) {
            result[0] += -0;
          } else {
            result[0] += 0.030845895;
          }
        } else {
          result[0] += -0.009365395;
        }
      } else {
        result[0] += 0.08833937;
      }
    } else {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.63763225079)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6017807126)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012988329)) {
                if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.38108387589)) {
                  result[0] += -0.017289681;
                } else {
                  if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.037270721048)) {
                    result[0] += 0.022718698;
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                result[0] += 0.031160679;
              }
            } else {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024322185665)) {
                result[0] += -0;
              } else {
                result[0] += -0.042000882;
              }
            }
          } else {
            result[0] += 0.064166196;
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
            result[0] += -0.050709095;
          } else {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60422873497)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
                  result[0] += 0.014801121;
                } else {
                  result[0] += -0.0037125808;
                }
              } else {
                result[0] += -0.08108421;
              }
            } else {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.56564307213)) {
                result[0] += 0.061921462;
              } else {
                result[0] += -0;
              }
            }
          }
        }
      } else {
        result[0] += -0.057804897;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      result[0] += -0.075761415;
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025488177314)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025511831045)) {
          result[0] += -0;
        } else {
          result[0] += 0.06303992;
        }
      } else {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.44744732976)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025115283206)) {
            if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015812795609)) {
              result[0] += -0;
            } else {
              result[0] += 0.045413498;
            }
          } else {
            result[0] += -0.040252432;
          }
        } else {
          result[0] += -0.06038894;
        }
      }
    }
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.73670840263)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
              result[1] += 0.024863122;
            } else {
              result[1] += -0.024652658;
            }
          } else {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31564411521)) {
                result[1] += 0.13208392;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.8841226697)) {
                  result[1] += -0;
                } else {
                  result[1] += 0.0709155;
                }
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.35428348184)) {
                result[1] += 0.07105176;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7679245472)) {
                  result[1] += -0.018613463;
                } else {
                  result[1] += -0;
                }
              }
            }
          }
        } else {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.42360827327)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
              result[1] += -0;
            } else {
              result[1] += -0.04788153;
            }
          } else {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.25171658397)) {
              result[1] += 0.07669438;
            } else {
              result[1] += -0;
            }
          }
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
          result[1] += -0.09593511;
        } else {
          result[1] += 0.027681539;
        }
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.42648643255)) {
        result[1] += -0.08376717;
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.9638373852)) {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.86948847771)) {
                result[1] += -0;
              } else {
                result[1] += -0.046331793;
              }
            } else {
              result[1] += 0.068908654;
            }
          } else {
            result[1] += -0.061653018;
          }
        } else {
          result[1] += 0.06058133;
        }
      }
    }
  } else {
    result[1] += 0.0931699;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)0.6335311532)) {
      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60429382324)) {
        result[2] += -0.01607474;
      } else {
        result[2] += 0.0018234715;
      }
    } else {
      result[2] += 0.03251182;
    }
  } else {
    result[2] += -0.0785264;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
    result[3] += -0.090424486;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.48470166326)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)-0.22371928394)) {
        result[3] += -0.0272377;
      } else {
        result[3] += 0.08413119;
      }
    } else {
      result[3] += 0.09377292;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62014520168)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
      result[4] += -0.041907467;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.50672495365)) {
        result[4] += 0.14937256;
      } else {
        result[4] += 0.026196545;
      }
    }
  } else {
    result[4] += -0.089479126;
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
      result[5] += -0.08913751;
    } else {
      result[5] += 0.0028562078;
    }
  } else {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62265974283)) {
      result[5] += -0.01557286;
    } else {
      result[5] += 0.05376987;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
    result[6] += -0;
  } else {
    result[6] += -0.09061185;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.32027640939)) {
      result[7] += -0.041553453;
    } else {
      result[7] += 0.028082406;
    }
  } else {
    result[7] += -0.08886469;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
    result[8] += -0.089377;
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.53523516655)) {
      result[8] += 0.049296953;
    } else {
      result[8] += -0;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1061306)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78048282862)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.5295907259)) {
            result[9] += -0.028352192;
          } else {
            result[9] += -0;
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.88479340076)) {
            result[9] += -0;
          } else {
            result[9] += 0.086391665;
          }
        }
      } else {
        result[9] += 0.07700523;
      }
    } else {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
          result[9] += -0.074976854;
        } else {
          result[9] += -0.009530783;
        }
      } else {
        result[9] += -0;
      }
    }
  } else {
    result[9] += -0.07979135;
  }
  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62265974283)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61809414625)) {
      result[10] += -0.024562908;
    } else {
      result[10] += 0.06639826;
    }
  } else {
    result[10] += -0.08753657;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.60121154785)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.48886889219)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.53573900461)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.76172238588)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
                  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
                    result[11] += -0.03127952;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.11714296788)) {
                      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                        result[11] += 0.065758735;
                      } else {
                        result[11] += -0;
                      }
                    } else {
                      result[11] += -0.006052427;
                    }
                  }
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.46552827954)) {
                    result[11] += 0.087734714;
                  } else {
                    result[11] += -0;
                  }
                }
              } else {
                result[11] += -0.028598988;
              }
            } else {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.021839931607)) {
                result[11] += 0.07390362;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
                  result[11] += -0.0036524185;
                } else {
                  result[11] += 0.043142553;
                }
              }
            }
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
              if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16680283844)) {
                result[11] += -0.04570353;
              } else {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.42648643255)) {
                  result[11] += 0.020175185;
                } else {
                  result[11] += -0.004845807;
                }
              }
            } else {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.60602760315)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.2248044759)) {
                  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.037593618;
                  }
                } else {
                  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.69918745756)) {
                    result[11] += -0;
                  } else {
                    result[11] += -0.030548539;
                  }
                }
              } else {
                result[11] += 0.035275176;
              }
            }
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
            result[11] += -0.079834744;
          } else {
            result[11] += -0;
          }
        }
      } else {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)2.3493771553)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.26939401031)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025401910767)) {
              result[11] += -0;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62004214525)) {
                result[11] += 0.07955477;
              } else {
                result[11] += 0.011447021;
              }
            }
          } else {
            result[11] += -0;
          }
        } else {
          result[11] += -0.016162422;
        }
      }
    } else {
      result[11] += -0.07637498;
    }
  } else {
    result[11] += -0.08401724;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61959242821)) {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.094554312527)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62005460262)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
              result[12] += -0.043997858;
            } else {
              result[12] += 0.024276774;
            }
          } else {
            result[12] += 0.050324284;
          }
        } else {
          result[12] += 0.093684025;
        }
      } else {
        result[12] += -0.07280642;
      }
    } else {
      result[12] += -0.07736917;
    }
  } else {
    result[12] += -0.080098286;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.48470166326)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)0.41180253029)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025418607518)) {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.4555876255)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
            result[0] += -0.08762326;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.7244440317)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.099427320063)) {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                  result[0] += -0;
                } else {
                  result[0] += -0.03224332;
                }
              } else {
                result[0] += 0.0013383841;
              }
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.67327171564)) {
                if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
                  result[0] += -0.031936076;
                } else {
                  result[0] += 0.0139893545;
                }
              } else {
                result[0] += 0.062006034;
              }
            }
          }
        } else {
          result[0] += 0.06780589;
        }
      } else {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.44744732976)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.62101882696)) {
            if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61669498682)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024123216048)) {
                if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.050166197121)) {
                  result[0] += -0;
                } else {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.59494549036)) {
                    result[0] += 0.07669985;
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59805238247)) {
                  if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.09725214541)) {
                    result[0] += -0.06847871;
                  } else {
                    result[0] += -0;
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.669532299)) {
                    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
                      result[0] += 0.03669711;
                    } else {
                      if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.89127284288)) {
                        if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.13939358294)) {
                          result[0] += -0;
                        } else {
                          result[0] += -0.020513099;
                        }
                      } else {
                        if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
                          result[0] += 0.03317292;
                        } else {
                          result[0] += -0;
                        }
                      }
                    }
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.53978526592)) {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417711735)) {
                        result[0] += -0;
                      } else {
                        result[0] += -0.052540373;
                      }
                    } else {
                      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44117793441)) {
                        result[0] += 0.031308025;
                      } else {
                        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0159345865)) {
                          result[0] += -0.027331388;
                        } else {
                          result[0] += -0;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              result[0] += -0.057116985;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.4838591814)) {
              result[0] += 0.03836434;
            } else {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
                result[0] += -0.010927896;
              } else {
                result[0] += 0.020022571;
              }
            }
          }
        } else {
          result[0] += -0.06317119;
        }
      }
    } else {
      result[0] += -0.06841758;
    }
  } else {
    result[0] += -0.07510963;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
          result[1] += -0.063696556;
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.1452716887)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
                  result[1] += 0.02554741;
                } else {
                  result[1] += -0.12390266;
                }
              } else {
                if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                  result[1] += -0;
                } else {
                  if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44316831231)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                      result[1] += 0.09732564;
                    } else {
                      result[1] += 0.0011472948;
                    }
                  } else {
                    result[1] += -0;
                  }
                }
              }
            } else {
              result[1] += 0.07723734;
            }
          } else {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.025529455394)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.59494549036)) {
                if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016171217)) {
                  result[1] += -0;
                } else {
                  result[1] += -0.09719899;
                }
              } else {
                result[1] += -0;
              }
            } else {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
                result[1] += 0.067499265;
              } else {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.86948847771)) {
                  result[1] += 0.030880863;
                } else {
                  result[1] += -0.025188584;
                }
              }
            }
          }
        }
      } else {
        if ( (data[51].missing != -1) && (data[51].fvalue < (float)-0.083707496524)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
              result[1] += 0.056892253;
            } else {
              result[1] += -0;
            }
          } else {
            result[1] += 0.08530506;
          }
        } else {
          result[1] += -0.030884812;
        }
      }
    } else {
      result[1] += -0.07881768;
    }
  } else {
    result[1] += 0.09247429;
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.0777432;
  } else {
    if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.11440932006)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
        result[2] += 0.011978853;
      } else {
        result[2] += -0.05316583;
      }
    } else {
      result[2] += 0.025902338;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.08667797;
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
      result[3] += 0.035938554;
    } else {
      result[3] += 0.09363116;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
    result[4] += -0.079518236;
  } else {
    if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.22814252973)) {
      result[4] += -0;
    } else {
      result[4] += 0.122269854;
    }
  }
  if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      result[5] += -0.08825652;
    } else {
      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6042920351)) {
        result[5] += 0.021903649;
      } else {
        result[5] += -0.001789278;
      }
    }
  } else {
    result[5] += 0.029748574;
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62008976936)) {
      result[6] += -0;
    } else {
      result[6] += -0.039640587;
    }
  } else {
    result[6] += -0.08534588;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
    result[7] += -0.09303043;
  } else {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28237974644)) {
      result[7] += 0.04762611;
    } else {
      result[7] += -0.075819045;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
    result[8] += -0.088284045;
  } else {
    result[8] += 0.011478361;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61987346411)) {
        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90621083975)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
              result[9] += -0;
            } else {
              result[9] += 0.07668255;
            }
          } else {
            result[9] += -0.028255772;
          }
        } else {
          result[9] += 0.09394826;
        }
      } else {
        result[9] += -0.012010324;
      }
    } else {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31443795562)) {
          result[9] += -0;
        } else {
          result[9] += 0.015306586;
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
          result[9] += -0.049091138;
        } else {
          result[9] += -0;
        }
      }
    }
  } else {
    result[9] += -0.07795076;
  }
  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62265974283)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
      result[10] += -0.02783731;
    } else {
      result[10] += 0.07679199;
    }
  } else {
    result[10] += -0.086033285;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.60121154785)) {
    if ( (data[65].missing != -1) && (data[65].fvalue < (float)-0.016915978864)) {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.60602760315)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16771234572)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016224861)) {
                result[11] += 0.04550023;
              } else {
                result[11] += -0.025900764;
              }
            } else {
              result[11] += 0.087443806;
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.9727897644)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007844448)) {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
                    result[11] += -0;
                  } else {
                    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.41612991691)) {
                      result[11] += 0.079585955;
                    } else {
                      result[11] += 0.022477282;
                    }
                  }
                } else {
                  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6194216013)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                      result[11] += -0;
                    } else {
                      result[11] += -0.04248933;
                    }
                  } else {
                    if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0606098175)) {
                      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016254663)) {
                        result[11] += 0.046775322;
                      } else {
                        result[11] += -0;
                      }
                    } else {
                      result[11] += -0;
                    }
                  }
                }
              } else {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62006938457)) {
                  result[11] += -0.059574995;
                } else {
                  if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16771234572)) {
                    result[11] += 0.039700724;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
                      result[11] += -0.053171895;
                    } else {
                      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.82802081108)) {
                        if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.19651202857)) {
                          result[11] += -0;
                        } else {
                          result[11] += -0.0356563;
                        }
                      } else {
                        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                          result[11] += 0.041029215;
                        } else {
                          if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.35726323724)) {
                            result[11] += -0.03454536;
                          } else {
                            result[11] += -0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            } else {
              result[11] += -0.030747179;
            }
          }
        } else {
          result[11] += -0.04068319;
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025342080742)) {
          result[11] += -0;
        } else {
          if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.036695543677)) {
            result[11] += -0;
          } else {
            result[11] += 0.07069005;
          }
        }
      }
    } else {
      result[11] += -0.066122696;
    }
  } else {
    result[11] += -0.08191679;
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.27142873406)) {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.54036176205)) {
        if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61998814344)) {
            result[12] += -0.054445863;
          } else {
            result[12] += 0.01974758;
          }
        } else {
          result[12] += 0.045191005;
        }
      } else {
        result[12] += -0.06253244;
      }
    } else {
      result[12] += 0.10167925;
    }
  } else {
    result[12] += -0.06762148;
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010553312488)) {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.35898321867)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0657052994)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9513647556)) {
              if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
                if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26547160745)) {
                  result[0] += 0.026545718;
                } else {
                  result[0] += -0;
                }
              } else {
                result[0] += -0;
              }
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.91121447086)) {
                result[0] += 0.01671002;
              } else {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012350559)) {
                  result[0] += -0;
                } else {
                  result[0] += -0.040523633;
                }
              }
            }
          } else {
            result[0] += -0.056188297;
          }
        } else {
          result[0] += 0.041322377;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62006664276)) {
          result[0] += 0.004147512;
        } else {
          result[0] += 0.08974492;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6202095747)) {
          result[0] += -0.0071871574;
        } else {
          result[0] += 0.013792943;
        }
      } else {
        result[0] += -0.034354463;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62006443739)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.7286472321)) {
          if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.14456522465)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31448435783)) {
              result[0] += -0.0034514898;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62008410692)) {
                result[0] += -0.08055243;
              } else {
                result[0] += -0.0018694758;
              }
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)2.4384834766)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.61824411154)) {
                if ( (data[73].missing != -1) && (data[73].fvalue < (float)0.73030364513)) {
                  result[0] += 0.007671098;
                } else {
                  result[0] += -0;
                }
              } else {
                result[0] += -0.057488628;
              }
            } else {
              result[0] += 0.03530669;
            }
          }
        } else {
          result[0] += 0.028805824;
        }
      } else {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59609615803)) {
          result[0] += -0.003638494;
        } else {
          result[0] += 0.07186522;
        }
      }
    } else {
      if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20845749974)) {
        result[0] += -0.077249326;
      } else {
        result[0] += -0.013323664;
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
          result[1] += 0.024394333;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
            result[1] += -0.08421041;
          } else {
            result[1] += -0;
          }
        }
      } else {
        result[1] += -0.09097866;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.7146641016)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3179839849)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021207809)) {
            result[1] += 0.0068171523;
          } else {
            result[1] += 0.07789421;
          }
        } else {
          result[1] += -0.007012073;
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016052008)) {
            result[1] += 0.068902604;
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.048692736775)) {
                result[1] += -0.057404727;
              } else {
                result[1] += -0;
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012779713)) {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.88479340076)) {
                  result[1] += -0;
                } else {
                  result[1] += -0.022411942;
                }
              } else {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60252219439)) {
                  result[1] += 0.05483495;
                } else {
                  result[1] += -0.0022047563;
                }
              }
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61974221468)) {
            result[1] += -0.06984724;
          } else {
            result[1] += -0;
          }
        }
      }
    }
  } else {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.037152279168)) {
      if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26396116614)) {
        result[1] += 0.0095196245;
      } else {
        result[1] += 0.08689345;
      }
    } else {
      result[1] += -0;
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.08729437;
  } else {
    if ( (data[49].missing != -1) && (data[49].fvalue < (float)-0.040051173419)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
        result[2] += 0.057428353;
      } else {
        result[2] += -0.012539819;
      }
    } else {
      result[2] += -0.016241664;
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
    result[3] += -0.088673495;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.52890723944)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36735785007)) {
        result[3] += 0.07326318;
      } else {
        result[3] += -0;
      }
    } else {
      result[3] += 0.09293709;
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.196121335)) {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
      result[4] += -0.017661387;
    } else {
      result[4] += 0.10906146;
    }
  } else {
    result[4] += -0.08780644;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.57848584652)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025336515158)) {
        result[5] += -0;
      } else {
        result[5] += 0.057378627;
      }
    } else {
      result[5] += -0.02901783;
    }
  } else {
    result[5] += -0.084421456;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025208506733)) {
      result[6] += -0.08667128;
    } else {
      result[6] += -0;
    }
  } else {
    result[6] += 0.0025567191;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
    result[7] += -0.092091195;
  } else {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28237974644)) {
      result[7] += 0.04325518;
    } else {
      result[7] += -0.07310816;
    }
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.56967777014)) {
      result[8] += 0.044329945;
    } else {
      result[8] += -0;
    }
  } else {
    result[8] += -0.08683975;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62013393641)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1328552961)) {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62383723259)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.5295907259)) {
            result[9] += -0.0255727;
          } else {
            result[9] += -0;
          }
        } else {
          result[9] += 0.06410332;
        }
      } else {
        result[9] += 0.1053025;
      }
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77628856897)) {
        result[9] += -0.07458623;
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.86629867554)) {
          result[9] += 0.036736257;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.30346727371)) {
            result[9] += -0;
          } else {
            result[9] += -0.0528773;
          }
        }
      }
    }
  } else {
    if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.063563399017)) {
      result[9] += -0.08087674;
    } else {
      result[9] += -0;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
    result[10] += -0.07631209;
  } else {
    result[10] += 0.024800992;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.60121154785)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.37612885237)) {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62884157896)) {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.0572323799)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31448435783)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.35428348184)) {
                result[11] += 0.0033299606;
              } else {
                if ( (data[78].missing != -1) && (data[78].fvalue < (float)0.0078478725627)) {
                  result[11] += -0.059435323;
                } else {
                  result[11] += -0;
                }
              }
            } else {
              result[11] += 0.032495067;
            }
          } else {
            if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14043554664)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6199991703)) {
                result[11] += -0;
              } else {
                result[11] += -0.037335657;
              }
            } else {
              result[11] += -0.070543356;
            }
          }
        } else {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.10345199704)) {
            result[11] += -0;
          } else {
            result[11] += 0.03736408;
          }
        }
      } else {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.7842888236)) {
          result[11] += 0.085626066;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0903491974)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62008619308)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.2248044759)) {
                if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78048282862)) {
                  result[11] += -0;
                } else {
                  result[11] += 0.062501565;
                }
              } else {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.38747811317)) {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.099427320063)) {
                    if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14162181318)) {
                      result[11] += 0.02152694;
                    } else {
                      result[11] += -0.007588143;
                    }
                  } else {
                    result[11] += -0.05746098;
                  }
                } else {
                  result[11] += 0.018860534;
                }
              }
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.42360827327)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
                  result[11] += 0.015439616;
                } else {
                  result[11] += -0.017427381;
                }
              } else {
                result[11] += -0.054691385;
              }
            }
          } else {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
              result[11] += -0.012625872;
            } else {
              result[11] += 0.08286027;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62009978294)) {
        result[11] += -0;
      } else {
        result[11] += -0.06546261;
      }
    }
  } else {
    result[11] += -0.07942618;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
        result[12] += -0.013194073;
      } else {
        result[12] += -0.08527331;
      }
    } else {
      result[12] += -0;
    }
  } else {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78673630953)) {
      result[12] += -0.027509091;
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.64524072409)) {
        result[12] += 0.07744594;
      } else {
        result[12] += -0;
      }
    }
  }
  if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.079797491431)) {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.17902167141)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62560343742)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
              if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.33236810565)) {
                if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.25414448977)) {
                  if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
                    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
                      if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                        result[0] += -0.0900178;
                      } else {
                        if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16766904294)) {
                          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.92555040121)) {
                            result[0] += -0.012430561;
                          } else {
                            result[0] += 0.014867762;
                          }
                        } else {
                          if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.12977306545)) {
                            result[0] += -0.043540638;
                          } else {
                            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.77144163847)) {
                              result[0] += 0.025673153;
                            } else {
                              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.91121447086)) {
                                result[0] += -0;
                              } else {
                                result[0] += -0.05232783;
                              }
                            }
                          }
                        }
                      }
                    } else {
                      result[0] += 0.022628104;
                    }
                  } else {
                    result[0] += 0.02153594;
                  }
                } else {
                  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
                    result[0] += 0.04261787;
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                result[0] += -0.020775585;
              }
            } else {
              result[0] += -0.046905916;
            }
          } else {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16561180353)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62007719278)) {
                if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.16745822132)) {
                  result[0] += 0.039019354;
                } else {
                  if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.0098451376)) {
                    result[0] += -0.0051117428;
                  } else {
                    result[0] += 0.008648783;
                  }
                }
              } else {
                result[0] += -0.042032816;
              }
            } else {
              result[0] += 0.054842986;
            }
          }
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.46908029914)) {
            result[0] += -0.098727375;
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)4.345328331)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.44902396202)) {
            result[0] += -0;
          } else {
            result[0] += 0.07513801;
          }
        } else {
          result[0] += -0;
        }
      }
    } else {
      result[0] += -0.056861896;
    }
  } else {
    result[0] += 0.08489125;
  }
  if ( (data[62].missing != -1) && (data[62].fvalue < (float)0.054874494672)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.73308742046)) {
          if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010453126393)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.34493669868)) {
                result[1] += -0;
              } else {
                result[1] += -0.09040021;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.7146641016)) {
                if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2706193924)) {
                  result[1] += -0;
                } else {
                  result[1] += 0.078008056;
                }
              } else {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6042920351)) {
                  result[1] += 0.059586726;
                } else {
                  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.016243726015)) {
                    result[1] += -0.026079519;
                  } else {
                    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45299565792)) {
                      result[1] += 0.033050187;
                    } else {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3104484081)) {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                          result[1] += -0.07281616;
                        } else {
                          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007111311)) {
                            result[1] += 0.015622625;
                          } else {
                            result[1] += -0.0041912887;
                          }
                        }
                      } else {
                        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31361842155)) {
                          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62003046274)) {
                            result[1] += -0;
                          } else {
                            result[1] += 0.030395638;
                          }
                        } else {
                          result[1] += -0.017851233;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
              result[1] += -0;
            } else {
              result[1] += 0.075776376;
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
            result[1] += 0.0017974862;
          } else {
            result[1] += -0.07752608;
          }
        }
      } else {
        result[1] += 0.08793735;
      }
    } else {
      result[1] += -0.077054806;
    }
  } else {
    result[1] += 0.09228961;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
      result[2] += 0.027988123;
    } else {
      result[2] += -0.0022893636;
    }
  } else {
    result[2] += -0.07381116;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.32027640939)) {
      result[3] += 0.03627473;
    } else {
      result[3] += 0.09253362;
    }
  } else {
    result[3] += -0.08479823;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018883228)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
      result[4] += -0.0012450826;
    } else {
      result[4] += 0.08361146;
    }
  } else {
    result[4] += -0.08589915;
  }
  if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
      result[5] += -0.08525265;
    } else {
      if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26869207621)) {
        result[5] += -0;
      } else {
        result[5] += -0.013499125;
      }
    }
  } else {
    result[5] += 0.03222232;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62329429388)) {
      result[6] += -0.08495513;
    } else {
      result[6] += -0;
    }
  } else {
    result[6] += 0.001969073;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    result[7] += -0;
  } else {
    result[7] += -0.08475572;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
    result[8] += -0.085902624;
  } else {
    result[8] += 0.02463703;
  }
  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61992967129)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.9271209836)) {
        if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43870261312)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.1340187043)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.13863782585)) {
                result[9] += -0.013942777;
              } else {
                result[9] += 0.011478819;
              }
            } else {
              result[9] += 0.06490508;
            }
          } else {
            result[9] += -0.010807285;
          }
        } else {
          result[9] += -0.07504497;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1643605232)) {
          result[9] += 0.12981582;
        } else {
          result[9] += -0;
        }
      }
    } else {
      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.74951910973)) {
        result[9] += -0.071657136;
      } else {
        result[9] += 0.0152319465;
      }
    }
  } else {
    result[9] += -0.08262955;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.7241204381)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61809414625)) {
      result[10] += -0.021383353;
    } else {
      result[10] += 0.05437077;
    }
  } else {
    result[10] += -0.08088202;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.60121154785)) {
    if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.019624406472)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025296164677)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
            result[11] += 0.03517458;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.85385841131)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
                result[11] += -0;
              } else {
                result[11] += -0.036700383;
              }
            } else {
              result[11] += 0.033483315;
            }
          }
        } else {
          result[11] += -0.049343448;
        }
      } else {
        if ( (data[49].missing != -1) && (data[49].fvalue < (float)-0.038154527545)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31361842155)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.49699115753)) {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
                result[11] += -0;
              } else {
                result[11] += -0.04692226;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3104484081)) {
                  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6291359067)) {
                    result[11] += 0.075317375;
                  } else {
                    result[11] += -0;
                  }
                } else {
                  result[11] += -0;
                }
              } else {
                if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.6201172471)) {
                  result[11] += -0.04616085;
                } else {
                  if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.45539477468)) {
                    result[11] += -0.0021026968;
                  } else {
                    result[11] += 0.036186635;
                  }
                }
              }
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.86948847771)) {
              result[11] += 0.0633998;
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.5702626705)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
                  result[11] += -0.025276426;
                } else {
                  result[11] += 0.020481082;
                }
              } else {
                result[11] += 0.040675145;
              }
            }
          }
        } else {
          result[11] += 0.07596387;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
        if ( (data[76].missing != -1) && (data[76].fvalue < (float)1.0381529331)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            result[11] += -0.05418222;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021154165)) {
              result[11] += -0.019317893;
            } else {
              result[11] += 0.0074155494;
            }
          }
        } else {
          result[11] += 0.043326247;
        }
      } else {
        result[11] += -0.08035318;
      }
    }
  } else {
    result[11] += -0.076681346;
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.27142873406)) {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.013868609443)) {
          result[12] += -0.0040381146;
        } else {
          result[12] += 0.047756393;
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31298440695)) {
          result[12] += -0.08205653;
        } else {
          result[12] += -0;
        }
      }
    } else {
      result[12] += 0.09507614;
    }
  } else {
    result[12] += -0.06198819;
  }
  if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.69846129417)) {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.54742503166)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0803849697)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.099427320063)) {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.34276419878)) {
                  result[0] += -0.014079957;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.22646091878)) {
                    if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.10154105723)) {
                      result[0] += 0.053546164;
                    } else {
                      result[0] += -0;
                    }
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.9442105293)) {
                        result[0] += -0.03622667;
                      } else {
                        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012463808)) {
                          result[0] += -0.021668114;
                        } else {
                          result[0] += 0.043168236;
                        }
                      }
                    } else {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
                        result[0] += 0.054221924;
                      } else {
                        result[0] += -0.0053476077;
                      }
                    }
                  }
                }
              } else {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.9437801838)) {
                  result[0] += -0.042562243;
                } else {
                  result[0] += -0;
                }
              }
            } else {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78268873692)) {
                result[0] += -0;
              } else {
                result[0] += 0.05971974;
              }
            }
          } else {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.13125431538)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6200016737)) {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13260184228)) {
                  result[0] += 0.0054232376;
                } else {
                  result[0] += 0.07576504;
                }
              } else {
                result[0] += -0;
              }
            } else {
              result[0] += -0;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018799782)) {
            result[0] += -0.046289906;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62002694607)) {
              result[0] += 0.021495774;
            } else {
              result[0] += -0.023834165;
            }
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.63977259398)) {
          result[0] += -0.072711855;
        } else {
          if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.30080634356)) {
            result[0] += -0.017344961;
          } else {
            result[0] += -0;
          }
        }
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
        result[0] += -0.09826524;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.090858235955)) {
          if ( (data[31].missing != -1) && (data[31].fvalue < (float)0.52103292942)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02548956871)) {
              result[0] += 0.010492026;
            } else {
              result[0] += -0.02780299;
            }
          } else {
            result[0] += 0.05408331;
          }
        } else {
          result[0] += -0.058972944;
        }
      }
    }
  } else {
    result[0] += 0.061552916;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.33438891172)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.55792814493)) {
            result[1] += -0;
          } else {
            result[1] += -0.06925722;
          }
        } else {
          result[1] += -0;
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.67777997255)) {
            result[1] += 0.0736287;
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
              result[1] += -0.06067763;
            } else {
              if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                result[1] += -0.0044287713;
              } else {
                result[1] += 0.059202474;
              }
            }
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.95877230167)) {
            result[1] += -0.06738007;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36735785007)) {
              result[1] += 0.065171175;
            } else {
              if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.1452716887)) {
                result[1] += -0.087722585;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.5393471718)) {
                  result[1] += 0.064254016;
                } else {
                  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63001906872)) {
                    result[1] += 0.024330717;
                  } else {
                    if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.03643072024)) {
                      result[1] += -0;
                    } else {
                      result[1] += -0.047908038;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.9148039818)) {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1285303086)) {
          result[1] += -0.09107014;
        } else {
          result[1] += -0.024086071;
        }
      } else {
        result[1] += 0.016708964;
      }
    }
  } else {
    result[1] += 0.090229906;
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.13603970408)) {
      result[2] += -0.08410183;
    } else {
      result[2] += -0;
    }
  } else {
    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.57856816053)) {
      result[2] += 0.045750033;
    } else {
      result[2] += -0.056554813;
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
    result[3] += -0.086664416;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.48470166326)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.072406753898)) {
        result[3] += 0.05404547;
      } else {
        result[3] += -0;
      }
    } else {
      result[3] += 0.09175073;
    }
  }
  if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.073681868613)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
      result[4] += -0;
    } else {
      result[4] += -0.08364596;
    }
  } else {
    result[4] += 0.033377178;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48612654209)) {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
        result[5] += 0.026717316;
      } else {
        result[5] += -0.062286604;
      }
    } else {
      result[5] += 0.046013404;
    }
  } else {
    result[5] += -0.080739886;
  }
  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59406167269)) {
    result[6] += -0;
  } else {
    result[6] += -0.08155008;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
    result[7] += -0.09037317;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      result[7] += -0.0217892;
    } else {
      result[7] += 0.013038677;
    }
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    result[8] += 0.020539923;
  } else {
    result[8] += -0.084040254;
  }
  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62013393641)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016224861)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.691501379)) {
            result[9] += -0.029902523;
          } else {
            result[9] += -0;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
            result[9] += 0.09896541;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1565849781)) {
              result[9] += -0.06416026;
            } else {
              result[9] += 0.034565106;
            }
          }
        }
      } else {
        result[9] += 0.074682504;
      }
    } else {
      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90166765451)) {
        result[9] += -0.07783372;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61998140812)) {
          result[9] += -0;
        } else {
          result[9] += 0.033945967;
        }
      }
    }
  } else {
    result[9] += -0.0804497;
  }
  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62265974283)) {
    result[10] += 0.010048303;
  } else {
    result[10] += -0.0808061;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025336515158)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016272545)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
          result[11] += -0;
        } else {
          result[11] += -0.030420031;
        }
      } else {
        result[11] += 0.04795005;
      }
    } else {
      if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.27478697896)) {
        result[11] += -0.083118424;
      } else {
        result[11] += -0.0070349546;
      }
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62884157896)) {
        result[11] += -0.039850213;
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
          result[11] += 0.06531919;
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.69918745756)) {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.13125431538)) {
              result[11] += -0;
            } else {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)4.7785139084)) {
                result[11] += 0.048387017;
              } else {
                result[11] += -0;
              }
            }
          } else {
            result[11] += -0.041661657;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1.2824162245)) {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.8841226697)) {
          result[11] += -0.026303694;
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
            result[11] += 0.05553158;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                  result[11] += 0.019662322;
                } else {
                  result[11] += -0;
                }
              } else {
                result[11] += 0.05040443;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0903491974)) {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
                  result[11] += -0.029285466;
                } else {
                  result[11] += -0;
                }
              } else {
                if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16615319252)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2424036264)) {
                    result[11] += -0.0166806;
                  } else {
                    result[11] += 0.0027727678;
                  }
                } else {
                  result[11] += 0.04097077;
                }
              }
            }
          }
        }
      } else {
        result[11] += 0.07333949;
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.46938577294)) {
          result[12] += 0.054521266;
        } else {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
            result[12] += -0.027831335;
          } else {
            result[12] += 0.021932395;
          }
        }
      } else {
        result[12] += -0.075434975;
      }
    } else {
      result[12] += -0.08121833;
    }
  } else {
    result[12] += 0.02238575;
  }
  if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.69846129417)) {
    if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.5942275524)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.98913425207)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.39446181059)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31227308512)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.75868809223)) {
              if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010553312488)) {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.052392564714)) {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.8841226697)) {
                      if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
                          result[0] += 0.019198867;
                        } else {
                          result[0] += -0;
                        }
                      } else {
                        result[0] += -0.0029430971;
                      }
                    } else {
                      result[0] += -0.021230018;
                    }
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9513647556)) {
                      result[0] += 0.070284516;
                    } else {
                      result[0] += -0;
                    }
                  }
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60424655676)) {
                      result[0] += 0.021124637;
                    } else {
                      result[0] += -0;
                    }
                  } else {
                    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62006723881)) {
                      if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.25171658397)) {
                        result[0] += 0.016650593;
                      } else {
                        result[0] += -0.0050407136;
                      }
                    } else {
                      result[0] += -0.024824265;
                    }
                  }
                }
              } else {
                if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.23322466016)) {
                  result[0] += -0.069506705;
                } else {
                  result[0] += -0;
                }
              }
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43870261312)) {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
                  result[0] += -0.069235966;
                } else {
                  result[0] += -0;
                }
              } else {
                result[0] += -0;
              }
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62017637491)) {
              if ( (data[53].missing != -1) && (data[53].fvalue < (float)0.14160977304)) {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
                  result[0] += 0.003917887;
                } else {
                  result[0] += -0.017697424;
                }
              } else {
                if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.061311610043)) {
                  result[0] += 0.044241108;
                } else {
                  result[0] += -0;
                }
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61983430386)) {
                result[0] += 0.06031893;
              } else {
                result[0] += 0.0020768319;
              }
            }
          }
        } else {
          result[0] += -0.048349515;
        }
      } else {
        result[0] += -0.04725381;
      }
    } else {
      result[0] += -0.06787257;
    }
  } else {
    result[0] += 0.05382514;
  }
  if ( (data[62].missing != -1) && (data[62].fvalue < (float)0.054874494672)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.66160225868)) {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
            result[1] += 0.016670277;
          } else {
            result[1] += -0.011283419;
          }
        } else {
          result[1] += 0.06405223;
        }
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.15081726015)) {
            result[1] += -0.094674826;
          } else {
            result[1] += 0.020711815;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039194416255)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039240390062)) {
                result[1] += 0.015523223;
              } else {
                result[1] += -0.014911079;
              }
            } else {
              result[1] += -0.04547021;
            }
          } else {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26749920845)) {
              result[1] += 0.05582809;
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
                  result[1] += -0.023012929;
                } else {
                  result[1] += -0;
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
                  result[1] += 0.02747845;
                } else {
                  result[1] += -0;
                }
              }
            }
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
        result[1] += -0;
      } else {
        result[1] += -0.09379308;
      }
    }
  } else {
    result[1] += 0.09095225;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31361842155)) {
      result[2] += -0.0026977342;
    } else {
      result[2] += 0.016447738;
    }
  } else {
    result[2] += -0.06774675;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
    result[3] += -0.08501685;
  } else {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.53914117813)) {
      result[3] += 0.028426291;
    } else {
      result[3] += 0.0915882;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
    result[4] += -0.083272286;
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.57992994785)) {
      result[4] += 0.105736405;
    } else {
      result[4] += -0.0019928257;
    }
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.11706339568)) {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025336515158)) {
        result[5] += -0.07916588;
      } else {
        result[5] += -0;
      }
    } else {
      result[5] += 0.06375607;
    }
  } else {
    result[5] += -0.07483463;
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.48054349422)) {
      result[6] += -0.014101797;
    } else {
      result[6] += 0.0015531366;
    }
  } else {
    result[6] += -0.0772823;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
    result[7] += -0.08909033;
  } else {
    result[7] += -0;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    result[8] += 0.0053820433;
  } else {
    result[8] += -0.08229167;
  }
  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60428112745)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016224861)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
        if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3740458488)) {
            result[9] += -0.023105059;
          } else {
            result[9] += 0.008778964;
          }
        } else {
          result[9] += 0.034797795;
        }
      } else {
        result[9] += -0.0401968;
      }
    } else {
      result[9] += 0.047019783;
    }
  } else {
    if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038827370852)) {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62777519226)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
          result[9] += -0.07478418;
        } else {
          result[9] += -0;
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
          result[9] += 0.0170922;
        } else {
          result[9] += -0;
        }
      }
    } else {
      result[9] += -0.07923518;
    }
  }
  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62265974283)) {
    result[10] += 0.009500532;
  } else {
    result[10] += -0.07835858;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)1.1005766392)) {
      if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63217777014)) {
          result[11] += -0.022375112;
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
            result[11] += 0.04865594;
          } else {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)1.1207917929)) {
              if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20845749974)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31448435783)) {
                    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.6201159358)) {
                      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.58880263567)) {
                        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31556677818)) {
                          result[11] += -0;
                        } else {
                          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
                            result[11] += -0.07778873;
                          } else {
                            result[11] += -0;
                          }
                        }
                      } else {
                        result[11] += 0.015370942;
                      }
                    } else {
                      result[11] += 0.027226862;
                    }
                  } else {
                    if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.098906427622)) {
                      result[11] += -0.05829196;
                    } else {
                      result[11] += -0;
                    }
                  }
                } else {
                  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13024370372)) {
                    result[11] += 0.04860859;
                  } else {
                    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62011218071)) {
                      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016171217)) {
                        result[11] += -0;
                      } else {
                        result[11] += 0.036141;
                      }
                    } else {
                      result[11] += -0.012825811;
                    }
                  }
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.5221838951)) {
                  result[11] += -0.04326232;
                } else {
                  result[11] += -0;
                }
              }
            } else {
              result[11] += 0.045791805;
            }
          }
        }
      } else {
        result[11] += 0.058781337;
      }
    } else {
      result[11] += -0.046645083;
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025237726048)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62015712261)) {
        result[11] += -0;
      } else {
        result[11] += -0.08209385;
      }
    } else {
      result[11] += 0.017284835;
    }
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.13324643672)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.41649469733)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.015415844508)) {
            result[12] += -0.012633706;
          } else {
            result[12] += 0.056037232;
          }
        } else {
          result[12] += 0.07288309;
        }
      } else {
        result[12] += -0.034213547;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.5637139678)) {
        result[12] += -0.07624587;
      } else {
        result[12] += -0;
      }
    }
  } else {
    result[12] += -0.068375126;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0803849697)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.54725086689)) {
        result[0] += 0.105488114;
      } else {
        result[0] += -0.0021068933;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.54537212849)) {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.17268300056)) {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.89751946926)) {
                result[0] += 0.04568355;
              } else {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.34276419878)) {
                    result[0] += -0.03283442;
                  } else {
                    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.92445510626)) {
                      result[0] += 0.023608351;
                    } else {
                      result[0] += -0.021521505;
                    }
                  }
                } else {
                  if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39758071303)) {
                    result[0] += 0.056813296;
                  } else {
                    if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.15737706423)) {
                      result[0] += -0.031702843;
                    } else {
                      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
                        result[0] += 0.01680328;
                      } else {
                        if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.0098451376)) {
                          result[0] += -0.01435661;
                        } else {
                          result[0] += -0;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
                result[0] += -0.10539377;
              } else {
                result[0] += -0;
              }
            }
          } else {
            result[0] += 0.044902373;
          }
        } else {
          result[0] += -0.06568905;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.88496041298)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
            if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.46938577294)) {
              result[0] += 0.046260748;
            } else {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59547013044)) {
                if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14043554664)) {
                  result[0] += -0;
                } else {
                  result[0] += -0.051656995;
                }
              } else {
                result[0] += 0.034605887;
              }
            }
          } else {
            result[0] += 0.07912319;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.9531545639)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.44902396202)) {
              result[0] += -0.08727403;
            } else {
              result[0] += -0;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
              result[0] += -0;
            } else {
              result[0] += 0.07519567;
            }
          }
        }
      }
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.40200158954)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.097437560558)) {
        result[0] += -0.03566968;
      } else {
        result[0] += 0.008621793;
      }
    } else {
      result[0] += -0.08844138;
    }
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010486016981)) {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.33438891172)) {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.48307839036)) {
              result[1] += -0.053923346;
            } else {
              result[1] += -0;
            }
          } else {
            result[1] += -0;
          }
        } else {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6042920351)) {
            result[1] += 0.060231093;
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
              result[1] += -0.03140001;
            } else {
              if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.23067225516)) {
                result[1] += 0.048502456;
              } else {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
                  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59773939848)) {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60412824154)) {
                      result[1] += -0;
                    } else {
                      result[1] += -0.034498557;
                    }
                  } else {
                    result[1] += 0.03470047;
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
                    result[1] += -0.094448924;
                  } else {
                    result[1] += 0.0058676754;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.036982625723)) {
          result[1] += 0.05983484;
        } else {
          result[1] += -0;
        }
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)8.0734472275)) {
        result[1] += -0.059196603;
      } else {
        result[1] += 0.011313516;
      }
    }
  } else {
    result[1] += 0.088132896;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
    if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.11440932006)) {
      result[2] += -0.0009398402;
    } else {
      result[2] += 0.027956216;
    }
  } else {
    result[2] += -0.06388449;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243191481)) {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60429447889)) {
      result[3] += 0.026930183;
    } else {
      result[3] += 0.09082841;
    }
  } else {
    result[3] += -0.08290632;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
    result[4] += -0.0676656;
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
      result[4] += 0.09492448;
    } else {
      result[4] += -0;
    }
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48612654209)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039231427014)) {
        result[5] += 0.024803793;
      } else {
        result[5] += -0.059959166;
      }
    } else {
      result[5] += 0.041935775;
    }
  } else {
    result[5] += -0.07589328;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
    result[6] += -0.07038044;
  } else {
    result[6] += 0.007860476;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.51698690653)) {
    result[7] += -0.07742466;
  } else {
    result[7] += -0;
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[8] += -0.0828586;
  } else {
    result[8] += 0.019703286;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1061306)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.72576403618)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80862355232)) {
            result[9] += -0.04924547;
          } else {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62648659945)) {
              result[9] += 0.03937847;
            } else {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
                result[9] += -0.031775407;
              } else {
                result[9] += -0;
              }
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
            result[9] += 0.095375046;
          } else {
            result[9] += -0;
          }
        }
      } else {
        result[9] += -0.052371956;
      }
    } else {
      result[9] += 0.02637149;
    }
  } else {
    if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.11643721908)) {
      result[9] += -0.07001899;
    } else {
      result[9] += -0.002401147;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.20198245347)) {
      result[10] += -0;
    } else {
      result[10] += -0.075272985;
    }
  } else {
    result[10] += 0.03236328;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    result[11] += -0.045758635;
  } else {
    if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.0066426661797)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025296164677)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.85385841131)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.66160225868)) {
                result[11] += 0.01334303;
              } else {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
                  result[11] += -0.011545598;
                } else {
                  result[11] += -0;
                }
              }
            } else {
              result[11] += -0.02436556;
            }
          } else {
            result[11] += 0.058710866;
          }
        } else {
          result[11] += -0.053608008;
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
          if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20994369686)) {
            result[11] += -0;
          } else {
            if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.25986525416)) {
              result[11] += 0.10126472;
            } else {
              result[11] += 0.016207963;
            }
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.024807412177)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.45742243528)) {
              if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
                result[11] += -0.069370426;
              } else {
                result[11] += -0;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                result[11] += 0.03537642;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0517596006)) {
                  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26269108057)) {
                    result[11] += -0;
                  } else {
                    result[11] += -0.04554597;
                  }
                } else {
                  if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16615319252)) {
                    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6291359067)) {
                      result[11] += -0;
                    } else {
                      result[11] += -0.010363045;
                    }
                  } else {
                    result[11] += 0.025988366;
                  }
                }
              }
            }
          } else {
            result[11] += 0.032865632;
          }
        }
      }
    } else {
      if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.66162455082)) {
        result[11] += -0.06668243;
      } else {
        if ( (data[76].missing != -1) && (data[76].fvalue < (float)1.0381529331)) {
          if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.98850309849)) {
            if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14162181318)) {
              result[11] += -0;
            } else {
              result[11] += -0.03921043;
            }
          } else {
            result[11] += 0.005422735;
          }
        } else {
          result[11] += 0.048107825;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.60239255428)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.7954890728)) {
        result[12] += 0.024741706;
      } else {
        result[12] += -0.036403283;
      }
    } else {
      result[12] += -0.071086206;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
      result[12] += -0.04781893;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62014520168)) {
        result[12] += 0.06546178;
      } else {
        result[12] += -0;
      }
    }
  }
  if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.55820518732)) {
    if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14043554664)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038891922683)) {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
            if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039200074971)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.26939401031)) {
                if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
                  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                    result[0] += 0.031246513;
                  } else {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.31842756271)) {
                      result[0] += -0.0076632937;
                    } else {
                      result[0] += 0.032073583;
                    }
                  }
                } else {
                  result[0] += -0.02028083;
                }
              } else {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                  result[0] += -0.030869238;
                } else {
                  result[0] += 0.0043891394;
                }
              }
            } else {
              result[0] += 0.01857598;
            }
          } else {
            if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20994369686)) {
              result[0] += -0;
            } else {
              result[0] += 0.049170833;
            }
          }
        } else {
          result[0] += -0.03921298;
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.0963844061)) {
          result[0] += -0.060314618;
        } else {
          result[0] += -0;
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.44946065545)) {
          result[0] += 0.06398125;
        } else {
          result[0] += 0.0009316979;
        }
      } else {
        if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.37811747193)) {
          if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.40617159009)) {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.15605132282)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62009418011)) {
                  result[0] += 0.031791154;
                } else {
                  result[0] += -0.021491198;
                }
              } else {
                result[0] += 0.053611577;
              }
            } else {
              if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.56659722328)) {
                result[0] += -0.007035111;
              } else {
                result[0] += 0.011808181;
              }
            }
          } else {
            if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.0098451376)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6202095747)) {
                result[0] += -0.017422674;
              } else {
                result[0] += -0;
              }
            } else {
              result[0] += 0.008794738;
            }
          }
        } else {
          result[0] += -0.04077446;
        }
      }
    }
  } else {
    result[0] += -0.041883994;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16801552474)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2002477646)) {
                result[1] += -0.0013438226;
              } else {
                if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
                  result[1] += -0;
                } else {
                  result[1] += 0.07562115;
                }
              }
            } else {
              if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.03810730949)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.7146641016)) {
                  result[1] += 0.041033037;
                } else {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                      result[1] += -0.012057103;
                    } else {
                      result[1] += 0.036721125;
                    }
                  } else {
                    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
                      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31372666359)) {
                        result[1] += -0;
                      } else {
                        result[1] += 0.036279883;
                      }
                    } else {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
                        result[1] += -0.08977824;
                      } else {
                        result[1] += -0;
                      }
                    }
                  }
                }
              } else {
                result[1] += -0.06596766;
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
              result[1] += -0;
            } else {
              result[1] += -0.08348153;
            }
          }
        } else {
          result[1] += -0.076981455;
        }
      } else {
        result[1] += 0.07927533;
      }
    } else {
      result[1] += -0.075044245;
    }
  } else {
    result[1] += 0.086878374;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016052008)) {
      result[2] += 0.042095736;
    } else {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.60602760315)) {
        result[2] += -0.032452296;
      } else {
        result[2] += -0;
      }
    }
  } else {
    result[2] += -0.07645792;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.53914117813)) {
      result[3] += 0.02500818;
    } else {
      result[3] += 0.09005536;
    }
  } else {
    result[3] += -0.079235576;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
    result[4] += -0.079764254;
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.57992994785)) {
      result[4] += 0.08239617;
    } else {
      result[4] += -0.00020589182;
    }
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.57848584652)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
        result[5] += -0;
      } else {
        result[5] += 0.06476364;
      }
    } else {
      result[5] += -0.023415884;
    }
  } else {
    result[5] += -0.07301105;
  }
  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59406167269)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.5295907259)) {
      result[6] += -0;
    } else {
      result[6] += 0.011191272;
    }
  } else {
    result[6] += -0.07478459;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
    result[7] += -0.08413913;
  } else {
    result[7] += -0;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61931306124)) {
    result[8] += -0.08142435;
  } else {
    result[8] += 0.030631067;
  }
  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61992967129)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.9271209836)) {
        if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14043554664)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02535321191)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
                result[9] += -0.05077263;
              } else {
                result[9] += -0;
              }
            } else {
              result[9] += 0.022579407;
            }
          } else {
            result[9] += 0.03549066;
          }
        } else {
          result[9] += -0.029132033;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1643605232)) {
          result[9] += 0.10586033;
        } else {
          result[9] += -0.0011310964;
        }
      }
    } else {
      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.74951910973)) {
        result[9] += -0.072055645;
      } else {
        result[9] += 0.012870433;
      }
    }
  } else {
    result[9] += -0.07344458;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.80720156431)) {
    result[10] += 0.017256718;
  } else {
    result[10] += -0.06264181;
  }
  if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.42099300027)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1.8430496454)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016171217)) {
        result[11] += -0;
      } else {
        result[11] += -0.070834465;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
        result[11] += -0.0066614253;
      } else {
        result[11] += 0.059999082;
      }
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.4555888176)) {
          result[11] += 0.028860563;
        } else {
          result[11] += -0.007205029;
        }
      } else {
        result[11] += 0.06177609;
      }
    } else {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)1.1005766392)) {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.33236810565)) {
          if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26178085804)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60209196806)) {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
                  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62004828453)) {
                    result[11] += -0.0044189803;
                  } else {
                    result[11] += 0.0062564984;
                  }
                } else {
                  result[11] += -0.029669305;
                }
              } else {
                result[11] += 0.0094127385;
              }
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                result[11] += 0.046855643;
              } else {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31448435783)) {
                    result[11] += 0.003400597;
                  } else {
                    result[11] += -0.045589514;
                  }
                } else {
                  if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.5982936621)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.038573626;
                  }
                }
              }
            }
          } else {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.25613036752)) {
              result[11] += -0.042049397;
            } else {
              if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64121770859)) {
                result[11] += -0.0061918115;
              } else {
                result[11] += 0.01071775;
              }
            }
          }
        } else {
          if ( (data[53].missing != -1) && (data[53].fvalue < (float)0.14160977304)) {
            result[11] += 0.040198736;
          } else {
            if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.061311610043)) {
              result[11] += -0.019004287;
            } else {
              result[11] += 0.028337928;
            }
          }
        }
      } else {
        result[11] += -0.028326025;
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        result[12] += -0.079464465;
      } else {
        result[12] += -0.011344342;
      }
    } else {
      result[12] += 0.006592275;
    }
  } else {
    if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039004057646)) {
      result[12] += 0.056042;
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
        result[12] += -0.056617737;
      } else {
        result[12] += 0.023092011;
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0803849697)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
      if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.16745822132)) {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.7439284325)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61965614557)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.88496041298)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.56359541416)) {
                if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
                  result[0] += -0.017932493;
                } else {
                  if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.38767385483)) {
                    result[0] += 0.06262781;
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                result[0] += 0.0694757;
              }
            } else {
              result[0] += -0;
            }
          } else {
            result[0] += -0;
          }
        } else {
          result[0] += -0;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.19846561551)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.63977259398)) {
            result[0] += -0.0032205582;
          } else {
            result[0] += 0.029603554;
          }
        } else {
          result[0] += -0.04853963;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6200453043)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3814028502)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.69918745756)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10234069079)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31227308512)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
                  result[0] += 0.00046906612;
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.92375618219)) {
                    result[0] += -0.043860313;
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
                  result[0] += 0.030597785;
                } else {
                  result[0] += -0;
                }
              }
            } else {
              result[0] += 0.022607064;
            }
          } else {
            result[0] += -0.053677477;
          }
        } else {
          result[0] += 0.026061706;
        }
      } else {
        if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16623981297)) {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.12352977693)) {
            result[0] += -0.014618293;
          } else {
            result[0] += -0.099749155;
          }
        } else {
          result[0] += 0.012585733;
        }
      }
    }
  } else {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      result[0] += -0.090154156;
    } else {
      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60416448116)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018799782)) {
          result[0] += -0.0004305869;
        } else {
          result[0] += 0.023757815;
        }
      } else {
        result[0] += -0.011035166;
      }
    }
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.030849346891)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90166765451)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
                if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
                  result[1] += 0.07664973;
                } else {
                  result[1] += 0.004247842;
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71965879202)) {
                  result[1] += 0.01950997;
                } else {
                  result[1] += -0;
                }
              }
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62013393641)) {
                if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
                  result[1] += -0.027239839;
                } else {
                  result[1] += -0;
                }
              } else {
                result[1] += 0.009539009;
              }
            }
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54431396723)) {
              result[1] += -0.077698626;
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
                if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16697607934)) {
                  result[1] += 0.05085909;
                } else {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
                    result[1] += -0.024083195;
                  } else {
                    result[1] += 0.016422957;
                  }
                }
              } else {
                result[1] += -0.041861136;
              }
            }
          }
        } else {
          result[1] += 0.054119773;
        }
      } else {
        result[1] += -0.048296507;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
        result[1] += -0;
      } else {
        result[1] += -0.0861592;
      }
    }
  } else {
    result[1] += 0.08518878;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.47401487827)) {
        result[2] += 0.045362495;
      } else {
        result[2] += -0;
      }
    } else {
      result[2] += -0.038025875;
    }
  } else {
    result[2] += -0.072859466;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
    result[3] += -0.08107194;
  } else {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.53914117813)) {
      result[3] += 0.024251794;
    } else {
      result[3] += 0.08912209;
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.92178285122)) {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
      result[4] += -0.003214717;
    } else {
      result[4] += 0.08831684;
    }
  } else {
    result[4] += -0.07725608;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
      result[5] += -0.031071536;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.53381425142)) {
        result[5] += -0;
      } else {
        result[5] += 0.049512815;
      }
    }
  } else {
    result[5] += -0.070166394;
  }
  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59406167269)) {
    result[6] += -0;
  } else {
    result[6] += -0.071396;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.52890723944)) {
    result[7] += -0.07622992;
  } else {
    result[7] += -0;
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[8] += -0.07976924;
  } else {
    result[8] += 0.018911114;
  }
  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
    if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.16032426059)) {
      if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46831515431)) {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
            result[9] += -0.07783632;
          } else {
            result[9] += 0.025677959;
          }
        } else {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            result[9] += 0.044892907;
          } else {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.73670840263)) {
              result[9] += -0.033040226;
            } else {
              result[9] += 0.019618098;
            }
          }
        }
      } else {
        result[9] += -0.043134693;
      }
    } else {
      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6042920351)) {
        result[9] += -0;
      } else {
        result[9] += 0.0643134;
      }
    }
  } else {
    result[9] += -0.07033767;
  }
  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
    result[10] += 0.012143413;
  } else {
    result[10] += -0.07051368;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.29902103543)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
          result[11] += -0;
        } else {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
            result[11] += -0.07849137;
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44316831231)) {
              result[11] += -0;
            } else {
              result[11] += -0.026721153;
            }
          }
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
          result[11] += 0.056356173;
        } else {
          if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.68158894777)) {
            result[11] += -0.019675199;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.026138374582)) {
              result[11] += -0;
            } else {
              result[11] += 0.02863093;
            }
          }
        }
      }
    } else {
      result[11] += -0.079165146;
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.5635496974)) {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63207966089)) {
          result[11] += -0;
        } else {
          result[11] += 0.063322075;
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.430624485)) {
          result[11] += -0.0048017246;
        } else {
          result[11] += 0.019710679;
        }
      }
    } else {
      if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.12242311239)) {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          result[11] += -0.037772536;
        } else {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6042920351)) {
            result[11] += -0.010340291;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007844448)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                result[11] += -0;
              } else {
                result[11] += 0.04852721;
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62015879154)) {
                result[11] += -0.027347846;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.5465011597)) {
                  if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64121770859)) {
                    result[11] += 0.017846653;
                  } else {
                    result[11] += -0.03019075;
                  }
                } else {
                  result[11] += 0.020523936;
                }
              }
            }
          }
        }
      } else {
        result[11] += 0.047242988;
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78673630953)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
          result[12] += -0;
        } else {
          result[12] += -0.049772587;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62007403374)) {
          result[12] += -0;
        } else {
          result[12] += 0.042981718;
        }
      }
    } else {
      result[12] += -0.072126776;
    }
  } else {
    result[12] += 0.027535023;
  }
  if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
    if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14043554664)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59719163179)) {
              result[0] += -0.03360588;
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.1497981548)) {
                result[0] += 0.021272253;
              } else {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59171414375)) {
                  result[0] += -0;
                } else {
                  result[0] += -0.022631912;
                }
              }
            }
          } else {
            result[0] += 0.009858123;
          }
        } else {
          result[0] += -0.07263619;
        }
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.6838402748)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039240390062)) {
              result[0] += -0;
            } else {
              result[0] += 0.03740805;
            }
          } else {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
              result[0] += -0.022855328;
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31324729323)) {
                result[0] += 0.02545783;
              } else {
                result[0] += -0.0017117552;
              }
            }
          }
        } else {
          result[0] += -0.033681978;
        }
      }
    } else {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024123216048)) {
          if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.2017621398)) {
            result[0] += 0.06728904;
          } else {
            result[0] += -0;
          }
        } else {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.1497981548)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018430233)) {
              result[0] += 0.009307942;
            } else {
              if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.44573503733)) {
                result[0] += -0;
              } else {
                result[0] += -0.031150043;
              }
            }
          } else {
            result[0] += 0.0367891;
          }
        }
      } else {
        if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.0085190376267)) {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)1.177542448)) {
            result[0] += -0.044484876;
          } else {
            result[0] += -0;
          }
        } else {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)1.1005766392)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6202095747)) {
              if ( (data[76].missing != -1) && (data[76].fvalue < (float)1.0362232924)) {
                result[0] += -0.026162222;
              } else {
                result[0] += -0;
              }
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.91121447086)) {
                result[0] += 0.025414295;
              } else {
                result[0] += -0;
              }
            }
          } else {
            result[0] += 0.030325195;
          }
        }
      }
    }
  } else {
    result[0] += 0.05866064;
  }
  if ( (data[60].missing != -1) && (data[60].fvalue < (float)0.2248044312)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.030849346891)) {
        if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.40983131528)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62015712261)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79868918657)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
                result[1] += -0.022944145;
              } else {
                result[1] += -0;
              }
            } else {
              result[1] += 0.05674277;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.7146641016)) {
              result[1] += 0.027171638;
            } else {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45299565792)) {
                  if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45484149456)) {
                    result[1] += -0;
                  } else {
                    result[1] += 0.035112284;
                  }
                } else {
                  if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20915105939)) {
                    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62012916803)) {
                      result[1] += -0;
                    } else {
                      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                        result[1] += -0;
                      } else {
                        result[1] += -0.04458877;
                      }
                    }
                  } else {
                    if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16615319252)) {
                      result[1] += 0.009549854;
                    } else {
                      result[1] += -0;
                    }
                  }
                }
              } else {
                result[1] += -0.045408305;
              }
            }
          }
        } else {
          result[1] += 0.061691426;
        }
      } else {
        result[1] += -0.037376154;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
        result[1] += -0;
      } else {
        result[1] += -0.08653897;
      }
    }
  } else {
    result[1] += 0.086417705;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
      result[2] += 0.027971528;
    } else {
      result[2] += -0.00043178347;
    }
  } else {
    result[2] += -0.0494585;
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.07593054;
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
      result[3] += 0.022231517;
    } else {
      result[3] += 0.08815138;
    }
  }
  if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.073681868613)) {
    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
      result[4] += -0;
    } else {
      result[4] += -0.0744752;
    }
  } else {
    result[4] += 0.041285574;
  }
  if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44117793441)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.082774102688)) {
      result[5] += -0;
    } else {
      result[5] += -0.07385762;
    }
  } else {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62329429388)) {
      result[5] += 0.050263442;
    } else {
      result[5] += -0.030898554;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
    result[6] += -0.007967407;
  } else {
    result[6] += -0.076931834;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.51698690653)) {
    result[7] += -0.071127705;
  } else {
    result[7] += -0;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
    result[8] += -0.07833744;
  } else {
    result[8] += 0.034778364;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62008410692)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.51567870378)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.73670840263)) {
          if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
            result[9] += -0.0032000188;
          } else {
            if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
              result[9] += -0;
            } else {
              result[9] += 0.076201685;
            }
          }
        } else {
          result[9] += 0.07454798;
        }
      } else {
        result[9] += -0.008643341;
      }
    } else {
      result[9] += -0.013636146;
    }
  } else {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.05301155895)) {
      result[9] += -0.05580682;
    } else {
      result[9] += -0;
    }
  }
  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59609615803)) {
    result[10] += 0.0032944537;
  } else {
    result[10] += -0.039241526;
  }
  if ( (data[76].missing != -1) && (data[76].fvalue < (float)1.0381529331)) {
    if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.061268497258)) {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010497917421)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.67777997255)) {
              result[11] += -0.03438072;
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45538172126)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.099427320063)) {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.051540945;
                  }
                } else {
                  result[11] += -0.008910549;
                }
              } else {
                if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
                    result[11] += -0.0485282;
                  } else {
                    result[11] += -0;
                  }
                } else {
                  result[11] += -0;
                }
              }
            }
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60421293974)) {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.035617761314)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.58880263567)) {
                  result[11] += 0.006739917;
                } else {
                  result[11] += 0.068766005;
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.0572323799)) {
                  result[11] += -0.013278125;
                } else {
                  result[11] += 0.018715478;
                }
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.88922256231)) {
                result[11] += 0.020651562;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.4091620445)) {
                  result[11] += -0.039469592;
                } else {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31341737509)) {
                    result[11] += 0.016861053;
                  } else {
                    result[11] += -0.0014469028;
                  }
                }
              }
            }
          }
        } else {
          result[11] += -0.057231225;
        }
      } else {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60427713394)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.35428348184)) {
            result[11] += 0.023230612;
          } else {
            result[11] += -0.025738496;
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.92178285122)) {
            result[11] += 0.083116814;
          } else {
            result[11] += -0;
          }
        }
      }
    } else {
      result[11] += -0.048913103;
    }
  } else {
    result[11] += 0.03987784;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
      result[12] += -0.05618349;
    } else {
      result[12] += 0.0066800476;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62005460262)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
        result[12] += -0.02770361;
      } else {
        result[12] += 0.0180776;
      }
    } else {
      result[12] += 0.043203127;
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0803849697)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.9531545639)) {
      if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.69846129417)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
          if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.26926609874)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.91121447086)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.4620957375)) {
                result[0] += 0.07461693;
              } else {
                result[0] += -0;
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.8454970121)) {
                result[0] += -0.100411594;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                  if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.2646687031)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.44319611788)) {
                        result[0] += 0.0179641;
                      } else {
                        result[0] += -0.017323768;
                      }
                    } else {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.41503149271)) {
                        result[0] += -0.046368048;
                      } else {
                        result[0] += -0;
                      }
                    }
                  } else {
                    result[0] += 0.022740094;
                  }
                } else {
                  result[0] += 0.037832707;
                }
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.63977259398)) {
              result[0] += -0.09090441;
            } else {
              result[0] += -0.005915912;
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.7244440317)) {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6194216013)) {
              result[0] += -0.017573988;
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
                  result[0] += -0;
                } else {
                  result[0] += 0.023418207;
                }
              } else {
                result[0] += -0;
              }
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025453392416)) {
              if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
                result[0] += 0.07295175;
              } else {
                result[0] += 0.002821775;
              }
            } else {
              if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.40983131528)) {
                result[0] += 0.023124691;
              } else {
                result[0] += -0.034428526;
              }
            }
          }
        }
      } else {
        result[0] += 0.04921896;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018883228)) {
        result[0] += 0.0831049;
      } else {
        result[0] += -0;
      }
    }
  } else {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      result[0] += -0.08203001;
    } else {
      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60416448116)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018799782)) {
          result[0] += -0;
        } else {
          result[0] += 0.016252203;
        }
      } else {
        result[0] += -0.021845412;
      }
    }
  }
  if ( (data[62].missing != -1) && (data[62].fvalue < (float)0.054874494672)) {
    if ( (data[48].missing != -1) && (data[48].fvalue < (float)-0.26415070891)) {
      if ( (data[21].missing != -1) && (data[21].fvalue < (float)-0.4460863471)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.82930922508)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.91121447086)) {
                  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
                    result[1] += -0;
                  } else {
                    result[1] += 0.015365707;
                  }
                } else {
                  result[1] += 0.064604975;
                }
              } else {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.86629867554)) {
                  result[1] += -0.08050112;
                } else {
                  if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
                    result[1] += 0.019650491;
                  } else {
                    result[1] += -0.017394314;
                  }
                }
              }
            } else {
              result[1] += 0.048752982;
            }
          } else {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13342361152)) {
                result[1] += -0;
              } else {
                result[1] += -0.060229097;
              }
            } else {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60414254665)) {
                  result[1] += -0;
                } else {
                  result[1] += -0.035730943;
                }
              } else {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
                  result[1] += 0.055463016;
                } else {
                  result[1] += -0;
                }
              }
            }
          }
        } else {
          result[1] += -0.051071215;
        }
      } else {
        result[1] += 0.05901572;
      }
    } else {
      result[1] += -0.04527599;
    }
  } else {
    result[1] += 0.08608935;
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
      result[2] += -0.07749721;
    } else {
      result[2] += -0;
    }
  } else {
    if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038605824113)) {
      result[2] += 0.03456866;
    } else {
      result[2] += -0;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243191481)) {
    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
      result[3] += 0.015138237;
    } else {
      result[3] += 0.08735452;
    }
  } else {
    result[3] += -0.076867305;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010524965823)) {
      result[4] += -0.07677189;
    } else {
      result[4] += -0;
    }
  } else {
    result[4] += 0.04716881;
  }
  if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      result[5] += -0.07600461;
    } else {
      result[5] += -0;
    }
  } else {
    result[5] += 0.04297856;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62008976936)) {
    result[6] += -0;
  } else {
    result[6] += -0.07480256;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
    result[7] += -0.08129491;
  } else {
    result[7] += -0;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
    result[8] += -0.07642959;
  } else {
    result[8] += 0.032713473;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62008410692)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021076679)) {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59797418118)) {
          result[9] += -0;
        } else {
          result[9] += 0.016234232;
        }
      } else {
        result[9] += -0.0273484;
      }
    } else {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.36591973901)) {
        result[9] += -0.0016186824;
      } else {
        result[9] += 0.060197633;
      }
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
      result[9] += -0.0722461;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62007719278)) {
        result[9] += -0.04182934;
      } else {
        result[9] += 0.015513915;
      }
    }
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.80720156431)) {
    result[10] += 0.013160607;
  } else {
    result[10] += -0.028787846;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.29902103543)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.037399079651)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
          result[11] += -0.042027168;
        } else {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31510287523)) {
            result[11] += 0.020337338;
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)8.1014785767)) {
              result[11] += -0.035993427;
            } else {
              result[11] += 0.00875441;
            }
          }
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
          result[11] += 0.057909798;
        } else {
          if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
            result[11] += -0.0065366086;
          } else {
            result[11] += -0;
          }
        }
      }
    } else {
      result[11] += -0.07373716;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
      if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78900486231)) {
          result[11] += -0;
        } else {
          result[11] += -0.059296027;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.55644726753)) {
            result[11] += 0.053966843;
          } else {
            result[11] += -0;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.071803093)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
              result[11] += -0;
            } else {
              result[11] += -0.03866038;
            }
          } else {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31361842155)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8140254021)) {
                result[11] += 0.004428591;
              } else {
                result[11] += -0.018501678;
              }
            } else {
              result[11] += 0.023715168;
            }
          }
        }
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1.8430496454)) {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.11372674257)) {
          result[11] += 0.020427922;
        } else {
          result[11] += -0.010176149;
        }
      } else {
        result[11] += 0.085475616;
      }
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
      if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39895129204)) {
        result[12] += -0.047732748;
      } else {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.7954890728)) {
          result[12] += 0.030451845;
        } else {
          result[12] += -0.0046060286;
        }
      }
    } else {
      result[12] += 0.065066144;
    }
  } else {
    result[12] += -0.048175994;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0803849697)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.54725086689)) {
        result[0] += 0.061329585;
      } else {
        result[0] += -0;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
        if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.20866623521)) {
          if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14043554664)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60413211584)) {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
                result[0] += -0.022550726;
              } else {
                result[0] += -0.13490759;
              }
            } else {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.75868809223)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
                  result[0] += 0.017689746;
                } else {
                  result[0] += -0.0054510203;
                }
              } else {
                result[0] += -0.027540477;
              }
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62012761831)) {
              result[0] += -0.0089073535;
            } else {
              result[0] += 0.032795493;
            }
          }
        } else {
          result[0] += 0.025176551;
        }
      } else {
        if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.16745822132)) {
          if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.23327606916)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.99576175213)) {
              if ( (data[80].missing != -1) && (data[80].fvalue < (float)1.8374700546)) {
                result[0] += -0.028155193;
              } else {
                result[0] += 0.007848156;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10234069079)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0657052994)) {
                  result[0] += 0.018461622;
                } else {
                  result[0] += -0.0018418544;
                }
              } else {
                result[0] += 0.045174837;
              }
            }
          } else {
            result[0] += 0.057994872;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.19846561551)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
              result[0] += 0.04092805;
            } else {
              if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.68158894777)) {
                result[0] += -0.018494146;
              } else {
                result[0] += -0;
              }
            }
          } else {
            result[0] += -0.049511947;
          }
        }
      }
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.95358139277)) {
        result[0] += -0.030497668;
      } else {
        result[0] += 0.028299162;
      }
    } else {
      result[0] += -0.057857793;
    }
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78048282862)) {
        if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.13084815443)) {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.65615385771)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
              result[1] += -0;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62005966902)) {
                result[1] += 0.08351216;
              } else {
                result[1] += 0.018166086;
              }
            }
          } else {
            result[1] += -0;
          }
        } else {
          result[1] += -0.040200274;
        }
      } else {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54431396723)) {
          result[1] += -0.063008286;
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.5393471718)) {
              result[1] += 0.057654507;
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
                result[1] += -0.018803371;
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
                    result[1] += -0;
                  } else {
                    result[1] += -0.02787928;
                  }
                } else {
                  result[1] += 0.049034815;
                }
              }
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.1065300256)) {
              result[1] += -0.06645195;
            } else {
              result[1] += 0.0057332674;
            }
          }
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
        result[1] += -0.082245216;
      } else {
        result[1] += -0;
      }
    }
  } else {
    result[1] += 0.08017233;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
      result[2] += 0.025138116;
    } else {
      result[2] += -0.00042630732;
    }
  } else {
    result[2] += -0.046047356;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31443795562)) {
    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
      result[3] += 0.0113281505;
    } else {
      result[3] += 0.086061075;
    }
  } else {
    result[3] += -0.075107545;
  }
  if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
    result[4] += -0.04609684;
  } else {
    result[4] += 0.03806438;
  }
  if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      result[5] += -0.0732609;
    } else {
      result[5] += -0;
    }
  } else {
    result[5] += 0.03508661;
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
    result[6] += -0;
  } else {
    result[6] += -0.03798968;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
    result[7] += -0.07749777;
  } else {
    result[7] += -0;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
    result[8] += -0.07447561;
  } else {
    result[8] += 0.035454668;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
    if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.1452716887)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61992967129)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021076679)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
            if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
              result[9] += -0;
            } else {
              result[9] += 0.040138338;
            }
          } else {
            result[9] += -0.009613772;
          }
        } else {
          result[9] += 0.045513798;
        }
      } else {
        result[9] += -0.003579895;
      }
    } else {
      result[9] += -0.022796983;
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.9271209836)) {
      result[9] += -0.07950095;
    } else {
      result[9] += 0.0063771503;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012988329)) {
    result[10] += -0.06369201;
  } else {
    result[10] += 0.0035002888;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    result[11] += -0.03231798;
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2002477646)) {
      result[11] += 0.045284975;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
        if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.025529455394)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
            if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
                result[11] += -0;
              } else {
                result[11] += -0.060120124;
              }
            } else {
              result[11] += 0.013371899;
            }
          } else {
            if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.13308440149)) {
              result[11] += 0.038642433;
            } else {
              result[11] += -0;
            }
          }
        } else {
          result[11] += -0.07312261;
        }
      } else {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60427713394)) {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79708915949)) {
            result[11] += 0.024833826;
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.58880263567)) {
              result[11] += -0.05803739;
            } else {
              result[11] += -0;
            }
          }
        } else {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
            result[11] += 0.070725575;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62015038729)) {
              if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.17355711758)) {
                result[11] += -0.02459437;
              } else {
                result[11] += 0.0136440685;
              }
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62004071474)) {
                if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.12977306545)) {
                  result[11] += -0;
                } else {
                  result[11] += 0.035252765;
                }
              } else {
                if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.24775236845)) {
                  result[11] += 0.017716093;
                } else {
                  result[11] += -0.004661793;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
        result[12] += -0.041831285;
      } else {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          result[12] += 0.036147516;
        } else {
          result[12] += -0.0073153637;
        }
      }
    } else {
      result[12] += 0.056526646;
    }
  } else {
    result[12] += -0.044086754;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025418607518)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.46938577294)) {
        result[0] += -0.05331964;
      } else {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45558604598)) {
          result[0] += -0;
        } else {
          result[0] += 0.038247637;
        }
      }
    } else {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.1390959024)) {
        result[0] += -0;
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.1497981548)) {
            result[0] += 0.025219;
          } else {
            result[0] += -0;
          }
        } else {
          result[0] += 0.07278052;
        }
      }
    }
  } else {
    if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.38093179464)) {
      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6017807126)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60363996029)) {
          if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.38108387589)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31372666359)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60422152281)) {
                result[0] += -0.018891495;
              } else {
                result[0] += 0.021115137;
              }
            } else {
              if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.53069013357)) {
                result[0] += -0.049418665;
              } else {
                result[0] += -0;
              }
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007510662)) {
              if ( (data[76].missing != -1) && (data[76].fvalue < (float)1.0362232924)) {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6202095747)) {
                  result[0] += -0.021831093;
                } else {
                  if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.95358139277)) {
                    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62015712261)) {
                      result[0] += 0.027438875;
                    } else {
                      result[0] += -0;
                    }
                  } else {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60427820683)) {
                      result[0] += -0;
                    } else {
                      result[0] += -0.023495259;
                    }
                  }
                }
              } else {
                result[0] += 0.015590913;
              }
            } else {
              result[0] += 0.039618835;
            }
          }
        } else {
          result[0] += 0.043888774;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61701476574)) {
          result[0] += -0.049046125;
        } else {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.88865399361)) {
            result[0] += -0.017331377;
          } else {
            result[0] += 0.023848403;
          }
        }
      }
    } else {
      result[0] += -0.04846093;
    }
  }
  if ( (data[62].missing != -1) && (data[62].fvalue < (float)0.054874494672)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.66160225868)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
              result[1] += 0.007935193;
            } else {
              result[1] += -0.009498377;
            }
          } else {
            result[1] += 0.075514354;
          }
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
            if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14120779932)) {
              result[1] += -0.066471666;
            } else {
              result[1] += -0;
            }
          } else {
            result[1] += 0.04204317;
          }
        }
      } else {
        if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20964646339)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)-1.4976836443)) {
            result[1] += -0;
          } else {
            result[1] += -0.08993805;
          }
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
            result[1] += 0.041843884;
          } else {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.025529455394)) {
              result[1] += -0.033904508;
            } else {
              if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.35726323724)) {
                if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.51127314568)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.65411412716)) {
                    result[1] += -0.012630669;
                  } else {
                    result[1] += 0.0004960479;
                  }
                } else {
                  result[1] += 0.063157655;
                }
              } else {
                result[1] += -0.015032008;
              }
            }
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
        result[1] += -0;
      } else {
        result[1] += -0.079181895;
      }
    }
  } else {
    result[1] += 0.08368223;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
    if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.11440932006)) {
      result[2] += -0;
    } else {
      result[2] += 0.019193908;
    }
  } else {
    result[2] += -0.04194927;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.53914117813)) {
      result[3] += 0.015548745;
    } else {
      result[3] += 0.084325254;
    }
  } else {
    result[3] += -0.0703646;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)2.1672489643)) {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
      result[4] += -0;
    } else {
      result[4] += -0.07082575;
    }
  } else {
    result[4] += 0.04761389;
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    result[5] += -0.028200436;
  } else {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62265974283)) {
      result[5] += -0;
    } else {
      result[5] += 0.033863433;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6201390624)) {
    result[6] += -0;
  } else {
    result[6] += -0.03391853;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.52890723944)) {
    result[7] += -0.06671674;
  } else {
    result[7] += -0;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
    result[8] += -0.072881006;
  } else {
    result[8] += 0.02039388;
  }
  if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
    if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.49620965123)) {
      result[9] += -0.07106489;
    } else {
      result[9] += 0.003008421;
    }
  } else {
    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
      if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
        result[9] += -0;
      } else {
        result[9] += 0.07391109;
      }
    } else {
      if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.16032426059)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
          result[9] += 0.00064850465;
        } else {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.61824411154)) {
            result[9] += -0.047290277;
          } else {
            result[9] += -0;
          }
        }
      } else {
        result[9] += 0.016389966;
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
    result[10] += -0.048922885;
  } else {
    result[10] += 0.014849824;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.53573900461)) {
    if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.061311610043)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
        result[11] += -0.03766337;
      } else {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.60602760315)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.41761478782)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.42099300027)) {
                  result[11] += -0;
                } else {
                  result[11] += 0.05661361;
                }
              } else {
                result[11] += -0;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.024140978232)) {
                if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
                  result[11] += -0;
                } else {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.73308742046)) {
                    result[11] += -0.0470616;
                  } else {
                    result[11] += -0;
                  }
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13370315731)) {
                    result[11] += 0.047486853;
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62019306421)) {
                      result[11] += 0.02687325;
                    } else {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.6838402748)) {
                        result[11] += -0.03511904;
                      } else {
                        result[11] += 0.0015438126;
                      }
                    }
                  }
                } else {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
                    result[11] += -0.04053868;
                  } else {
                    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012463808)) {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.2260432243)) {
                          result[11] += 0.05886648;
                        } else {
                          result[11] += -0;
                        }
                      } else {
                        result[11] += -0;
                      }
                    } else {
                      result[11] += -0.012815622;
                    }
                  }
                }
              }
            }
          } else {
            result[11] += -0.025842523;
          }
        } else {
          result[11] += 0.052223653;
        }
      }
    } else {
      result[11] += 0.048628684;
    }
  } else {
    if ( (data[36].missing != -1) && (data[36].fvalue < (float)0.20462016761)) {
      result[11] += -0.055590577;
    } else {
      result[11] += -0;
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.38253700733)) {
        result[12] += -0.042151023;
      } else {
        result[12] += -0;
      }
    } else {
      result[12] += 0.054454334;
    }
  } else {
    result[12] += -0.045308985;
  }
  if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038821898401)) {
      if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.26964467764)) {
        if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16615319252)) {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.74951910973)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
                  result[0] += -0.039826132;
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
                    result[0] += -0;
                  } else {
                    result[0] += -0.023809815;
                  }
                }
              } else {
                result[0] += 0.0005547576;
              }
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
                result[0] += 0.03594262;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
                  result[0] += -0;
                } else {
                  result[0] += -0.04150291;
                }
              }
            }
          } else {
            result[0] += -0.04137298;
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
            result[0] += -0.004613959;
          } else {
            result[0] += 0.03320994;
          }
        }
      } else {
        result[0] += -0.050277773;
      }
    } else {
      if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.98850309849)) {
        if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.11842292547)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024123216048)) {
            result[0] += 0.06874336;
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6042920351)) {
              if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
                if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14162181318)) {
                  if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.13939358294)) {
                    result[0] += 0.016613582;
                  } else {
                    result[0] += -0;
                  }
                } else {
                  result[0] += 0.049399987;
                }
              } else {
                result[0] += -0;
              }
            } else {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
                result[0] += -0.015838657;
              } else {
                if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16615319252)) {
                  result[0] += 0.0355002;
                } else {
                  result[0] += -0.008199596;
                }
              }
            }
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025418607518)) {
            result[0] += 0.013992898;
          } else {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.16745822132)) {
              result[0] += -0;
            } else {
              result[0] += -0.069651775;
            }
          }
        }
      } else {
        result[0] += -0.041240342;
      }
    }
  } else {
    result[0] += 0.05964249;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.50068098307)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
              result[1] += -0.058786914;
            } else {
              result[1] += -0;
            }
          } else {
            result[1] += -0;
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
              result[1] += 0.08586262;
            } else {
              result[1] += -0;
            }
          } else {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0096433163)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.5994348526)) {
                  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.12183056772)) {
                    result[1] += -0;
                  } else {
                    result[1] += -0.053782128;
                  }
                } else {
                  result[1] += 0.0062869675;
                }
              } else {
                if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26396116614)) {
                  result[1] += 0.053361326;
                } else {
                  result[1] += -0;
                }
              }
            } else {
              result[1] += -0.046182588;
            }
          }
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
          result[1] += -0;
        } else {
          result[1] += 0.05106419;
        }
      }
    } else {
      result[1] += -0.056601837;
    }
  } else {
    result[1] += 0.077283464;
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010366139933)) {
      result[2] += -0.074324206;
    } else {
      result[2] += -0;
    }
  } else {
    result[2] += 0.008636669;
  }
  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.183759287)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.0839350224)) {
      result[3] += -0.05576914;
    } else {
      result[3] += 0.01213737;
    }
  } else {
    result[3] += 0.082598716;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)2.1672489643)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6202095747)) {
      result[4] += -0;
    } else {
      result[4] += -0.07133177;
    }
  } else {
    result[4] += 0.03889178;
  }
  if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016254663)) {
      result[5] += -0;
    } else {
      result[5] += -0.04018088;
    }
  } else {
    result[5] += 0.030189829;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.30081537366)) {
    result[6] += -0.024462545;
  } else {
    result[6] += -0;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
    result[7] += -0.05000546;
  } else {
    result[7] += -0;
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[8] += -0.042331774;
  } else {
    result[8] += 0.0015849366;
  }
  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60428112745)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1565849781)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
          result[9] += -0;
        } else {
          result[9] += -0.07375762;
        }
      } else {
        if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.095732830465)) {
          result[9] += -0;
        } else {
          result[9] += 0.05345814;
        }
      }
    } else {
      result[9] += 0.036205634;
    }
  } else {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.86629867554)) {
      result[9] += -0;
    } else {
      result[9] += -0.037546404;
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
    result[10] += -0.016559219;
  } else {
    result[10] += 0.015699789;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025296164677)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6200851202)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.85385841131)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
          result[11] += -0.030734872;
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.9727897644)) {
            result[11] += 0.0045252424;
          } else {
            result[11] += -0.024762629;
          }
        }
      } else {
        result[11] += 0.025876941;
      }
    } else {
      result[11] += -0.06600227;
    }
  } else {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.25304949284)) {
      if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.22814252973)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
            result[11] += -0.0039809546;
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
              result[11] += 0.04616152;
            } else {
              result[11] += -0;
            }
          }
        } else {
          result[11] += 0.06911441;
        }
      } else {
        result[11] += -0.013954622;
      }
    } else {
      if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39657869935)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.021839931607)) {
          result[11] += -0;
        } else {
          result[11] += -0.028763356;
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
          result[11] += 0.037423167;
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426801443)) {
              result[11] += -0.0012175697;
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.2718229294)) {
                result[11] += -0;
              } else {
                result[11] += 0.054917723;
              }
            }
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60422152281)) {
              if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
                result[11] += 0.01155559;
              } else {
                if ( (data[73].missing != -1) && (data[73].fvalue < (float)0.9213436842)) {
                  result[11] += -0.02734369;
                } else {
                  result[11] += 0.012117351;
                }
              }
            } else {
              result[11] += -0.038609795;
            }
          }
        }
      }
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.41649469733)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0089722872)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
          result[12] += 0.010173922;
        } else {
          result[12] += -0;
        }
      } else {
        result[12] += 0.05839695;
      }
    } else {
      result[12] += -0.037788767;
    }
  } else {
    result[12] += -0.031143224;
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        result[0] += 0.050766733;
      } else {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.53069013357)) {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64719218016)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
              result[0] += -0.007230022;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10418377817)) {
                result[0] += -0;
              } else {
                result[0] += 0.037254665;
              }
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
              result[0] += -0;
            } else {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
                result[0] += -0.069568224;
              } else {
                result[0] += -0;
              }
            }
          }
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78268873692)) {
            result[0] += -0;
          } else {
            result[0] += 0.041593984;
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.73820483685)) {
        result[0] += -0.036762543;
      } else {
        result[0] += -0;
      }
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45538172126)) {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59171414375)) {
          result[0] += -0;
        } else {
          result[0] += -0.04374032;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62004607916)) {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.12656737864)) {
              result[0] += 0.052927874;
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
                result[0] += 0.002641825;
              } else {
                if ( (data[76].missing != -1) && (data[76].fvalue < (float)1.0362232924)) {
                  result[0] += -0.035426084;
                } else {
                  result[0] += -0;
                }
              }
            }
          } else {
            result[0] += -0.038312297;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62008410692)) {
            result[0] += -0;
          } else {
            result[0] += 0.055062536;
          }
        }
      }
    } else {
      result[0] += -0.064751334;
    }
  }
  if ( (data[62].missing != -1) && (data[62].fvalue < (float)0.054874494672)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      if ( (data[48].missing != -1) && (data[48].fvalue < (float)-0.26415070891)) {
        if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.40983131528)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79868918657)) {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
                result[1] += -0.01603582;
              } else {
                result[1] += 0.0036841119;
              }
            } else {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038373697549)) {
                result[1] += 0.05635415;
              } else {
                result[1] += -0;
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.7146641016)) {
              result[1] += 0.024978537;
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.4020078182)) {
                if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61974221468)) {
                  result[1] += -0.04839072;
                } else {
                  result[1] += -0;
                }
              } else {
                if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20938225091)) {
                  result[1] += 0.015645158;
                } else {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78268873692)) {
                    result[1] += -0;
                  } else {
                    if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20895290375)) {
                      result[1] += -0;
                    } else {
                      result[1] += -0.052466087;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[1] += 0.052355446;
        }
      } else {
        result[1] += -0.040077917;
      }
    } else {
      result[1] += -0.027886312;
    }
  } else {
    result[1] += 0.0805013;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
    if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.16920875013)) {
      result[2] += -0.038532037;
    } else {
      result[2] += -0;
    }
  } else {
    result[2] += 0.012107755;
  }
  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.183759287)) {
    result[3] += -0.008470211;
  } else {
    result[3] += 0.08086188;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)2.1672489643)) {
    result[4] += -0.03383837;
  } else {
    result[4] += 0.03431542;
  }
  if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
    result[5] += -0.05201328;
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.018215337768)) {
      result[5] += 0.02845644;
    } else {
      result[5] += -0;
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.4838591814)) {
    result[6] += -0.019210987;
  } else {
    result[6] += -0;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
    result[7] += -0.046384294;
  } else {
    result[7] += -0;
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[8] += -0.03884766;
  } else {
    result[8] += 0.018855441;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.0007312966045)) {
    if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.23778165877)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025323992595)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.50672495365)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
            result[9] += -0.039170615;
          } else {
            result[9] += -0;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1643605232)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
              result[9] += 0.057456706;
            } else {
              result[9] += -0;
            }
          } else {
            result[9] += -0.0014333397;
          }
        }
      } else {
        result[9] += -0.029374793;
      }
    } else {
      result[9] += 0.052166518;
    }
  } else {
    result[9] += -0.052767612;
  }
  result[10] += -0;
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024322185665)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62015712261)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.9727897644)) {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.67777997255)) {
              result[11] += -0.024480717;
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
                result[11] += 0.004328919;
              } else {
                result[11] += -0.008820343;
              }
            }
          } else {
            result[11] += 0.03481574;
          }
        } else {
          result[11] += -0.03661966;
        }
      } else {
        result[11] += 0.017017422;
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.13324643672)) {
        result[11] += -0.07390294;
      } else {
        result[11] += -0;
      }
    }
  } else {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.021839931607)) {
        result[11] += 0.050850797;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.6755399704)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
            result[11] += -0.04218642;
          } else {
            if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.16620278358)) {
              result[11] += 0.030732034;
            } else {
              if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
                result[11] += -0;
              } else {
                result[11] += 0.012801265;
              }
            }
          }
        } else {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60427713394)) {
            result[11] += -0;
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60406643152)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.42648643255)) {
                result[11] += 0.042475466;
              } else {
                result[11] += -0;
              }
            } else {
              result[11] += -0;
            }
          }
        }
      }
    } else {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
        result[11] += -0.042583216;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.097951889)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
            result[11] += 0.02803295;
          } else {
            result[11] += -0.017270572;
          }
        } else {
          result[11] += 0.03744956;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.60239255428)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.28597417474)) {
      result[12] += -0;
    } else {
      result[12] += -0.06773441;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018245459)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
        result[12] += 0.05164417;
      } else {
        result[12] += -0;
      }
    } else {
      result[12] += -0.020419333;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
    if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45558142662)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
          result[0] += -0.09397531;
        } else {
          result[0] += -0;
        }
      } else {
        if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.14424245059)) {
          if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.26964467764)) {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62648659945)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.6201198101)) {
                if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16704104841)) {
                  result[0] += -0;
                } else {
                  result[0] += 0.029431455;
                }
              } else {
                if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62008029222)) {
                  result[0] += -0.03006966;
                } else {
                  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26839575171)) {
                    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.60387730598)) {
                      result[0] += 0.009467686;
                    } else {
                      result[0] += -0.021740709;
                    }
                  } else {
                    result[0] += 0.015016422;
                  }
                }
              }
            } else {
              result[0] += 0.034451246;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62006276846)) {
              if ( (data[56].missing != -1) && (data[56].fvalue < (float)0.0054895216599)) {
                result[0] += -0;
              } else {
                result[0] += -0.015592989;
              }
            } else {
              result[0] += -0.054233745;
            }
          }
        } else {
          result[0] += 0.0349734;
        }
      }
    } else {
      result[0] += 0.047723655;
    }
  } else {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0261459351)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6202095747)) {
        result[0] += -0.026279561;
      } else {
        result[0] += -0;
      }
    } else {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
        if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.0103553534)) {
          result[0] += 0.025297992;
        } else {
          result[0] += -0;
        }
      } else {
        if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.36545434594)) {
          result[0] += 0.009589561;
        } else {
          result[0] += -0.01599773;
        }
      }
    }
  }
  if ( (data[60].missing != -1) && (data[60].fvalue < (float)0.2248044312)) {
    if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.038890324533)) {
      if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
        if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.48307839036)) {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.631049335)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
              result[1] += -0.0214425;
            } else {
              result[1] += -0;
            }
          } else {
            result[1] += -0.07146076;
          }
        } else {
          result[1] += -0;
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
          result[1] += 0.04107028;
        } else {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010967731)) {
                    result[1] += -0;
                  } else {
                    result[1] += -0.043566737;
                  }
                } else {
                  result[1] += 0.028557401;
                }
              } else {
                result[1] += -0.048065618;
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012988329)) {
                result[1] += -0;
              } else {
                result[1] += 0.045492098;
              }
            }
          } else {
            result[1] += -0.03940031;
          }
        }
      }
    } else {
      if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
        result[1] += -0;
      } else {
        result[1] += 0.041584212;
      }
    }
  } else {
    result[1] += 0.07750269;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.80720156431)) {
    if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.15100966394)) {
      result[2] += -0;
    } else {
      result[2] += 0.014190558;
    }
  } else {
    result[2] += -0.047089186;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.020442111418)) {
    result[3] += -0.0018979823;
  } else {
    result[3] += 0.07637791;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.196121335)) {
    result[4] += 0.010469524;
  } else {
    result[4] += -0.07356704;
  }
  if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.35428348184)) {
      result[5] += 0.00527246;
    } else {
      result[5] += -0.04960977;
    }
  } else {
    result[5] += 0.034286223;
  }
  if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46831515431)) {
    result[6] += -0.009521515;
  } else {
    result[6] += -0;
  }
  result[7] += -0.014522441;
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61961978674)) {
    result[8] += -0.039561037;
  } else {
    result[8] += 0.018081775;
  }
  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60428112745)) {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
          result[9] += -0.04650803;
        } else {
          result[9] += 0.027509052;
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.73670840263)) {
          result[9] += 0.07213864;
        } else {
          result[9] += -0;
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.82568901777)) {
        result[9] += -0.03755676;
      } else {
        result[9] += -0;
      }
    }
  } else {
    if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46831515431)) {
      result[9] += -0;
    } else {
      result[9] += -0.03912866;
    }
  }
  result[10] += -0;
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.3703558743)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.58873319626)) {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.61824411154)) {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010402492248)) {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63217777014)) {
            result[11] += -0.017800083;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1251373291)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.041795373)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.3156131804)) {
                        result[11] += -0;
                      } else {
                        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.38432779908)) {
                          result[11] += 0.04359604;
                        } else {
                          result[11] += -0;
                        }
                      }
                    } else {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
                        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
                          result[11] += -0.05662352;
                        } else {
                          result[11] += -0;
                        }
                      } else {
                        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31361842155)) {
                          result[11] += -0;
                        } else {
                          result[11] += 0.013735864;
                        }
                      }
                    }
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.1802635193)) {
                      result[11] += -0.04135227;
                    } else {
                      result[11] += -0;
                    }
                  }
                } else {
                  result[11] += 0.021816505;
                }
              } else {
                result[11] += -0.04058174;
              }
            } else {
              result[11] += 0.03168461;
            }
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.82930922508)) {
            result[11] += 0.041444257;
          } else {
            result[11] += -0;
          }
        }
      } else {
        if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.44573503733)) {
          result[11] += -0.033237483;
        } else {
          result[11] += -0;
        }
      }
    } else {
      result[11] += 0.037337326;
    }
  } else {
    if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.097558766603)) {
      result[11] += 0.011444034;
    } else {
      result[11] += -0.059924018;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.41649469733)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
        result[12] += 0.03375928;
      } else {
        result[12] += -0;
      }
    } else {
      result[12] += -0.029501678;
    }
  } else {
    result[12] += -0.036733024;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.36591973901)) {
      if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26241600513)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
            result[0] += 0.04286323;
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.63733571768)) {
              result[0] += -0.056902323;
            } else {
              if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.1452716887)) {
                result[0] += 0.050147608;
              } else {
                if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20895290375)) {
                  result[0] += -0.031597223;
                } else {
                  result[0] += -0;
                }
              }
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62005752325)) {
            result[0] += -0.07515878;
          } else {
            if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.16620278358)) {
              result[0] += -0.029039439;
            } else {
              result[0] += 0.022517605;
            }
          }
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
          result[0] += 0.048946243;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.84279990196)) {
            result[0] += -0.006648087;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62017637491)) {
              result[0] += -0;
            } else {
              result[0] += 0.027781313;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62009978294)) {
        result[0] += -0;
      } else {
        result[0] += -0.0852287;
      }
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)1.1005766392)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.7244440317)) {
        if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
          if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
              result[0] += -0;
            } else {
              result[0] += -0.010399694;
            }
          } else {
            result[0] += 0.014821853;
          }
        } else {
          result[0] += -0.029858045;
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.40015017986)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.44902396202)) {
              result[0] += -0.078485794;
            } else {
              result[0] += 0.0032701313;
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025453392416)) {
              result[0] += 0.061486546;
            } else {
              result[0] += -0;
            }
          }
        } else {
          result[0] += 0.06415255;
        }
      }
    } else {
      result[0] += 0.05414631;
    }
  }
  if ( (data[62].missing != -1) && (data[62].fvalue < (float)0.054874494672)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78048282862)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59773939848)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
              result[1] += -0;
            } else {
              result[1] += -0.026874995;
            }
          } else {
            result[1] += 0.042924426;
          }
        } else {
          result[1] += -0.07689507;
        }
      } else {
        if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
          result[1] += 0.048324637;
        } else {
          result[1] += -0;
        }
      }
    } else {
      if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.1452716887)) {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          result[1] += -0;
        } else {
          result[1] += -0.08305701;
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.5393471718)) {
          result[1] += 0.02992968;
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
            result[1] += -0.033589628;
          } else {
            result[1] += -0;
          }
        }
      }
    }
  } else {
    result[1] += 0.07711986;
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
    result[2] += -0.026589178;
  } else {
    result[2] += 0.01445829;
  }
  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.183759287)) {
    result[3] += -0.008525826;
  } else {
    result[3] += 0.07740564;
  }
  if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.073681868613)) {
    result[4] += -0.03435867;
  } else {
    result[4] += 0.035466086;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025336515158)) {
    result[5] += -0.014286022;
  } else {
    result[5] += 0.016509285;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.4838591814)) {
    result[6] += -0.015907686;
  } else {
    result[6] += -0;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
    result[7] += -0.039783947;
  } else {
    result[7] += -0;
  }
  result[8] += -0.013177602;
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
        result[9] += -0.005851101;
      } else {
        result[9] += 0.050470594;
      }
    } else {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
        result[9] += -0.050849214;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
            result[9] += 0.043253813;
          } else {
            result[9] += -0.0051713367;
          }
        } else {
          result[9] += -0.02618129;
        }
      }
    }
  } else {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60146820545)) {
      result[9] += -0.035204127;
    } else {
      result[9] += -0;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.6200299859)) {
    result[10] += -0.025908858;
  } else {
    result[10] += -0;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    result[11] += -0.03140985;
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.028559435159)) {
        result[11] += 0.045918204;
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.0278730392)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018245459)) {
              result[11] += -0.025362132;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0517596006)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.6996152401)) {
                  result[11] += 0.011694107;
                } else {
                  result[11] += -0.010553425;
                }
              } else {
                result[11] += 0.02139116;
              }
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007844448)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                result[11] += 0.046230044;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10234069079)) {
                  if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0606098175)) {
                    result[11] += 0.023153033;
                  } else {
                    result[11] += -0;
                  }
                } else {
                  result[11] += -0.03190507;
                }
              }
            } else {
              if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038605824113)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.2338910103)) {
                  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.03383282;
                  }
                } else {
                  result[11] += -0.009923486;
                }
              } else {
                result[11] += -0.018366028;
              }
            }
          }
        } else {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)8.1295089722)) {
            result[11] += -0.04070432;
          } else {
            result[11] += 0.014614597;
          }
        }
      }
    } else {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)0.24895755947)) {
        result[11] += -0.041551407;
      } else {
        result[11] += 0.0013412489;
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
    if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039004057646)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1346296072)) {
        result[12] += -0.013480828;
      } else {
        result[12] += 0.029747436;
      }
    } else {
      result[12] += -0.032989975;
    }
  } else {
    result[12] += 0.02172534;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
      if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
        if ( (data[72].missing != -1) && (data[72].fvalue < (float)-0.13171011209)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.2503604889)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
              result[0] += -0.11821232;
            } else {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
                result[0] += -0;
              } else {
                result[0] += -0.05322604;
              }
            }
          } else {
            if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.38432779908)) {
              result[0] += -0.0414345;
            } else {
              result[0] += -0;
            }
          }
        } else {
          result[0] += 0.0032375036;
        }
      } else {
        result[0] += 0.018357348;
      }
    } else {
      if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.16620278358)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78268873692)) {
            result[0] += -0.0099101085;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61550068855)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62004071474)) {
                result[0] += -0;
              } else {
                result[0] += 0.047630385;
              }
            } else {
              result[0] += -0;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62017738819)) {
            result[0] += -0.024635911;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62009352446)) {
              result[0] += 0.03624209;
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
                result[0] += -0;
              } else {
                result[0] += -0.035547256;
              }
            }
          }
        }
      } else {
        result[0] += 0.026058698;
      }
    }
  } else {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.1497981548)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.99576175213)) {
          result[0] += -0;
        } else {
          if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.01053318847)) {
            result[0] += 0.036837574;
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
          result[0] += -0.012457739;
        } else {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
            result[0] += 0.020078385;
          } else {
            result[0] += -0;
          }
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
        result[0] += -0.023381129;
      } else {
        result[0] += -0;
      }
    }
  }
  if ( (data[60].missing != -1) && (data[60].fvalue < (float)0.2248044312)) {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.030849346891)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.73308742046)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.7146641016)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021207809)) {
              result[1] += -0;
            } else {
              result[1] += 0.0482993;
            }
          } else {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010771036)) {
                if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
                  result[1] += 0.045230497;
                } else {
                  result[1] += -0;
                }
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31372666359)) {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                      result[1] += -0.046214536;
                    } else {
                      result[1] += -0;
                    }
                  } else {
                    result[1] += 0.0016859726;
                  }
                } else {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62014120817)) {
                    result[1] += -0;
                  } else {
                    result[1] += 0.012395247;
                  }
                }
              }
            } else {
              result[1] += -0.03890016;
            }
          }
        } else {
          result[1] += -0.034961898;
        }
      } else {
        result[1] += 0.040285088;
      }
    } else {
      result[1] += -0.037665978;
    }
  } else {
    result[1] += 0.07418854;
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
    result[2] += -0.031917933;
  } else {
    result[2] += 0.013076827;
  }
  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.53914117813)) {
    result[3] += -0.008893351;
  } else {
    result[3] += 0.074995354;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
    result[4] += -0.071334966;
  } else {
    if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.1317859143)) {
      result[4] += -0;
    } else {
      result[4] += 0.052042305;
    }
  }
  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62265974283)) {
    result[5] += -0.046707347;
  } else {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6042920351)) {
      result[5] += 0.045937296;
    } else {
      result[5] += -0;
    }
  }
  if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45538172126)) {
    result[6] += -0.008325975;
  } else {
    result[6] += -0;
  }
  result[7] += -0.012618046;
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61961978674)) {
    result[8] += -0.036512468;
  } else {
    result[8] += 0.018606149;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62014520168)) {
      if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.7241204381)) {
          result[9] += 0.035911128;
        } else {
          result[9] += -0;
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.82568901777)) {
          result[9] += -0.02455777;
        } else {
          result[9] += 0.007877156;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62007719278)) {
        result[9] += -0.030036433;
      } else {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62777519226)) {
          result[9] += -0.001894076;
        } else {
          result[9] += 0.017998597;
        }
      }
    }
  } else {
    result[9] += -0.046754774;
  }
  result[10] += -0;
  if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62329429388)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[11] += -0.019921957;
    } else {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.085147149861)) {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6291359067)) {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46831515431)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31564411521)) {
                result[11] += -0;
              } else {
                result[11] += 0.035624504;
              }
            } else {
              result[11] += -0;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.054840527475)) {
                result[11] += 0.030274391;
              } else {
                result[11] += -0;
              }
            } else {
              result[11] += -0.03155246;
            }
          }
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.099427320063)) {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.4456281364)) {
              result[11] += 0.019987602;
            } else {
              result[11] += 0.08616395;
            }
          } else {
            result[11] += -0;
          }
        }
      } else {
        if ( (data[56].missing != -1) && (data[56].fvalue < (float)1.0723575354)) {
          result[11] += -0.011730352;
        } else {
          result[11] += 0.007671094;
        }
      }
    }
  } else {
    if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.12977306545)) {
      result[11] += -0.046459265;
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)2.3493771553)) {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.48886889219)) {
          if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.25918248296)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
              result[11] += 0.015292756;
            } else {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6029086709)) {
                result[11] += -0.020607475;
              } else {
                result[11] += -0;
              }
            }
          } else {
            result[11] += -0.023484852;
          }
        } else {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
            result[11] += 0.043787554;
          } else {
            result[11] += -0;
          }
        }
      } else {
        result[11] += -0.0242184;
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.47568050027)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.28597417474)) {
      result[12] += -0;
    } else {
      result[12] += -0.053565633;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
      result[12] += -0.023130387;
    } else {
      result[12] += 0.03446635;
    }
  }
  if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.8454970121)) {
        if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.14424245059)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.9531545639)) {
            result[0] += -0.08271183;
          } else {
            result[0] += -0;
          }
        } else {
          result[0] += 0.011247707;
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31154632568)) {
          if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14043554664)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6291359067)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
                  result[0] += 0.0009392363;
                } else {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
                    result[0] += -0;
                  } else {
                    result[0] += -0.06734624;
                  }
                }
              } else {
                result[0] += 0.012687674;
              }
            } else {
              result[0] += -0.044672407;
            }
          } else {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.051874365658)) {
              result[0] += 0.03618554;
            } else {
              if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038283582777)) {
                result[0] += -0.015035571;
              } else {
                if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
                  result[0] += 0.022646371;
                } else {
                  result[0] += -0.004011367;
                }
              }
            }
          }
        } else {
          result[0] += 0.022233015;
        }
      }
    } else {
      if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.23109671474)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.99576175213)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025453392416)) {
              result[0] += 0.016606392;
            } else {
              result[0] += -0;
            }
          } else {
            result[0] += -0.03321713;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.86629867554)) {
                result[0] += -0;
              } else {
                result[0] += -0.008500284;
              }
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
                result[0] += 0.028260972;
              } else {
                result[0] += -0;
              }
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
              result[0] += 0.06886187;
            } else {
              result[0] += -0;
            }
          }
        }
      } else {
        result[0] += -0.011404049;
      }
    }
  } else {
    result[0] += 0.045867726;
  }
  if ( (data[62].missing != -1) && (data[62].fvalue < (float)0.054874494672)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28237974644)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
        if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.37811747193)) {
          result[1] += -0.057324026;
        } else {
          result[1] += -0;
        }
      } else {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.67777997255)) {
          result[1] += 0.028427418;
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.63733571768)) {
            result[1] += -0.035685807;
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0096433163)) {
                result[1] += -0;
              } else {
                result[1] += 0.03369555;
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13342361152)) {
                  result[1] += -0;
                } else {
                  result[1] += -0.05396307;
                }
              } else {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                  result[1] += -0;
                } else {
                  result[1] += 0.018414048;
                }
              }
            }
          }
        }
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
        result[1] += -0;
      } else {
        result[1] += 0.04287212;
      }
    }
  } else {
    result[1] += 0.07356406;
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
    result[2] += -0.028942809;
  } else {
    result[2] += 0.0125670945;
  }
  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.183759287)) {
    result[3] += -0.008144725;
  } else {
    result[3] += 0.073476076;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
    result[4] += -0.019213928;
  } else {
    result[4] += 0.04825038;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48612654209)) {
    if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46831515431)) {
      result[5] += 0.0005529378;
    } else {
      result[5] += -0.056636706;
    }
  } else {
    result[5] += 0.025010157;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.4838591814)) {
    result[6] += -0.0115261;
  } else {
    result[6] += 0.0003180476;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
    result[7] += -0.033578947;
  } else {
    result[7] += -0;
  }
  result[8] += -0.007161051;
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.17268300056)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1643605232)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.29770764709)) {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.34276419878)) {
              result[9] += 0.027622942;
            } else {
              result[9] += -0.018815437;
            }
          } else {
            result[9] += -0.03971771;
          }
        } else {
          result[9] += 0.02864633;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61997890472)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            result[9] += 0.052992877;
          } else {
            result[9] += -0;
          }
        } else {
          result[9] += -0;
        }
      }
    } else {
      result[9] += -0.024117058;
    }
  } else {
    result[9] += -0.049152452;
  }
  result[10] += -0;
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7546197772)) {
    if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.23109671474)) {
      if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.061311610043)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.57956153154)) {
          if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.037270721048)) {
            if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038742955774)) {
              if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
                  result[11] += -0.0006383456;
                } else {
                  result[11] += 0.032903325;
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.66160225868)) {
                    result[11] += -0;
                  } else {
                    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.73308742046)) {
                      result[11] += -0.07511837;
                    } else {
                      result[11] += -0;
                    }
                  }
                } else {
                  result[11] += -0;
                }
              }
            } else {
              result[11] += -0.03995022;
            }
          } else {
            result[11] += 0.016282381;
          }
        } else {
          if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14162181318)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02519598417)) {
              result[11] += -0.05934297;
            } else {
              result[11] += -0;
            }
          } else {
            result[11] += -0.094111584;
          }
        }
      } else {
        result[11] += 0.02916066;
      }
    } else {
      result[11] += 0.035552796;
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
      result[11] += 0.06484933;
    } else {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.035617761314)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60421293974)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.58880263567)) {
            result[11] += 0.006331218;
          } else {
            result[11] += 0.06900376;
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.73670840263)) {
            result[11] += -0.028703585;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62008607388)) {
              result[11] += -0.022824762;
            } else {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                result[11] += 0.040536705;
              } else {
                result[11] += -0;
              }
            }
          }
        }
      } else {
        if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.19620749354)) {
          if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.12653501332)) {
            result[11] += -0;
          } else {
            result[11] += -0.058344927;
          }
        } else {
          result[11] += 0.0031896916;
        }
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
      result[12] += -0.040101867;
    } else {
      result[12] += -0;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62005460262)) {
      result[12] += -0;
    } else {
      result[12] += 0.038036674;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45558604598)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79868918657)) {
          result[0] += -0;
        } else {
          result[0] += -0.10549822;
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.7997173071)) {
          result[0] += 0.05013505;
        } else {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43720659614)) {
            if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038898557425)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31361842155)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9513647556)) {
                    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61550068855)) {
                      result[0] += 0.027715396;
                    } else {
                      result[0] += -0;
                    }
                  } else {
                    result[0] += -0.0254264;
                  }
                } else {
                  result[0] += 0.03216015;
                }
              } else {
                result[0] += -0.021401208;
              }
            } else {
              result[0] += -0.045252644;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.91755998135)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
                result[0] += -0;
              } else {
                result[0] += 0.043630205;
              }
            } else {
              result[0] += -0;
            }
          }
        }
      }
    } else {
      if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.55193799734)) {
        result[0] += -0.00057760073;
      } else {
        result[0] += -0.07255449;
      }
    }
  } else {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.99576175213)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
          result[0] += 0.011400888;
        } else {
          result[0] += -0;
        }
      } else {
        result[0] += -0.036364466;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.86629867554)) {
            result[0] += -0;
          } else {
            result[0] += -0.018905126;
          }
        } else {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
            result[0] += 0.03504814;
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
          result[0] += 0.066444315;
        } else {
          result[0] += -0;
        }
      }
    }
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.28597417474)) {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
          result[1] += -0.04266599;
        } else {
          result[1] += -0;
        }
      } else {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010524100624)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
            if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28237974644)) {
              result[1] += -0.02700873;
            } else {
              result[1] += -0;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007111311)) {
              result[1] += 0.034328938;
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                result[1] += -0.025748728;
              } else {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
                  result[1] += -0;
                } else {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60363996029)) {
                    result[1] += 0.038733266;
                  } else {
                    result[1] += -0;
                  }
                }
              }
            }
          }
        } else {
          result[1] += 0.04193198;
        }
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.1217671633)) {
        result[1] += -0.06905107;
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
          result[1] += 0.030099116;
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
            result[1] += -0.046372958;
          } else {
            result[1] += 0.010392256;
          }
        }
      }
    }
  } else {
    result[1] += 0.06594414;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
      result[2] += 0.039217155;
    } else {
      result[2] += -0.002768014;
    }
  } else {
    result[2] += -0.030456128;
  }
  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.53914117813)) {
    result[3] += -0.007806769;
  } else {
    result[3] += 0.07052609;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
    result[4] += -0.030405167;
  } else {
    result[4] += 0.041191805;
  }
  if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010552230291)) {
    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
      result[5] += -0;
    } else {
      result[5] += -0.04536457;
    }
  } else {
    result[5] += 0.019727515;
  }
  result[6] += -0;
  result[7] += -0.00949948;
  result[8] += -0.007088685;
  if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.1452716887)) {
    if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16667290032)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.48187279701)) {
          result[9] += 0.02592278;
        } else {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.074920251966)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.041151933372)) {
              result[9] += -0.038126532;
            } else {
              result[9] += -0;
            }
          } else {
            result[9] += 0.013480803;
          }
        }
      } else {
        result[9] += -0.027928911;
      }
    } else {
      result[9] += 0.03273071;
    }
  } else {
    result[9] += -0.021201594;
  }
  result[10] += -0;
  if ( (data[76].missing != -1) && (data[76].fvalue < (float)1.0381529331)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[11] += -0.042503707;
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025296164677)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.691501379)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.016826236621)) {
              result[11] += 0.02307614;
            } else {
              result[11] += -0;
            }
          } else {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
              result[11] += -0.027117757;
            } else {
              result[11] += -0;
            }
          }
        } else {
          result[11] += -0.05265167;
        }
      } else {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.49620965123)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68314266205)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62648659945)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.49699115753)) {
                  result[11] += -0.025126932;
                } else {
                  result[11] += -0;
                }
              } else {
                if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
                  result[11] += 0.029922206;
                } else {
                  result[11] += -0;
                }
              }
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.88479340076)) {
                result[11] += -0;
              } else {
                result[11] += 0.06210293;
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1823881865)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.1273295879)) {
                result[11] += -0;
              } else {
                result[11] += -0.026966453;
              }
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62011390924)) {
                result[11] += -0;
              } else {
                result[11] += 0.016198337;
              }
            }
          }
        } else {
          result[11] += 0.079333484;
        }
      }
    }
  } else {
    result[11] += 0.035604253;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.60239255428)) {
    if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16838365793)) {
      result[12] += -0.06530587;
    } else {
      result[12] += -0;
    }
  } else {
    if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.13565604389)) {
      result[12] += -0.0094497865;
    } else {
      result[12] += 0.031401552;
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0803849697)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62004369497)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.98913425207)) {
        if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.23109671474)) {
          if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.061311610043)) {
            if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.68158894777)) {
              if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.13125431538)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.86625015736)) {
                  result[0] += -0;
                } else {
                  if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038283582777)) {
                    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.099427320063)) {
                      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
                        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62012916803)) {
                          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.35207864642)) {
                            result[0] += 0.011050437;
                          } else {
                            result[0] += -0.017982308;
                          }
                        } else {
                          result[0] += 0.042859487;
                        }
                      } else {
                        result[0] += -0.0059928736;
                      }
                    } else {
                      result[0] += 0.04987321;
                    }
                  } else {
                    result[0] += 0.04357915;
                  }
                }
              } else {
                result[0] += -0.0013140436;
              }
            } else {
              result[0] += 0.06658976;
            }
          } else {
            result[0] += -0;
          }
        } else {
          result[0] += -0.023129154;
        }
      } else {
        result[0] += -0.0029971926;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.4838591814)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.051844842732)) {
              result[0] += -0;
            } else {
              result[0] += 0.029250804;
            }
          } else {
            result[0] += -0.018646954;
          }
        } else {
          result[0] += -0.042892404;
        }
      } else {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
          result[0] += -0;
        } else {
          result[0] += 0.027986268;
        }
      }
    }
  } else {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      result[0] += -0.07013797;
    } else {
      if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20925013721)) {
        result[0] += 0.017884312;
      } else {
        if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038742955774)) {
          result[0] += -0.021143323;
        } else {
          result[0] += -0;
        }
      }
    }
  }
  if ( (data[60].missing != -1) && (data[60].fvalue < (float)0.2248044312)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90166765451)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
          if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
            result[1] += 0.032761596;
          } else {
            result[1] += -0;
          }
        } else {
          result[1] += -0.0032256234;
        }
      } else {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62884157896)) {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.057024430484)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62007933855)) {
              result[1] += -0;
            } else {
              result[1] += 0.030571444;
            }
          } else {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63001906872)) {
              result[1] += 0.0021725765;
            } else {
              result[1] += -0.018878333;
            }
          }
        } else {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.39093339443)) {
            result[1] += -0.06865316;
          } else {
            result[1] += -0;
          }
        }
      }
    } else {
      result[1] += -0.028300352;
    }
  } else {
    result[1] += 0.068476066;
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
    result[2] += -0.037556816;
  } else {
    result[2] += 0.0111437375;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.11643055826)) {
    result[3] += -0.0035327778;
  } else {
    result[3] += 0.06209665;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.57992994785)) {
    result[4] += 0.033439662;
  } else {
    result[4] += -0.027347535;
  }
  if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.35428348184)) {
      result[5] += -0;
    } else {
      result[5] += -0.040142477;
    }
  } else {
    result[5] += 0.030573763;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.4838591814)) {
    result[6] += -0.014437178;
  } else {
    result[6] += -0;
  }
  result[7] += -0.0081451675;
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025453392416)) {
    result[8] += -0.009013544;
  } else {
    result[8] += 0.0034476724;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62004041672)) {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
        result[9] += -0.05693051;
      } else {
        if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
          result[9] += -0;
        } else {
          result[9] += 0.023606952;
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.1340187043)) {
          result[9] += 0.0025101062;
        } else {
          result[9] += 0.06070096;
        }
      } else {
        result[9] += -0.00020254149;
      }
    }
  } else {
    if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16675952077)) {
      result[9] += -0.0607913;
    } else {
      result[9] += -0;
    }
  }
  result[10] += -0;
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025296164677)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021076679)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
          result[11] += -0;
        } else {
          result[11] += -0.008733191;
        }
      } else {
        result[11] += 0.021444729;
      }
    } else {
      result[11] += -0.039705273;
    }
  } else {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1.8430496454)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.4764041901)) {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.1273295879)) {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.10380646586)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61976313591)) {
              result[11] += 0.047109466;
            } else {
              result[11] += -0;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.12537924945)) {
              if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.061268497258)) {
                result[11] += 0.018776754;
              } else {
                result[11] += -0.006801562;
              }
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.39093339443)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
                  result[11] += -0;
                } else {
                  result[11] += 0.035110496;
                }
              } else {
                result[11] += -0.036315996;
              }
            }
          }
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16680283844)) {
              result[11] += -0.038971968;
            } else {
              result[11] += -0;
            }
          } else {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59719163179)) {
              result[11] += -0.00639996;
            } else {
              result[11] += 0.024057461;
            }
          }
        }
      } else {
        result[11] += 0.022318417;
      }
    } else {
      result[11] += 0.05912437;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.41649469733)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7546197772)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        result[12] += -0;
      } else {
        result[12] += 0.059909407;
      }
    } else {
      result[12] += -0.013759426;
    }
  } else {
    result[12] += -0.035619188;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025418607518)) {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45558604598)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.35207864642)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.69918745756)) {
          result[0] += 0.017903317;
        } else {
          result[0] += -0;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
          result[0] += -0;
        } else {
          result[0] += -0.017130017;
        }
      }
    } else {
      if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.27132934332)) {
        result[0] += 0.057978638;
      } else {
        result[0] += -0;
      }
    }
  } else {
    if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.44744732976)) {
      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.37441200018)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6017807126)) {
            if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038898557425)) {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.85384505987)) {
                result[0] += 0.036005847;
              } else {
                result[0] += -0;
              }
            } else {
              if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.55193799734)) {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.85384505987)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60428112745)) {
                    if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.13125431538)) {
                      result[0] += 0.027086778;
                    } else {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60429447889)) {
                        result[0] += -0;
                      } else {
                        if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.0098451376)) {
                          result[0] += -0.016333358;
                        } else {
                          result[0] += -0;
                        }
                      }
                    }
                  } else {
                    result[0] += -0.024171067;
                  }
                } else {
                  result[0] += 0.024384053;
                }
              } else {
                result[0] += -0.030964311;
              }
            }
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
              result[0] += -0;
            } else {
              result[0] += -0.046054993;
            }
          }
        } else {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60411447287)) {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.41612991691)) {
              result[0] += -0.054506652;
            } else {
              result[0] += -0;
            }
          } else {
            result[0] += -0;
          }
        }
      } else {
        result[0] += 0.027838463;
      }
    } else {
      result[0] += -0.043710776;
    }
  }
  if ( (data[62].missing != -1) && (data[62].fvalue < (float)0.054874494672)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.037726417184)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
            result[1] += -0;
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426038504)) {
              result[1] += 0.0634532;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61998814344)) {
                result[1] += -0;
              } else {
                result[1] += 0.008338075;
              }
            }
          }
        } else {
          result[1] += -0;
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31372666359)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62003588676)) {
            result[1] += -0.045027103;
          } else {
            result[1] += -0;
          }
        } else {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.48886889219)) {
            if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20845749974)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
                result[1] += 0.012382311;
              } else {
                result[1] += -0.009217491;
              }
            } else {
              result[1] += 0.055271234;
            }
          } else {
            result[1] += -0.011655985;
          }
        }
      }
    } else {
      result[1] += -0.026732532;
    }
  } else {
    result[1] += 0.06785259;
  }
  if ( (data[55].missing != -1) && (data[55].fvalue < (float)1.9582731724)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
      result[2] += -0;
    } else {
      result[2] += -0.030621989;
    }
  } else {
    result[2] += 0.013257577;
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
    result[3] += -0;
  } else {
    result[3] += 0.039894752;
  }
  if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
    result[4] += -0.020951066;
  } else {
    result[4] += 0.036015186;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025336515158)) {
    result[5] += -0.032686263;
  } else {
    result[5] += 0.021537563;
  }
  result[6] += -0.010249654;
  result[7] += -0.006822502;
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025453392416)) {
    result[8] += -0.009051305;
  } else {
    result[8] += 0.0046998113;
  }
  if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.57848584652)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1643605232)) {
      if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26605242491)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
          result[9] += -0.025111998;
        } else {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6194216013)) {
            result[9] += 0.019028097;
          } else {
            result[9] += -0;
          }
        }
      } else {
        if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14043554664)) {
          result[9] += 0.079127945;
        } else {
          result[9] += -0;
        }
      }
    } else {
      result[9] += -0.022242831;
    }
  } else {
    result[9] += -0.03737569;
  }
  result[10] += -0;
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.2135885954)) {
          result[11] += 0.021024458;
        } else {
          result[11] += -0;
        }
      } else {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6041829586)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
              result[11] += -0;
            } else {
              result[11] += -0.015017713;
            }
          } else {
            result[11] += -0.04228186;
          }
        } else {
          result[11] += -0;
        }
      }
    } else {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.29902103543)) {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.085147149861)) {
          result[11] += 0.039500594;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016224861)) {
            result[11] += 0.016152551;
          } else {
            result[11] += -0.0007746444;
          }
        }
      } else {
        result[11] += -0.025558593;
      }
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
      result[11] += 0.04646348;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1678738594)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62003862858)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0053368807)) {
              result[11] += -0;
            } else {
              result[11] += -0.040554315;
            }
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60383272171)) {
              result[11] += 0.018575268;
            } else {
              result[11] += -0.0012862671;
            }
          }
        } else {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60419660807)) {
            result[11] += 0.027168674;
          } else {
            result[11] += -0;
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1404579878)) {
          result[11] += 0.04724237;
        } else {
          result[11] += -0;
        }
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025067975745)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.43630290031)) {
      result[12] += -0.05185349;
    } else {
      result[12] += -0;
    }
  } else {
    if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26396116614)) {
      result[12] += 0.039328836;
    } else {
      result[12] += -0;
    }
  }
  if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60419660807)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.4441151917)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.69918745756)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.76172238588)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.26939401031)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
                result[0] += 0.024971444;
              } else {
                if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                  result[0] += -0.012395543;
                } else {
                  result[0] += -0;
                }
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10234069079)) {
                result[0] += -0.035817288;
              } else {
                result[0] += 0.0018590399;
              }
            }
          } else {
            if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
              result[0] += 0.0093250545;
            } else {
              result[0] += -0.0025435877;
            }
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
            result[0] += -0.053959105;
          } else {
            result[0] += -0;
          }
        }
      } else {
        result[0] += 0.020493206;
      }
    } else {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)0.24895755947)) {
        result[0] += -0.05227391;
      } else {
        result[0] += -0;
      }
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.86948847771)) {
      result[0] += -0.011376088;
    } else {
      if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16619649529)) {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.6838402748)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6017807126)) {
            result[0] += 0.029311478;
          } else {
            result[0] += -0.004104182;
          }
        } else {
          result[0] += -0.04863369;
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.0186066628)) {
          result[0] += 0.051152397;
        } else {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.56659722328)) {
            result[0] += -0.00073283055;
          } else {
            result[0] += 0.0153134065;
          }
        }
      }
    }
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.40983131528)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7679245472)) {
        result[1] += -0.025818786;
      } else {
        result[1] += -0;
      }
    } else {
      if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039212685078)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.73670840263)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
            result[1] += 0.018769732;
          } else {
            result[1] += -0.0054549566;
          }
        } else {
          result[1] += -0.03647059;
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
          result[1] += 0.04124289;
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
              result[1] += 0.00077353825;
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
                result[1] += -0;
              } else {
                result[1] += -0.040852208;
              }
            }
          } else {
            result[1] += 0.022253353;
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      result[1] += 0.074774414;
    } else {
      result[1] += -0;
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
    result[2] += 0.00878104;
  } else {
    result[2] += -0.032417897;
  }
  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6037325263)) {
    result[3] += -0;
  } else {
    result[3] += 0.030930445;
  }
  if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
    result[4] += -0.018939754;
  } else {
    result[4] += 0.035393003;
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    result[5] += -0.01197021;
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.018215337768)) {
      result[5] += 0.04152213;
    } else {
      result[5] += -0;
    }
  }
  result[6] += -0;
  result[7] += -0.0057415105;
  result[8] += -0;
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62008410692)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1328552961)) {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
        result[9] += -0.023694519;
      } else {
        if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.063613273203)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.92375618219)) {
            result[9] += 0.03657589;
          } else {
            result[9] += -0;
          }
        } else {
          result[9] += -0.0042122607;
        }
      }
    } else {
      result[9] += 0.032041077;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62007719278)) {
      result[9] += -0.03677893;
    } else {
      result[9] += -0;
    }
  }
  result[10] += -0;
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.57992994785)) {
        result[11] += -0;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0517596006)) {
          result[11] += 0.065215066;
        } else {
          result[11] += -0;
        }
      }
    } else {
      if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.2361369431)) {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.035617761314)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
              result[11] += -0;
            } else {
              result[11] += 0.034845695;
            }
          } else {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.2718229294)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.9442105293)) {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.2575147152)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.009542917;
                  }
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
                    result[11] += -0.02521987;
                  } else {
                    result[11] += -0;
                  }
                }
              } else {
                result[11] += -0.052349344;
              }
            } else {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                result[11] += 0.020535618;
              } else {
                result[11] += -0.004680703;
              }
            }
          }
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.866959095)) {
            result[11] += -0.026824713;
          } else {
            result[11] += -0;
          }
        }
      } else {
        if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
          result[11] += 0.037015438;
        } else {
          if ( (data[73].missing != -1) && (data[73].fvalue < (float)0.93308752775)) {
            result[11] += -0.030682191;
          } else {
            result[11] += 0.0026409938;
          }
        }
      }
    }
  } else {
    if ( (data[36].missing != -1) && (data[36].fvalue < (float)0.24895755947)) {
      result[11] += -0.06001034;
    } else {
      result[11] += -0;
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.43630290031)) {
      result[12] += -0.033194467;
    } else {
      result[12] += -0;
    }
  } else {
    if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26396116614)) {
      result[12] += 0.030081859;
    } else {
      result[12] += -0;
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0803849697)) {
    if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14043554664)) {
      if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
        if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038898557425)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.18137912452)) {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6194216013)) {
              result[0] += -0.020933256;
            } else {
              result[0] += -0;
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
                  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81956714392)) {
                    result[0] += -0.058911044;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.57992994785)) {
                      result[0] += 0.02389314;
                    } else {
                      result[0] += -0;
                    }
                  }
                } else {
                  result[0] += 0.03675003;
                }
              } else {
                result[0] += 0.05515703;
              }
            } else {
              result[0] += -0.02186405;
            }
          }
        } else {
          result[0] += -0.045476176;
        }
      } else {
        result[0] += 0.04402494;
      }
    } else {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.0815498829)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.48187279701)) {
            result[0] += -0;
          } else {
            result[0] += 0.05588814;
          }
        } else {
          result[0] += -0;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.72576403618)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
            result[0] += -0.05498024;
          } else {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.13125431538)) {
              result[0] += 0.023896445;
            } else {
              if ( (data[46].missing != -1) && (data[46].fvalue < (float)1.0866270065)) {
                result[0] += -0.010836258;
              } else {
                result[0] += 0.015537686;
              }
            }
          }
        } else {
          result[0] += 0.023135208;
        }
      }
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.40200158954)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.097437560558)) {
        result[0] += -0.007111962;
      } else {
        result[0] += 0.013589296;
      }
    } else {
      result[0] += -0.054063383;
    }
  }
  if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.038927663118)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038328845054)) {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0096433163)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
              result[1] += -0.0018079974;
            } else {
              result[1] += 0.022770045;
            }
          } else {
            result[1] += -0.027003488;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71965879202)) {
            result[1] += 0.029885773;
          } else {
            result[1] += -0;
          }
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
          if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39887568355)) {
            result[1] += -0;
          } else {
            result[1] += -0.06287957;
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
            result[1] += -0.012530695;
          } else {
            result[1] += 0.018588481;
          }
        }
      }
    } else {
      result[1] += -0.046216715;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62017738819)) {
      result[1] += -0;
    } else {
      result[1] += 0.04965865;
    }
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
    result[2] += -0.036049202;
  } else {
    result[2] += 0.012562561;
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
    result[3] += -0.0010816738;
  } else {
    result[3] += 0.034628086;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
    result[4] += -0.017828798;
  } else {
    result[4] += 0.037165694;
  }
  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90166765451)) {
    result[5] += -0.023770034;
  } else {
    result[5] += 0.021715727;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.5295907259)) {
    result[6] += -0.00890364;
  } else {
    result[6] += 0.0046346695;
  }
  result[7] += -0.0054491675;
  result[8] += -0;
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62004041672)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1328552961)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
        result[9] += -0.031632595;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.50391459465)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
            result[9] += -0;
          } else {
            result[9] += 0.026454909;
          }
        } else {
          result[9] += -0;
        }
      }
    } else {
      result[9] += 0.02391217;
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025323992595)) {
      result[9] += -0;
    } else {
      result[9] += -0.055426653;
    }
  }
  result[10] += -0;
  if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.5221838951)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.76172238588)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.10380646586)) {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63217777014)) {
          result[11] += -0;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61976313591)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
              result[11] += 0.071657814;
            } else {
              result[11] += 0.011143371;
            }
          } else {
            result[11] += -0;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62013137341)) {
          if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.38767385483)) {
            result[11] += 0.031105235;
          } else {
            result[11] += -0;
          }
        } else {
          result[11] += -0.010716683;
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025265553966)) {
          result[11] += -0.060039233;
        } else {
          if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16697607934)) {
            result[11] += -0.034197446;
          } else {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59797418118)) {
              result[11] += -0.015206178;
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.95358139277)) {
                result[11] += 0.038944483;
              } else {
                if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.44573503733)) {
                  result[11] += -0.024237335;
                } else {
                  result[11] += -0;
                }
              }
            }
          }
        }
      } else {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.55266737938)) {
          if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
              result[11] += -0;
            } else {
              result[11] += -0.019021396;
            }
          } else {
            result[11] += -0;
          }
        } else {
          if ( (data[31].missing != -1) && (data[31].fvalue < (float)0.18281649053)) {
            result[11] += 0.034332775;
          } else {
            result[11] += -0;
          }
        }
      }
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
      result[11] += 0.04410924;
    } else {
      result[11] += -0;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.57956153154)) {
      result[12] += 0.0033486558;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.74638354778)) {
        result[12] += -0.044825323;
      } else {
        result[12] += -0;
      }
    }
  } else {
    result[12] += 0.018749915;
  }
  if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
    if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.13507704437)) {
      if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.3948538303)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)-0.22371928394)) {
              result[0] += -0;
            } else {
              result[0] += -0.07588096;
            }
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.58880263567)) {
              result[0] += 0.024990655;
            } else {
              if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16502712667)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
                    result[0] += -0.02188909;
                  } else {
                    if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039004057646)) {
                      result[0] += -0;
                    } else {
                      result[0] += 0.02439228;
                    }
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.3319106102)) {
                    result[0] += -0.061893493;
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                result[0] += 0.0138552;
              }
            }
          }
        } else {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63046061993)) {
            result[0] += -0;
          } else {
            result[0] += 0.020280955;
          }
        }
      } else {
        result[0] += 0.038848292;
      }
    } else {
      result[0] += 0.028100325;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.61064589024)) {
        result[0] += -0.05823186;
      } else {
        result[0] += -0;
      }
    } else {
      if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.66162455082)) {
        if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.13569812477)) {
          result[0] += -0;
        } else {
          result[0] += 0.017918859;
        }
      } else {
        if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.0098451376)) {
          result[0] += -0.018678289;
        } else {
          result[0] += -0;
        }
      }
    }
  }
  if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.038890324533)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.4328392446)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.46778979897)) {
        result[1] += -0;
      } else {
        result[1] += -0.05215852;
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.67777997255)) {
        result[1] += 0.025580335;
      } else {
        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.84881222248)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78048282862)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31538122892)) {
                result[1] += -0;
              } else {
                result[1] += -0.032814443;
              }
            } else {
              result[1] += 0.027971271;
            }
          } else {
            result[1] += -0.045876116;
          }
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.0429239273)) {
            result[1] += 0.027377216;
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
              result[1] += 0.011093161;
            } else {
              result[1] += -0.010927051;
            }
          }
        }
      }
    }
  } else {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6042920351)) {
      result[1] += -0;
    } else {
      if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
        result[1] += -0;
      } else {
        result[1] += 0.06943056;
      }
    }
  }
  if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.11440932006)) {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
      result[2] += -0.04710451;
    } else {
      result[2] += 0.005397639;
    }
  } else {
    result[2] += 0.012928561;
  }
  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.54357796907)) {
    result[3] += -0;
  } else {
    result[3] += 0.035533257;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.57992994785)) {
    result[4] += 0.02269206;
  } else {
    result[4] += -0.027887374;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90166765451)) {
      result[5] += -0;
    } else {
      result[5] += 0.05889965;
    }
  } else {
    result[5] += -0.034751438;
  }
  result[6] += -0;
  result[7] += -0.0039892704;
  result[8] += -0;
  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60422152281)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1328552961)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.1340187043)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.2248044759)) {
            result[9] += -0.0129658645;
          } else {
            result[9] += -0;
          }
        } else {
          result[9] += 0.04512467;
        }
      } else {
        result[9] += -0.04333979;
      }
    } else {
      result[9] += 0.036691792;
    }
  } else {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6194216013)) {
      result[9] += -0.042765155;
    } else {
      result[9] += -0;
    }
  }
  result[10] += -0.03650207;
  if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76828837395)) {
      if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.097454592586)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.11714296788)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.66160225868)) {
              result[11] += -0;
            } else {
              result[11] += 0.032036386;
            }
          } else {
            result[11] += -0.015156712;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.10614664108)) {
              result[11] += 0.08644567;
            } else {
              result[11] += 0.015246389;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2424036264)) {
              result[11] += -0.01310662;
            } else {
              result[11] += -0;
            }
          }
        }
      } else {
        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.54357796907)) {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.068039134145)) {
            result[11] += -0;
          } else {
            result[11] += -0.03360071;
          }
        } else {
          result[11] += 0.0016609839;
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1061306)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60424655676)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.40954250097)) {
            result[11] += -0.012035051;
          } else {
            if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.68158894777)) {
              result[11] += 0.012399417;
            } else {
              result[11] += -0;
            }
          }
        } else {
          result[11] += -0.04687756;
        }
      } else {
        result[11] += 0.009902934;
      }
    }
  } else {
    result[11] += 0.02835936;
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.41649469733)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
      result[12] += 0.02352865;
    } else {
      result[12] += -0.0017025109;
    }
  } else {
    result[12] += -0.017713;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02535321191)) {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.4555876255)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77148842812)) {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.1127986908)) {
            result[0] += -0;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.35207864642)) {
              result[0] += 0.023055663;
            } else {
              result[0] += -0;
            }
          }
        } else {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6194216013)) {
            result[0] += -0.011856544;
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.51567870378)) {
          result[0] += 0.06996101;
        } else {
          result[0] += -0;
        }
      }
    } else {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64719218016)) {
        if ( (data[44].missing != -1) && (data[44].fvalue < (float)0.080477841198)) {
          if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.21682018042)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7546197772)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018990517)) {
                result[0] += 0.038684484;
              } else {
                result[0] += -0;
              }
            } else {
              result[0] += -0;
            }
          } else {
            result[0] += -0.029045638;
          }
        } else {
          result[0] += 0.026105376;
        }
      } else {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.86948847771)) {
            result[0] += -0;
          } else {
            result[0] += 0.035072874;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.61771321297)) {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16623981297)) {
              result[0] += -0.046895683;
            } else {
              result[0] += -0;
            }
          } else {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
              if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20921711624)) {
                result[0] += -0;
              } else {
                result[0] += -0.030713497;
              }
            } else {
              result[0] += 0.008355822;
            }
          }
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
      result[0] += -0.034439076;
    } else {
      result[0] += -0;
    }
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.016243726015)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.1498845816)) {
          result[1] += -0.019359242;
        } else {
          result[1] += 0.013658566;
        }
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.88479340076)) {
          result[1] += -0;
        } else {
          result[1] += -0.05042047;
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
        result[1] += 0.030697526;
      } else {
        if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.13326488435)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
              result[1] += -0.027427444;
            } else {
              result[1] += -0;
            }
          } else {
            result[1] += 0.0011174122;
          }
        } else {
          result[1] += 0.028661998;
        }
      }
    }
  } else {
    result[1] += 0.055277534;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.45095446706)) {
    result[2] += 0.008993486;
  } else {
    result[2] += -0.012829331;
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
    result[3] += -0.0007163027;
  } else {
    result[3] += 0.029318718;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
    result[4] += -0.031911273;
  } else {
    result[4] += 0.03101173;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025336515158)) {
    result[5] += -0.03356112;
  } else {
    result[5] += 0.022038765;
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.4838591814)) {
    result[6] += -0.040768426;
  } else {
    result[6] += 0.0005115403;
  }
  result[7] += -0;
  result[8] += -0;
  if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.45259317756)) {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      result[9] += -0.01087619;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.94221127033)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.92375618219)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
              result[9] += -0;
            } else {
              result[9] += 0.080018595;
            }
          } else {
            result[9] += -0;
          }
        } else {
          result[9] += -0;
        }
      } else {
        result[9] += -0.015193044;
      }
    }
  } else {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.073680445552)) {
      result[9] += -0.04010158;
    } else {
      result[9] += -0;
    }
  }
  result[10] += -0;
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025296164677)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021076679)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.0278730392)) {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.84780395031)) {
            result[11] += -0.008763048;
          } else {
            result[11] += 0.017311757;
          }
        } else {
          result[11] += -0.012926393;
        }
      } else {
        result[11] += 0.01790968;
      }
    } else {
      result[11] += -0.046452098;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61983728409)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.10614664108)) {
        result[11] += 0.090222515;
      } else {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.17355711758)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62008076906)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60427820683)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10234069079)) {
                  if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.061268497258)) {
                    if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.68158894777)) {
                      result[11] += 0.048098285;
                    } else {
                      result[11] += -0;
                    }
                  } else {
                    result[11] += -0;
                  }
                } else {
                  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.57956153154)) {
                    result[11] += -0.019376682;
                  } else {
                    result[11] += -0;
                  }
                }
              } else {
                result[11] += 0.045284677;
              }
            } else {
              if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.38108387589)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.90834456682)) {
                  result[11] += -0.006740539;
                } else {
                  result[11] += 0.009017854;
                }
              } else {
                result[11] += -0.039864916;
              }
            }
          } else {
            result[11] += 0.03756924;
          }
        } else {
          result[11] += -0.019368129;
        }
      }
    } else {
      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60209196806)) {
        result[11] += -0.02374417;
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.88479340076)) {
          result[11] += -0;
        } else {
          result[11] += 0.0110825235;
        }
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
    if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039004057646)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025406084955)) {
        result[12] += -2.1156997e-05;
      } else {
        result[12] += 0.027461553;
      }
    } else {
      result[12] += -0.037458193;
    }
  } else {
    result[12] += 0.019844444;
  }
  if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
    if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16502712667)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45558142662)) {
          result[0] += -0.06273191;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.033852253109)) {
            if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010553312488)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024322185665)) {
                result[0] += 0.01884914;
              } else {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31372666359)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9055850506)) {
                    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62008422613)) {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60427820683)) {
                        result[0] += -0;
                      } else {
                        result[0] += -0.043920815;
                      }
                    } else {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6017807126)) {
                        result[0] += 0.01707052;
                      } else {
                        result[0] += -0.010442031;
                      }
                    }
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62014013529)) {
                      result[0] += 0.028999057;
                    } else {
                      result[0] += -0;
                    }
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.3319106102)) {
                    result[0] += -0.04164781;
                  } else {
                    result[0] += -0;
                  }
                }
              }
            } else {
              result[0] += -0.041589968;
            }
          } else {
            result[0] += 0.016086224;
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.7244440317)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
            result[0] += -0.01427291;
          } else {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.13125431538)) {
              result[0] += 0.013645979;
            } else {
              if ( (data[76].missing != -1) && (data[76].fvalue < (float)1.0362232924)) {
                result[0] += -0.023795364;
              } else {
                result[0] += 0.007644033;
              }
            }
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.99576175213)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
              result[0] += -0.017052954;
            } else {
              result[0] += 0.0056778435;
            }
          } else {
            result[0] += 0.046969865;
          }
        }
      }
    } else {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.016157014295)) {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)9.9942893982)) {
          result[0] += 0.048340585;
        } else {
          result[0] += -0;
        }
      } else {
        if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.036695543677)) {
          result[0] += 0.014039951;
        } else {
          result[0] += -0.018351378;
        }
      }
    }
  } else {
    result[0] += 0.028348932;
  }
  if ( (data[28].missing != -1) && (data[28].fvalue < (float)0.02693307586)) {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.89751946926)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28237974644)) {
          if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.1687951088)) {
            result[1] += -0.03751447;
          } else {
            result[1] += -0;
          }
        } else {
          result[1] += 0.0032619198;
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
          if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.457282722)) {
            result[1] += 0.044022456;
          } else {
            result[1] += -0;
          }
        } else {
          result[1] += -0;
        }
      }
    } else {
      if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.025529455394)) {
        if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14464202523)) {
          result[1] += -0;
        } else {
          result[1] += -0.05561071;
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.9585189819)) {
          result[1] += 0.036490332;
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.0186066628)) {
            result[1] += -0.024626935;
          } else {
            result[1] += 0.00054947415;
          }
        }
      }
    }
  } else {
    result[1] += 0.0458749;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62020581961)) {
    result[2] += 0.007048305;
  } else {
    result[2] += -0.0078276815;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.36582684517)) {
    result[3] += -0;
  } else {
    result[3] += 0.013427764;
  }
  if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.0045417477377)) {
    result[4] += -0.027729565;
  } else {
    result[4] += 0.020169158;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025336515158)) {
    result[5] += -0.008647515;
  } else {
    result[5] += 0.025773248;
  }
  result[6] += -0;
  result[7] += -0.0033131393;
  result[8] += -0;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62009263039)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1328552961)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.1340187043)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
              result[9] += -0;
            } else {
              result[9] += -0.029616049;
            }
          } else {
            result[9] += 0.031551294;
          }
        } else {
          result[9] += 0.04140219;
        }
      } else {
        result[9] += -0.042123057;
      }
    } else {
      result[9] += 0.03429911;
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.018215337768)) {
      if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20921711624)) {
        result[9] += -0.0032364298;
      } else {
        result[9] += 0.0107050855;
      }
    } else {
      result[9] += -0.047621854;
    }
  }
}

