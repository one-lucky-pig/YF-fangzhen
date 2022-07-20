#include "fangzhen.hpp"
#include <NXSigningResource.cpp>

Session *(fangzhen::theSession) = NULL;
UI *(fangzhen::theUI) = NULL;

void fangzhen::initialize_cb()
{
	try
	{
		tabControl = dynamic_cast<NXOpen::BlockStyler::TabControl*>(theDialog->TopBlock()->FindBlock("tabControl"));
		tabPage2 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("tabPage2"));
		point04 = dynamic_cast<NXOpen::BlockStyler::SpecifyPoint*>(theDialog->TopBlock()->FindBlock("point04"));
		toggle04 = dynamic_cast<NXOpen::BlockStyler::Toggle*>(theDialog->TopBlock()->FindBlock("toggle04"));
		group4 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group4"));
		button02 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button02"));
		double015 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double015"));
		directionX = dynamic_cast<NXOpen::BlockStyler::ReverseDirection*>(theDialog->TopBlock()->FindBlock("directionX"));
		button03 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button03"));
		double016 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double016"));
		directionY = dynamic_cast<NXOpen::BlockStyler::ReverseDirection*>(theDialog->TopBlock()->FindBlock("directionY"));
		button04 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button04"));
		double017 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double017"));
		directionZ = dynamic_cast<NXOpen::BlockStyler::ReverseDirection*>(theDialog->TopBlock()->FindBlock("directionZ"));
		button023 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button023"));
		group10 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group10"));
		button08 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button08"));
		button09 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button09"));
		button010 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button010"));
		button011 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button011"));
		drawingArea01 = dynamic_cast<NXOpen::BlockStyler::DrawingArea*>(theDialog->TopBlock()->FindBlock("drawingArea01"));
		button012 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button012"));
		button013 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button013"));
		button014 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button014"));
		button015 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button015"));
		button016 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button016"));
		group8 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group8"));
		group17 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group17"));
		point09 = dynamic_cast<NXOpen::BlockStyler::SpecifyPoint*>(theDialog->TopBlock()->FindBlock("point09"));
		group9 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group9"));
		toggle0 = dynamic_cast<NXOpen::BlockStyler::Toggle*>(theDialog->TopBlock()->FindBlock("toggle0"));
		point05 = dynamic_cast<NXOpen::BlockStyler::SpecifyPoint*>(theDialog->TopBlock()->FindBlock("point05"));
		point06 = dynamic_cast<NXOpen::BlockStyler::SpecifyPoint*>(theDialog->TopBlock()->FindBlock("point06"));
		button020 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button020"));
		button021 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button021"));
		group30 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group30"));
		button027 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button027"));
		point07 = dynamic_cast<NXOpen::BlockStyler::SpecifyPoint*>(theDialog->TopBlock()->FindBlock("point07"));
		point08 = dynamic_cast<NXOpen::BlockStyler::SpecifyPoint*>(theDialog->TopBlock()->FindBlock("point08"));
		point091 = dynamic_cast<NXOpen::BlockStyler::SpecifyPoint*>(theDialog->TopBlock()->FindBlock("point091"));
		button025 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button025"));
		button028 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button028"));
		button026 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button026"));
		group15 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group15"));
		button018 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button018"));
		button019 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button019"));
		point_no = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("point_no"));
		group14 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group14"));
		button017 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button017"));
		button022 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button022"));
		button06 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button06"));
		group16 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group16"));
		list_box0 = dynamic_cast<NXOpen::BlockStyler::ListBox*>(theDialog->TopBlock()->FindBlock("list_box0"));
		tabPage1 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("tabPage1"));
		point01 = dynamic_cast<NXOpen::BlockStyler::SpecifyPoint*>(theDialog->TopBlock()->FindBlock("point01"));
		group1 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group1"));
		integer01 = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer01"));
		integer02 = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer02"));
		toggle05 = dynamic_cast<NXOpen::BlockStyler::Toggle*>(theDialog->TopBlock()->FindBlock("toggle05"));
		double09 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double09"));
		double010 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double010"));
		double011 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double011"));
		double012 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double012"));
		double018 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double018"));
		double08 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double08"));
		double01 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double01"));
		double03 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double03"));
		double014 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double014"));
		enum02 = dynamic_cast<NXOpen::BlockStyler::Enumeration*>(theDialog->TopBlock()->FindBlock("enum02"));
		group6 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group6"));
		enum03 = dynamic_cast<NXOpen::BlockStyler::Enumeration*>(theDialog->TopBlock()->FindBlock("enum03"));
		double06 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double06"));
		button05 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button05"));
		group2 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group2"));
		doubleTable0 = dynamic_cast<NXOpen::BlockStyler::DoubleTable*>(theDialog->TopBlock()->FindBlock("doubleTable0"));
		double05 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double05"));
		group3 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group3"));
		double013 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double013"));
		enum0 = dynamic_cast<NXOpen::BlockStyler::Enumeration*>(theDialog->TopBlock()->FindBlock("enum0"));
		double02 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double02"));
		integer0 = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer0"));
		double028 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double028"));
		double029 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double029"));
		enum01 = dynamic_cast<NXOpen::BlockStyler::Enumeration*>(theDialog->TopBlock()->FindBlock("enum01"));
		integer03 = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer03"));
		group13 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group13"));
		doubleTable01 = dynamic_cast<NXOpen::BlockStyler::DoubleTable*>(theDialog->TopBlock()->FindBlock("doubleTable01"));
		button01 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button01"));
		group12 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group12"));
		edge_select0 = dynamic_cast<NXOpen::BlockStyler::CurveCollector*>(theDialog->TopBlock()->FindBlock("edge_select0"));
		button07 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button07"));
		group = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group"));
		point03 = dynamic_cast<NXOpen::BlockStyler::SpecifyPoint*>(theDialog->TopBlock()->FindBlock("point03"));
		point02 = dynamic_cast<NXOpen::BlockStyler::SpecifyPoint*>(theDialog->TopBlock()->FindBlock("point02"));
		double0 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double0"));
		toggle01 = dynamic_cast<NXOpen::BlockStyler::Toggle*>(theDialog->TopBlock()->FindBlock("toggle01"));
		toggle02 = dynamic_cast<NXOpen::BlockStyler::Toggle*>(theDialog->TopBlock()->FindBlock("toggle02"));
		toggle03 = dynamic_cast<NXOpen::BlockStyler::Toggle*>(theDialog->TopBlock()->FindBlock("toggle03"));
		button0 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button0"));
		group7 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group7"));
		doubleJ1 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("doubleJ1"));
		doubleJ2 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("doubleJ2"));
		doubleJ3 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("doubleJ3"));
		doubleJ4 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("doubleJ4"));
		doubleJ5 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("doubleJ5"));
		doubleJ6 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("doubleJ6"));
		tabPage = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("tabPage"));
		point0 = dynamic_cast<NXOpen::BlockStyler::SpecifyPoint*>(theDialog->TopBlock()->FindBlock("point0"));
		double04 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double04"));
		double022 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double022"));
		drawingArea0 = dynamic_cast<NXOpen::BlockStyler::DrawingArea*>(theDialog->TopBlock()->FindBlock("drawingArea0"));
		group5 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group5"));
		double019 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double019"));
		double020 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double020"));
		double021 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double021"));
		double023 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double023"));
		double024 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double024"));
		double025 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double025"));
		double026 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double026"));
		double027 = dynamic_cast<NXOpen::BlockStyler::DoubleBlock*>(theDialog->TopBlock()->FindBlock("double027"));
		tabPage3 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("tabPage3"));
		group11 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group11"));
		tabControl1 = dynamic_cast<NXOpen::BlockStyler::TabControl*>(theDialog->TopBlock()->FindBlock("tabControl1"));
		tabPage5 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("tabPage5"));
		enum_RB_BELL_ruleType = dynamic_cast<NXOpen::BlockStyler::Enumeration*>(theDialog->TopBlock()->FindBlock("enum_RB_BELL_ruleType"));
		group23 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group23"));
		integer_RB_BELL_jointPoint1X = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint1X"));
		integer_RB_BELL_jointPoint1Y = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint1Y"));
		integer_RB_BELL_jointPoint1Z = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint1Z"));
		integer_RB_BELL_jointPoint1A = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint1A"));
		integer_RB_BELL_jointPoint1B = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint1B"));
		integer_RB_BELL_jointPoint1C = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint1C"));
		group24 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group24"));
		integer_RB_BELL_jointPoint2X = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint2X"));
		integer_RB_BELL_jointPoint2Y = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint2Y"));
		integer_RB_BELL_jointPoint2Z = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint2Z"));
		integer_RB_BELL_jointPoint2A = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint2A"));
		integer_RB_BELL_jointPoint2B = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint2B"));
		integer_RB_BELL_jointPoint2C = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint2C"));
		group25 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group25"));
		integer_RB_BELL_jointPoint3X = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint3X"));
		integer_RB_BELL_jointPoint3Y = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint3Y"));
		integer_RB_BELL_jointPoint3Z = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint3Z"));
		integer_RB_BELL_jointPoint3A = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint3A"));
		integer_RB_BELL_jointPoint3B = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint3B"));
		integer_RB_BELL_jointPoint3C = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_BELL_jointPoint3C"));
		tabPage4 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("tabPage4"));
		enum_RB_GUN_rule = dynamic_cast<NXOpen::BlockStyler::Enumeration*>(theDialog->TopBlock()->FindBlock("enum_RB_GUN_rule"));
		group26 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group26"));
		integer_RB_GUN_jointPoint1X = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint1X"));
		integer_RB_GUN_jointPoint1Y = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint1Y"));
		integer_RB_GUN_jointPoint1Z = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint1Z"));
		integer_RB_GUN_jointPoint1A = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint1A"));
		integer_RB_GUN_jointPoint1B = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint1B"));
		integer_RB_GUN_jointPoint1C = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint1C"));
		group27 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group27"));
		integer_RB_GUN_jointPoint2X = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint2X"));
		integer_RB_GUN_jointPoint2Y = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint2Y"));
		integer_RB_GUN_jointPoint2Z = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint2Z"));
		integer_RB_GUN_jointPoint2A = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint2A"));
		integer_RB_GUN_jointPoint2B = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint2B"));
		integer_RB_GUN_jointPoint2C = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint2C"));
		group28 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group28"));
		integer_RB_GUN_jointPoint3X = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint3X"));
		integer_RB_GUN_jointPoint3Y = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint3Y"));
		integer_RB_GUN_jointPoint3Z = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint3Z"));
		integer_RB_GUN_jointPoint3A = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint3A"));
		integer_RB_GUN_jointPoint3B = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint3B"));
		integer_RB_GUN_jointPoint3C = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint3C"));
		group29 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group29"));
		integer_RB_GUN_jointPoint4X = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint4X"));
		integer_RB_GUN_jointPoint4Y = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint4Y"));
		integer_RB_GUN_jointPoint4Z = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint4Z"));
		integer_RB_GUN_jointPoint4A = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint4A"));
		integer_RB_GUN_jointPoint4B = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint4B"));
		integer_RB_GUN_jointPoint4C = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint4C"));
		group291 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group291"));
		integer_RB_GUN_jointPoint5X = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint5X"));
		integer_RB_GUN_jointPoint5Y = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint5Y"));
		integer_RB_GUN_jointPoint5Z = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint5Z"));
		integer_RB_GUN_jointPoint5A = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint5A"));
		integer_RB_GUN_jointPoint5B = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint5B"));
		integer_RB_GUN_jointPoint5C = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_RB_GUN_jointPoint5C"));
		button0241 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button0241"));
		group18 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group18"));
		tabControl2 = dynamic_cast<NXOpen::BlockStyler::TabControl*>(theDialog->TopBlock()->FindBlock("tabControl2"));
		tabPage6 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("tabPage6"));
		enum_FB_GUN_rule = dynamic_cast<NXOpen::BlockStyler::Enumeration*>(theDialog->TopBlock()->FindBlock("enum_FB_GUN_rule"));
		group191 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group191"));
		integer_jointPoint0X1 = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint0X1"));
		integer_jointPoint0Y1 = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint0Y1"));
		integer_jointPoint0Z1 = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint0Z1"));
		integer_jointPoint0A1 = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint0A1"));
		integer_jointPoint0B1 = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint0B1"));
		integer_jointPoint0C1 = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint0C1"));
		group19 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group19"));
		integer_jointPoint1X = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint1X"));
		integer_jointPoint1Y = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint1Y"));
		integer_jointPoint1Z = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint1Z"));
		integer_jointPoint1A = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint1A"));
		integer_jointPoint1B = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint1B"));
		integer_jointPoint1C = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint1C"));
		group20 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group20"));
		integer_jointPoint2X = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint2X"));
		integer_jointPoint2Y = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint2Y"));
		integer_jointPoint2Z = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint2Z"));
		integer_jointPoint2A = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint2A"));
		integer_jointPoint2B = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint2B"));
		integer_jointPoint2C = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint2C"));
		group22 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group22"));
		integer_jointPoint3X = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint3X"));
		integer_jointPoint3Y = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint3Y"));
		integer_jointPoint3Z = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint3Z"));
		integer_jointPoint3A = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint3A"));
		integer_jointPoint3B = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint3B"));
		integer_jointPoint3C = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint3C"));
		group21 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group21"));
		integer_jointPoint4X = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint4X"));
		integer_jointPoint4Y = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint4Y"));
		integer_jointPoint4Z = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint4Z"));
		integer_jointPoint4A = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint4A"));
		integer_jointPoint4B = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint4B"));
		integer_jointPoint4C = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer_jointPoint4C"));
		button024 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button024"));
		//------------------------------------------------------------------------------
		//Registration of ListBox specific callbacks
		//------------------------------------------------------------------------------
		//list_box0->SetAddHandler(make_callback(this, &fangzhen::AddCallback));

		//list_box0->SetDeleteHandler(make_callback(this, &fangzhen::DeleteCallback));

		//------------------------------------------------------------------------------
	}
	catch (exception& ex)
	{
		//---- Enter your exception handling code here -----
		fangzhen::theUI->NXMessageBox()->Show("Block Styler", NXOpen::NXMessageBox::DialogTypeError, ex.what());
	}
}


//��ʾUI���棬��ִ���������
void fangzhen::dialogShown_cb()
{
	try
	{
		load_param();//���ز���
		uc1601("�����������",0);
		initialize_connectPoints();
		uc1601("���ӵ�����������", 0);
		initialize_station();	//��ʼ������վ����
		uc1601("��ʼ������վ�������",0);
		read_points();	//��ȡ�켣��͵���
		uc1601("��ȡ�켣��͵������", 0);
		read_points_param();//��ȡ�켣�����
		uc1601("��ȡ�켣��������", 0);
		create_points();//�����켣��
		uc1601("�����켣�����", 0);
		//��ʼ�����˶���ʽ��ö�ٿؼ�
		vector<NXString> s1{ "PaintL","PaintC","MoveL","MoveJ","MoveC" };
		enum0->SetEnumMembers(s1);
		//��ʼ���������˶�����ö�ٿؼ�
		if (robot->robot_type == "ABB") {
			vector<NXString> s3{ "+X","-X" };
			enum01->SetEnumMembers(s3);
		}
		else {
			vector<NXString> s3{ "+Y","-Y" };
			enum01->SetEnumMembers(s3);
		}
		//��ʼ��������ǹ״̬��ö�ٿؼ�
		vector<NXString> s2{ "ON","OFF" };
		enum02->SetEnumMembers(s2);

		if (strcmp(tool_type, "GUN") == 0)
		{	
			//����ǻ���ǹ��������ع��ղ������ÿؼ�
			if (strcmp(work_type, "FC") == 0) {
				double09->SetEnable(false);
				double010->SetEnable(false);
				double011->SetEnable(false);
				double012->SetEnable(false);
				double018->SetEnable(false);
				double08->SetEnable(false);
				double01->SetEnable(false);
				double03->SetEnable(false);
				double014->SetEnable(false);
				enum02->SetEnable(false);
			}
			//�������ǹ��������ع��ղ������ÿؼ�
			else {
				double010->SetEnable(false);
				double018->SetEnable(false);
			}
		}
		//��������������á��������ղ���
		if (strcmp(tool_type, "BELL") == 0)
		{
			double011->SetEnable(false);
		}

		/*fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeError, points[0].is_on);
		double013->SetValue(station.tcp_d);
		double02->SetValue(station.tool_speed);
		integer0->SetValue(station.acc);
		double028->SetValue(station.start_distance);
		double029->SetValue(station.convery_v);*/
		//�����ؼ���ʼ��
		toggle02->SetValue(false);
		toggle03->SetValue(false);
		point03->SetEnable(false);
		point02->SetEnable(false);
		//��ֹѡ�е��������һ���ؼ�
		point05->SetAutomaticProgression(false);
		point06->SetAutomaticProgression(false);
		point09->SetAutomaticProgression(false);

		toggle0->SetValue(false);
		toggle04->SetValue(false);
		toggle05->SetValue(false);
		//toggle04->SetShow(false);
		//����Ĥ��ȼ�ͼ
		drawingArea0->SetImage(".\\YF\\colorBar.jpg");
		
		/*load_param();*/  //ע��

		//����Ĭ��ֵ

		

	}
	catch (exception& ex)
	{

		fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeError, ex.what());
	}
}

int fangzhen::Show()
{
	try
	{
		theDialog->Show();
	}
	catch (exception& ex)
	{

		fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeError, ex.what());
	}
	return 0;
}

fangzhen::fangzhen()
{
	try
	{
		//һЩȫ�ֱ����ĳ�ʼ��
		process_data_path = ".\\YF\\DataResources\\ProcessData\\" + get_curpro_path(".\\YF\\cur.txt") + "\\"; //�м������ļ���·��
		output_path = ".\\YF\\DataResources\\OutputFile\\" + get_curpro_path(".\\YF\\cur.txt"); //�������·��
		filename = ".\\YF\\DataResources\\OutputFile\\" + get_curpro_path(".\\YF\\cur.txt") + get_curpro_name(".\\YF\\cur.txt"); //����ļ�·��+���ƣ�������׺��

		tool_tag = NULL;
		cur_point = NULL;
		sim_first = true;
		affirmed = false;
		R_changed = false;
		reversed = false;
		
		first_copy_point = 0;
		last_copy_point = 0;
		origin_p = Point3d(0, 0, 0);

		//��ʼ������վ����
		/*initialize_station();
		uc1601("��ʼ������վ�������", 0);*/
		
		//����ΪNX�Զ�����
		fangzhen::theSession = NXOpen::Session::GetSession();
		fangzhen::theUI = UI::GetUI();
		theDlxFileName = "fangzhen.dlx";
		theDialog = fangzhen::theUI->CreateDialog(theDlxFileName);		
		theDialog->AddUpdateHandler(make_callback(this, &fangzhen::update_cb));		
		theDialog->AddCloseHandler(make_callback(this, &fangzhen::close_cb));		
		theDialog->AddInitializeHandler(make_callback(this, &fangzhen::initialize_cb));		
		theDialog->AddDialogShownHandler(make_callback(this, &fangzhen::dialogShown_cb));
	}
	catch (exception& ex)
	{
		throw;
	}
}

//NX�Զ�����
fangzhen::~fangzhen()
{
	if (theDialog != NULL)
	{
		delete theDialog;
		theDialog = NULL;
	}
}

//NX�Զ�����
extern "C" DllExport void  ufusr(char *param, int *retcod, int param_len)
{
	fangzhen *thefangzhen = NULL;
	try
	{
		thefangzhen = new fangzhen();
		// The following method shows the dialog immediately
		thefangzhen->Show();
	}
	catch (exception& ex)
	{

		fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeError, ex.what());
	}
	if (thefangzhen != NULL)
	{
		delete thefangzhen;
		thefangzhen = NULL;
	}
}

//NX�Զ�����
extern "C" DllExport int ufusr_ask_unload()
{
	//return (int)Session::LibraryUnloadOptionExplicitly;
	return (int)Session::LibraryUnloadOptionImmediately;
	//return (int)Session::LibraryUnloadOptionAtTermination;
}

//NX�Զ�����
extern "C" DllExport void ufusr_cleanup(void)
{
	try
	{

	}
	catch (exception& ex)
	{
		fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeError, ex.what());
	}
}

//���ز���
bool fangzhen::load_param() {
	string ini_filename = process_data_path + "config.ini"; //ini�����ļ�·�� 
	//��������������ļ�������false
	ifstream in(ini_filename);
	if (!in) return false;
	in.close();

	//һЩ�����Ľ�������
	char max_mohou[100]; //Ĥ�����ֵ
	char min_mohou[100]; //Ĥ����Сֵ
	char ave_mohou[100]; //ƽ��Ĥ��
	char rate[100]; //��Ϳ������
	char pace[100]; //��Ϳ����
	char effcient[100]; //��ͿЧ��
	char coor_name1[100]; //��������ϵ����
	char tcp_d[100]; //tcp����
	char tcp_v[100]; //tcp�ٶ�
	char tcp_acc[100]; //���ﾫ��
	char robot_start_d[100]; //��������������
	char rail_v[100]; //�����ٶ�
	char robotname[100]; //����������
	
	//��ȡ���ò���
	GetPrivateProfileString("Environment", "robotname", "", robotname, sizeof(robotname), ini_filename.c_str());
	GetPrivateProfileString("Environment", "work_type", "", work_type, sizeof(work_type), ini_filename.c_str());
	GetPrivateProfileString("Environment", "robotnum", "", robotnum, sizeof(robotnum), ini_filename.c_str());
	GetPrivateProfileString("Environment", "tool_type", "", tool_type, sizeof(tool_type), ini_filename.c_str());
	GetPrivateProfileString("Environment", "tool_path", "", tool_path, sizeof(tool_path), ini_filename.c_str());
	GetPrivateProfileString("Environment", "coor_name", "", coor_name1, sizeof(coor_name1), ini_filename.c_str());
	GetPrivateProfileString("Trajectory", "pa", "", pa, sizeof(pa), ini_filename.c_str());

	GetPrivateProfileString("Fangzhen", "max", "", max_mohou, sizeof(max_mohou), ini_filename.c_str());
	GetPrivateProfileString("Fangzhen", "min", "", min_mohou, sizeof(min_mohou), ini_filename.c_str());
	GetPrivateProfileString("Fangzhen", "ave", "", ave_mohou, sizeof(ave_mohou), ini_filename.c_str());
	GetPrivateProfileString("Fangzhen", "rate", "", rate, sizeof(rate), ini_filename.c_str());
	GetPrivateProfileString("Fangzhen", "pace", "", pace, sizeof(pace), ini_filename.c_str());
	GetPrivateProfileString("Fangzhen", "effcient", "", effcient, sizeof(effcient), ini_filename.c_str());
	GetPrivateProfileString("Fangzhen", "tcp_d", "", tcp_d, sizeof(tcp_d), ini_filename.c_str());
	GetPrivateProfileString("Fangzhen", "tcp_v", "", tcp_v, sizeof(tcp_v), ini_filename.c_str());
	GetPrivateProfileString("Fangzhen", "tcp_acc", "", tcp_acc, sizeof(tcp_acc), ini_filename.c_str());
	GetPrivateProfileString("Fangzhen", "robot_start_d", "", robot_start_d, sizeof(robot_start_d), ini_filename.c_str());
	GetPrivateProfileString("Fangzhen", "rail_v", "", rail_v, sizeof(rail_v), ini_filename.c_str());
	// ��ʾ��Ϣ
	if (strcmp(tool_path, "") == 0) {
		fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeError, "δѡ�񹤾�");
	}
	else {
		string tt = tool_path;
		int index1 = tt.find_last_of("\\");
		int index2 = tt.find_last_of(".");
		tool_name = tt.substr(index1 + 1, index2 - index1 - 1);
	}

	if (strcmp(work_type, "") == 0) {
		fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeError, "δָ����������");
		strcpy(tool_type, "BELL");
	}
	else {
		if (strcmp(work_type, "BC") == 0)
			strcpy(tool_type, "BELL");
		if (strcmp(work_type, "PC") == 0)
			strcpy(tool_type, "GUN");
	}
	
	if (strcmp(coor_name1, "") == 0)
		coor_name = "wobjtrack";
	else
		coor_name = coor_name1;
	
	//����ز�����ʾ�ڽ�����
	if (strcmp(max_mohou, "") != 0)
		double019->SetValue(atof(max_mohou));
	if (strcmp(min_mohou, "") != 0)
		double020->SetValue(atof(min_mohou));
	if (strcmp(ave_mohou, "") != 0)
		double021->SetValue(atof(ave_mohou));
	if (strcmp(rate, "") != 0)
		double023->SetValue(atof(rate));
	if (strcmp(pace, "") != 0)
		double024->SetValue(atof(pace));
	if (strcmp(effcient, "") != 0)
		double025->SetValue(atof(effcient));
	if (strcmp(tcp_d, "") != 0)
		double013->SetValue(atof(tcp_d));
	if (strcmp(tcp_v, "") != 0)
		double02->SetValue(atof(tcp_v));
	if (strcmp(tcp_acc, "") != 0)
		integer0->SetValue(atoi(tcp_acc));
	if (strcmp(robot_start_d, "") != 0)
		double028->SetValue(atof(robot_start_d));
	if (strcmp(rail_v, "") != 0)
		double029->SetValue(atof(rail_v));
	
	return true;
}

//��ʼ������վ����
//����߽�׳��
void fangzhen::initialize_station() {
	string ini_filename = process_data_path + "config.ini"; //ini�����ļ�·��

	char robotname[100]; //����������
	GetPrivateProfileString("Environment", "robotname", "", robotname, sizeof(robotname), ini_filename.c_str());

	MatrixXd Ter;//��λʱ������ĩ���ڻ����˻�����ϵ��λ��
	if (strcmp(robotname, "IRB5400") == 0) {
		robot = new IRB5400();
		robot->robot_type = "ABB";
		double zero_t[6] = { 0,0,0,0,0,0 };
		robot->c_to_p(zero_t);
		Ter = robot->FK(zero_t);
		//�����˲���·��
		string robot_model_path = ".\\YF\\DataResources\\Robot\\IRB5400\\";
		part_model_path[0] = robot_model_path + "Base_stp.prt";
		part_model_path[1] = robot_model_path + "Joint1_stp.prt";
		part_model_path[2] = robot_model_path + "Joint2_stp.prt";
		part_model_path[3] = robot_model_path + "Joint3_stp.prt";
		part_model_path[4] = robot_model_path + "Joint4_stp.prt";
		part_model_path[5] = robot_model_path + "Joint5_1_stp.prt";
		part_model_path[6] = robot_model_path + "Joint5_2_stp.prt";
		part_model_path[7] = robot_model_path + "Joint6_stp.prt";
		for (int i = 0; i < 8; ++i)
			robot_parts_tag.push_back(NULL);
		//������Home��λ��
		robot_ini_thetas[0] = 30;
		robot_ini_thetas[1] = 0;
		robot_ini_thetas[2] = 60;
		robot_ini_thetas[3] = 33;
		robot_ini_thetas[4] = -43;
		robot_ini_thetas[5] = -73;

		for (int i = 0; i < 6; i++)	robot_ini_thetas[i] = robot_ini_thetas[i] * pi / 180;
		robot->c_to_p(robot_ini_thetas);
	}

	if (strcmp(robotname, "IRB5500") == 0) {
		robot = new IRB5500();
		robot->robot_type = "ABB";
		double zero_t[6] = { 0,0,55.0 * pi / 180,-90.0 * pi / 180,0,0 }; //ע��IRB5500��������λ����еԭ�㣩
		robot->c_to_p(zero_t);
		Ter = robot->FK(zero_t);
		string robot_model_path = ".\\YF\\DataResources\\Robot\\IRB5500\\";
		part_model_path[0] = robot_model_path + "Base_stp.prt";
		part_model_path[1] = robot_model_path + "Joint1_stp.prt";
		part_model_path[2] = robot_model_path + "Joint2_stp.prt";
		part_model_path[3] = robot_model_path + "Joint3_stp.prt";
		part_model_path[4] = robot_model_path + "Joint4_stp.prt";
		part_model_path[5] = robot_model_path + "Joint5_1_stp.prt";
		part_model_path[6] = robot_model_path + "Joint5_2_stp.prt";
		part_model_path[7] = robot_model_path + "Joint6_stp.prt";
		for (int i = 0; i < 8; ++i)
			robot_parts_tag.push_back(NULL);
		//������Home��λ��
		robot_ini_thetas[0] = 26.4;
		robot_ini_thetas[1] = 41.7;
		robot_ini_thetas[2] = 50.2;
		robot_ini_thetas[3] = 51.4;
		robot_ini_thetas[4] = -54.5;
		robot_ini_thetas[5] = -114.8;

		for (int i = 0; i < 6; i++)	robot_ini_thetas[i] = robot_ini_thetas[i] * pi / 180;
		robot->c_to_p(robot_ini_thetas);
	}

	if (strcmp(robotname, "P250IB") == 0) {
		robot = new P250IB();
		robot->robot_type = "FANUC";
		double zero_t[6] = { 0,0,0,0,0,0 };
		robot->c_to_p(zero_t);
		Ter = robot->FK(zero_t);

		//������Home��λ��
		robot_ini_thetas[0] = 30;
		robot_ini_thetas[1] = 0;
		robot_ini_thetas[2] = 60;
		robot_ini_thetas[3] = 33;
		robot_ini_thetas[4] = -43;
		robot_ini_thetas[5] = -73;

		for (int i = 0; i < 6; i++)	robot_ini_thetas[i] = robot_ini_thetas[i] * pi / 180;
		robot->c_to_p(robot_ini_thetas);
	}
	
	//����������ϵ�ڴ������ϵ��λ��
	char rx[100];
	char ry[100];
	char rz[100];
	char ra[100];
	char rb[100];
	char rc[100];

	GetPrivateProfileString("robotCsys", "rx", "", rx, sizeof(rx), ini_filename.c_str());
	GetPrivateProfileString("robotCsys", "ry", "", ry, sizeof(ry), ini_filename.c_str());
	GetPrivateProfileString("robotCsys", "rz", "", rz, sizeof(rz), ini_filename.c_str());
	GetPrivateProfileString("robotCsys", "ra", "", ra, sizeof(ra), ini_filename.c_str());
	GetPrivateProfileString("robotCsys", "rb", "", rb, sizeof(rb), ini_filename.c_str());
	GetPrivateProfileString("robotCsys", "rc", "", rc, sizeof(rc), ini_filename.c_str());

	double rxv, ryv, rzv, rav, rbv, rcv;

	rxv = atof(rx);
	ryv = atof(ry);
	rzv = atof(rz);
	rav = atof(ra);
	rbv = atof(rb);
	rcv = atof(rc);

	MatrixXd Tr0(4, 4);
	Tr0.setIdentity();
	Tr0.block(0, 0, 3, 3) = euler_to_T(rav*pi / 180, rbv*pi / 180, rcv*pi / 180);
	Tr0(0, 3) = rxv;
	Tr0(1, 3) = ryv;
	Tr0(2, 3) = rzv;

	//�������ϵ��ģ������ϵ��λ��
	char ox[100];
	char oy[100];
	char oz[100];
	char xx[100];
	char xy[100];
	char xz[100];
	char yx[100];
	char yy[100];
	char yz[100];

	GetPrivateProfileString("workpiecesCsys", "Ox", "", ox, sizeof(ox), ini_filename.c_str());
	GetPrivateProfileString("workpiecesCsys", "Oy", "", oy, sizeof(oy), ini_filename.c_str());
	GetPrivateProfileString("workpiecesCsys", "Oz", "", oz, sizeof(oz), ini_filename.c_str());
	GetPrivateProfileString("workpiecesCsys", "Xx", "", xx, sizeof(xx), ini_filename.c_str());
	GetPrivateProfileString("workpiecesCsys", "Xy", "", xy, sizeof(xy), ini_filename.c_str());
	GetPrivateProfileString("workpiecesCsys", "Xz", "", xz, sizeof(xz), ini_filename.c_str());
	GetPrivateProfileString("workpiecesCsys", "Yx", "", yx, sizeof(yx), ini_filename.c_str());
	GetPrivateProfileString("workpiecesCsys", "Yy", "", yy, sizeof(yy), ini_filename.c_str());
	GetPrivateProfileString("workpiecesCsys", "Yz", "", yz, sizeof(yz), ini_filename.c_str());

	if (strcmp(ox, "") == 0) {
		fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeError, "δָ����������ϵ");
		strcpy(xx, "1");
		strcpy(xy, "0");
		strcpy(xz, "0");
		strcpy(yx, "0");
		strcpy(yy, "1");
		strcpy(yz, "0");
		strcpy(ox, "0");
		strcpy(oy, "0");
		strcpy(oz, "1");
	}
	//WCS: �������ϵ��ģ������ϵ��λ�� T0m
	//���д�
	double WCS[16];
	WCS[0] = atof(xx);
	WCS[4] = atof(xy);
	WCS[8] = atof(xz);
	WCS[1] = atof(yx);
	WCS[5] = atof(yy);
	WCS[9] = atof(yz);
	WCS[3] = atof(ox);
	WCS[7] = atof(oy);
	WCS[11] = atof(oz);

	//����X���Y�����Z��
	WCS[2] = WCS[4] * WCS[9] - WCS[5] * WCS[8];
	WCS[6] = WCS[8] * WCS[1] - WCS[0] * WCS[9];
	WCS[10] = WCS[0] * WCS[5] - WCS[1] * WCS[4];
	WCS[12] = 0;
	WCS[13] = 0;
	WCS[14] = 0;
	WCS[15] = 1;

	MatrixXd Tw0(4, 4);
	Tw0.setIdentity();//��ʼ״̬��Ĭ�Ϲ�������ϵ��������ϵ�غ�
	MatrixXd Twm = trans_to_T(WCS)*Tw0;	

	string toolname = tool_path;
	int index = toolname.find_last_of('\\');
	toolname = toolname.substr(index + 1, toolname.length() - index - 5);
	char tt[100];
	string tool_config_path = ".\\YF\\DataResources\\toolConfig.ini";
	GetPrivateProfileString(toolname.c_str(), "tx", "", tt, sizeof(tt), tool_config_path.c_str());
	//�������û�����ù�����ϵ�����ȡ�û��趨�Ĳ�������ת��
	if (strcmp(tt, "") == 0) {
		
		//��ȡ��������ϵλ�ˣ������˻�е��λʱ������ڴ������ϵ��
		char tx[100];
		char ty[100];
		char tz[100];
		char ta[100];
		char tb[100];
		char tc[100];
		char td[100];

		GetPrivateProfileString("toolCsys", "tx", "", tx, sizeof(tx), ini_filename.c_str());
		GetPrivateProfileString("toolCsys", "ty", "", ty, sizeof(ty), ini_filename.c_str());
		GetPrivateProfileString("toolCsys", "tz", "", tz, sizeof(tz), ini_filename.c_str());
		GetPrivateProfileString("toolCsys", "ta", "", ta, sizeof(ta), ini_filename.c_str());
		GetPrivateProfileString("toolCsys", "tb", "", tb, sizeof(tb), ini_filename.c_str());
		GetPrivateProfileString("toolCsys", "tc", "", tc, sizeof(tc), ini_filename.c_str());
		GetPrivateProfileString("toolCsys", "td", "", td, sizeof(td), ini_filename.c_str());
		
		double txv, tyv, tzv, tav, tbv, tcv, tdv;
		txv = atof(tx);
		tyv = atof(ty);
		tzv = atof(tz);
		tav = atof(ta);
		tbv = atof(tb);
		tcv = atof(tc);
		tdv = atof(td);

		MatrixXd Tt0 = MatrixXd(4, 4);
		Tt0.setIdentity();

		Tt0.block(0, 0, 3, 3) = euler_to_T(tav*pi / 180, tbv*pi / 180, tcv*pi / 180);

		Tt0(0, 3) = txv;
		Tt0(1, 3) = tyv;
		Tt0(2, 3) = tzv;

		MatrixXd offset(4, 4);

		offset.setIdentity();
		offset(2, 3) = -tdv;
		Tt0 = Tt0*offset;	//��TCPƫ��
		
		MatrixXd Tte;//��������ڻ�����ĩ��
		//����վ��������ϵ�ļ���͹���վ����Ĵ���
		if (robot->robot_type == "ABB") {
			MatrixXd Tet = inv_T(Tt0)*Tr0*Ter;
			Tte = inv_T(Tet);
			station = Station(Tr0, Tte, Tw0, Twm, Ter, robot->robot_type);
		}
		else {
			MatrixXd Ttr = Tt0;
			Tte = inv_T(Ter)*Ttr;
			station = Station(Tr0, Tte, Tw0, Twm, Ter, robot->robot_type);
		}
		
		//���湤������ϵ����
		double euler[6];
		T_to_euler(Tte, euler);

		WritePrivateProfileString(toolname.c_str(), "tx", to_string(euler[3]).c_str(), tool_config_path.c_str());
		WritePrivateProfileString(toolname.c_str(), "ty", to_string(euler[4]).c_str(), tool_config_path.c_str());
		WritePrivateProfileString(toolname.c_str(), "tz", to_string(euler[5]).c_str(), tool_config_path.c_str());
		WritePrivateProfileString(toolname.c_str(), "ta", to_string(euler[0]).c_str(), tool_config_path.c_str());
		WritePrivateProfileString(toolname.c_str(), "tb", to_string(euler[1]).c_str(), tool_config_path.c_str());
		WritePrivateProfileString(toolname.c_str(), "tc", to_string(euler[2]).c_str(), tool_config_path.c_str());
		
	}
	//����ֱ�Ӷ�ȡ����Tte
	else {
		char tx[100];
		char ty[100];
		char tz[100];
		char ta[100];
		char tb[100];
		char tc[100];

		GetPrivateProfileString(toolname.c_str(), "tx", "", tx, sizeof(tx), tool_config_path.c_str());
		GetPrivateProfileString(toolname.c_str(), "ty", "", ty, sizeof(ty), tool_config_path.c_str());
		GetPrivateProfileString(toolname.c_str(), "tz", "", tz, sizeof(tz), tool_config_path.c_str());
		GetPrivateProfileString(toolname.c_str(), "ta", "", ta, sizeof(ta), tool_config_path.c_str());
		GetPrivateProfileString(toolname.c_str(), "tb", "", tb, sizeof(tb), tool_config_path.c_str());
		GetPrivateProfileString(toolname.c_str(), "tc", "", tc, sizeof(tc), tool_config_path.c_str());
		
		double txv, tyv, tzv, tav, tbv, tcv;
		txv = atof(tx);
		tyv = atof(ty);
		tzv = atof(tz);
		tav = atof(ta);
		tbv = atof(tb);
		tcv = atof(tc);

		MatrixXd Tte = MatrixXd(4, 4);
		Tte.setIdentity();

		Tte.block(0, 0, 3, 3) = euler_to_T(tav*pi / 180, tbv*pi / 180, tcv*pi / 180);

		Tte(0, 3) = txv;
		Tte(1, 3) = tyv;
		Tte(2, 3) = tzv;

		//����վ��������ϵ�ļ���͹���վ����Ĵ���
		if (robot->robot_type == "ABB") 
			station = Station(Tr0, Tte, Tw0, Twm, Ter, robot->robot_type);
		else station = Station(Tr0, Tte, Tw0, Twm, Ter, robot->robot_type);
	}

	
}

//���¹���վ����
void fangzhen::update_station() {
	//��ȡ�û����õĳ������
	station.tcp_d = double013->Value();//tcp����
	station.move_type = enum0->ValueAsString().GetText();//�������˶���ʽ
	station.tool_speed = double02->Value();//tcp�ٶ�
	station.acc = integer0->Value();//���ﾫ��
	station.start_distance = double028->Value();//��������������
	
	MatrixXd v(3,1);//�����˶������ٶ�
	v.setZero();
	string direction = enum01->ValueAsString().GetText();//�����˶�����
	double rail_v = double029->Value();//�����ٶ�
	
	//+X��-X���FANUC
	if (direction == "+X") //+X�����˶�
		v(0, 0) = rail_v;
	if (direction == "-X") { //-X�����˶�
		if (!reversed) {
			reverse(points.begin(), points.end()); //��ת�켣��˳��
			reversed = true;
		}
		v(0, 0) = -rail_v; //�ٶ�ȡ��
	}

	//+Y��-Y���ABB
	if (direction == "+Y")
		v(1, 0) = rail_v;
	if (direction == "-Y") {
		if (!reversed) {
			reverse(points.begin(), points.end());
			reversed = true;
		}
		v(1, 0) = -rail_v;
	}

	//����վ���õ����ٶ�ʸ��
	station.set_convery_v(v);

	//����TCP�������ƫ��
	MatrixXd offset(4, 4);
	offset.setIdentity();
	offset(2, 3) = station.tcp_d;
	station.Tte = station.INI_Tte*offset;	

	MatrixXd home = robot->FK(robot_ini_thetas); //������ĩ���ڻ���������ϵ��home��λ��(Ter)
	
	if (robot->robot_type == "ABB") {
		home = inv_T(station.Tw0)*station.Tr0*home*station.Tte; //��Home��λ��ת������������ϵ�£�Ttw��
		//��Home��λ��ƫ����������
		//+X -X�ǹ�������ϵ����
		if(direction=="+X")
			home(0, 3) -= station.start_distance;
		else
			home(0, 3) += station.start_distance;
	}
	if (robot->robot_type == "FANUC") {
		//+Y -Y�ǹ�������ϵ����
		if (direction == "+Y")
			home(1, 3) -= station.start_distance;
		else
			home(1, 3) += station.start_distance;
	}
	
	MatrixXd Tmw = inv_T(station.Twm);
	MatrixXd first = Tmw*points[0].T; //��һ���켣��λ��ת������������ϵ��
	
	double d = (home.block(0, 3, 3, 1) - first.block(0, 3, 3, 1)).norm();//��һ���켣�㵽Home�����
	//������Ϣ
	/*ofstream of("E:/Desktop/dt.txt");
	of << "Tw0:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			of << station.Tw0(i, j) <<" ";
		of << endl;
	}
	of << "Twm:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			of << station.Twm(i, j) << " ";
		of << endl;
	}
	of << "Tr0:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			of << station.Tr0(i, j) << " ";
		of << endl;
	}
	of << "Tt0:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			of << station.Tt0(i, j) << " ";
		of << endl;
	}
	of << "Tet:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			of << station.Tet(i, j) << " ";
		of << endl;
	}
	of << "home_er:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			of << home_er(i, j) << " ";
		of << endl;
	}
	of << "home:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			of << home(i, j) << " ";
		of << endl;
	}
	of << "first:" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			of << first(i, j) << " ";
		of << endl;
	}
	of << d << endl;
	of.close();*/

	double transition_time = d / 1000+0.1; //�������ʱ��
	station.set_transition_time(transition_time);//����վ���ù���ʱ��
	//save_station_data();
}

//Ϊ�켣��λ�ô���key
string fangzhen::create_key(POINT_p &point) {
	double x = point.X();
	double y = point.Y();
	double z = point.Z();
	return to_string(x) + "-" + to_string(y) + "-" + to_string(z);
}

string fangzhen::create_key(double x, double y, double z) {
	return to_string(x) + "-" + to_string(y) + "-" + to_string(z);
}

//�������ɵ�
//ref_point���ο���
//new_point�����ɵ�
//no����־λ

void fangzhen::create_trans_point(const POINT_p& ref_point, POINT_p& new_point, double no, double param_1[6],double param_2[6], double param_3_1[6], double param_3_2[6]
	, double param_4[6],double param_5[6], double param_negtive_1[6], double param_negtive_2[6], double param_negtive_3[6], double param_negtive_4[6], double param_101[6], double param_102[6], double param_103[6]
	,double param_104[6], double param_105[6], double param_202[6], double param_203[6], double param_204[6], double param_205[6], double param_302[6], double param_303[6]
, double param_304[6], double param_305[6], double param_402[6], double param_403[6], double param_404[6], double param_405[6], double param_502[6], double param_503[6]
, double param_504[6], double param_505[6], double param_602[6], double param_603[6], double param_604[6], double param_605[6], double param_702[6], double param_703[6]
, double param_704[6], double param_705[6]) {
	new_point.T = ref_point.T;
	MatrixXd pos_t(4, 4);
	pos_t.setIdentity();
	
	if (no == 1) {
		pos_t(0, 3) = param_1[0];
		pos_t(1, 3) = param_1[1];
		pos_t(2, 3) = param_1[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
		//��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_1[3] * pi / 180)*roty(param_1[4] * pi / 180)*rotz(param_1[5] * pi / 180);
	}
	
	else if (no == 2) {
		pos_t(0, 3) = param_2[0];
		pos_t(1, 3) = param_2[1];
		pos_t(2, 3) = param_2[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_2[3] * pi / 180)*roty(param_2[4] * pi / 180)*rotz(param_2[5] * pi / 180);

	}
	else if (no == 3.1) {
		pos_t(0, 3) = param_3_1[0];
		pos_t(1, 3) = param_3_1[1];
		pos_t(2, 3) = param_3_1[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_3_1[3] * pi / 180)*roty(param_3_1[4] * pi / 180)*rotz(param_3_1[5] * pi / 180);

	}
	else if (no == 3.2) {
		pos_t(0, 3) = param_3_2[0];
		pos_t(1, 3) = param_3_2[1];
		pos_t(2, 3) = param_3_2[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_3_2[3] * pi / 180)*roty(param_3_2[4] * pi / 180)*rotz(param_3_2[5] * pi / 180);

	}
	else if (no == 4) {
		pos_t(0, 3) = param_4[0];
		pos_t(1, 3) = param_4[1];
		pos_t(2, 3) = param_4[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_4[3] * pi / 180)*roty(param_4[4] * pi / 180)*rotz(param_4[5] * pi / 180);

	}
	else if (no == 5) {
		pos_t(0, 3) = param_5[0];
		pos_t(1, 3) = param_5[1];
		pos_t(2, 3) = param_5[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_5[3] * pi / 180)*roty(param_5[4] * pi / 180)*rotz(param_5[5] * pi / 180);

	}
	//else if (no == -1) {
	//	pos_t(0, 3) = param_negtive_1[0];
	//	pos_t(1, 3) = param_negtive_1[1];
	//	pos_t(2, 3) = param_negtive_1[2];

	//	new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
	//									 //��̬��ת���ҳˣ�
	//	new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_negtive_1[3] * pi / 180)*roty(param_negtive_1[4] * pi / 180)*rotz(param_negtive_1[5] * pi / 180);

	//}
	else if (no == -2) {
		pos_t(0, 3) = param_negtive_2[0];
		pos_t(1, 3) = param_negtive_2[1];
		pos_t(2, 3) = param_negtive_2[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_negtive_2[3] * pi / 180)*roty(param_negtive_2[4] * pi / 180)*rotz(param_negtive_2[5] * pi / 180);

	}
	else if (no == -3) {
		pos_t(0, 3) = param_negtive_3[0];
		pos_t(1, 3) = param_negtive_3[1];
		pos_t(2, 3) = param_negtive_3[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_negtive_3[3] * pi / 180)*roty(param_negtive_3[4] * pi / 180)*rotz(param_negtive_3[5] * pi / 180);

	}
	else if (no == -4) {
		pos_t(0, 3) = param_negtive_4[0];
		pos_t(1, 3) = param_negtive_4[1];
		pos_t(2, 3) = param_negtive_4[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_negtive_4[3] * pi / 180)*roty(param_negtive_4[4] * pi / 180)*rotz(param_negtive_4[5] * pi / 180);

	}
	else if (no == 302) {
		pos_t(0, 3) = param_302[0];
		pos_t(1, 3) = param_302[1];
		pos_t(2, 3) = param_302[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_302[3] * pi / 180)*roty(param_302[4] * pi / 180)*rotz(param_302[5] * pi / 180);

	}
	else if (no == 303) {
		pos_t(0, 3) = param_303[0];
		pos_t(1, 3) = param_303[1];
		pos_t(2, 3) = param_303[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_302[3] * pi / 180)*roty(param_302[4] * pi / 180)*rotz(param_302[5] * pi / 180);

	}
	else if (no == 304) {
		pos_t(0, 3) = param_304[0];
		pos_t(1, 3) = param_304[1];
		pos_t(2, 3) = param_304[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_304[3] * pi / 180)*roty(param_304[4] * pi / 180)*rotz(param_304[5] * pi / 180);

	}
	else if (no == 305) {
		pos_t(0, 3) = param_305[0];
		pos_t(1, 3) = param_305[1];
		pos_t(2, 3) = param_305[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_305[3] * pi / 180)*roty(param_305[4] * pi / 180)*rotz(param_305[5] * pi / 180);

	}
	else if (no == 101) {
		pos_t(0, 3) = param_101[0];
		pos_t(1, 3) = param_101[1];
		pos_t(2, 3) = param_101[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_101[3] * pi / 180)*roty(param_101[4] * pi / 180)*rotz(param_101[5] * pi / 180);

	}
	else if (no == 102) {
		pos_t(0, 3) = param_102[0];
		pos_t(1, 3) = param_102[1];
		pos_t(2, 3) = param_102[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_102[3] * pi / 180)*roty(param_102[4] * pi / 180)*rotz(param_102[5] * pi / 180);

	}
	else if (no == 103) {
		pos_t(0, 3) = param_103[0];
		pos_t(1, 3) = param_103[1];
		pos_t(2, 3) = param_103[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_103[3] * pi / 180)*roty(param_103[4] * pi / 180)*rotz(param_103[5] * pi / 180);

	}
	else if (no == 104) {
		pos_t(0, 3) = param_104[0];
		pos_t(1, 3) = param_104[1];
		pos_t(2, 3) = param_104[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_104[3] * pi / 180)*roty(param_104[4] * pi / 180)*rotz(param_104[5] * pi / 180);
	}
	else if (no == 105) {
		pos_t(0, 3) = param_105[0];
		pos_t(1, 3) = param_105[1];
		pos_t(2, 3) = param_105[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_105[3] * pi / 180)*roty(param_105[4] * pi / 180)*rotz(param_105[5] * pi / 180);
	}
	else if (no == 202) {
		pos_t(0, 3) = param_202[0];
		pos_t(1, 3) = param_202[1];
		pos_t(2, 3) = param_202[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_202[3] * pi / 180)*roty(param_202[4] * pi / 180)*rotz(param_202[5] * pi / 180);
	}
	else if (no == 203) {
		pos_t(0, 3) = param_203[0];
		pos_t(1, 3) = param_203[1];
		pos_t(2, 3) = param_203[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_203[3] * pi / 180)*roty(param_203[4] * pi / 180)*rotz(param_203[5] * pi / 180);
	}
	else if (no == 204) {
		pos_t(0, 3) = param_204[0];
		pos_t(1, 3) = param_204[1];
		pos_t(2, 3) = param_204[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_204[3] * pi / 180)*roty(param_204[4] * pi / 180)*rotz(param_204[5] * pi / 180);
	}
	else if (no == 205) {
		pos_t(0, 3) = param_205[0];
		pos_t(1, 3) = param_205[1];
		pos_t(2, 3) = param_205[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_205[3] * pi / 180)*roty(param_205[4] * pi / 180)*rotz(param_205[5] * pi / 180);
	}
	else if (no == 402) {
		pos_t(0, 3) = param_402[0];
		pos_t(1, 3) = param_402[1];
		pos_t(2, 3) = param_402[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_402[3] * pi / 180)*roty(param_402[4] * pi / 180)*rotz(param_402[5] * pi / 180);
	}
	else if (no == 403) {
		pos_t(0, 3) = param_403[0];
		pos_t(1, 3) = param_403[1];
		pos_t(2, 3) = param_403[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_403[3] * pi / 180)*roty(param_403[4] * pi / 180)*rotz(param_403[5] * pi / 180);
	}
	else if (no == 404) {
		pos_t(0, 3) = param_404[0];
		pos_t(1, 3) = param_404[1];
		pos_t(2, 3) = param_404[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_404[3] * pi / 180)*roty(param_404[4] * pi / 180)*rotz(param_404[5] * pi / 180);
	}
	else if (no == 405) {
		pos_t(0, 3) = param_405[0];
		pos_t(1, 3) = param_405[1];
		pos_t(2, 3) = param_405[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_405[3] * pi / 180)*roty(param_405[4] * pi / 180)*rotz(param_405[5] * pi / 180);
	}
	else if (no == 502) {
		pos_t(0, 3) = param_502[0];
		pos_t(1, 3) = param_502[1];
		pos_t(2, 3) = param_502[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_502[3] * pi / 180)*roty(param_502[4] * pi / 180)*rotz(param_502[5] * pi / 180);
	}
	else if (no == 503) {
		pos_t(0, 3) = param_503[0];
		pos_t(1, 3) = param_503[1];
		pos_t(2, 3) = param_503[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_503[3] * pi / 180)*roty(param_503[4] * pi / 180)*rotz(param_503[5] * pi / 180);
	}
	else if (no == 504) {
		pos_t(0, 3) = param_504[0];
		pos_t(1, 3) = param_504[1];
		pos_t(2, 3) = param_504[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_504[3] * pi / 180)*roty(param_504[4] * pi / 180)*rotz(param_504[5] * pi / 180);
	}
	else if (no == 505) {
		pos_t(0, 3) = param_505[0];
		pos_t(1, 3) = param_505[1];
		pos_t(2, 3) = param_505[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_505[3] * pi / 180)*roty(param_505[4] * pi / 180)*rotz(param_505[5] * pi / 180);
	}
	else if (no == 602) {
		pos_t(0, 3) = param_602[0];
		pos_t(1, 3) = param_602[1];
		pos_t(2, 3) = param_602[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_602[3] * pi / 180)*roty(param_602[4] * pi / 180)*rotz(param_602[5] * pi / 180);
	}
	else if (no == 603) {
		pos_t(0, 3) = param_603[0];
		pos_t(1, 3) = param_603[1];
		pos_t(2, 3) = param_603[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_603[3] * pi / 180)*roty(param_603[4] * pi / 180)*rotz(param_603[5] * pi / 180);
	}
	else if (no == 604) {
		pos_t(0, 3) = param_604[0];
		pos_t(1, 3) = param_604[1];
		pos_t(2, 3) = param_604[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_604[3] * pi / 180)*roty(param_604[4] * pi / 180)*rotz(param_604[5] * pi / 180);

	}
	else if (no == 605) {
		pos_t(0, 3) = param_605[0];
		pos_t(1, 3) = param_605[1];
		pos_t(2, 3) = param_605[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_605[3] * pi / 180)*roty(param_605[4] * pi / 180)*rotz(param_605[5] * pi / 180);
	}
	else if (no == 702) {
		pos_t(0, 3) = param_702[0];
		pos_t(1, 3) = param_702[1];
		pos_t(2, 3) = param_702[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_702[3] * pi / 180)*roty(param_702[4] * pi / 180)*rotz(param_702[5] * pi / 180);
	}
	else if (no == 703) {
		pos_t(0, 3) = param_703[0];
		pos_t(1, 3) = param_703[1];
		pos_t(2, 3) = param_703[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_703[3] * pi / 180)*roty(param_703[4] * pi / 180)*rotz(param_703[5] * pi / 180);
	}
	else if (no == 704) {
		pos_t(0, 3) = param_704[0];
		pos_t(1, 3) = param_704[1];
		pos_t(2, 3) = param_704[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_704[3] * pi / 180)*roty(param_704[4] * pi / 180)*rotz(param_704[5] * pi / 180);
	}
	else if (no == 705) {
		pos_t(0, 3) = param_705[0];
		pos_t(1, 3) = param_705[1];
		pos_t(2, 3) = param_705[2];

		new_point.T = pos_t*new_point.T; //λ��ƫ�ƣ���ˣ�
										 //��̬��ת���ҳˣ�
		new_point.T.block(0, 0, 3, 3) = new_point.T.block(0, 0, 3, 3)*rotx(param_705[3] * pi / 180)*roty(param_705[4] * pi / 180)*rotz(param_705[5] * pi / 180);
	}

	new_point.cal_matx(); 
	orth_normal(new_point.matx); //������
}

//��ug����ʾ����
void show1601(double num)
{
	char a[100];
	sprintf(a, "%.3f", num);
	uc1601(a, 1);
}
	

//��ȡ�켣��͵�������
void fangzhen::read_points(){
	double value;
	char value_[100];
	
	string dat_path = ".\\YF\\DataResources\\ProcessData\\" + get_curpro_path(".\\YF\\cur.txt") + "Region points\\OriginPoints.dat";
	//��ȡԭʼ�������ݣ�ֻ���õ�����ֵ
	ifstream file1(dat_path);
	origin_points.clear();
	tag_all_points.clear();
	tag_origin_points.clear();
	while (file1 >> value)
	{
		POINT_p pt = POINT_p();

		pt.T(0, 3) = value;
		file1 >> value;
		pt.T(1, 3) = value;
		file1 >> value;
		pt.T(2, 3) = value;
		file1 >> value;
		file1 >> value;
		file1 >> value;

		origin_points.push_back(pt);
		/*file1 >> value_;
		file1 >> value_;
		file1 >> value_;*/
	}
	file1.close();
	file1.clear();
	
	//��ȡ�켣������
	ifstream file2(".\\YF\\DataResources\\ProcessData\\" + get_curpro_path(".\\YF\\cur.txt") + "points_sparse_trans.txt");
	int count = 1;
	points.clear();
	tag_points.clear();
	while (file2 >> value)
	{
		//uc1601((char*)to_string(count).c_str(), 1);
		POINT_p pt = POINT_p();
		pt.index = count;		
		pt.T(0, 0) = value;
		file2 >> value;		
		pt.T(0, 1) = value;
		file2 >> value;		
		pt.T(0, 2) = value;
		file2 >> value;		
		pt.T(0, 3) = value;
		file2 >> value;		
		pt.T(1, 0) = value;
		file2 >> value;		
		pt.T(1, 1) = value;
		file2 >> value;		
		pt.T(1, 2) = value;
		file2 >> value;		
		pt.T(1, 3) = value;
		file2 >> value;		
		pt.T(2, 0) = value;
		file2 >> value;
		pt.T(2, 1) = value;
		file2 >> value;
		pt.T(2, 2) = value;
		file2 >> value;
		pt.T(2, 3) = value;
		
		//fangzhen fz;
		
		//�м����ӵ�
		//Դ���룺if (pt.T(0, 0) == pt.T(0, 1) && pt.T(0, 1) == pt.T(0, 2) && pt.T(0, 2) == pt.T(0, 3) && pt.T(0,0)!=1)
		if (pt.T(0, 0) == pt.T(0, 1) && pt.T(0, 1) == pt.T(0, 2) && pt.T(0, 2) == pt.T(0, 3) && pt.T(0, 0) != 1 && pt.T(0, 0) != -1 && pt.T(0, 0) != 101)
			create_trans_point(points[count - 2], pt, pt.T(0, 0), param_1, param_2, param_3_1, param_3_2, param_4, param_5,
				param_negtive_1,param_negtive_2, param_negtive_3,param_negtive_4, param_101, param_102, param_103, param_104, param_105, param_202,
				 param_203, param_204, param_205, param_302, param_303, param_304, param_305, param_402,
				param_403, param_404, param_405, param_502, param_503, param_504, param_505, param_602, param_603,
				param_604, param_605,param_702, param_703, param_704, param_705);
	
		points.push_back(pt);
		count++;
	}
	
	
	//1�����ӵ�
	if((points[0].T(0,1)==1 && points[0].T(0, 2)==1 && points[0].T(0, 3) == 1)|| (points[0].T(0, 1) == -1 && points[0].T(0, 2) == -1 && points[0].T(0, 3) == -1)|| (points[0].T(0, 1) == 101 && points[0].T(0, 2) == 101 && points[0].T(0, 3) == 101))
		create_trans_point(points[1], points[0], points[0].T(0, 0), param_1, param_2, param_3_1, param_3_2, param_4, param_5,
			param_negtive_1, param_negtive_2, param_negtive_3, param_negtive_4, param_101, param_102, param_103, param_104, param_105, param_202,
			param_203, param_204, param_205, param_302, param_303, param_304, param_305, param_402,
			param_403, param_404, param_405, param_502, param_503, param_504, param_505, param_602, param_603,
			param_604, param_605, param_702, param_703, param_704, param_705);

	file2.close();
	file2.clear();
}

//��ȡ�켣�����
void fangzhen::read_points_param() {
	try {
		//�������ļ�
		string point_txt_path = process_data_path + "points_param.txt";
		ifstream in1(point_txt_path);
		if (!in1) return;
		double value;
		string ts;
		int j = 0;
		while (in1 >> value)
		{
			points[j].sector1 = value; //����1
			in1 >> value;
			points[j].sector2 = value; //����2
			in1 >> value;
			points[j].atom = value; //��
			in1 >> value;
			points[j].voltage = value; //��ѹ
			in1 >> value;
			points[j].rot = value;//ת��
			in1 >> value;
			points[j].flow = value;//����
			in1 >> value;
			points[j].width = value;//������
			in1 >> value;
			points[j].effic = value;//ת��Ч��
			in1 >> value;
			points[j].content = value;//���庬��
			in1 >> ts;
			points[j].is_on = ts;//����ǹ

			++j;
		}
		in1.close();
		in1.clear();
	}
	catch (exception& ex)
	{

		//fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeError, ex.what());
	}
	
}

// �����켣��
// ��ȡ�ĵ����ڹ�������ϵ�µģ���Ҫ��� ��������ϵ�����ģ������ϵ�任���� Twm ת����ģ������ϵ
void fangzhen::create_points()
{
	UF_initialize();
	//ԭʼ����λ��ת����ģ������ϵ
	for (unsigned j = 0; j < origin_points.size(); j++)
	{
		MatrixXd P = origin_points[j].T.block(0, 3, 4, 1);
		P = station.Twm*P;

		//λ������
		//P(0, 0) -= 22;
		//P(1, 0) -= 32;
		//P(2, 0) -= 96;

		origin_points[j].T.block(0, 3, 4, 1) = P;
		origin_points[j].cal_matx();
		origin_points_map[create_key(origin_points[j])] = &origin_points[j];//����key��λ�ã�->value�������ã�
	}//���

	double point_coords[3]; //�����㺯��UF_CURVE_create_point��ʹ��

	for (int i = 0; i <points.size(); i++)
	{
		tag_t point_tag = NULL_TAG;

		//�켣��λ��ת����ģ������ϵ
		points[i].T= station.Twm*points[i].T;
		ini_pose.push_back(points[i].T);
		points[i].cal_matx();
		points_map[create_key(points[i])] = &points[i];
		
		//��ָ���㹤���޷��ƶ����ɿ��ǵ�λ������
		//UF_MTX4_ortho_normalize(points[i].matx);//������λ�� //���ã���ʹz�ᷴ�� ������Լ�ʵ�֣�

		//�����켣��
		point_coords[0] = points[i].X();
		point_coords[1] = points[i].Y();
		point_coords[2] = points[i].Z();		

		UF_CURVE_create_point(point_coords, &point_tag);//������
		UF_OBJ_set_color(point_tag, 186);//�趨��ɫ
		tag_points.push_back(point_tag);

		//�����켣����
		if (i > 0) {
			UF_CURVE_line_t line_coords;
			tag_t line_tag;
			//�������
			line_coords.start_point[0] = points[i - 1].X();
			line_coords.start_point[1] = points[i - 1].Y();
			line_coords.start_point[2] = points[i - 1].Z();
			//�յ�����
			line_coords.end_point[0] = points[i].X();
			line_coords.end_point[1] = points[i].Y();
			line_coords.end_point[2] = points[i].Z();
			//����ֱ��
			UF_CURVE_create_line(&line_coords, &line_tag);
			UF_OBJ_set_color(line_tag, 150);//������ɫ
			tag_line.push_back(line_tag);
		}
	}
	
	//����Home��
	/*double home_thetas[6] = {26.4,41.7,50.2,51.4,-55,-115};
	for (int i = 0; i < 6; ++i)
		home_thetas[i] = home_thetas[i] * pi / 180;
	robot->c_to_p(home_thetas);
	MatrixXd Ter = robot->FK(home_thetas);
	MatrixXd Ttm = inv_T(station.Tmr)*Ter*inv_T(station.Tet);
	POINT_p Home_p = POINT_p();
	Home_p.T = Ttm;
	Home_p.cal_matx();

	tag_t point_tag1 = NULL_TAG;
	point_coords[0] = Home_p.X();
	point_coords[1] = Home_p.Y();
	point_coords[2] = Home_p.Z();

	UF_CURVE_create_point(point_coords, &point_tag1);
	UF_OBJ_set_color(point_tag1, 186);*/
	
	//����һ�����ӵ�
	/*POINT_p Home_p1 = POINT_p();
	Home_p1.T =station.Tmw*Ttm;
	Home_p1.cal_matx();
	POINT_p first_p1 = POINT_p();

	create_trans_point(Home_p1, first_p1,1);
	first_p1.cal_matx();
	
	POINT_p first_p = POINT_p();
	first_p.T = inv_T(station.Tmw)*first_p1.T;
	first_p.cal_matx();

	tag_t point_tag2 = NULL_TAG;
	point_coords[0] = first_p.X();
	point_coords[1] = first_p.Y();
	point_coords[2] = first_p.Z();

	UF_CURVE_create_point(point_coords, &point_tag2);
	UF_OBJ_set_color(point_tag2, 186);*/

	//��������1
	/*UF_CURVE_line_t line_coords1;
	tag_t line_tag1;
	line_coords1.start_point[0] = Home_p.X();
	line_coords1.start_point[1] = Home_p.Y();
	line_coords1.start_point[2] = Home_p.Z();
	line_coords1.end_point[0] = first_p.X();
	line_coords1.end_point[1] = first_p.Y();
	line_coords1.end_point[2] = first_p.Z();
	UF_CURVE_create_line(&line_coords1, &line_tag1);
	UF_OBJ_set_color(line_tag1, 101);
	//��������2
	UF_CURVE_line_t line_coords2;
	tag_t line_tag2;
	line_coords2.start_point[0] = first_p.X();
	line_coords2.start_point[1] = first_p.Y();
	line_coords2.start_point[2] = first_p.Z();
	line_coords2.end_point[0] = points[0].X();
	line_coords2.end_point[1] = points[0].Y();
	line_coords2.end_point[2] = points[0].Z();
	UF_CURVE_create_line(&line_coords2, &line_tag2);
	UF_OBJ_set_color(line_tag2, 101);*/

	UF_terminate();
}

//�������������
void fangzhen::modify_ortho_normalize(double *matx, double *z_dir) {
	//�ж�z���Ƿ���
	double s = 0;
	for (int i = 0; i < 3; i++)
		s += matx[i * 4 + 2] * z_dir[i];
	//�����򣬷�תy���z��
	if (s < 0) {
		for (int i = 0; i < 3; i++) {
			matx[i * 4 + 1] = -matx[i * 4 + 1];
			matx[i * 4 + 2] = -matx[i * 4 + 2];
		}			
	}
}

//����dense_point_match,point_match
void fangzhen::create_dense_point_match() {
	int j = 0;
	double d1, d2; //d1:�ù켣������һ�����һ�룬d2:�ù켣������һ�����һ��
	double d;
	double min_d;
	dense_point_match.clear();
	point_match.clear();
	for (int i = 0; i < points.size(); ++i) {
		
		if (i == 0) {
			d1 = 0;
			d2 = points[i].distance(points[i + 1])/2;
		}
		else if (i == points.size() - 1) {
			d1 = points[i].distance(points[i-1])/2;
			d2 = 0;
		}
		else {
			d1 = points[i].distance(points[i - 1])/2;
			d2 = points[i].distance(points[i + 1])/2;
		}
		
		min_d = pow(10, 10);

		while (j < dense_points.size()) {
			d = dense_points[j].distance(points[i]);
			if (d <= d1 || d <= d2) {
				dense_point_match[j] = i;
				if (d < min_d) {
					point_match[i] = j;
					min_d = d;
				}
			}
			else break;			
			++j;
		}
	}	
	
	for (int i = 1; i < points.size(); ++i) {
		if (point_match[i] == 0)	//©ƥ��
			point_match[i] = point_match[i - 1]; //����һ��ƥ����Ϊ׼
	}

	/*ofstream of("E:/Desktop/UG����/point_match.txt");
	for (int i = 0; i < points.size(); ++i) {
		of << i << " " << point_match[i] << endl;
	}
	of.close();

	ofstream of1("E:/Desktop/UG����/dense_point_match.txt");
	for (int i = 0; i < dense_points.size(); ++i) {
		of1 << i << " " << dense_point_match[i] << endl;
	}
	of1.close();*/
}

//����λ����λ���
bool fangzhen::check_pose() {
	//������
	uc1601("���ڼ���...", 0);

	int index = cal_points_v(false);
	int last_k=-1;
	vector<NXOpen::NXString> list_info;
	limit_index.clear();
	limit_dense_index.clear();

	for (int i = 0; i < check_pose_result.size(); ++i) {
		if (!check_pose_result[i].empty()) {
			int k = dense_point_match[i];
			if (k == last_k) continue;
			limit_index.push_back(k);
			limit_dense_index.push_back(i);
			string info = to_string(k + 1) + ": ";
			if (check_pose_result[i][0] == -1) {
				info += "���ɴ�";
			}
			else {
				for (int j = 0; j < check_pose_result[i].size(); ++j)
					info += to_string(check_pose_result[i][j]) + " ";
				info += "����λ";
			}
			
			list_info.push_back(info);
			last_k = k;
		}
	}

	list_box0->SetListItems(list_info);
	tabPage2->Focus();
	uc1601("������", 0);
	return true;
	
	//����λ���
	if (index != -1) {
		int k = dense_point_match[index];
		import_tool(dense_points[index]);
		
		UF_initialize();
		char* title_string = "��ʾ";
		char* choice[2] = { "�˴����ɴ�","��ͽ�ѡ��һ���켣�������̬" };
		int num_messages = 2;
		UF_UI_message_buttons_t buttons;
		buttons.button1 = true;
		buttons.button2 = true;
		buttons.button3 = false;
		buttons.label1 = "prev";
		buttons.label2 = "next";
		buttons.response1 = 1;
		buttons.response2 = 2;
		int response;
		UF_UI_message_dialog(title_string, UF_UI_MESSAGE_WARNING, choice, num_messages, false, &buttons, &response);
		UF_terminate();

		tabPage2->Focus();
		if (response == 1) {
			if (k == 0) cur_point = &points[k];
			else if (k == points.size() - 1) cur_point = &points[k - 1];
			else {
				if (dense_points[index].is_between(points[k - 1], points[k]))
					cur_point = &points[k - 1];
				else cur_point = &points[k];
			}
		}
		if (response == 2) {
			if (k == 0) cur_point = &points[k+1];
			else if (k == points.size() - 1) cur_point = &points[k];
			else {
				if (dense_points[index].is_between(points[k - 1], points[k]))
					cur_point = &points[k];
				else cur_point = &points[k+1];
			}
		}
		
		import_tool(*cur_point);
		point_no->SetValue(cur_point->index);
		//return false;
	}
	uc1601("��������", 0);
	
	//�����λ
	/*limit_res = robot->check_limit(joint_data);
	
	list_box0->SetListItems(list_info);
	limit_index.clear();
	last_k = -1;
	for (int i = 0; i < limit_res.size(); ++i) {
		if (!limit_res[i].empty()) {
			int k = dense_point_match[i];
			if (k == last_k) continue;
			limit_index.push_back(k);
			string info = to_string(k + 1) + ": " ;
			for (int j = 0; j < limit_res[i].size(); ++j)
				info += to_string(limit_res[i][j]) + " ";
			info += "����λ";
			list_info.push_back(info);
			last_k = k;
		}
	}
	list_box0->SetListItems(list_info);*/
	
	//if (index != -1) {
	//	int joint_no = robot->is_limit(joint_data[index]) + 1;
	//	int k = dense_point_match[index];
	//	//��ʾ�Ƕ�ֵ
	//	if (!joint_data.empty()) {
	//		//int index = match_dense_ponit(*cur_point);
	//		string info = "";
	//		for (int i = 0; i < 6; i++) {
	//			string s = to_string(int(joint_data[index][i] * 100) / 100.0);
	//			s = s.substr(0, s.length() - 4);
	//			info += "J" + to_string(i + 1) + ":" + s + "  ";
	//		}
	//		uc1601((char*)(info).c_str(), 0);

	//		doubleJ1->SetValue(joint_data[index][0]);
	//		doubleJ2->SetValue(joint_data[index][1]);
	//		doubleJ3->SetValue(joint_data[index][2]);
	//		doubleJ4->SetValue(joint_data[index][3]);
	//		doubleJ5->SetValue(joint_data[index][4]);
	//		doubleJ6->SetValue(joint_data[index][5]);
	//	}
	//	import_tool(dense_points[index]);
	//	string info = to_string(joint_no) + "����λ";
	//	fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeError, (char*)info.c_str());
	//	tabPage2->Focus();
	//	cur_point = &points[k];
	//	import_tool(*cur_point);
	//	return false;
	//}

	uc1601("��λ������", 0);
	return true;
}

//�����ܼ���
void fangzhen::create_dense_points() {
	if (!dense_points.empty()) dense_points.clear();
	double r = station.acc;
	vector<MatrixXd> data;
	MatrixXd Tmw = inv_T(station.Twm);
	for (int i = 0; i < points.size(); i++) {	
		data.push_back(Tmw*points[i].T); //�켣��λ��ת������������ϵ��
	}
	//uc1601((char*)to_string(r).c_str(), 1);
	vector<MatrixXd> dt = interpolation_r(data,r);
	//save_interp_data(dt);
	dt = sampling_d(dt,30);	//3cm�������
	
	for (unsigned i = 0; i < dt.size(); i++) {
		POINT_p pt = POINT_p();
		pt.T = station.Twm*dt[i];  //�ܼ���λ��ת����ģ������ϵ��
		pt.cal_matx();
		double z_dir[3] = {pt.matx[2],pt.matx[6],pt.matx[10] };
		//UF_MTX4_ortho_normalize(pt.matx);//������λ��	(���ܿ���)
		orth_normal(pt.matx);
		modify_ortho_normalize(pt.matx, z_dir);//��������
		dense_points.push_back(pt);
	}
	
	create_dense_point_match();
	
}

//��ʾ�ܼ���켣
void fangzhen::dense_points_line_visible() {
	UF_initialize();
	if (!tag_line_dense_points.empty()) {
		for(int i=0;i<tag_line_dense_points.size();++i)
			UF_OBJ_set_blank_status(tag_line_dense_points[i], UF_OBJ_NOT_BLANKED);
		return;
	}
	for (int i = 1; i < dense_points.size(); ++i) {
		UF_CURVE_line_t line_coords;
		tag_t line_tag;
		line_coords.start_point[0] = dense_points[i - 1].X();
		line_coords.start_point[1] = dense_points[i - 1].Y();
		line_coords.start_point[2] = dense_points[i - 1].Z();
		line_coords.end_point[0] = dense_points[i].X();
		line_coords.end_point[1] = dense_points[i].Y();
		line_coords.end_point[2] = dense_points[i].Z();
		UF_CURVE_create_line(&line_coords, &line_tag);
		UF_OBJ_set_color(line_tag, 211);
		tag_line_dense_points.push_back(line_tag);
	}
	UF_terminate();
}

//�����ܼ���켣
void fangzhen::hide_dense_points_line() {
	UF_initialize();
	if (tag_line_dense_points.empty()) return;
	for (int i = 0; i < tag_line_dense_points.size(); ++i) {
		UF_OBJ_set_blank_status(tag_line_dense_points[i], UF_OBJ_BLANKED);
	}
	UF_terminate();
}

void fangzhen::save_interp_data(vector<MatrixXd> dt) {
	ofstream of("D:\\dt.txt");
	for (unsigned i = 0; i < dt.size(); i++) {
		of << dt[i](0, 3) << " " << dt[i](1, 3) << " " << dt[i](2, 3) << endl;
	}
	of.close();
}

//�����ܼ��㹤�ղ���
void fangzhen::set_dense_points_param() {
	//����������Ч��
	vector<POINT_p> effect_points;
	for (unsigned i = 0; i < points.size()-1; i++) {
		if (points[i].is_node) {
			POINT_p point(points[i]);
			POINT_p &next_point = points[i + 1];
			point.T(0, 3) = (next_point.X() - points[i].X())*double(points[i].set_param) / 100 + points[i].X();
			point.T(1, 3) = (next_point.Y() - points[i].Y())*double(points[i].set_param) / 100 + points[i].Y();
			point.T(2, 3) = (next_point.Z() - points[i].Z())*double(points[i].set_param) / 100 + points[i].Z();
			effect_points.push_back(point);
		}
	}
	
	//Ϊÿ���ܼ����ҵ��䡮���������ղ����ĵ㣬Ȼ�󸳲���
	unsigned long index = 0;
	unsigned long k=0;
	while (k < dense_points.size()) {
		if (index == effect_points.size() - 1) break;
		if (dense_points[k].is_between(effect_points[index], effect_points[index + 1])) {
			dense_points[k].sector1 = effect_points[index].sector1;
			dense_points[k].sector2 = effect_points[index].sector2;
			dense_points[k].atom = effect_points[index].atom;
			dense_points[k].voltage = effect_points[index].voltage;
			dense_points[k].flow = effect_points[index].flow;
			dense_points[k].width = effect_points[index].width;
			dense_points[k].effic = effect_points[index].effic;
			dense_points[k].content = effect_points[index].content;
			dense_points[k].is_on = effect_points[index].is_on;
			k++;
		}
		else {
			index++;
		}
	}
	
	//���һ����Ч�����ܼ���
	while (k < dense_points.size()) {
		dense_points[k].sector1 = effect_points[index].sector1;
		dense_points[k].sector2 = effect_points[index].sector2;
		dense_points[k].atom = effect_points[index].atom;
		dense_points[k].voltage = effect_points[index].voltage;
		dense_points[k].flow = effect_points[index].flow;
		dense_points[k].width = effect_points[index].width;
		dense_points[k].effic = effect_points[index].effic;
		dense_points[k].content = effect_points[index].content;
		dense_points[k].is_on = effect_points[index].is_on;
		k++;
	}
}

//��Ե�ǰ������Ĥ��ֲ��Ƽ�����ֵ������ʾ
void fangzhen::update_mohou() {
	//����Ĥ��ֲ��Ƽ�����ֵ������ʾ
	double th = (cur_point->flow*cur_point->effic*cur_point->content * 1000) / (station.tool_speed * 60 * cur_point->width);//ƽ��Ĥ��1
																													  //��ǹĤ��ֲ�
	if (strcmp(tool_type, "GUN") == 0) {
		double k = 0.84*cur_point->width * 100 - 22.2;
		vector<double> v;
		for (int i = 0; i<5; i++) {
			cur_point->distri[i] = (th - k*cur_point->width * 100 / 4 + k*(2 * i + 1) / 20 * cur_point->width * 100);//�����ȼ���
			if (cur_point->distri[i] < 0) cur_point->distri[i] = 0;
			v.push_back(cur_point->distri[i]);
		}
		doubleTable0->SetValues(1, 5, v);
	}
	//����Ĥ��ֲ�
	if (strcmp(tool_type, "BELL") == 0) {
		double max = 0.0034*cur_point->width * 100 + 1.0063;
		double min = -0.003*cur_point->width * 100 + 0.9621;
		cur_point->distri[0] = min*th;
		cur_point->distri[1] = th;
		cur_point->distri[2] = max*th;
		cur_point->distri[3] = th;
		cur_point->distri[4] = min*th;
		vector<double> v;
		for (int i = 0; i < 5; i++) {
			v.push_back(cur_point->distri[i]);
		}
		doubleTable0->SetValues(1, 5, v);
	}
}

//ԭʼ���Ʒ��飬����Ĥ�����
void fangzhen::group_bell() {
	double x_distance = 0;//x�������
	double y_distance = 0;//y�������

	MatrixXd X;	//i->i+1��������
	MatrixXd X1;//i->i-1��������
	MatrixXd P;	//��ǰ(�ܼ�)���ԭʼ����������

	double gap;		//��ǰ(�ܼ�)�����һ����ľ���
	double gap1;	//��ǰ(�ܼ�)�����һ����ľ���
	double theta;	//P��X�н�����(������������)
	double theta1;  //P��X1�н�����(������������)

	bool is_node;//�Ƿ�Ϊ���е�
	bool is_cover;//�Ƿ�����һ��ķ���
	MatrixXd P1; //�������� i-1->i
	MatrixXd P2;//�������� i-2->i-1
	double angle;//P1 P2�н�����ֵ

	bool last_is_node = false;//��һ�����Ƿ�Ϊ���е�
	double N = dense_points.size();

	//����ϴμ����Ĥ��
	for (unsigned j = 0; j < origin_points.size(); j++) {
		origin_points[j].thick = 0;
		origin_points[j].is_cover = false;
	}

	for (int i = 0; i < dense_points.size(); i++) {
		vector<POINT_p*> pg; //���������
		vector<tag_t> tt;	//�����tag����
		group_points.push_back(pg);
		tag_group_point.push_back(tt);
		is_node = false;
		if (dense_points[i].is_on == "OFF") continue; //�õ�Ϊ��ǹ״̬������Ҫ����Ĥ��
		//��һ����
		if (i == 0) {
			X = dense_points[i + 1].P() - dense_points[i].P();
			gap = X.norm();
			width_distance = dense_points[i].width * 1000;			
		}
		//���һ����
		else if (i == dense_points.size() - 1) {
			X1 = dense_points[i - 1].P() - dense_points[i].P();
			gap1 = X1.norm();
			width_distance = dense_points[i].width * 1000;

			P1 = dense_points[i].P() - dense_points[i - 1].P();
			P2 = dense_points[i - 1].P() - dense_points[i - 2].P();
			angle = (P1.transpose()*P2)(0, 0) / (P1.norm()*P2.norm());
			if (angle < (sqrt(2) / 2) && !last_is_node) {
				is_node = true;//�нǴ���45�Ȳ�����һ���㲻�ǻ��е㣬����Ϊ�ǻ��е�
				last_is_node = true;
			}
		}
		//�м��
		else {
			X = dense_points[i + 1].P() - dense_points[i].P();
			X1 = dense_points[i - 1].P() - dense_points[i].P();
			gap = (dense_points[i + 1].P() - dense_points[i].P()).norm();
			gap1 = (dense_points[i - 1].P() - dense_points[i].P()).norm();
			width_distance = dense_points[i].width * 1000;
			if (i >= 2) {
				P1 = dense_points[i].P() - dense_points[i - 1].P();
				P2 = dense_points[i - 1].P() - dense_points[i - 2].P();
				angle = (P1.transpose()*P2)(0, 0) / (P1.norm()*P2.norm());
				if (angle < (sqrt(2) / 2) && !last_is_node) {
					is_node = true;//�нǴ���45�Ȳ�����һ���㲻�ǻ��е㣬����Ϊ�ǻ��е�
					last_is_node = true;
				}
			}
		}

		for (unsigned j = 0; j<origin_points.size(); j++)
		{
			is_cover = false;

			P = origin_points[j].P() - dense_points[i].P();

			//��һ����
			if (i == 0) {
				x_distance = (X.transpose()*P)(0, 0) / X.norm();
				y_distance = sqrt(pow(P.norm(), 2) - x_distance*x_distance);

				if (abs(x_distance) <= (gap / 2) && abs(y_distance) <= (width_distance / 2))
				{
					origin_points[j].is_cover = true;
					group_points[i].push_back(&origin_points[j]);
					//������y�������ȡĤ��ֵ
					double dr = y_distance * 2 / width_distance;
					if (dr <= 0.2) origin_points[j].thick += dense_points[i].distri[0];
					if (dr > 0.2&& dr <= 0.4) origin_points[j].thick += dense_points[i].distri[1];
					if (dr > 0.4&& dr <= 0.6) origin_points[j].thick += dense_points[i].distri[2];
					if (dr > 0.6&& dr <= 0.8) origin_points[j].thick += dense_points[i].distri[3];
					if (dr > 0.8&& dr <= 1) origin_points[j].thick += dense_points[i].distri[4];
				}
			}
			//���һ����
			else if (i == dense_points.size() - 1) {
				for (int k = 0; k < group_points[i - 1].size(); k++) {
					if (origin_points[j].X() == group_points[i - 1][k]->X() && origin_points[j].Y() == group_points[i - 1][k]->Y() && origin_points[j].Z() == group_points[i - 1][k]->Z()) {
						is_cover = true;
						break;
					}
				}
				if (is_cover && !is_node) continue;//�����ԭʼ���Ѿ�����һ���ܼ���ķ����������ܼ��㲻�ǻ��е㣬����������

				x_distance = (X1.transpose()*P)(0, 0) / X1.norm();
				y_distance = sqrt(pow(P.norm(), 2) - x_distance*x_distance);

				if (abs(x_distance) <= (gap1 / 2) && abs(y_distance) <= (width_distance / 2))
				{
					origin_points[j].is_cover = true;
					group_points[i].push_back(&origin_points[j]);
					//�����Ĥ�����
					double dr = y_distance * 2 / width_distance;
					if (dr <= 0.2) origin_points[j].thick += dense_points[i].distri[0];
					if (dr > 0.2&& dr <= 0.4) origin_points[j].thick += dense_points[i].distri[1];
					if (dr > 0.4&& dr <= 0.6) origin_points[j].thick += dense_points[i].distri[2];
					if (dr > 0.6&& dr <= 0.8) origin_points[j].thick += dense_points[i].distri[3];
					if (dr > 0.8&& dr <= 1) origin_points[j].thick += dense_points[i].distri[4];
				}

			}
			//�м��
			else {
				for (int k = 0; k < group_points[i - 1].size(); k++) {
					if (origin_points[j].X() == group_points[i - 1][k]->X() && origin_points[j].Y() == group_points[i - 1][k]->Y() && origin_points[j].Z() == group_points[i - 1][k]->Z()) {
						is_cover = true;
						break;
					}
				}
				if (is_cover && !is_node) continue;//�����ԭʼ���Ѿ�����һ���ܼ���ķ����������ܼ��㲻�ǻ��е㣬����������

				theta = (P.transpose()*X)(0, 0);
				theta1 = (P.transpose()*X1)(0, 0);

				if (theta >= 0 && theta1 <= 0) {
					x_distance = theta / X.norm();
					y_distance = sqrt(pow(P.norm(), 2) - x_distance*x_distance);
					if (x_distance <= (gap / 2) && abs(y_distance) <= (width_distance / 2))
					{

						origin_points[j].is_cover = true;
						group_points[i].push_back(&origin_points[j]);
						//�����Ĥ�����
						double dr = y_distance * 2 / width_distance;
						if (dr <= 0.2) origin_points[j].thick += dense_points[i].distri[0];
						if (dr > 0.2&& dr <= 0.4) origin_points[j].thick += dense_points[i].distri[1];
						if (dr > 0.4&& dr <= 0.6) origin_points[j].thick += dense_points[i].distri[2];
						if (dr > 0.6&& dr <= 0.8) origin_points[j].thick += dense_points[i].distri[3];
						if (dr > 0.8&& dr <= 1) origin_points[j].thick += dense_points[i].distri[4];
					}
				}

				else if (theta < 0 && theta1 > 0) {
					x_distance = theta1 / X1.norm();
					y_distance = sqrt(pow(P.norm(), 2) - x_distance*x_distance);
					if (x_distance <= (gap1 / 2) && abs(y_distance) <= (width_distance / 2))
					{

						origin_points[j].is_cover = true;
						group_points[i].push_back(&origin_points[j]);
						//�����Ĥ�����
						double dr = y_distance * 2 / width_distance;
						if (dr <= 0.2) origin_points[j].thick += dense_points[i].distri[0];
						if (dr > 0.2&& dr <= 0.4) origin_points[j].thick += dense_points[i].distri[1];
						if (dr > 0.4&& dr <= 0.6) origin_points[j].thick += dense_points[i].distri[2];
						if (dr > 0.6&& dr <= 0.8) origin_points[j].thick += dense_points[i].distri[3];
						if (dr > 0.8&& dr <= 1) origin_points[j].thick += dense_points[i].distri[4];
					}
				}
				else {
					if (theta >= theta1) {
						x_distance = theta / X.norm();
						x_distance = abs(x_distance);
						y_distance = sqrt(pow(P.norm(), 2) - x_distance*x_distance);
						if (x_distance <= (gap / 2) && abs(y_distance) <= (width_distance / 2))
						{

							origin_points[j].is_cover = true;
							group_points[i].push_back(&origin_points[j]);
							//�����Ĥ�����
							double dr = y_distance * 2 / width_distance;
							if (dr <= 0.2) origin_points[j].thick += dense_points[i].distri[0];
							if (dr > 0.2&& dr <= 0.4) origin_points[j].thick += dense_points[i].distri[1];
							if (dr > 0.4&& dr <= 0.6) origin_points[j].thick += dense_points[i].distri[2];
							if (dr > 0.6&& dr <= 0.8) origin_points[j].thick += dense_points[i].distri[3];
							if (dr > 0.8&& dr <= 1) origin_points[j].thick += dense_points[i].distri[4];
						}
					}
					else {
						x_distance = theta / X1.norm();
						x_distance = abs(x_distance);
						y_distance = sqrt(pow(P.norm(), 2) - x_distance*x_distance);
						if (abs(x_distance) <= (gap1 / 2) && abs(y_distance) <= (width_distance / 2))
						{
							origin_points[j].is_cover = true;
							group_points[i].push_back(&origin_points[j]);
							//�����Ĥ�����
							double dr = y_distance * 2 / width_distance;
							if (dr <= 0.2) origin_points[j].thick += dense_points[i].distri[0];
							if (dr > 0.2&& dr <= 0.4) origin_points[j].thick += dense_points[i].distri[1];
							if (dr > 0.4&& dr <= 0.6) origin_points[j].thick += dense_points[i].distri[2];
							if (dr > 0.6&& dr <= 0.8) origin_points[j].thick += dense_points[i].distri[3];
							if (dr > 0.8&& dr <= 1) origin_points[j].thick += dense_points[i].distri[4];
						}
					}
				}
			}
		}

		int process = int((i + 1)*100.0 / N);
		string info = "���ڽ���Ĥ�����..." + to_string(process) + "%";

		uc1601((char*)info.c_str(), 0);
	}
}

//ԭʼ���Ʒ��飬��ǹĤ�����
void fangzhen::group_gun() {
	double x_distance = 0;//x�������
	double y_distance = 0;//y�������

	MatrixXd X;	//i->i+1��������
	MatrixXd X1; //i->i-1��������
	MatrixXd P;	//��ǰ(�ܼ�)���ԭʼ����������

	double gap;		//��ǰ(�ܼ�)�����һ����ľ���
	double gap1;	//��ǰ(�ܼ�)�����һ����ľ���
	double theta;	//P��X�н�����(������������)
	double theta1;  //P��X1�н�����(������������)
	double jj;		//X��TCP X��н�����

	bool is_node;//�Ƿ�Ϊ���е�
	bool is_cover;//�Ƿ�����һ��ķ���
	MatrixXd P1; //���� i-1->i
	MatrixXd P2;//���� i-2->i-1
	double angle;//P1 P2�н�����ֵ
	double k;//Ĥ��ֲ�б��
	double th;//ƽ��Ĥ��

	bool last_is_node = false;//��һ�����Ƿ�Ϊ���е�

	//����ϴμ����Ĥ��
	for (unsigned j = 0; j < origin_points.size(); j++) {
		origin_points[j].thick = 0;
		origin_points[j].is_cover = false;
	}
	
	int N = dense_points.size();

	for (int i = 0; i < dense_points.size(); i++) {
		vector<POINT_p*> pg;
		vector<tag_t> tt;
		group_points.push_back(pg);
		tag_group_point.push_back(tt);
		if (dense_points[i].is_on == "OFF") continue;
		k = 0.84* dense_points[i].width * 100 - 22.2;
		th = (dense_points[i].flow*dense_points[i].effic*dense_points[i].content * 1000) / (dense_points[i].v * 60 * dense_points[i].width);
		is_node = false;

		//��һ����
		if (i == 0) {
			X = dense_points[i + 1].P() - dense_points[i].P();
			gap = X.norm();
			width_distance = dense_points[i].width * 1000;
		}
		//���һ����
		else if (i == dense_points.size() - 1) {
			X1 = dense_points[i - 1].P() - dense_points[i].P();

			gap1 = X1.norm();
			width_distance = dense_points[i].width * 1000;

			P1 = dense_points[i].P() - dense_points[i - 1].P();
			P2 = dense_points[i - 1].P() - dense_points[i - 2].P();

			angle = (P1.transpose()*P2)(0, 0) / (P1.norm()*P2.norm());
			if (angle < (sqrt(2) / 2) && !last_is_node) {
				is_node = true;//�нǴ���45�Ȳ�����һ���㲻�ǻ��е㣬����Ϊ�ǻ��е�
				last_is_node = true;
			}
		}
		//�м��
		else {
			X = dense_points[i + 1].P() - dense_points[i].P();
			X1 = dense_points[i - 1].P() - dense_points[i].P();

			gap = X.norm();
			gap1 = X1.norm();
			width_distance = dense_points[i].width * 1000;
			if (i >= 2) {
				P1 = dense_points[i].P() - dense_points[i - 1].P();
				P2 = dense_points[i - 1].P() - dense_points[i - 2].P();
				angle = (P1.transpose()*P2)(0, 0) / (P1.norm()*P2.norm());
				if (angle < (sqrt(2) / 2) && !last_is_node) {
					is_node = true;//�нǴ���45�Ȳ�����һ���㲻�ǻ��е㣬����Ϊ�ǻ��е�
					last_is_node = true;
				}
			}
		}

		for (unsigned j = 0; j<origin_points.size(); j++)
		{
			is_cover = false;
			P = origin_points[j].P() - dense_points[i].P();
			//��һ����
			if (i == 0) {
				x_distance = (X.transpose()*P)(0, 0) / X.norm();
				y_distance = sqrt(pow(P.norm(), 2) - x_distance*x_distance);
				jj = (X.transpose()*dense_points[i].T.block(0, 0, 3, 1))(0, 0) / gap;
				jj = sqrt(1 - jj * jj);
				y_distance = y_distance / jj;

				if (abs(x_distance) <= (gap / 2) && abs(y_distance) <= (width_distance / 2))
				{
					origin_points[j].is_cover = true;
					group_points[i].push_back(&origin_points[j]);
					//�����Ĥ�����
					origin_points[j].thick += max(th - k*dense_points[i].width * 100 / 4 + k*y_distance / 10, 0);
				}
			}
			//���һ����
			else if (i == dense_points.size() - 1) {
				for (int k = 0; k < group_points[i - 1].size(); k++) {
					if (origin_points[j].X() == group_points[i - 1][k]->X() && origin_points[j].Y() == group_points[i - 1][k]->Y() && origin_points[j].Z() == group_points[i - 1][k]->Z()) {
						is_cover = true;
						break;
					}
				}
				if (is_cover && !is_node) continue;//�����ԭʼ���Ѿ�����һ���ܼ���ķ����������ܼ��㲻�ǻ��е㣬����������
				x_distance = (X1.transpose()*P)(0, 0) / X1.norm();
				y_distance = sqrt(pow(P.norm(), 2) - x_distance*x_distance);
				jj = (X1.transpose()*dense_points[i].T.block(0, 0, 3, 1))(0, 0) / gap1;
				jj = sqrt(1 - jj * jj);
				y_distance = y_distance / jj;

				if (abs(x_distance) <= (gap1 / 2) && abs(y_distance) <= (width_distance / 2))
				{
					origin_points[j].is_cover = true;
					group_points[i].push_back(&origin_points[j]);
					//�����Ĥ�����
					origin_points[j].thick += max(th - k*dense_points[i].width * 100 / 4 + k*y_distance / 10, 0);
				}
			}
			//�м��
			else {
				for (int k = 0; k < group_points[i - 1].size(); k++) {
					if (origin_points[j].X() == group_points[i - 1][k]->X() && origin_points[j].Y() == group_points[i - 1][k]->Y() && origin_points[j].Z() == group_points[i - 1][k]->Z()) {
						is_cover = true;
						break;
					}
				}
				if (is_cover && !is_node) continue;//�����ԭʼ���Ѿ�����һ���ܼ���ķ����������ܼ��㲻�ǻ��е㣬����������

				theta = (P.transpose()*X)(0, 0);
				theta1 = (P.transpose()*X1)(0, 0);

				if (theta >= 0 && theta1 <= 0) {
					x_distance = theta / X.norm();
					y_distance = sqrt(pow(P.norm(), 2) - x_distance*x_distance);
					jj = (X.transpose()*dense_points[i].T.block(0, 0, 3, 1))(0, 0) / gap;
					jj = sqrt(1 - jj * jj);
					y_distance = y_distance / jj;

					if (x_distance <= (gap / 2) && abs(y_distance) <= (width_distance / 2))
					{
						origin_points[j].is_cover = true;
						group_points[i].push_back(&origin_points[j]);
						//�����Ĥ�����
						origin_points[j].thick += max(th - k*dense_points[i].width * 100 / 4 + k*y_distance / 10, 0);
					}
				}

				else if (theta < 0 && theta1 > 0) {
					x_distance = theta1 / X1.norm();
					y_distance = sqrt(pow(P.norm(), 2) - x_distance*x_distance);
					//y_distance = abs(P[0] * MATX[i][0] + P[1] * MATX[i][4] + P[2] * MATX[i][8]);
					jj = (X1.transpose()*dense_points[i].T.block(0, 0, 3, 1))(0, 0) / gap1;
					jj = sqrt(1 - jj * jj);
					y_distance = y_distance / jj;
					if (x_distance <= (gap1 / 2) && abs(y_distance) <= (width_distance / 2))
					{
						origin_points[j].is_cover = true;
						group_points[i].push_back(&origin_points[j]);
						//�����Ĥ�����
						origin_points[j].thick += max(th - k*dense_points[i].width * 100 / 4 + k*y_distance / 10, 0);
					}
				}
				else {
					if (theta >= theta1) {
						x_distance = theta / X.norm();
						x_distance = abs(x_distance);
						y_distance = sqrt(pow(P.norm(), 2) - x_distance*x_distance);
						//y_distance = abs(P[0] * MATX[i][0] + P[1] * MATX[i][4] + P[2] * MATX[i][8]);
						jj = (X.transpose()*dense_points[i].T.block(0, 0, 3, 1))(0, 0) / gap;
						jj = sqrt(1 - jj * jj);
						y_distance = y_distance / jj;
						if (x_distance <= (gap / 2) && abs(y_distance) <= (width_distance / 2))
						{
							origin_points[j].is_cover = true;
							group_points[i].push_back(&origin_points[j]);
							//�����Ĥ�����
							origin_points[j].thick += max(th - k*dense_points[i].width * 100 / 4 + k*y_distance / 10, 0);
						}
					}
					else {
						x_distance = theta / X1.norm();
						x_distance = abs(x_distance);
						y_distance = sqrt(pow(P.norm(), 2) - x_distance*x_distance);
						//y_distance = abs(P[0] * MATX[i][0] + P[1] * MATX[i][4] + P[2] * MATX[i][8]);
						jj = (X1.transpose()*dense_points[i].T.block(0, 0, 3, 1))(0, 0) / gap1;
						jj = sqrt(1 - jj * jj);
						y_distance = y_distance / jj;
						if (abs(x_distance) <= (gap1 / 2) && abs(y_distance) <= (width_distance / 2))
						{
							origin_points[j].is_cover = true;
							group_points[i].push_back(&origin_points[j]);
							//�����Ĥ�����
							origin_points[j].thick += max(th - k*dense_points[i].width * 100 / 4 + k*y_distance / 10, 0);
						}
					}
				}
			}
		}

		int process = int((i + 1)*100.0 / N);
		string info = "���ڽ���Ĥ�����..." + to_string(process) + "%";

		uc1601((char*)info.c_str(), 0);
	}
}

//Ĥ����Ϣͳ�ƣ�����ʾ
void fangzhen::mohou_stat() {	
	double Max_thick;
	double Min_thick;
	double Ave_thick;
	double thick_sum = 0;
	
	Min_thick = origin_points[0].thick;
	Max_thick = origin_points[0].thick;
	double std_thick = double05->Value();

	for (unsigned i = 0; i < origin_points.size(); i++) {
		if (origin_points[i].thick <= Min_thick && origin_points[i].thick != 0) { Min_thick = origin_points[i].thick; }
		if (origin_points[i].thick >= Max_thick) { Max_thick = origin_points[i].thick; }
		thick_sum = thick_sum + origin_points[i].thick;
	}
	
	Ave_thick = thick_sum / (origin_points.size());

	double019->SetValue(floor((Max_thick) * 100) / 100);
	double020->SetValue(floor((Min_thick) * 100) / 100);
	double021->SetValue(floor((Ave_thick) * 100) / 100);
	
	//Ĥ��һ���Լ���;  ��Ϳ�����ʡ��ϸ�����
	double num_cover_point = 0;
	double  num_good_point = 0;
	if (std_thick == 0) std_thick = Ave_thick;
	for (unsigned i = 0; i < origin_points.size(); i++) {
		origin_points[i].thick_rate = (origin_points[i].thick - std_thick) / std_thick;
		if (origin_points[i].is_cover == true) { num_cover_point = num_cover_point + 1; }
		if (origin_points[i].thick_rate <= 0.5&& origin_points[i].thick_rate >= -0.5) { num_good_point = num_good_point + 1; }
	}

	double023->SetValue(floor(((num_cover_point / origin_points.size()) * 100) * 100) / 100);
	double027->SetValue(floor(((num_good_point / origin_points.size()) * 100) * 100) / 100);

	
	//��ͿЧ�ʡ�����������
	double cc_cost = 0;
	double time_cost = 0;
	for (int i = 1; i < dense_points.size(); i++) {	
		cc_cost = cc_cost + dense_points[i].flow*(dense_points[i].move_t /60);
		time_cost += dense_points[i].move_t;
	}
	
	double point_acc = atoi(pa);
	if (point_acc == 0) point_acc = 10;

	double025->SetValue(floor((60 * 60 * origin_points.size()*point_acc*point_acc / (1000000 * time_cost)) * 100) / 100);//��ͿЧ��
	double026->SetValue(floor((cc_cost) * 100) / 100); //������
	uc1601("", 0);
	uc1601("Ĥ��������", 1);

	/*ofstream out("E:\\Desktop\\Ĥ������.txt");
	for (unsigned i = 0; i < origin_points.size(); i++) {
		MatrixXd P = origin_points[i].T.block(0, 3, 4, 1);
		P = inv_T(station.Twm)*P;
		out <<P(0,0) << " " << P(1,0) << " " << P(2,0) << " " << origin_points[i].thick << endl;
	}
	out.close();*/
}

//����ָ���Ĺ켣�㣬�ҵ�����������ܼ���index
int fangzhen::match_dense_ponit(POINT_p &point) {
	/*double min_d = dense_points[0].distance(point);
	int index = 0;
	double d;
	for (int i = 1; i < dense_points.size(); i++) {
		d = dense_points[i].distance(point);
		if (d < min_d) {
			min_d = d;
			index = i;
		}
	}*/
	int index = point_match[point.index - 1];
	return index;
}

//����ָ�����ܼ��㣬�ҵ���������Ĺ켣��index
int fangzhen::match_ponit(POINT_p &point) {
	double min_d = points[0].distance(point);
	int index = 0;
	double d;
	for (int i = 1; i < points.size(); i++) {
		d = points[i].distance(point);
		if (d < min_d) {
			min_d = d;
			index = i;
		}
	}
	return index;
}

//���������ܼ����Ĥ��ֲ�
void fangzhen::cal_points_mohou_distri() {
	POINT_p* tp;
	for (int j = 0; j < dense_points.size(); j++) {
		tp = &dense_points[j];
		double th = (tp->flow*tp->effic*tp->content * 1000) / (station.tool_speed * 60 * tp->width);//ƽ��Ĥ��																																  //��ǹĤ��ֲ�
		if (strcmp(tool_type, "GUN") == 0) {
			double k = 0.84*tp->width * 100 - 22.2;
			vector<double> v;
			for (int i = 0; i<5; i++) {
				tp->distri[i] = (th - k*tp->width * 100 / 4 + k*(2 * i + 1) / 20 * tp->width * 100);//����Ĥ��ֲ�����
				if (tp->distri[i] < 0) tp->distri[i] = 0;
			}
		}
		//����Ĥ��ֲ�
		if (strcmp(tool_type, "BELL") == 0) {
			double max = 0.0034*tp->width * 100 + 1.0063;
			double min = -0.003*tp->width * 100 + 0.9621;
			tp->distri[0] = min*th;
			tp->distri[1] = th;
			tp->distri[2] = max*th;
			tp->distri[3] = th;
			tp->distri[4] = min*th;
		}
	}
}

//���ÿ�����ı任����
void fangzhen::cal_transmtx()
{
	
	double from_origin[3];
	double from_x_axis[3];
	double from_y_axis[3];
	double to_origin[3];
	double to_x_axis[3];
	double to_y_axis[3];

	//MATX_trans.clear();
	clear_transmtx();
	for (int i = 1; i<dense_points.size(); i++)
	{
		from_origin[0] = dense_points[i - 1].matx[3];
		from_origin[1] = dense_points[i - 1].matx[7];
		from_origin[2] = dense_points[i - 1].matx[11];
		from_x_axis[0] = dense_points[i - 1].matx[0];
		from_x_axis[1] = dense_points[i - 1].matx[4];
		from_x_axis[2] = dense_points[i - 1].matx[8];
		from_y_axis[0] = dense_points[i - 1].matx[1];
		from_y_axis[1] = dense_points[i - 1].matx[5];
		from_y_axis[2] = dense_points[i - 1].matx[9];

		to_origin[0] = dense_points[i].matx[3];
		to_origin[1] = dense_points[i].matx[7];
		to_origin[2] = dense_points[i].matx[11];
		to_x_axis[0] = dense_points[i].matx[0];
		to_x_axis[1] = dense_points[i].matx[4];
		to_x_axis[2] = dense_points[i].matx[8];
		to_y_axis[0] = dense_points[i].matx[1];
		to_y_axis[1] = dense_points[i].matx[5];
		to_y_axis[2] = dense_points[i].matx[9];

		double *matx_trans = new double[16];
		//double matx_trans[16];
		UF_MTX4_csys_to_csys(from_origin,from_x_axis,from_y_axis,to_origin,to_x_axis,to_y_axis,matx_trans);
		//UF_MTX4_ortho_normalize(matx_trans);
		MATX_trans.push_back(matx_trans);
	}
	
}

//�켣�����ݱ���
void fangzhen::backups() {
	backup_points.clear();
	for (int i = 0; i < points.size(); ++i)
		backup_points.push_back(points[i]);
}

void fangzhen::clear_transmtx() {
	/*for (int i = 0; i < MATX_trans.size(); ++i) {
		delete MATX_trans[i];
	}*/
	MATX_trans.clear();
}

void fangzhen::release_solution_memo(vector<double*>& joint_data) {
	for (int i = 0; i < joint_data.size(); i++)
		delete joint_data[i];
}

void fangzhen::save_joint_data(vector<double*> joint_data) {
	ofstream of("E:\\Desktop\\UG����\\joint_data.txt");
	for (int i = 0; i < joint_data.size(); i++) {
		for (int j = 0; j < 6; j++)
			of << joint_data[i][j] << " ";
		of << endl;
	}
	of.close();
}

void fangzhen::save_t_data(vector<double> t_data) {
	ofstream of("E:\\Desktop\\UG����\\t_data.txt");
	for (int i = 0; i < t_data.size(); i++) {
		of << t_data[i] << endl;
	}
	of.close();
}

void fangzhen::save_data_p(vector<MatrixXd> data_p) {
	ofstream of("E:\\Desktop\\UG����\\data_p.txt");
	for (int i = 0; i <data_p.size(); i++) {
		of << data_p[i] << endl;
	}
	of.close();
}

void fangzhen::save_data_p(vector<MatrixXd> data_p, string filepath) {
	ofstream of(filepath);
	for (int i = 0; i <data_p.size(); i++) {
		for (int j = 0; j<4; j++)
			for (int k = 0; k<3; k++)
				of << data_p[i](k, j) << endl;
	}
	of.close();
}

void fangzhen::save_station_data() {
	ofstream of("E:\\Desktop\\UG����\\station_data.txt");
	of << "Twm:" << endl;
	of << station.Twm << endl;
	of << "Tr0:" << endl;
	of << station.Tr0 << endl;
	of << "Tt0:" << endl;
	//of << station.Tt0 << endl;
	of << "Ter:" << endl;
	of << station.Ter << endl;
	of << "Tw0:" << endl;
	of << station.Tw0 << endl;
	of << "Tet:" << endl;
	//of << station.Tet << endl << endl;;
	
	of << station.convery_move_v << endl;
	of << station.start_distance << endl;
	of << station.transition_time << endl;
	of << station.tool_speed << endl;
	of.close();
}

//�����˶�ʱ�䣨���ģ����ٶ�
//����ֵ���ڵ���0��˵�����ʧ�ܣ��޷������index��
//����-1�����ɹ�
int fangzhen::cal_points_v(bool f) {
	if (!joint_data.empty()) {
		/*for (int i = 0; i < joint_data.size(); ++i) {
			delete joint_data[i];
			joint_data[i] = NULL;
		}*/
		joint_data.clear();
	}
	
	if (f) {
		double024->SetValue(floor((61.5) * 100) / 100);
		vector<MatrixXd> data_p;
		MatrixXd Tmw = inv_T(station.Twm);
		for (int i = 0; i < dense_points.size(); i++)
			data_p.push_back((Tmw)*dense_points[i].T); //ת������������ϵ���ܼ���λ��
		vector<double> t_data = cal_dt(data_p, station);
		for (int i = 0; i < dense_points.size(); i++)
			dense_points[i].v = station.tool_speed;
		for (int i = 0; i < t_data.size(); i++)
			dense_points[i + 1].move_t = t_data[i];
		return -1;
	}
	
	vector<MatrixXd> data_p;
	MatrixXd Tmw = inv_T(station.Twm);
	
	for (int i = 0; i < dense_points.size(); i++)
		data_p.push_back((Tmw)*dense_points[i].T); //ת������������ϵ�µ��ܼ���λ��
	//save_data_p(data_p, "E:\\Desktop\\UG����\\data_p.txt");
	
	vector<double> t_data = cal_dt(data_p, station);//��ĩ���ٶȹ��������˶�ʱ��
	data_r = convert_data(data_p, t_data, station);	//ת������ϵ��6��ĩ�˵�����������ϵ��
	joint_data = robot->path(data_r, robot_ini_thetas); //�����	
	robot->convert_to_deg(joint_data);
	t_data = cal_dt_J(t_data, joint_data, robot);//���ǹؽ��ٶ����ƣ���������֮�������ʱ��
	release_solution_memo(joint_data);
	data_r = convert_data(data_p, t_data, station);	//ת������ϵ��6��ĩ�˵�����������ϵ��
	joint_data = robot->path(data_r, robot_ini_thetas); //�����	
	robot->convert_to_deg(joint_data);
	vector<double> t = cal_t(data_p, joint_data, station.tool_speed, robot); // �����˶�ʱ�䣨���ģ����ǹؽڼ��ٶ�*�ɿ��ǵ����ٶ�
	vector<double> v = cal_v(data_p, t);	//�����ٶ� *�ɿ��ǵ����ٶ�
	release_solution_memo(joint_data);

	//���Ǽ���ó����˶�ʱ�䣬�ٴ�ת������
	t.insert(t.begin(), t_data[0]);
	t_data = t;

	/*ofstream of1("E:\\Desktop\\UG����\\run_info.txt", ios::trunc);
	of1.close();
	ofstream of("E:\\Desktop\\UG����\\poses.txt", ios::trunc);
	of.close();*/

	data_r = convert_data(data_p, t_data, station);	//ת������ϵ��6��ĩ�˵�����������ϵ��
	
	//joint_data = robot->path(data_r, robot_ini_thetas,false); //�����
	
	joint_data=robot->path(data_r, robot_ini_thetas,check_pose_result);
	robot->convert_to_deg(joint_data);
	/*robot->convert_to_deg(joint_data);

	if (joint_data.size() != data_r.size()) {
		//release_solution_memo(joint_data);
		for (int i = 0; i < joint_data.size(); ++i)
			robot->p_to_c_deg(joint_data[i]);
		save_joint_data(joint_data);
		return joint_data.size();
	}*/
	
	t = cal_t(data_p, joint_data, station.tool_speed, robot); // �����˶�ʱ�䣨���ģ�*�ɿ��ǵ����ٶ�
	v = cal_v(data_p, t);	//�����ٶ� *�ɿ��ǵ����ٶ�	
	//release_solution_memo(joint_data);

	//�Ƕ�ת��p->c
	for (int i = 0; i < joint_data.size(); ++i)
		robot->p_to_c_deg(joint_data[i]);

	save_joint_data(joint_data);
	//������ʱ�䣨���ģ�
	double total_t = 0;
	for (int i = 0; i < t.size(); i++)
		total_t += t[i];
	
	double024->SetValue(floor((total_t) * 100) / 100); //��ʾ����

	assert(v.size() == dense_points.size()-1);
	assert(v.size() == t.size());
	//save_t_data(v);
	for (int i = 0; i < v.size(); i++)
		dense_points[i].v = v[i];
		//dense_points[i].v = station.tool_speed;
	dense_points[dense_points.size() - 1].v = v[v.size() - 1];
	for (int i = 0; i < t.size(); i++)
		dense_points[i+1].move_t = t[i];

	return -1;
}

//����˶�����
void fangzhen::motion(bool paint) {

	UF_initialize();

	if (tool_tag != NULL) {
		UF_OBJ_delete_object(tool_tag);
	}
	//����֮ǰ�ĵ���
	if (paint && !tag_group_point.empty()) {
		for (int i = 0; i < dense_points.size(); i++)
		{
			//���ص���
			for (int j = 0; j<tag_group_point[i].size(); j++)
				UF_OBJ_set_blank_status(tag_group_point[i][j], UF_OBJ_BLANKED);
		}
	}
	//ָ���ĵ�һ������Ŵ������һ������ţ��Ե����
	int temp_point;
	if (first_point >= last_point)
	{
		temp_point = first_point;
		first_point = last_point;
		last_point = temp_point;
	}
	//����ģ��
	import_tool(dense_points[first_point]);
	cal_transmtx();//���ÿ�����ı任����
	
	double matx_trans[16];
	UF_MTX4_identity(matx_trans);
	MATX_trans.insert(MATX_trans.begin() + first_point, matx_trans); //�����ʼλ�˾���

	double delay_rate = double0->Value() / 100;//��������
	double point_coords[3];
	
	double max_j[6];
	double min_j[6];
	for (int i = 0; i < 6; ++i) {
		max_j[i] = joint_data[0][i];
		min_j[i] = joint_data[0][i];
	}
	for (int i = 0; i < joint_data.size(); ++i) {
		for (int j = 0; j < 6; ++j) {
			if (joint_data[i][j] > max_j[j]) max_j[j] = joint_data[i][j];
			if (joint_data[i][j] < min_j[j]) min_j[j] = joint_data[i][j];
		}
	}
	doubleJ1->SetMaximumValue(max_j[0]);
	doubleJ1->SetMinimumValue(min_j[0]);
	doubleJ2->SetMaximumValue(max_j[1]);
	doubleJ2->SetMinimumValue(min_j[1]);
	doubleJ3->SetMaximumValue(max_j[2]);
	doubleJ3->SetMinimumValue(min_j[2]);
	doubleJ4->SetMaximumValue(max_j[3]);
	doubleJ4->SetMinimumValue(min_j[3]);
	doubleJ5->SetMaximumValue(max_j[4]);
	doubleJ5->SetMinimumValue(min_j[4]);
	doubleJ6->SetMaximumValue(max_j[5]);
	doubleJ6->SetMinimumValue(min_j[5]);

	//�������ɵ���
	for (int i = first_point; i < last_point; ++i)//num_point
	{
		//_sleep(dense_points[i].move_t/delay_rate);
		_sleep(30);
		UF_MODL_transform_entities(1, &tool_tag, MATX_trans[i]);
		//ʵʱ��ʾ�ؽڽǶ�ֵ
		doubleJ1->SetValue(joint_data[i][0]);
		doubleJ2->SetValue(joint_data[i][1]);
		doubleJ3->SetValue(joint_data[i][2]);
		doubleJ4->SetValue(joint_data[i][3]);
		doubleJ5->SetValue(joint_data[i][4]);
		doubleJ6->SetValue(joint_data[i][5]);

		if (paint) {
			
			tag_t point_tag;
			for (int j = 0; j < group_points[i].size(); j++)
			{
				//��һ�η��棬��������
				if (sim_first == true)
				{
					point_coords[0] = group_points[i][j]->X();
					point_coords[1] = group_points[i][j]->Y();
					point_coords[2] = group_points[i][j]->Z();

					UF_CURVE_create_point(point_coords, &point_tag);
					tag_group_point[i].push_back(point_tag);

					//ͨ���ı�����ɫ����ʾ���������
					//0.1 0.3 0.5
					if (group_points[i][j]->thick_rate < -0.5) UF_OBJ_set_color(point_tag, 211);
					if (group_points[i][j]->thick_rate >= -0.5 && group_points[i][j]->thick_rate < -0.3) UF_OBJ_set_color(point_tag, 97);
					if (group_points[i][j]->thick_rate >= -0.3 && group_points[i][j]->thick_rate < -0.1) UF_OBJ_set_color(point_tag, 98);
					if (group_points[i][j]->thick_rate >= -0.1 && group_points[i][j]->thick_rate < 0.1) UF_OBJ_set_color(point_tag, 101);
					if (group_points[i][j]->thick_rate >= 0.1 && group_points[i][j]->thick_rate < 0.3) UF_OBJ_set_color(point_tag, 82);
					if (group_points[i][j]->thick_rate >= 0.3 && group_points[i][j]->thick_rate < 0.5) UF_OBJ_set_color(point_tag, 77);
					if (group_points[i][j]->thick_rate >= 0.5) UF_OBJ_set_color(point_tag, 186);
				}
				else {
					UF_OBJ_set_blank_status(tag_group_point[i][j], UF_OBJ_NOT_BLANKED);
					point_tag = tag_group_point[i][j];
					if (group_points[i][j]->thick_rate < -0.5) UF_OBJ_set_color(point_tag, 211);
					if (group_points[i][j]->thick_rate >= -0.5 && group_points[i][j]->thick_rate < -0.3) UF_OBJ_set_color(point_tag, 97);
					if (group_points[i][j]->thick_rate >= -0.3 && group_points[i][j]->thick_rate < -0.1) UF_OBJ_set_color(point_tag, 98);
					if (group_points[i][j]->thick_rate >= -0.1 && group_points[i][j]->thick_rate < 0.1) UF_OBJ_set_color(point_tag, 101);
					if (group_points[i][j]->thick_rate >= 0.1 && group_points[i][j]->thick_rate < 0.3) UF_OBJ_set_color(point_tag, 82);
					if (group_points[i][j]->thick_rate >= 0.3 && group_points[i][j]->thick_rate < 0.5) UF_OBJ_set_color(point_tag, 77);
					if (group_points[i][j]->thick_rate >= 0.5) UF_OBJ_set_color(point_tag, 186);
				}
			}
		}
		
		UF_MODL_update();
	}
	//ɾ�����
	if (tool_tag != NULL) {
		UF_OBJ_delete_object(tool_tag);
	}
	UF_terminate();
}

//����켣������
void fangzhen::save_points() {
	string points_path = ".\\YF\\DataResources\\ProcessData\\" + get_curpro_path(".\\YF\\cur.txt") + "points_sparse_trans.txt";

	ofstream out(points_path);

	for (int i = 0; i<points.size(); i++) {
		for (int j = 0; j < 12; j++) {
			out << points[i].matx[j];
			if (j != 11) out << " ";
			else out << "\n";
		}
	}
	out.close();
}

//����������
bool fangzhen::save_param() {
	string ini_filename = process_data_path + "config.ini";
	char* section_name = "Fangzhen";

	string max_mohou = to_string(double019->Value());
	string min_mohou = to_string(double020->Value());
	string ave_mohou = to_string(double021->Value());
	string rate = to_string(double023->Value());
	string pace = to_string(double024->Value());
	string effcient = to_string(double025->Value());
	string tcp_d = to_string(double013->Value());
	string tcp_v = to_string(double02->Value());
	string tcp_acc = to_string(integer0->Value());
	string robot_start_d = to_string(double028->Value());
	string rail_v = to_string(double029->Value());

	if (!WritePrivateProfileString(section_name, "max", max_mohou.c_str(), ini_filename.c_str()))
		return false;
	if (!WritePrivateProfileString(section_name, "min", min_mohou.c_str(), ini_filename.c_str()))
		return false;
	if (!WritePrivateProfileString(section_name, "ave", ave_mohou.c_str(), ini_filename.c_str()))
		return false;
	if (!WritePrivateProfileString(section_name, "rate", rate.c_str(), ini_filename.c_str()))
		return false;
	if (!WritePrivateProfileString(section_name, "pace", pace.c_str(), ini_filename.c_str()))
		return false;
	if (!WritePrivateProfileString(section_name, "effcient", effcient.c_str(), ini_filename.c_str()))
		return false;
	if (!WritePrivateProfileString(section_name, "effcient", effcient.c_str(), ini_filename.c_str()))
		return false;
	if (!WritePrivateProfileString(section_name, "tcp_d", tcp_d.c_str(), ini_filename.c_str()))
		return false;
	if (!WritePrivateProfileString(section_name, "tcp_v", tcp_v.c_str(), ini_filename.c_str()))
		return false;
	if (!WritePrivateProfileString(section_name, "tcp_acc", tcp_acc.c_str(), ini_filename.c_str()))
		return false;
	if (!WritePrivateProfileString(section_name, "robot_start_d", robot_start_d.c_str(), ini_filename.c_str()))
		return false;
	if (!WritePrivateProfileString(section_name, "rail_v", rail_v.c_str(), ini_filename.c_str()))
		return false;
	return true;
}

//дˢ���ļ�(ABB)
void fangzhen::write_bt() {
	ofstream out(filename+".bt");
	points[0].is_node = true;
	for (int i = 0; i<points.size(); i++) {
		if (points[i].is_node) {
			if (strcmp(tool_type, "BELL") == 0) {
				if (points[i].is_on=="ON")
					out << points[i].flow << ",";//����
				else
					out << "0,";
				out <<points[i].rot<< ",";//ת��
				out << points[i].sector1 << ",";//����1
				if(!toggle05->Value())
					out << points[i].sector2 << ",";//����2
				out << points[i].voltage << "\n";//��ѹ
			}
			if (strcmp(tool_type, "GUN") == 0) {
				if (points[i].is_on=="ON")
					out << points[i].flow << ",";//����
				else
					out << "0,";
				out << points[i].atom << ",";//��
				out << points[i].sector1 << "\n";//����1
			}
		}
	}
	out.close();
}

//дcsv�ļ���FANUCˢ�ӱ�
void fangzhen::write_csv() {
	ofstream out(filename + ".csv");
	out << "Fluid Presets\n";
	out << "YFPO - Base,Device:  ";
	out << work_type << robotnum << endl;
	points[0].is_node = true;
	if (strcmp(tool_type, "BELL") == 0) {
		out << "Color:  19 - Ҷ����	Style:  3100 - (31) \n";
		if (!toggle05->Value())
			out << "Item,Paint cc/min,Bell Speed kRPM,Shaping Air 1 sLPM,Shaping Air 2 sLPM,Description\n";
		else
			out << "Item,Paint cc/min,Bell Speed kRPM,Shaping Air 1 sLPM,Description\n";
		int index = 1;
		for (int i = 0; i < points.size(); ++i) {
			if (points[i].is_node) {
				if (index == 1) {
					out << index << "," << points[i].flow << "," << points[i].rot << "," << points[i].sector1 << ",";
					if (!toggle05->Value())
						out << points[i].sector2 << ",";
					out<< work_type << robotnum << "-Style59-(THFB)-���ذ�-����\n";
				}
				else {
					out << index << "," << points[i].flow << "," << points[i].rot << "," << points[i].sector1 << ",";
					if (!toggle05->Value())
						out << points[i].sector2 << ",";
					if (index > 25) out << "(No Description)\n";
					else out << "No Description\n";
				}
				++index;
			}
			if (index > 40) break;
		}
		while (index <= 40) {
			out << index << ",0,0,0,0,";
			if (index > 25) out << "(No Description)\n";
			else out << "No Description\n";
			++index;
		}
	}

	out.close();
}

//дdat�ļ�
void fangzhen::write_dat()
{
	ofstream out(filename + ".dat");
	for (int i = 0; i<points.size(); i++) {
		for (int j = 0; j < 12; j++) {
			out << points[i].matx[j];
			if (j != 11) out << " ";
			else out << "\n";
		}
	}
	out.close();
}

//дmod�ļ�(ABB)
//ע���ٶ�ֵ����ȷ�Ϲ����ٶ��Ƿ�һ��ֵ
void fangzhen::write_mod() {
	string ini_filename = process_data_path + "config.ini"; //ini�����ļ�·�� 
	char paint_type[100]; //��Ϳ����
	GetPrivateProfileString("Environment", "work_type", "", paint_type, sizeof(paint_type), ini_filename.c_str());
	string paint_type_name="PaintL";
	
	if (paint_type[0]=='F'&&paint_type[1] == 'C') {
		paint_type_name = "MoveL";
	}
	ofstream outf(filename+".mod");
	string ps = "\tLOCAL CONST robtarget p";
	string confis = "[0,0,0,0],[9E+9,9E+9,9E+9,9E+9,9E+9,0]];";
	
	string module_name = "Module1";
	string proc_name = "Path_10";
	string tool_name_t = tool_name + "_" + to_string(int(double013->Value()));
	double quate[4];

	outf << "MODULE " << module_name << endl;
	
	//д��Home����Ϣ
	int r[1] = { 1 };
	int c[1] = { 6 };
	vector<double> thetas = doubleTable01->GetValues(r, c);
	/*
	//д��home��
	robot->p_to_c(robot_ini_thetas);
	outf << "\tPERS jointtarget JointTarget_1:=[[";
	for (int i = 0; i < 6; ++i) {
		if (i < 5) outf << robot_ini_thetas[i]*180/pi << ",";
		else outf << robot_ini_thetas[i] * 180 / pi;
		
	}*/
	//-------------------��д��home��-------------------
	double arr[6];
	std::copy(thetas.begin(), thetas.end(), arr);
	//robot->p_to_c(arr);
	outf << "\tPERS jointtarget JointTarget_1:=[[";
	for (int i = 0; i < 6; ++i) {
		if (i < 5) outf << arr[i] << ",";
		else outf << arr[i];

	}
	outf << "],[9E+09,9E+09,9E+09,9E+09,9E+09,0]];\n";
	//---------------------------------------------------------

	//���ɵ���Ϣ
	//if (strcmp(tool_type, "BELL") != 0 && robot->robot_type!="FANUC") {
	//	double home_t[6];
	//	for (int i = 0; i < 6; i++)
	//		home_t[i] = thetas[i] * pi / 180;
	//	robot->c_to_p(home_t);
	//	MatrixXd T = robot->FK(home_t);
	//	T = station.Tmw*inv_T(station.Tmr)*T*inv_T(station.Tet);

	//	POINT_p home_p;
	//	home_p.T = T;
	//	home_p.cal_matx();
	//	
	//	POINT_p p;

	//	/*POINT_p home_p1;
	//	home_p1.T = inv_T(station.Tmw)*home_p.T;
	//	home_p1.cal_matx();*/
	//	create_trans_point(home_p, p, 1);

	//	points.insert(points.begin(), p);

	//}
		//outf << "PERS jointtarget JointTarget_2 : = [[2.59, 36.74, 72.26, -12, -61, 16.28], [9E+09, 9E+09, 9E+09, 9E+09, 9E+09, 0]];\n";
	int n = points.size();
	//д��켣����Ϣ
	for (int i = 0; i<n; i++) {
		trans_to_quate_fz(points[i].matx, quate);
		
		outf << ps << i + 1 << "0"<< ":=[";
		outf << "[";
		outf << points[i].X() << "," << points[i].Y() << ",";
		outf << points[i].Z();
		outf << "],[";
		outf << quate[0] << "," << quate[1] << "," << quate[2] << "," << quate[3];
		outf << "],";
		outf << confis;
		outf << endl;
	}

	//д����
	outf << "\n\tPROC " << proc_name << "()\n";
	outf<<"\t\tMoveAbsJ JointTarget_1,vPaint1000,fine,tool0\\WObj:=wobj0;\n";
	/*if (strcmp(tool_type, "BELL") != 0)
		outf << "\t\tMoveAbsJ JointTarget_2,vPaint1000,fine,tool0\\WObj:=wobj0;\n";*/
	outf << "\t\tWaitWObj " << coor_name << "\\RelDist:=" << station.start_distance << ";\n";
	for (int i = 0; i<n; i++){
		outf << "\t\t" << station.move_type << " p" << i + 1 << "0" << ","<<paint_type_name<<station.tool_speed << ",z" << station.acc << "," << tool_name_t <<"\\WObj:=" <<coor_name << ";\n";
	}
	outf << "\t\tMoveAbsJ JointTarget_1,vPaint1000,fine,tool0\\WObj:=wobj0;\n";
	outf << "\t\tDropWObj "<<coor_name<<";\n";
	outf << "\tENDPROC\n";
	outf << "\n\tPROC main1()\n\t\t" << proc_name << ";\n\tENDPROC\n";
	outf << "ENDMODULE\n";
	outf.close();
}

//дls�ļ�(FANUC)
void fangzhen::write_ls() {
	ofstream outf(filename + ".ls");
	//������Ϣ
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int year = ltm->tm_year - 100;
	int month = 1 + ltm->tm_mon;

	outf << "/PROG  " << get_curpro_name(".\\YF\\cur.txt") << "   Process" << endl;
	outf << "/ATTR" << endl;
	outf << "OWNER        = MNEDITOR;" << endl;
	outf << "COMMENT        = \"\";" << endl;
	outf << "PROG_SIZE    = 606;" << endl;
	outf << "CREATE      = DATE " << year << "-" << month << "-" << ltm->tm_mday << "  TIME " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << ";" << endl;
	outf << "MODIFIED    = DATE " << year << "-" << month << "-" << ltm->tm_mday << "  TIME " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << ";" << endl;
	outf << "FILE_NAME    = ;" << endl;
	outf << "VERSION        = 0;" << endl;
	outf << "LINE_COUNT    = 77;" << endl;
	outf << "MEMORY_SIZE    = 966;" << endl;
	outf << "PROTECT        = READ_WRITE;" << endl;
	outf << "STORAGE		= SHADOW ONDEMAND;" << endl;
	outf << "TCD:  STACK_SIZE    = 0," << endl;
	outf << "      TASK_PRIORITY    = 50," << endl;
	outf << "      TIME_SLICE    = 0," << endl;
	outf << "      BUSY_LAMP_OFF    = 0," << endl;
	outf << "      ABORT_REQUEST    = 0," << endl;
	outf << "      PAUSE_REQUEST    = 0;" << endl;
	outf << "DEFAULT_GROUP    = 1,*,*,*,*;" << endl;
	outf << "CONTROL_CODE    = 00000000 00000000;" << endl;
	outf << "/APPL" << endl;

	outf << "PAINT_PROCESS;" << endl;
	outf << "  LAST_CYCLE_TIME	: 34.3 sec;" << endl;
	outf << "  LAST_GUN_ON_TIME	: 28.1 sec;" << endl;
	outf << "  DEFAULT_USER_FRAME	: 0;" << endl;
	outf << "  DEFAULT_TOOL_FRAME	: 1;" << endl;
	outf << "  START_DELAY		: 0;" << endl;
	outf << "  LAST_GUN_OFF_LINE	: 153;" << endl;
	outf << "  LAST_PROCESSED_DATE	: DATE 20-11-21 TIME 11:20:50;" << endl << endl;

	outf << "PRESET_#1_GUN_ON_TIME   : .005 min;" << endl;
	outf << "PRESET_#2_GUN_ON_TIME   : .009 min;" << endl;
	outf << "PRESET_#3_GUN_ON_TIME   : .001 min;" << endl;
	outf << "PRESET_#4_GUN_ON_TIME   : .049 min;" << endl;
	outf << "PRESET_#5_GUN_ON_TIME   : .004 min;" << endl;
	outf << "PRESET_#6_GUN_ON_TIME   : .028 min;" << endl;
	outf << "PRESET_#7_GUN_ON_TIME   : .002 min;" << endl;
	outf << "PRESET_#8_GUN_ON_TIME   : .032 min;" << endl;
	outf << "PRESET_#9_GUN_ON_TIME   : .003 min;" << endl;
	outf << "PRESET_#10_GUN_ON_TIME  : .006 min;" << endl;
	outf << "PRESET_#11_GUN_ON_TIME  : .009 min;" << endl;
	outf << "PRESET_#12_GUN_ON_TIME  : .036 min;" << endl;
	outf << "PRESET_#13_GUN_ON_TIME  : .003 min;" << endl;
	outf << "PRESET_#14_GUN_ON_TIME  : .004 min;" << endl;
	outf << "PRESET_#15_GUN_ON_TIME  : .021 min;" << endl;
	outf << "PRESET_#16_GUN_ON_TIME  : .006 min;" << endl;
	outf << "PRESET_#17_GUN_ON_TIME  : .020 min;" << endl;
	outf << "PRESET_#18_GUN_ON_TIME  : .017 min;" << endl;
	outf << "PRESET_#19_GUN_ON_TIME  : .014 min;" << endl;
	outf << "PRESET_#20_GUN_ON_TIME  : .022 min;" << endl;
	outf << "PRESET_#21_GUN_ON_TIME  : .005 min;" << endl;
	outf << "PRESET_#22_GUN_ON_TIME  : .009 min;" << endl;
	outf << "PRESET_#23_GUN_ON_TIME  : .001 min;" << endl;
	outf << "PRESET_#24_GUN_ON_TIME  : .050 min;" << endl;
	outf << "PRESET_#25_GUN_ON_TIME  : .004 min;" << endl;
	outf << "PRESET_#26_GUN_ON_TIME  : .028 min;" << endl;
	outf << "PRESET_#27_GUN_ON_TIME  : .002 min;" << endl;
	outf << "PRESET_#28_GUN_ON_TIME  : .032 min;" << endl;
	outf << "PRESET_#29_GUN_ON_TIME  : .003 min;" << endl;
	outf << "PRESET_#30_GUN_ON_TIME  : .006 min;" << endl;
	outf << "PRESET_#31_GUN_ON_TIME  : .008 min;" << endl;
	outf << "PRESET_#32_GUN_ON_TIME  : .036 min;" << endl;
	outf << "PRESET_#33_GUN_ON_TIME  : .003 min;" << endl;
	outf << "PRESET_#34_GUN_ON_TIME  : .003 min;" << endl;
	outf << "PRESET_#35_GUN_ON_TIME  : .021 min;" << endl;
	outf << "PRESET_#36_GUN_ON_TIME  : .006 min;" << endl;
	outf << "PRESET_#37_GUN_ON_TIME  : .020 min;" << endl;
	outf << "PRESET_#38_GUN_ON_TIME  : .017 min;" << endl;
	outf << "PRESET_#39_GUN_ON_TIME  : .021 min;" << endl;
	outf << "PRESET_#40_GUN_ON_TIME  : .062 min;" << endl;

	outf << "LINE_TRACK;" << endl;
	outf << "  LINE_TRACK_SCHEDULE_NUMBER : 1;" << endl;
	outf << "  LINE_TRACK_BOUNDARY_NUMBER : 10;" << endl;
	outf << "  CONTINUE_TRACK_AT_PROG_END: TRUE;" << endl;

	outf << "/MN" << endl;
	outf << "   1:  !Set Inbounds Tracking PR[] ;\n";
	outf << "   2:  PR[11,1]=0    ;\n";
	outf << "   3:  PR[11,2]=600    ;\n";
	outf << "   4:  PR[11,3]=0    ;\n";
	outf << "   5:  PR[11,4]=0    ;\n";
	outf << "   6:  PR[11,5]=0    ;\n";
	outf << "   7:  PR[11,6]=(-90)    ;\n";
	outf << "   8:  !Set Outbounds Tracking PR[] ;\n";
	outf << "   9:  PR[21,1]=0    ;\n";
	outf << "  10:  PR[21,2]=0    ;\n";
	outf << "  11:  PR[21,3]=0    ;\n";
	outf << "  12:  PR[21,4]=0    ;\n";
	outf << "  13:  PR[21,5]=0    ;\n";
	outf << "  14:  PR[21,6]=(-90)    ;\n";
	outf << "  15:  SETBOUND LNSCH[1] BOUND[10] PR[11] PR[21] ;\n";
	outf << "  16:  SELBOUND LNSCH[1] BOUND[10] ;\n";
	outf << "  17:  UFRAME_NUM=0 ;\n";
	outf << "  18:  UTOOL_NUM=1 ;\n";
	outf << "  19:L P[1] 500mm/sec CNT100    ;\n";
	outf << "  20:  !Set Inbounds Tracking PR[] ;\n";
	outf << "  21:  PR[11,1]=0    ;\n";
	outf << "  22:  PR[11,2]=2500    ;\n";
	outf << "  23:  PR[11,3]=0    ;\n";
	outf << "  24:  PR[11,4]=0    ;\n";
	outf << "  25:  PR[11,5]=0    ;\n";
	outf << "  26:  PR[11,6]=(-90)    ;\n";
	outf << "  27:  !Set Outbounds Tracking PR[] ;\n";
	outf << "  28:  PR[21,1]=0    ;\n";
	outf << "  29:  PR[21,2]=(-2500)    ;\n";
	outf << "  30:  PR[21,3]=0    ;\n";
	outf << "  31:  PR[21,4]=0    ;\n";
	outf << "  32:  PR[21,5]=0    ;\n";
	outf << "  33:  PR[21,6]=(-90)    ;\n";
	outf << "  34:  SETBOUND LNSCH[1] BOUND[10] PR[11] PR[21] ;\n";
	outf << "  35:  SELBOUND LNSCH[1] BOUND[10] ;\n";
	outf << "  36:  UFRAME_NUM=0 ;" << endl << "  37:  UTOOL_NUM=1 ;" << endl;
	int brush_num = 1;
	int line_no = 37;
	int n = points.size();
	for (int i = 0; i<(n-3); i++)
	{
		outf << "  " << ++line_no << ":L P[" << (i + 3) << "] " << station.tool_speed << "mm/sec CNT" << station.acc << "   ";
		if (i == 0) {
			if (points[i].is_on == "ON") outf << "Gun=ON";
		}
		else {
			if (points[i].is_on == "ON" &&  points[i - 1].is_on == "OFF") outf << "Gun=ON";
		}
		if (i == n - 4) outf << "Gun=OFF";
		outf << " ;\n";

		/*if (points[i].is_node) {
		outf << "  " << ++line_no<<":  Preset[" << brush_num << "] ;\n";
		++brush_num;
		}*/
		/*if (i == 0) {
		outf << "  " << ++line_no << ":  SELBOUND LNSCH[1] BOUND[10] ;\n";
		outf << "  " << ++line_no << ":  ElectroStat[2] ;\n";
		}	*/
	}
	outf << "/POS\n";
	//�켣����Ϣ
	double x, y, z;
	double rot_angle = integer03->Value()*pi / 180;
	MatrixXd rot_T(4, 4);
	rot_T.setIdentity();
	rot_T.block(0, 0, 3, 3) = rotz(pi / 2);

	for (int j = 0; j<points.size(); j++)
	{
		MatrixXd T = points[j].T;
		T.block(0, 0, 3, 3) = T.block(0, 0, 3, 3)*rotz(pi);
		T = rot_T*T;
		/*if (j == 0)
		uc1601((char*)(to_string(T(0, 3))+"-"+ to_string(T(1, 3)) + "-" + to_string(T(2, 3))).c_str(), 1);*/

		double sy = sqrt(T(0, 0) * T(0, 0) + T(1, 0) * T(1, 0));

		bool singular = sy < 1e-6;

		if (!singular)
		{
			x = atan2(T(2, 1), T(2, 2));
			y = atan2(-T(2, 0), sy);
			z = atan2(T(1, 0), T(0, 0));
		}
		else
		{
			x = atan2(-T(1, 2), T(1, 1));
			y = atan2(-T(2, 0), sy);
			z = 0;
		}
		x = x * 180.0 / pi;
		y = y * 180.0 / pi;
		z = z * 180.0 / pi;
		outf << "P[" << (j + 1) << "]{" << endl << "   GP1:" << endl << "	UF : 0, UT : 1,		CONFIG : 'N U T, 0, 0, 0'," << endl;
		outf << setiosflags(ios::fixed) << setprecision(3) << "	X = " << T(0, 3) << "  mm,	Y =  " << T(1, 3) << "  mm,	Z =  " << T(2, 3) << "  mm," << endl;
		outf << setiosflags(ios::fixed) << setprecision(3) << "	W =   " << x << " deg,	P =    " << y << " deg,	R =     " << z << " deg" << endl << "};" << endl;// << "        E1 =   0.000mm" << endl << "};" << endl;
	}
	outf << "/END\n";
	outf.close();
}

//дmod�ļ�(����Ϳָ�� ABB)
void fangzhen::write_mod_brush() {
	ofstream outf(filename + "_brush.mod");
	string ps = "\tLOCAL CONST robtarget p";
	string confis = "[0,0,0,0],[9E+9,9E+9,9E+9,9E+9,9E+9,0]];";

	string module_name = "Module1";
	string proc_name = "Path_10";
	double quate[7], x_d, y_d, z_d, max_d, d;
	string dir;
	outf << "MODULE " << module_name << endl;
	int n = points.size();
	//д��Home����Ϣ
	int r[1] = { 1 };
	int c[1] = { 6 };
	vector<double> thetas = doubleTable01->GetValues(r, c);
	outf << "\tPERS jointtarget JointTarget_1:=[[";
	for (int i = 0; i < 6; ++i) {
		if (i < 5) outf << thetas[i] << ",";
		else outf << thetas[i];
	}
	outf << "],[9E+09,9E+09,9E+09,9E+09,9E+09,0]];\n";
	//д�����Ϣ
	for (int i = 0; i<n; i++) {
		trans_to_quate_fz(points[i].matx, quate);
		outf << ps << i + 1 << ":=[";
		outf << "[";
		outf << points[i].X() << "," << points[i].Y() << ",";
		outf << points[i].Z();
		outf << "],[";
		outf << quate[0] << "," << quate[1] << "," << quate[2] << "," << quate[3];
		outf << "],";
		outf << confis;
		outf << endl;
	}

	//д����
	outf << "\n\tPROC " << proc_name << "()\n";
	outf << "\t\tMoveAbsJ JointTarget_1,v1000,fine,tool0\\WObj:=wobj0;\n";
	outf << "\t\tWaitWObj " << coor_name << "\\RelDist:=" << station.start_distance << ";\n";
	int brush_num = 1;
	for (int i = 0; i<n; i++) {

		outf << "\t\t" << station.move_type << " p" << i + 1 << ",vPaint" <<station.tool_speed << ",z" << station.acc << "," << tool_name << "\\WObj:=" << coor_name << ";\n";
		if (points[i].is_node) {
			x_d = abs(points[i].tool_x - points[i + 1].tool_x);
			y_d = abs(points[i].tool_y - points[i + 1].tool_y);
			z_d = abs(points[i].tool_z - points[i + 1].tool_z);
			max_d = max(max(x_d, y_d), z_d);

			if (max_d == x_d) {
				dir = "X";
				d = points[i].tool_x + (points[i + 1].tool_x - points[i].tool_x)*points[i].set_param / 100;
			}
			if (max_d == y_d) {
				dir = "Y";
				d = points[i].tool_y + (points[i + 1].tool_y - points[i].tool_y)*points[i].set_param / 100;
			}
			if (max_d == z_d) {
				dir = "Z";
				d = points[i].tool_z + (points[i + 1].tool_z - points[i].tool_z)*points[i].set_param / 100;
			}
			outf << "\t\t\tSetBrush " << brush_num << "\\" << dir << ":=" << d << ";\n";
			brush_num++;
		}
	}
	outf << "\t\tMoveAbsJ JointTarget_1,v1000,fine,tool0\\WObj:=wobj0;\n";
	outf << "\t\tDropWObj " << coor_name << ";\n";
	outf << "\tENDPROC\n";
	outf << "\n\tPROC main1()\n\t\t" << proc_name << ";\n\tENDPROC\n";
	outf << "ENDMODULE\n";
	outf.close();
}

//����켣������ļ�
void fangzhen::write_points_param()
{
	ofstream out(process_data_path+"points_param.txt");
	for (int i = 0; i<points.size(); i++) {
		out << points[i].sector1 << " ";
		out << points[i].sector2 << " ";
		out << points[i].atom << " ";
		out << points[i].voltage << " ";
		out << points[i].rot << " ";
		out << points[i].flow << " ";
		out << points[i].width << " ";
		out << points[i].effic << " ";
		out << points[i].content << " ";
		out << points[i].is_on << "\n";
	}
	out.close();
}

//�������
void fangzhen::import_tool(POINT_p &point) {
	UF_initialize();
	if (tool_tag != NULL)
	{
		UF_OBJ_delete_object(tool_tag);
	}
	
	//����ģ��
	double dest_csys[6];
	double dest_point[3];
	UF_import_part_modes_t modes;
	modes.layer_mode = 0;
	modes.group_mode = 1;
	modes.view_mode = 1;
	modes.cam_mode = FALSE;
 
	dest_csys[0] = point.matx[0];
	dest_csys[1] = point.matx[4];
	dest_csys[2] = point.matx[8];
	dest_csys[3] = point.matx[1];
	dest_csys[4] = point.matx[5];
	dest_csys[5] = point.matx[9];

	dest_point[0] = point.matx[3];
	dest_point[1] = point.matx[7];
	dest_point[2] = point.matx[11];

	UF_PART_import(tool_path, &modes, dest_csys, dest_point, 1.0, &tool_tag);
	UF_MODL_update();
	UF_terminate();

	string location_info = "";
	MatrixXd temp_t;
	if(robot->robot_type=="ABB")
		 temp_t= station.Tmw*point.T;
	else
		temp_t = station.Tmr*point.T;

	location_info += "X:" + to_string(temp_t(0,3)) + " ";
	location_info += "Y:" + to_string(temp_t(1, 3)) + " ";
	location_info += "Z:" + to_string(temp_t(2, 3)) + " ";

	uc1601((char*)location_info.c_str(), 0);//��ʾ����ֵ
}

void fangzhen::import_tool(double *trans) {
	UF_initialize();
	if (tool_tag != NULL)
	{
		UF_OBJ_delete_object(tool_tag);
	}

	//����ģ��						
	double dest_csys[6];
	double dest_point[3];
	UF_import_part_modes_t modes;
	modes.layer_mode = 0;
	modes.group_mode = 1;
	modes.view_mode = 1;
	modes.cam_mode = FALSE;

	dest_csys[0] = trans[0];
	dest_csys[1] = trans[4];
	dest_csys[2] = trans[8];
	dest_csys[3] = trans[1];
	dest_csys[4] = trans[5];
	dest_csys[5] = trans[9];

	dest_point[0] = trans[3];
	dest_point[1] = trans[7];
	dest_point[2] = trans[11];

	UF_PART_import(tool_path, &modes, dest_csys, dest_point, 1.0, &tool_tag);
	UF_MODL_update();
	UF_terminate();
}

//��ĳ�㴦���ߡ����ϡ�
void fangzhen::pose_up(POINT_p &point) {
	point.T = ini_pose[point.index - 1];
	point.T(2, 1) = 0;//����y��ˮƽ
	double leny = point.T.block(0, 1, 3, 1).norm();//��λ��
	point.T(0, 1) = point.T(0, 1)/ leny;
	point.T(1, 1)= point.T(1, 1)/ leny;

	/*double cost = 0;
	for (int i = 0; i < 3; ++i)
		cost += ini_pose[point.index - 1](i, 1)*point.T(i, 1);
	cost = cost / (leny*ini_pose[point.index - 1].block(0, 1, 3, 1).norm());*/

	//���¼���x��
	point.T(0, 0) = point.T(1, 1) * point.T(2,2) - point.T(1, 2) * point.T(2, 1);
	point.T(1, 0) = point.T(2, 1) * point.T(0, 2) - point.T(0, 1) * point.T(2, 2);
	point.T(2, 0) = point.T(0, 1) * point.T(1, 2) - point.T(0, 2) * point.T(1, 1);
	//���¼���y��
	point.T(0, 1) = point.T(1, 2)*point.T(2, 0) - point.T(2, 2)*point.T(1, 0);
	point.T(1, 1) = point.T(2, 2)*point.T(0, 0) - point.T(0, 2)*point.T(2, 0);
	point.T(2, 1) = point.T(0, 2)*point.T(1, 0) - point.T(1, 2)*point.T(0, 0);
	
	//�ж�x�᷽��
	if (point.T(2, 0) < 0) {
		point.T(0, 0) = -point.T(0, 0);
		point.T(1, 0) = -point.T(1, 0);
		point.T(2, 0) = -point.T(2, 0);

		point.T(0, 1) = -point.T(0, 1);
		point.T(1, 1) = -point.T(1, 1);
		point.T(2, 1) = -point.T(2, 1);
	}
	
	point.cal_matx();
}

//���켣��ת������������ϵ(ABB)�����������ϵ��FANUC)
void fangzhen::trans_to_worksys() {
	if (robot->robot_type == "ABB") {
		for (int i = 0; i < points.size(); i++)
		{
			points[i].T = station.Tmw*points[i].T;
			points[i].cal_matx();
		}
	}
	else {
		
		for (int i = 0; i < points.size(); i++)
		{
			points[i].T = station.Tmr*points[i].T;
			points[i].cal_matx();
		}
	}
	
}

//��ʾ������
void fangzhen::show_robot(POINT_p &point) {
	int index = point_match[point.index - 1];
	POINT_p dp = dense_points[index];
	double joint_value[6];
	if (index >= joint_data.size()) return;
	for (int i = 0; i < 6; i++)
		joint_value[i] = joint_data.at(index)[i]*pi/180;
	robot->c_to_p(joint_value);
	MatrixXd Ter = robot->FK(joint_value);
	MatrixXd Trm = dp.T*inv_T(station.Tte)*inv_T(Ter);
	import_robot(joint_value, Trm);
	POINT_p temp=dp;
	MatrixXd mtcp(4, 4);
	mtcp.setIdentity();
	mtcp(2, 3) = -station.tcp_d;
	temp.T *= mtcp;
	temp.cal_matx();
	import_tool(temp);
}

//���������part
void fangzhen::import_part(int part_no, MatrixXd T) {

	if (robot_parts_tag[part_no] != NULL)
		UF_OBJ_delete_object(robot_parts_tag[part_no]);
	double dest_csys[6];
	double dest_point[3];
	UF_import_part_modes_t modes;
	modes.layer_mode = 0;
	modes.group_mode = 1;
	modes.view_mode = 1;
	modes.cam_mode = FALSE;

	dest_csys[0] = T(0, 0);
	dest_csys[1] = T(1, 0);
	dest_csys[2] = T(2, 0);
	dest_csys[3] = T(0, 1);
	dest_csys[4] = T(1, 1);
	dest_csys[5] = T(2, 1);

	dest_point[0] = T(0, 3);
	dest_point[1] = T(1, 3);
	dest_point[2] = T(2, 3);

	UF_PART_import(part_model_path[part_no].c_str(), &modes, dest_csys, dest_point, 1.0, &robot_parts_tag[part_no]);
	UF_MODL_update();
}

//���������
void fangzhen::import_robot(double* joints, MatrixXd base_csys) {
	UF_initialize();
	for (int i = 0; i < 5; i++)
		robot->dh[i][0] = joints[i];
	robot->dh[5][0] = -joints[4];
	robot->dh[6][0] = joints[5];

	import_part(0, base_csys);
	
	MatrixXd temp(4, 4);
	temp.setIdentity();
	temp.block(0, 0, 3, 3) = rotz(joints[0]);
	MatrixXd Td = base_csys*temp;
	import_part(1, Td);
	
	Td = base_csys;
	Td = Td*robot->T(0)*robot->T(1);
	import_part(2, Td);
	
	Td = Td*robot->T(2);
	import_part(3, Td);
	
	Td = Td*robot->T(3);
	import_part(4, Td);
	
	Td = Td*robot->T(4);
	import_part(5, Td);
	
	Td = Td*robot->T(5);
	import_part(6, Td);
	
	Td = Td*robot->T(6);
	import_part(7, Td);
	
	UF_terminate();
}

//�Ż���̬��������
int fangzhen::helper(double* s, double &best_jj, double jj, int &best_stat) {
	int cur_stat=0;
	if (s == 0) { 
		cur_stat = 16;
	}
	else {
		robot->p_to_c(s);
		robot->solution_optimize_1(s);
		vector<int> limit_no = robot->is_limit(s);
		delete s;
		cur_stat = limit_no.size();
		for (int j = 0; j < limit_no.size(); ++j) {
			if (limit_no[j] < 4) cur_stat += 2;
			else cur_stat += 1;
		}
		if (cur_stat == 0) {
			best_jj = jj;
			best_stat = cur_stat;
			//uc1601((char*)to_string(best_stat).c_str(), 1);
			return 0;
		}
		else {
			if (cur_stat < best_stat) {
				best_stat = cur_stat;
				best_jj = jj;
			}
		}

	}
	//uc1601((char*)to_string(best_stat).c_str(), 1);
	return 1;
}

//�Ż���̬
/*��̬״̬����Ϊ
1. �����������λ��0
2. ��λ�����㷽��Ϊ ������λȨ��+��λ���� 
	������λȨ��Ϊ��1~3:2  4~6:1
3.����⣺16
*/
bool fangzhen::optimize_pose() {
	
	assert(check_pose_result.size() == dense_points.size());
	assert(data_r.size() == dense_points.size());
	assert(limit_index.size() == limit_dense_index.size());
	/*for (int i = 0; i < check_pose_result.size(); ++i)
		if (!check_pose_result[i].empty()) {
			dense_index = i;
			if (check_pose_result[i][0] == -1)
				prev_stat = 16;
			else {
				prev_stat += check_pose_result[i].size();
				for (int j = 0; j < check_pose_result[i].size(); ++j) {
					if (check_pose_result[i][j] < 4) prev_stat += 2;
					else prev_stat += 1;
				}
			}
			break;
		}*/
	vector<int> lst = list_box0->GetSelectedItems();
	int index; //���Ż��켣��index
	int dense_index; //���Ż��ܼ���index
	if (lst.empty()) {
		index = limit_index[0];
		dense_index = limit_dense_index[0];
	}
	else {
		index = limit_index[lst[0]];
		dense_index = limit_dense_index[lst[0]];
	}
	
	int prev_stat = 0; //���µ�ǰ�ܼ���㲻�ɴ�/��λ״̬
	if (check_pose_result[dense_index][0] == -1)
		prev_stat = 16;
	else {
		prev_stat += check_pose_result[dense_index].size();
		for (int j = 0; j < check_pose_result[dense_index].size(); ++j) {
			if (check_pose_result[dense_index][j] < 4) prev_stat += 2;
			else prev_stat += 1;
		}
	}
	//uc1601((char*)to_string(prev_stat).c_str(), 1);
	
	import_tool(points[index]); //�������ƶ������Ż��켣��
	
	//��ǰ�켣���Ӧ��ʵʱλ��
	MatrixXd Tte = station.Tte;
	POINT_p temp = dense_points[dense_index];
	temp.T = data_r[dense_index]*Tte;  // Ter*Tte=Ttr (data_r:Ter)

	//�ҵ�����һ�켣��x��н���С��λ��
	POINT_p temp1 = points[index]; //��ǰ�켣��
	
	if (index > 0) {
		double jj = temp1.x_jj(points[index - 1]);
		
		temp1.T.block(0, 0, 3, 3) *= rotz(jj);//����ת
		double jj1 = temp1.x_jj(points[index - 1]);//��н�
		
		temp1.T.block(0, 0, 3, 3) *= rotz(-2 * jj);//����ת
		double jj2 = temp1.x_jj(points[index - 1]);//
		
		if (jj2 > jj1) temp.T.block(0, 0, 3, 3) *= rotz(jj);
		else temp.T.block(0, 0, 3, 3) *= rotz(-jj);
	}
	temp.cal_matx();
		
	temp1 = points[index];
	//����������̬
	int count = 0;
	double step = 5 * pi / 180.0; //����
	double range[2] = { -90 * pi / 180,90 * pi / 180 }; //���ڷ�Χ
	double rot_j1,rot_j2;
	MatrixXd Td;
	double* s;
	
	double last_thetas[6];//��һ�ܼ������
	for (int i = 0; i < 6; ++i)
		last_thetas[i] = joint_data[dense_index - 1][i] * pi / 180;
	robot->c_to_p(last_thetas);

	double best_jj = 2*pi;
	int cur_stat,best_stat=prev_stat;
	while (1) {
		rot_j1 = step*count;
		rot_j2 = -step*count;
		/*uc1601((char*)to_string(step).c_str(), 1);
		uc1601((char*)to_string(count).c_str(), 1);*/
		if (rot_j1 > range[1] && rot_j2 < range[0])
			break;
		if (rot_j1 <= range[1]) {
			Td = temp.T;
			Td.block(0, 0, 3, 3) *= rotz(rot_j1);
			Td = Td*inv_T(station.Tte);
			s=robot->inv_solution(Td, last_thetas);
			temp1.T.block(0, 0, 3, 3) *= rotz(rot_j1);
			temp1.cal_matx();
			import_tool(temp1);
			if (helper(s, best_jj, rot_j1, best_stat) == 0)
				break;
			temp1.T.block(0, 0, 3, 3) *= rotz(-rot_j1);
			temp1.cal_matx();
		}
		if (rot_j2 >= range[0]) {
			Td = temp.T;
			Td.block(0, 0, 3, 3) *= rotz(rot_j2);
			Td = Td*inv_T(station.Tte);
			s = robot->inv_solution(Td, last_thetas);
			temp1.T.block(0, 0, 3, 3) *= rotz(rot_j2);
			temp1.cal_matx();
			import_tool(temp1);
			if (helper(s, best_jj, rot_j2, best_stat) == 0)
				break;
			temp1.T.block(0, 0, 3, 3) *= rotz(-rot_j2);
			temp1.cal_matx();
		}
		++count;
	}

	if (best_stat == prev_stat) {
		import_tool(points[index]);
		cur_point = &points[index];
		uc1601("δ�ҵ�������̬", 1);
		return false;
	}
	else {
		points[index].T.block(0, 0, 3, 3) *= rotz(best_jj);
		points[index].cal_matx();
		import_tool(points[index]);
		cur_point = &points[index];
		uc1601("���ҵ�������̬", 1);
		//uc1601((char*)to_string(best_jj*180/pi).c_str(), 1);
		return true;
	} 
}

//ˢ�����ӵ����
void fangzhen::update_connect_point() {
	//��ȡ����
	string rule_RB_bell = enum_RB_BELL_ruleType->ValueAsString().GetLocaleText();
	string rule_RB_gun = enum_RB_GUN_rule->ValueAsString().GetLocaleText();
	string rule_FB_gun = enum_FB_GUN_rule->ValueAsString().GetLocaleText();


	//tabPage4->Focus();//�л�����ǹ����
	if (rule_RB_gun.compare("��1/3") == 0) {
		param_1[0] = integer_RB_GUN_jointPoint1X->Value();
		param_1[1] = integer_RB_GUN_jointPoint1Y->Value();
		param_1[2] = integer_RB_GUN_jointPoint1Z->Value();
		param_1[3] = integer_RB_GUN_jointPoint1A->Value();
		param_1[4] = integer_RB_GUN_jointPoint1B->Value();
		param_1[5] = integer_RB_GUN_jointPoint1C->Value();

		param_2[0] = integer_RB_GUN_jointPoint2X->Value();
		param_2[1] = integer_RB_GUN_jointPoint2Y->Value();
		param_2[2] = integer_RB_GUN_jointPoint2Z->Value();
		param_2[3] = integer_RB_GUN_jointPoint2A->Value();
		param_2[4] = integer_RB_GUN_jointPoint2B->Value();
		param_2[5] = integer_RB_GUN_jointPoint2C->Value();

		param_3_1[0] = integer_RB_GUN_jointPoint3X->Value();
		param_3_1[1] = integer_RB_GUN_jointPoint3Y->Value();
		param_3_1[2] = integer_RB_GUN_jointPoint3Z->Value();
		param_3_1[3] = integer_RB_GUN_jointPoint3A->Value();
		param_3_1[4] = integer_RB_GUN_jointPoint3B->Value();
		param_3_1[5] = integer_RB_GUN_jointPoint3C->Value();

		param_4[0] = integer_RB_GUN_jointPoint4X->Value();
		param_4[1] = integer_RB_GUN_jointPoint4Y->Value();
		param_4[2] = integer_RB_GUN_jointPoint4Z->Value();
		param_4[3] = integer_RB_GUN_jointPoint4A->Value();
		param_4[4] = integer_RB_GUN_jointPoint4B->Value();
		param_4[5] = integer_RB_GUN_jointPoint4C->Value();

		param_5[0] = integer_RB_GUN_jointPoint5X->Value();
		param_5[1] = integer_RB_GUN_jointPoint5Y->Value();
		param_5[2] = integer_RB_GUN_jointPoint5Z->Value();
		param_5[3] = integer_RB_GUN_jointPoint5A->Value();
		param_5[4] = integer_RB_GUN_jointPoint5B->Value();
		param_5[5] = integer_RB_GUN_jointPoint5C->Value();

	}
	if (rule_RB_gun.compare("��2") == 0) {
			param_1[0] = integer_RB_GUN_jointPoint1X->Value();
			param_1[1] = integer_RB_GUN_jointPoint1Y->Value();
			param_1[2] = integer_RB_GUN_jointPoint1Z->Value();
			param_1[3] = integer_RB_GUN_jointPoint1A->Value();
			param_1[4] = integer_RB_GUN_jointPoint1B->Value();
			param_1[5] = integer_RB_GUN_jointPoint1C->Value();

			param_2[0] = integer_RB_GUN_jointPoint2X->Value();
			param_2[1] = integer_RB_GUN_jointPoint2Y->Value();
			param_2[2] = integer_RB_GUN_jointPoint2Z->Value();
			param_2[3] = integer_RB_GUN_jointPoint2A->Value();
			param_2[4] = integer_RB_GUN_jointPoint2B->Value();
			param_2[5] = integer_RB_GUN_jointPoint2C->Value();

			param_3_2[0] = integer_RB_GUN_jointPoint3X->Value();
			param_3_2[1] = integer_RB_GUN_jointPoint3Y->Value();
			param_3_2[2] = integer_RB_GUN_jointPoint3Z->Value();
			param_3_2[3] = integer_RB_GUN_jointPoint3A->Value();
			param_3_2[4] = integer_RB_GUN_jointPoint3B->Value();
			param_3_2[5] = integer_RB_GUN_jointPoint3C->Value();

			param_4[0] = integer_RB_GUN_jointPoint4X->Value();
			param_4[1] = integer_RB_GUN_jointPoint4Y->Value();
			param_4[2] = integer_RB_GUN_jointPoint4Z->Value();
			param_4[3] = integer_RB_GUN_jointPoint4A->Value();
			param_4[4] = integer_RB_GUN_jointPoint4B->Value();
			param_4[5] = integer_RB_GUN_jointPoint4C->Value();

			param_5[0] = integer_RB_GUN_jointPoint5X->Value();
			param_5[1] = integer_RB_GUN_jointPoint5Y->Value();
			param_5[2] = integer_RB_GUN_jointPoint5Z->Value();
			param_5[3] = integer_RB_GUN_jointPoint5A->Value();
			param_5[4] = integer_RB_GUN_jointPoint5B->Value();
			param_5[5] = integer_RB_GUN_jointPoint5C->Value();

		}
	if (rule_RB_gun.compare("��ֱ��Ϳ") == 0) {
		param_1[0] = integer_RB_GUN_jointPoint1X->Value();
		param_1[1] = integer_RB_GUN_jointPoint1Y->Value();
		param_1[2] = integer_RB_GUN_jointPoint1Z->Value();
		param_1[3] = integer_RB_GUN_jointPoint1A->Value();
		param_1[4] = integer_RB_GUN_jointPoint1B->Value();
		param_1[5] = integer_RB_GUN_jointPoint1C->Value();

		param_2[0] = integer_RB_GUN_jointPoint2X->Value();
		param_2[1] = integer_RB_GUN_jointPoint2Y->Value();
		param_2[2] = integer_RB_GUN_jointPoint2Z->Value();
		param_2[3] = integer_RB_GUN_jointPoint2A->Value();
		param_2[4] = integer_RB_GUN_jointPoint2B->Value();
		param_2[5] = integer_RB_GUN_jointPoint2C->Value();

		param_3_2[0] = integer_RB_GUN_jointPoint3X->Value();
		param_3_2[1] = integer_RB_GUN_jointPoint3Y->Value();
		param_3_2[2] = integer_RB_GUN_jointPoint3Z->Value();
		param_3_2[3] = integer_RB_GUN_jointPoint3A->Value();
		param_3_2[4] = integer_RB_GUN_jointPoint3B->Value();
		param_3_2[5] = integer_RB_GUN_jointPoint3C->Value();

		param_4[0] = integer_RB_GUN_jointPoint4X->Value();
		param_4[1] = integer_RB_GUN_jointPoint4Y->Value();
		param_4[2] = integer_RB_GUN_jointPoint4Z->Value();
		param_4[3] = integer_RB_GUN_jointPoint4A->Value();
		param_4[4] = integer_RB_GUN_jointPoint4B->Value();
		param_4[5] = integer_RB_GUN_jointPoint4C->Value();

		param_5[0] = integer_RB_GUN_jointPoint5X->Value();
		param_5[1] = integer_RB_GUN_jointPoint5Y->Value();
		param_5[2] = integer_RB_GUN_jointPoint5Z->Value();
		param_5[3] = integer_RB_GUN_jointPoint5A->Value();
		param_5[4] = integer_RB_GUN_jointPoint5B->Value();
		param_5[5] = integer_RB_GUN_jointPoint5C->Value();

	}


	//tabPage5->Focus();//�л�����������
	if (rule_RB_bell.compare("�е���ǹ") == 0) {
		/*param_negtive_1[0] = integer_RB_BELL_jointPoint0X1->Value();
		param_negtive_1[1] = integer_RB_BELL_jointPoint0Y1->Value();
		param_negtive_1[2] = integer_RB_BELL_jointPoint0Z1->Value();
		param_negtive_1[3] = integer_RB_BELL_jointPoint0A1->Value();
		param_negtive_1[4] = integer_RB_BELL_jointPoint0B1->Value();
		param_negtive_1[5] = integer_RB_BELL_jointPoint0C1->Value();*/

		param_negtive_3[0] = integer_RB_BELL_jointPoint2X->Value();
		param_negtive_3[1] = integer_RB_BELL_jointPoint2Y->Value();
		param_negtive_3[2] = integer_RB_BELL_jointPoint2Z->Value();
		param_negtive_3[3] = integer_RB_BELL_jointPoint2A->Value();
		param_negtive_3[4] = integer_RB_BELL_jointPoint2B->Value();
		param_negtive_3[5] = integer_RB_BELL_jointPoint2C->Value();

	}
	if (rule_RB_bell.compare("���е���ǹ") == 0) {
		/*param_negtive_1[0] = integer_RB_BELL_jointPoint0X1->Value();
		param_negtive_1[1] = integer_RB_BELL_jointPoint0Y1->Value();
		param_negtive_1[2] = integer_RB_BELL_jointPoint0Z1->Value();
		param_negtive_1[3] = integer_RB_BELL_jointPoint0A1->Value();
		param_negtive_1[4] = integer_RB_BELL_jointPoint0B1->Value();
		param_negtive_1[5] = integer_RB_BELL_jointPoint0C1->Value();*/

		param_negtive_2[0] = integer_RB_BELL_jointPoint1X->Value();
		param_negtive_2[1] = integer_RB_BELL_jointPoint1Y->Value();
		param_negtive_2[2] = integer_RB_BELL_jointPoint1Z->Value();
		param_negtive_2[3] = integer_RB_BELL_jointPoint1A->Value();
		param_negtive_2[4] = integer_RB_BELL_jointPoint1B->Value();
		param_negtive_2[5] = integer_RB_BELL_jointPoint1C->Value();

		param_negtive_3[0] = integer_RB_BELL_jointPoint2X->Value();
		param_negtive_3[1] = integer_RB_BELL_jointPoint2Y->Value();
		param_negtive_3[2] = integer_RB_BELL_jointPoint2Z->Value();
		param_negtive_3[3] = integer_RB_BELL_jointPoint2A->Value();
		param_negtive_3[4] = integer_RB_BELL_jointPoint2B->Value();
		param_negtive_3[5] = integer_RB_BELL_jointPoint2C->Value();

		param_negtive_4[0] = integer_RB_BELL_jointPoint3X->Value();
		param_negtive_4[1] = integer_RB_BELL_jointPoint3Y->Value();
		param_negtive_4[2] = integer_RB_BELL_jointPoint3Z->Value();
		param_negtive_4[3] = integer_RB_BELL_jointPoint3A->Value();
		param_negtive_4[4] = integer_RB_BELL_jointPoint3B->Value();
		param_negtive_4[5] = integer_RB_BELL_jointPoint3C->Value();
	}


	if (rule_FB_gun.compare("��դ") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();

		param_102[0] = integer_jointPoint1X->Value();
		param_102[1] = integer_jointPoint1Y->Value();
		param_102[2] = integer_jointPoint1Z->Value();
		param_102[3] = integer_jointPoint1A->Value();
		param_102[4] = integer_jointPoint1B->Value();
		param_102[5] = integer_jointPoint1C->Value();

		param_103[0] = integer_jointPoint2X->Value();
		param_103[1] = integer_jointPoint2Y->Value();
		param_103[2] = integer_jointPoint2Z->Value();
		param_103[3] = integer_jointPoint2A->Value();
		param_103[4] = integer_jointPoint2B->Value();
		param_103[5] = integer_jointPoint2C->Value();

		param_104[0] = integer_jointPoint3X->Value();
		param_104[1] = integer_jointPoint3Y->Value();
		param_104[2] = integer_jointPoint3Z->Value();
		param_104[3] = integer_jointPoint3A->Value();
		param_104[4] = integer_jointPoint3B->Value();
		param_104[5] = integer_jointPoint3C->Value();

		param_105[0] = integer_jointPoint4X->Value();
		param_105[1] = integer_jointPoint4Y->Value();
		param_105[2] = integer_jointPoint4Z->Value();
		param_105[3] = integer_jointPoint4A->Value();
		param_105[4] = integer_jointPoint4B->Value();
		param_105[5] = integer_jointPoint4C->Value();
	}
	if (rule_FB_gun.compare("������ṹ") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();

		param_202[0] = integer_jointPoint1X->Value();
		param_202[1] = integer_jointPoint1Y->Value();
		param_202[2] = integer_jointPoint1Z->Value();
		param_202[3] = integer_jointPoint1A->Value();
		param_202[4] = integer_jointPoint1B->Value();
		param_202[5] = integer_jointPoint1C->Value();

		param_203[0] = integer_jointPoint2X->Value();
		param_203[1] = integer_jointPoint2Y->Value();
		param_203[2] = integer_jointPoint2Z->Value();
		param_203[3] = integer_jointPoint2A->Value();
		param_203[4] = integer_jointPoint2B->Value();
		param_203[5] = integer_jointPoint2C->Value();

		param_204[0] = integer_jointPoint3X->Value();
		param_204[1] = integer_jointPoint3Y->Value();
		param_204[2] = integer_jointPoint3Z->Value();
		param_204[3] = integer_jointPoint3A->Value();
		param_204[4] = integer_jointPoint3B->Value();
		param_204[5] = integer_jointPoint3C->Value();

		param_205[0] = integer_jointPoint4X->Value();
		param_205[1] = integer_jointPoint4Y->Value();
		param_205[2] = integer_jointPoint4Z->Value();
		param_205[3] = integer_jointPoint4A->Value();
		param_205[4] = integer_jointPoint4B->Value();
		param_205[5] = integer_jointPoint4C->Value();
	}
	if (rule_FB_gun.compare("��դ-�ƿ�") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();

		param_302[0] = integer_jointPoint1X->Value();
		param_302[1] = integer_jointPoint1Y->Value();
		param_302[2] = integer_jointPoint1Z->Value();
		param_302[3] = integer_jointPoint1A->Value();
		param_302[4] = integer_jointPoint1B->Value();
		param_302[5] = integer_jointPoint1C->Value();

		param_303[0] = integer_jointPoint2X->Value();
		param_303[1] = integer_jointPoint2Y->Value();
		param_303[2] = integer_jointPoint2Z->Value();
		param_303[3] = integer_jointPoint2A->Value();
		param_303[4] = integer_jointPoint2B->Value();
		param_303[5] = integer_jointPoint2C->Value();

		param_304[0] = integer_jointPoint3X->Value();
		param_304[1] = integer_jointPoint3Y->Value();
		param_304[2] = integer_jointPoint3Z->Value();
		param_304[3] = integer_jointPoint3A->Value();
		param_304[4] = integer_jointPoint3B->Value();
		param_304[5] = integer_jointPoint3C->Value();

		param_305[0] = integer_jointPoint4X->Value();
		param_305[1] = integer_jointPoint4Y->Value();
		param_305[2] = integer_jointPoint4Z->Value();
		param_305[3] = integer_jointPoint4A->Value();
		param_305[4] = integer_jointPoint4B->Value();
		param_305[5] = integer_jointPoint4C->Value();
	}
	if (rule_FB_gun.compare("��դ-�ƿ�-�м�Ͽ�") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();

		param_402[0] = integer_jointPoint1X->Value();
		param_402[1] = integer_jointPoint1Y->Value();
		param_402[2] = integer_jointPoint1Z->Value();
		param_402[3] = integer_jointPoint1A->Value();
		param_402[4] = integer_jointPoint1B->Value();
		param_402[5] = integer_jointPoint1C->Value();

		param_403[0] = integer_jointPoint2X->Value();
		param_403[1] = integer_jointPoint2Y->Value();
		param_403[2] = integer_jointPoint2Z->Value();
		param_403[3] = integer_jointPoint2A->Value();
		param_403[4] = integer_jointPoint2B->Value();
		param_403[5] = integer_jointPoint2C->Value();

		param_404[0] = integer_jointPoint3X->Value();
		param_404[1] = integer_jointPoint3Y->Value();
		param_404[2] = integer_jointPoint3Z->Value();
		param_404[3] = integer_jointPoint3A->Value();
		param_404[4] = integer_jointPoint3B->Value();
		param_404[5] = integer_jointPoint3C->Value();

		param_405[0] = integer_jointPoint4X->Value();
		param_405[1] = integer_jointPoint4Y->Value();
		param_405[2] = integer_jointPoint4Z->Value();
		param_405[3] = integer_jointPoint4A->Value();
		param_405[4] = integer_jointPoint4B->Value();
		param_405[5] = integer_jointPoint4C->Value();
	}
	if (rule_FB_gun.compare("�����-�ƿ�") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();

		param_502[0] = integer_jointPoint1X->Value();
		param_502[1] = integer_jointPoint1Y->Value();
		param_502[2] = integer_jointPoint1Z->Value();
		param_502[3] = integer_jointPoint1A->Value();
		param_502[4] = integer_jointPoint1B->Value();
		param_502[5] = integer_jointPoint1C->Value();

		param_503[0] = integer_jointPoint2X->Value();
		param_503[1] = integer_jointPoint2Y->Value();
		param_503[2] = integer_jointPoint2Z->Value();
		param_503[3] = integer_jointPoint2A->Value();
		param_503[4] = integer_jointPoint2B->Value();
		param_503[5] = integer_jointPoint2C->Value();

		param_504[0] = integer_jointPoint3X->Value();
		param_504[1] = integer_jointPoint3Y->Value();
		param_504[2] = integer_jointPoint3Z->Value();
		param_504[3] = integer_jointPoint3A->Value();
		param_504[4] = integer_jointPoint3B->Value();
		param_504[5] = integer_jointPoint3C->Value();

		param_505[0] = integer_jointPoint4X->Value();
		param_505[1] = integer_jointPoint4Y->Value();
		param_505[2] = integer_jointPoint4Z->Value();
		param_505[3] = integer_jointPoint4A->Value();
		param_505[4] = integer_jointPoint4B->Value();
		param_505[5] = integer_jointPoint4C->Value();
	}
	if (rule_FB_gun.compare("�����-��դ") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();

		param_602[0] = integer_jointPoint1X->Value();
		param_602[1] = integer_jointPoint1Y->Value();
		param_602[2] = integer_jointPoint1Z->Value();
		param_602[3] = integer_jointPoint1A->Value();
		param_602[4] = integer_jointPoint1B->Value();
		param_602[5] = integer_jointPoint1C->Value();

		param_603[0] = integer_jointPoint2X->Value();
		param_603[1] = integer_jointPoint2Y->Value();
		param_603[2] = integer_jointPoint2Z->Value();
		param_603[3] = integer_jointPoint2A->Value();
		param_603[4] = integer_jointPoint2B->Value();
		param_603[5] = integer_jointPoint2C->Value();

		param_604[0] = integer_jointPoint3X->Value();
		param_604[1] = integer_jointPoint3Y->Value();
		param_604[2] = integer_jointPoint3Z->Value();
		param_604[3] = integer_jointPoint3A->Value();
		param_604[4] = integer_jointPoint3B->Value();
		param_604[5] = integer_jointPoint3C->Value();

		param_605[0] = integer_jointPoint4X->Value();
		param_605[1] = integer_jointPoint4Y->Value();
		param_605[2] = integer_jointPoint4Z->Value();
		param_605[3] = integer_jointPoint4A->Value();
		param_605[4] = integer_jointPoint4B->Value();
		param_605[5] = integer_jointPoint4C->Value();
	}
	if (rule_FB_gun.compare("�ƿ�") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();

		param_702[0] = integer_jointPoint1X->Value();
		param_702[1] = integer_jointPoint1Y->Value();
		param_702[2] = integer_jointPoint1Z->Value();
		param_702[3] = integer_jointPoint1A->Value();
		param_702[4] = integer_jointPoint1B->Value();
		param_702[5] = integer_jointPoint1C->Value();

		param_703[0] = integer_jointPoint2X->Value();
		param_703[1] = integer_jointPoint2Y->Value();
		param_703[2] = integer_jointPoint2Z->Value();
		param_703[3] = integer_jointPoint2A->Value();
		param_703[4] = integer_jointPoint2B->Value();
		param_703[5] = integer_jointPoint2C->Value();

		param_704[0] = integer_jointPoint3X->Value();
		param_704[1] = integer_jointPoint3Y->Value();
		param_704[2] = integer_jointPoint3Z->Value();
		param_704[3] = integer_jointPoint3A->Value();
		param_704[4] = integer_jointPoint3B->Value();
		param_704[5] = integer_jointPoint3C->Value();

		param_705[0] = integer_jointPoint4X->Value();
		param_705[1] = integer_jointPoint4Y->Value();
		param_705[2] = integer_jointPoint4Z->Value();
		param_705[3] = integer_jointPoint4A->Value();
		param_705[4] = integer_jointPoint4B->Value();
		param_705[5] = integer_jointPoint4C->Value();
	}
	//������ṹ - ��ֱ��Ϳ
	//����� - ��դ - ��ֱ��Ϳ
	//��դ - ��ֱ��Ϳ
	if (rule_FB_gun.compare("������ṹ-��ֱ��Ϳ") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();
	


		param_202[0] = integer_jointPoint1X->Value();
		param_202[1] = integer_jointPoint1Y->Value();
		param_202[2] = integer_jointPoint1Z->Value();
		param_202[3] = integer_jointPoint1A->Value();
		param_202[4] = integer_jointPoint1B->Value();
		param_202[5] = integer_jointPoint1C->Value();

		param_203[0] = integer_jointPoint2X->Value();
		param_203[1] = integer_jointPoint2Y->Value();
		param_203[2] = integer_jointPoint2Z->Value();
		param_203[3] = integer_jointPoint2A->Value();
		param_203[4] = integer_jointPoint2B->Value();
		param_203[5] = integer_jointPoint2C->Value();

		param_204[0] = integer_jointPoint3X->Value();
		param_204[1] = integer_jointPoint3Y->Value();
		param_204[2] = integer_jointPoint3Z->Value();
		param_204[3] = integer_jointPoint3A->Value();
		param_204[4] = integer_jointPoint3B->Value();
		param_204[5] = integer_jointPoint3C->Value();

		param_205[0] = integer_jointPoint4X->Value();
		param_205[1] = integer_jointPoint4Y->Value();
		param_205[2] = integer_jointPoint4Z->Value();
		param_205[3] = integer_jointPoint4A->Value();
		param_205[4] = integer_jointPoint4B->Value();
		param_205[5] = integer_jointPoint4C->Value();

		
	}
	if (rule_FB_gun.compare("�����-��դ-��ֱ��Ϳ") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();

		param_602[0] = integer_jointPoint1X->Value();
		param_602[1] = integer_jointPoint1Y->Value();
		param_602[2] = integer_jointPoint1Z->Value();
		param_602[3] = integer_jointPoint1A->Value();
		param_602[4] = integer_jointPoint1B->Value();
		param_602[5] = integer_jointPoint1C->Value();

		param_603[0] = integer_jointPoint2X->Value();
		param_603[1] = integer_jointPoint2Y->Value();
		param_603[2] = integer_jointPoint2Z->Value();
		param_603[3] = integer_jointPoint2A->Value();
		param_603[4] = integer_jointPoint2B->Value();
		param_603[5] = integer_jointPoint2C->Value();

		param_604[0] = integer_jointPoint3X->Value();
		param_604[1] = integer_jointPoint3Y->Value();
		param_604[2] = integer_jointPoint3Z->Value();
		param_604[3] = integer_jointPoint3A->Value();
		param_604[4] = integer_jointPoint3B->Value();
		param_604[5] = integer_jointPoint3C->Value();

		param_605[0] = integer_jointPoint4X->Value();
		param_605[1] = integer_jointPoint4Y->Value();
		param_605[2] = integer_jointPoint4Z->Value();
		param_605[3] = integer_jointPoint4A->Value();
		param_605[4] = integer_jointPoint4B->Value();
		param_605[5] = integer_jointPoint4C->Value();


	}
	if (rule_FB_gun.compare("��դ-��ֱ��Ϳ") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();

		param_102[0] = integer_jointPoint1X->Value();
		param_102[1] = integer_jointPoint1Y->Value();
		param_102[2] = integer_jointPoint1Z->Value();
		param_102[3] = integer_jointPoint1A->Value();
		param_102[4] = integer_jointPoint1B->Value();
		param_102[5] = integer_jointPoint1C->Value();

		param_103[0] = integer_jointPoint2X->Value();
		param_103[1] = integer_jointPoint2Y->Value();
		param_103[2] = integer_jointPoint2Z->Value();
		param_103[3] = integer_jointPoint2A->Value();
		param_103[4] = integer_jointPoint2B->Value();
		param_103[5] = integer_jointPoint2C->Value();

		param_104[0] = integer_jointPoint3X->Value();
		param_104[1] = integer_jointPoint3Y->Value();
		param_104[2] = integer_jointPoint3Z->Value();
		param_604[3] = integer_jointPoint3A->Value();
		param_104[4] = integer_jointPoint3B->Value();
		param_104[5] = integer_jointPoint3C->Value();

		param_105[0] = integer_jointPoint4X->Value();
		param_105[1] = integer_jointPoint4Y->Value();
		param_105[2] = integer_jointPoint4Z->Value();
		param_105[3] = integer_jointPoint4A->Value();
		param_105[4] = integer_jointPoint4B->Value();
		param_105[5] = integer_jointPoint4C->Value();


	}

	
	//ɾ�����
	UF_initialize();

	if (tool_tag != NULL) {
		UF_OBJ_delete_object(tool_tag);
	}

	//����ɾ���켣��
	int count = points.size();
	tag_t* points_clean = new tag_t[count];
	for (int i = 0; i < points.size(); i++)
	{
		points_clean[i] = tag_points[i];
	}
	UF_OBJ_delete_array_of_objects(count, points_clean, 0);
	delete[] points_clean;
	tag_points.clear();

	//����ɾ������
	if (!tag_group_point.empty()) {
		for (int i = 0; i < dense_points.size(); i++)
		{
			count = tag_group_point[i].size();
			if (count > 0) {
				tag_t* points_clean = new tag_t[count];
				for (int j = 0; j < group_points[i].size(); j++)
				{
					points_clean[j] = tag_group_point[i][j];
				}
				UF_OBJ_delete_array_of_objects(count, points_clean, 0);
				delete[] points_clean;
			}
		}
	}
	tag_group_point.clear();

	//ɾ���켣����
	for (int i = 0; i < tag_line.size(); i++)
	{
		if (tag_line[i] != NULL)
		{
			UF_OBJ_delete_object(tag_line[i]);
		}
	}
	tag_line.clear();

	//ɾ���ܼ�������
	for (int i = 0; i < tag_line_dense_points.size(); i++)
	{
		if (tag_line_dense_points[i] != NULL)
		{
			UF_OBJ_delete_object(tag_line_dense_points[i]);
		}
	}
	tag_line_dense_points.clear();

	//��չ켣��
	points.clear();
	


	load_param();//���ز���
	uc1601("�����������", 0);
	initialize_connectPoints();
	uc1601("���ӵ�����������", 0);
	initialize_station();	//��ʼ������վ����
	uc1601("��ʼ������վ�������", 0);
	read_points();	//��ȡ�켣��͵���
	uc1601("��ȡ�켣��͵������", 0);
	read_points_param();//��ȡ�켣�����
	uc1601("��ȡ�켣��������", 0);
	create_points();//�����켣��
	uc1601("�����켣�����", 0);
	uc1601("ˢ�¹켣�����", 1);
	

}

//�ֶ��Ӽ���
void fangzhen::add_remove_points() {

	//ѡ��켣����ʼ�㣬��ֹ�㰴ť
	
	//��ʾ���ư�ť

	//ѡ����ư�ť

	//���ɰ�ť

}

int fangzhen::update_cb(NXOpen::BlockStyler::UIBlock* block)
{
	try
	{
		//ָ��һ���켣��
		if (block == point01)
		{
			//��ȡ����ֵ
			double x = point01->Point().X;
			double y = point01->Point().Y;
			double z = point01->Point().Z;

			string key = create_key(x, y, z);
			//���ҹ켣��
			if (points_map.find(key) != points_map.end())
				cur_point = points_map[key];
			else {
				uc1601("δѡ�й켣��", 0);
				return 0;
			}
			import_tool(*cur_point);//����ģ��
			
			//��ʾѡ�еĵ������			
			//���ղ���
			integer02->SetValue(cur_point->set_param);
			double028->SetValue(station.start_distance);
			double09->SetValue(cur_point->sector1);
			double010->SetValue(cur_point->sector2);
			double011->SetValue(cur_point->atom);
			double012->SetValue(cur_point->voltage);
			double018->SetValue(cur_point->rot);
			double08->SetValue(cur_point->flow);
			double01->SetValue(cur_point->width);
			double03->SetValue((cur_point->effic) * 100);
			double014->SetValue((cur_point->content) * 100);
			integer01->SetValue(cur_point->index);
			enum02->SetValueAsString(cur_point->is_on);

			update_mohou(); //���ɵ�ǰ���Ĥ��ֲ��Ƽ�ֵ
			point04->SetPoint(origin_p);

			//��ʾ�Ƕ�ֵ
			show_joint_value();

		}
		//�趨����λ��
		else if (block == integer02)
		{
			if (cur_point->index == points.size()) {
				uc1601("���һ�����������", 0);
				return 0;
			}

			cur_point->set_param = integer02->Value();
			POINT_p &next_point = points[cur_point->index];

			double trans[16];
			for (int i = 0; i < 16; i++) {
				trans[i] = cur_point->matx[i];
			}
			trans[3] = (next_point.X() - cur_point->X())*double(cur_point->set_param) / 100 + cur_point->X();
			trans[7] = (next_point.Y() - cur_point->Y())*double(cur_point->set_param) / 100 + cur_point->Y();
			trans[11] = (next_point.Z() - cur_point->Z())*double(cur_point->set_param) / 100 + cur_point->Z();
			import_tool(trans);
			affirmed = false;
		}
		//�趨�뵥�����йصĹ��ղ����ͳ������
		else if (block == double09)
		{
			cur_point->sector1 = double09->Value();
			cur_point->is_node = true;
			affirmed = false;
		}
		else if (block == double010)
		{
			cur_point->sector2 = double010->Value();
			cur_point->is_node = true;
			affirmed = false;
		}
		else if (block == double011)
		{
			cur_point->atom = double011->Value();
			cur_point->is_node = true;
			affirmed = false;
		}
		else if (block == double012)
		{
			cur_point->voltage = double012->Value();
			cur_point->is_node = true;
			affirmed = false;
		}
		else if (block == double018)
		{
			cur_point->rot = double018->Value();
			cur_point->is_node = true;
			affirmed = false;
		}
		else if (block == double08)
		{
			cur_point->flow = double08->Value();
			cur_point->is_node = true;
			update_mohou();
			affirmed = false;
		}
		else if (block == double01)
		{
			cur_point->width = double01->Value();
			cur_point->is_node = true;
			update_mohou();
			affirmed = false;
		}
		else if (block == double03)
		{

			cur_point->effic = (double03->Value()) / 100;
			cur_point->is_node = true;
			update_mohou();
			affirmed = false;
		}
		else if (block == double014)
		{

			cur_point->content = (double014->Value()) / 100;
			cur_point->is_node = true;
			update_mohou();
			affirmed = false;
		}
		else if (block == enum02)
		{
			cur_point->is_on = enum02->ValueAsString().GetLocaleText();
			affirmed = false;
		}
		//tcp����
		else if (block == double013)
		{
			station.tcp_d = double013->Value();
			affirmed = false;
		}
		//�˶���ʽ
		else if (block == enum0)
		{
			station.move_type = enum0->ValueAsString().GetText();
			affirmed = false;
		}
		//�켣�ٶ�
		else if (block == double02)
		{
			station.tool_speed = (double02->Value());
			update_mohou();
			affirmed = false;
		}
		//TCP����
		else if (block == integer0)
		{
			station.acc = double(integer0->Value());
			//affirmed = false;
			R_changed = true;
		}
		//��X��ת��һ���ĽǶ�
		else if (block == button02)
		{
			double anglex = (double015->Value())*pi / 180;
			//�ı䵱ǰ����̬
			MatrixXd RT(4, 4);
			RT.setIdentity();
			RT.block(0, 0, 3, 3) = rotx(anglex);
			cur_point->T = cur_point->T*RT;
			cur_point->cal_matx();
			//����ģ��
			import_tool(*cur_point);
			//affirmed = false;
		}
		//��Y��ת��һ���ĽǶ�
		else if (block == button03)
		{
			double angley = (double016->Value())*pi / 180;
			//�ı䵱ǰ����̬
			MatrixXd RT(4, 4);
			RT.setIdentity();
			RT.block(0, 0, 3, 3) = roty(angley);
			cur_point->T = cur_point->T*RT;
			cur_point->cal_matx();
			//����ģ��
			import_tool(*cur_point);
			//affirmed = false;
		}
		//��Z��ת��һ���Ƕ�
		else if (block == button04)
		{
			double anglez = (double017->Value())*pi / 180;
			//�ı䵱ǰ����̬
			MatrixXd RT(4, 4);
			RT.setIdentity();
			RT.block(0, 0, 3, 3) = rotz(anglez);
			cur_point->T = cur_point->T*RT;
			cur_point->cal_matx();
			//����ģ��
			import_tool(*cur_point);
			//affirmed = false;
		}
		//�ı�Ĥ��ֲ�
		else if (block == doubleTable0)
		{

			int r[1] = { 1 };
			int c[1] = { 5 };
			vector<double> values = doubleTable0->GetValues(r, c);
			for (int i = 0; i < 5; i++)
				cur_point->distri[i] = values[i];
			cur_point->is_node = true;
		}
		//ˢ����������Ĥ��
		else if (block == button01)
		{
			//����ȷ�ϰ�ť����Ե����Ϣ����ˢ������
			affirmed = true;
			bool have_node = false; //�Ƿ��нڵ�
			POINT_p* tp;
			//ˢ����
			points[0].is_node = true;
			for (int i = 0; i < points.size(); i++) {
				if (points[i].is_node) {
					tp = &points[i];
					have_node = true;
				}
				else {
					if (have_node) {
						points[i].sector1 = tp->sector1;
						points[i].sector2 = tp->sector2;
						points[i].atom = tp->atom;
						points[i].voltage = tp->voltage;
						points[i].flow = tp->flow;
						points[i].width = tp->width;
						points[i].effic = tp->effic;
						points[i].content = tp->content;
						points[i].is_on = tp->is_on;
					}
				}
			}
			uc1601("����ˢ�����", 0);
			if (dense_points.empty() || R_changed) {
				create_dense_points();
				uc1601("�ܼ���������", 0);
			}
			set_dense_points_param();
			uc1601("�ܼ������������", 0);

			first_point = 0;
			last_point = dense_points.size() - 1;
			R_changed = false;

		}
		else if (block == point03)
		{
			//��ʼ��
			//��ȡ����ֵ
			/*if (!affirmed) {
				uc1601("���Ƚ��в���ȷ��", 1);
				point03->SetPoint(origin_p);
				return 0;
			}*/
			double x = point03->Point().X;
			double y = point03->Point().Y;
			double z = point03->Point().Z;
			//���Ҷ�Ӧ�Ĺ켣��
			string key = create_key(x, y, z);

			if (points_map.find(key) != points_map.end())
				temp_point = points_map[key];
			else
				return 0;

			import_tool(*temp_point);
	
			first_point = match_dense_ponit(*temp_point);
		}
		else if (block == point02)
		{
			/*if (!affirmed) {
				uc1601("���Ƚ��в���ȷ��", 1);
				point02->SetPoint(origin_p);
				return 0;
			}*/
			//��ȡ����ֵ
			double x = point02->Point().X;
			double y = point02->Point().Y;
			double z = point02->Point().Z;

			//���ҹ켣��
			string key = create_key(x, y, z);

			if (points_map.find(key) != points_map.end())
				temp_point = points_map[key];
			else
				return 0;

			import_tool(*temp_point);
			last_point = match_dense_ponit(*temp_point);
			point03->SetPoint(origin_p);
			point02->SetPoint(origin_p);
		}
		else if (block == toggle01)
		{
			UF_initialize();
			bool ToggleValue = toggle01->Value();

			if (ToggleValue != true)
			{
				toggle02->SetEnable(true);
			}
			else
			{
				toggle02->SetEnable(false);
			}
			//��ִ�и�������棬�����ڷ���㣬'����'�����
			if (ToggleValue != true && !tag_group_point.empty())
			{

				for (int i = 0; i < dense_points.size(); i++)
				{
					for (int j = 0; j < group_points[i].size(); j++)
					{
						UF_OBJ_set_blank_status(tag_group_point[i][j], UF_OBJ_BLANKED);
					}
				}

			}
			UF_terminate();

		}
		else if (block == toggle02)
		{
			PropertyList*  ToggleProps = toggle02->GetProperties();
			bool ToggleValue = ToggleProps->GetLogical("Value");
			delete ToggleProps;
			ToggleProps = NULL;

			if (ToggleValue != true)
			{
				point03->SetEnable(false);
				point02->SetEnable(false);
				first_point = 0;
				last_point = dense_points.size() - 1;
			}
			else
			{
				point03->SetEnable(true);
				point02->SetEnable(true);
			}
		}
		//��ʾ�ܼ���
		else if (block == toggle03) {
			bool f = toggle03->Value();
			if (f) {
				if(!dense_points.empty()) dense_points_line_visible();
			}
			else hide_dense_points_line();
		}
		//�˶�����
		else if (block == button0)
		{
			bool ToggleValue = toggle01->Value();//�Ƿ񸲸������

			if (1) {
				//uc1601("���Ƚ��в���ȷ��", 1);
				//return 0;
				//����ȷ��
				//affirmed = true;
				bool have_node = false;//�Ƿ��нڵ�
				POINT_p* tp;
				//ˢ����
				points[0].is_node = true;
				for (int i = 0; i < points.size(); i++) {
					if (points[i].is_node) {
						tp = &points[i];
						have_node = true;
					}
					else {
						if (have_node) {
							points[i].sector1 = tp->sector1;
							points[i].sector2 = tp->sector2;
							points[i].atom = tp->atom;
							points[i].voltage = tp->voltage;
							points[i].flow = tp->flow;
							points[i].width = tp->width;
							points[i].effic = tp->effic;
							points[i].content = tp->content;
							points[i].is_on = tp->is_on;
						}
					}
				}
				uc1601("����ˢ�����", 0);
			}			

			update_station();
			uc1601("����վ�������", 0);

			create_dense_points();
			uc1601("�ܼ���������", 0);
			set_dense_points_param();
			uc1601("�ܼ������������", 0);
			if(!check_pose()) return 0;

			first_point = 0;
			last_point = dense_points.size() - 1;
			if (ToggleValue) {
				//uc1601("���ڽ���Ĥ�����...", 0);
				cal_points_mohou_distri();
				//ԭʼ���Ʒ���,Ĥ�����

				if (!group_points.empty()) group_points.clear();
				if (strcmp(tool_type, "GUN") == 0)  group_gun();
				else if (strcmp(tool_type, "BELL") == 0) group_bell();

				//ͳ��Ĥ����Ϣ
				mohou_stat();
				uc1601("Ĥ��������", 0);
			}
			
			motion(ToggleValue);
			if (ToggleValue) {
				sim_first = false;
				affirmed = false;
			}

		}
		//Ĥ���ѯ
		else if (block == point0)
		{

			//��ȡ����ֵ
			point01->SetEnable(false);
			point02->SetEnable(false);
			point03->SetEnable(false);
			point04->SetEnable(false);
			point05->SetEnable(false);
			point06->SetEnable(false);
			edge_select0->SetEnable(false);

			double x = point0->Point().X;
			double y = point0->Point().Y;
			double z = point0->Point().Z;

			uc1601((char*)(to_string(x) + " " + to_string(y) + " " + to_string(z)).c_str(), 0);//��ʾ����ֵ

			//���Ҷ�Ӧ�Ĺ켣��,���ѹ켣����Ϣ
			string key = create_key(x, y, z);
			if (origin_points_map.find(key) != origin_points_map.end())
				cur_point = origin_points_map[key];
			else {
				uc1601("�õ㴦��Ĥ����Ϣ", 0);
				return 0;
			}
			double04->SetValue(floor((cur_point->thick) * 100) / 100);
			double022->SetValue(floor((cur_point->thick_rate * 100) * 100) / 100);

				
		}
		//���û�������������
		else if (block == double028) {
			station.start_distance = double028->Value();
			affirmed = false;
		}
		//���õ����ٶ�
		else if (block == double029) {
			station.convery_v = double029->Value();
			affirmed = false;
		}
		//ȫ���趨���ղ���
		else if (block == button05) {
			string name = enum03->ValueAsString().GetLocaleText();
			double value = double06->Value();
			if (name == "����1") {
				for (int i = 0; i < points.size(); i++)
					points[i].sector1 = value;
			}
			if (name == "����2") {
				for (int i = 0; i < points.size(); i++)
					points[i].sector2 = value;
			}
			if (name == "��") {
				for (int i = 0; i < points.size(); i++)
					points[i].atom = value;
			}
			if (name == "��ѹ(kv)") {
				for (int i = 0; i < points.size(); i++)
					points[i].voltage = value;
			}
			if (name == "ת��(r/min)") {
				for (int i = 0; i < points.size(); i++)
					points[i].rot = value;
			}
			if (name == "����(cc/min)") {
				for (int i = 0; i < points.size(); i++)
					points[i].flow = value;
			}
			if (name == "������(m)") {
				for (int i = 0; i < points.size(); i++)
					points[i].width = value;
			}
			if (name == "ת��Ч��(%)") {
				for (int i = 0; i < points.size(); i++)
					points[i].effic = value / 100;
			}
			if (name == "���庬��(%)") {
				for (int i = 0; i < points.size(); i++)
					points[i].content = value / 100;
			}
			uc1601("���!", 0);
		}
		//ѡ���� ��̬����
		else if (block == point04) {
			//��ȡ����ֵ
			double x = point04->Point().X;
			double y = point04->Point().Y;
			double z = point04->Point().Z;

			string key = create_key(x, y, z);
			
			//���ҹ켣��
			if (points_map.find(key) != points_map.end())
				cur_point = points_map[key];
			else {
				uc1601("δѡ�й켣��", 0);
				return 0;
			}
			if (toggle04->Value()) 
				show_robot(*cur_point);
			else {
				import_tool(*cur_point);//����ģ��
				point04->SetPoint(origin_p);
				point_no->SetValue(cur_point->index);
			}			
			show_joint_value();

		}
		//��̬����������ʼ��
		else if (block == point05) {
			double x = point05->Point().X;
			double y = point05->Point().Y;
			double z = point05->Point().Z;
			string key = create_key(x, y, z);
			uc1601((char*)(key).c_str(), 0);//��ʾ����ֵ
			if (points_map.find(key) != points_map.end())
				first_copy_point = points_map[key]->index - 1;
			else {
				uc1601("δѡ�й켣��", 0);
				return 0;
			}
			point05->SetPoint(origin_p);
		}
		//��̬���������յ�
		else if (block == point06) {
			double x = point06->Point().X;
			double y = point06->Point().Y;
			double z = point06->Point().Z;
			string key = create_key(x, y, z);
			uc1601((char*)(key).c_str(), 0);//��ʾ����ֵ
			if (points_map.find(key) != points_map.end())
				last_copy_point = points_map[key]->index - 1;
			else {
				uc1601("δѡ�й켣��", 0);
				return 0;
			}

			if (toggle0->Value()) {
				first_copy_point = cur_point->index - 1;
			}

			if (first_copy_point > last_copy_point) {
				int temp = first_copy_point;
				first_copy_point = last_copy_point;
				last_copy_point = temp;
			}
			tag_line_copy.clear();
			UF_initialize();
			//������������
			for (int i = first_copy_point; i < last_copy_point; i++) {
				UF_CURVE_line_t line_coords;
				tag_t line_tag;
				line_coords.start_point[0] = points[i].X();
				line_coords.start_point[1] = points[i].Y();
				line_coords.start_point[2] = points[i].Z() + 1;
				line_coords.end_point[0] = points[i + 1].X();
				line_coords.end_point[1] = points[i + 1].Y();
				line_coords.end_point[2] = points[i + 1].Z() + 1;
				UF_CURVE_create_line(&line_coords, &line_tag);
				UF_OBJ_set_color(line_tag, 211);
				tag_line_copy.push_back(line_tag);
			}
			uc1601("����ѡ�����", 0);
			int response = fangzhen::theUI->NXMessageBox()->Show("��ʾ", NXOpen::NXMessageBox::DialogTypeQuestion, "����ȷ��");
			if (response == 1) {
				backups();
				MatrixXd copy_pose = cur_point->T.block(0, 0, 3, 3);
				for (int i = first_copy_point; i <= last_copy_point; i++) {
					points[i].T.block(0, 0, 3, 3) = copy_pose;
					points[i].cal_matx();
				}

				for (int i = 0; i < tag_line_copy.size(); i++)
					UF_OBJ_delete_object(tag_line_copy[i]);
				uc1601("�������!", 0);
				first_copy_point = 0;
				last_copy_point = 0;
			}
			else {
				for (int i = 0; i < tag_line_copy.size(); i++)
					UF_OBJ_delete_object(tag_line_copy[i]);
				first_copy_point = 0;
				last_copy_point = 0;
			}
			
			point06->SetPoint(origin_p);
			UF_terminate();
			point04->Focus();
		}
		//��̬��������
		else if (block == button08) {
			pose_up(*cur_point);
			cur_point->T.block(0, 0, 3, 3) *= rotz(-45 * pi / 180);
			cur_point->cal_matx();
			import_tool(*cur_point);
		}
		//��̬������
		else if (block == button09) {
			pose_up(*cur_point);
			cur_point->cal_matx();
			import_tool(*cur_point);
		}
		//��̬��������
		else if (block == button010) {
			pose_up(*cur_point);
			cur_point->T.block(0, 0, 3, 3) *= rotz(45 * pi / 180);
			cur_point->cal_matx();
			import_tool(*cur_point);
		}
		//��̬������
		else if (block == button011) {
			pose_up(*cur_point);
			cur_point->T.block(0, 0, 3, 3) *= rotz(270 * pi / 180);
			cur_point->cal_matx();
			import_tool(*cur_point);

		}
		//��̬������
		else if (block == button012) {
			pose_up(*cur_point);
			cur_point->T.block(0, 0, 3, 3) *= rotz(90 * pi / 180);
			cur_point->cal_matx();
			import_tool(*cur_point);
		}
		//��̬��������
		else if (block == button013) {
			pose_up(*cur_point);
			cur_point->T.block(0, 0, 3, 3) *= rotz(-135 * pi / 180);
			cur_point->cal_matx();
			import_tool(*cur_point);
		}
		//��̬������
		else if (block == button014) {
			pose_up(*cur_point);
			cur_point->T.block(0, 0, 3, 3) *= rotz(180 * pi / 180);
			cur_point->cal_matx();
			import_tool(*cur_point);
		}
		//��̬��������
		else if (block == button015) {
			pose_up(*cur_point);
			cur_point->T.block(0, 0, 3, 3) *= rotz(135 * pi / 180);
			cur_point->cal_matx();
			import_tool(*cur_point);
		}
		//��̬����
		else if (block == button016) {
			cur_point->T.block(0, 1, 3, 1) = -cur_point->T.block(0, 1, 3, 1);//y�ᷴ��
			cur_point->T.block(0, 2, 3, 1) = -cur_point->T.block(0, 2, 3, 1);//z�ᷴ��
			cur_point->cal_matx();
			//����ģ��
			import_tool(*cur_point);
		}
		//Ĥ������
		else if (block == button07) {
			uc1601("���ڽ���Ĥ������...", 0);
			UF_initialize();
			vector<NXOpen::TaggedObject*> curves = edge_select0->GetSelectedObjects();
			double guess1[3];
			double guess2[3];
			double min_dist;
			double pt_on_obj1[3];
			double pt_on_obj2[3];
			double point1[3];
			double point2[3];
			int count;

			for (unsigned i = 0; i < origin_points.size(); i++) {
				for (int j = 0; j < curves.size(); j++) {
					guess1[0] = origin_points[i].X();
					guess1[1] = origin_points[i].Y();
					guess1[2] = origin_points[i].Z();
					UF_MODL_ask_edge_verts(curves[j]->Tag(), point1, point2, &count);
					UF_MODL_ask_minimum_dist(NULL_TAG, curves[j]->Tag(), 1, guess1, 0, guess2, &min_dist, pt_on_obj1, pt_on_obj2);
					if (min_dist <= 50) {
						if ((abs(pt_on_obj2[0] - point1[0]) < 0.001 && abs(pt_on_obj2[1] - point1[1]) < 0.001 && abs(pt_on_obj2[2] - point1[2]) < 0.001) || (abs(pt_on_obj2[0] - point2[0]) < 0.001 && abs(pt_on_obj2[1] - point2[1]) < 0.001 && abs(pt_on_obj2[2] - point2[2]) < 0.001)) {

						}
						else {
							origin_points[i].thick += 13.8 / (min_dist / 10 + 1);
						}

					}
				}
			}

			//Ĥ��һ���Լ���;  ��Ϳ�����ʡ��ϸ�����
			mohou_stat();

			if (tag_group_point.size() == 0 || (tag_group_point.size() != 0 && tag_group_point[0].size() == 0)) {

			}
			//���µ�����ɫ
			else {
				for (int i = 0; i < points.size(); i++)
				{
					for (int j = 0; j < group_points[i].size(); j++)
					{
						tag_t point_tag = tag_group_point[i][j];
						if (group_points[i][j]->thick_rate < -0.5) UF_OBJ_set_color(point_tag, 211);
						if (group_points[i][j]->thick_rate >= -0.5 && group_points[i][j]->thick_rate < -0.3) UF_OBJ_set_color(point_tag, 97);
						if (group_points[i][j]->thick_rate >= -0.3 && group_points[i][j]->thick_rate < -0.1) UF_OBJ_set_color(point_tag, 98);
						if (group_points[i][j]->thick_rate >= -0.1 && group_points[i][j]->thick_rate < 0.1) UF_OBJ_set_color(point_tag, 101);
						if (group_points[i][j]->thick_rate >= 0.1 && group_points[i][j]->thick_rate < 0.3) UF_OBJ_set_color(point_tag, 82);
						if (group_points[i][j]->thick_rate >= 0.3 && group_points[i][j]->thick_rate < 0.5) UF_OBJ_set_color(point_tag, 77);
						if (group_points[i][j]->thick_rate >= 0.5) UF_OBJ_set_color(point_tag, 186);
					}
				}
			}
			uc1601("Ĥ���������", 0);
			vector<NXOpen::TaggedObject*> empty;
			edge_select0->SetSelectedObjects(empty);
			UF_terminate();

		}
		//�����Ի���ؼ�
		//���Ʋ�ͬҳ���ѡ��ؼ�����ֹ����
		else if (block == tabControl) {
			if (tabControl->ActivePage() == 0) {
				point04->SetEnable(true);
				point05->SetEnable(true);
				point06->SetEnable(true);
			}
			if (tabControl->ActivePage() == 1) {
				point01->SetEnable(true);
				if (toggle02->Value()) {
					point02->SetEnable(true);
					point03->SetEnable(true);
				}
				edge_select0->SetEnable(true);
			}
		}
		//����λ/��λ���
		else if (block == button06) {
			update_station();
			uc1601("����վ�������", 0);
			create_dense_points();
			uc1601("�ܼ���������", 0);
			check_pose();
		}
		//��̬Ԥ��
		else if (block == button017) {
			//if (dense_points.empty()) return 0;
			create_dense_points();
			UF_initialize();
			int response = fangzhen::theUI->NXMessageBox()->Show("��ʾ", NXOpen::NXMessageBox::DialogTypeQuestion, "�Ƿ�ӵ�ǰ�㿪ʼԤ����");
			int first_index = 0;
			if (response == 1 && cur_point) {
				first_index = point_match[cur_point->index - 1];
				/*uc1601((char*)to_string(cur_point->index - 1).c_str(), 1);
				uc1601((char*)to_string(first_index).c_str(), 1);*/
			} 
						
			if (tool_tag != NULL) {
				UF_OBJ_delete_object(tool_tag);
			}

			//����ģ��
			import_tool(dense_points[first_index]);
			cal_transmtx();//���ÿ�����ı任����

			//�������ɵ���
			for (int i = first_index; i < dense_points.size()-1; ++i)
			{
				//_sleep(dense_points[i].move_t/delay_rate);
				//_sleep(5);
				UF_MODL_transform_entities(1, &tool_tag, MATX_trans[i]);

				UF_MODL_update();
			}
			//ɾ�����
			if (tool_tag != NULL) {
				UF_OBJ_delete_object(tool_tag);
			}
			UF_terminate();
		}
		//��һ��
		else if (block == button018) {
			if (cur_point == NULL) return 0;
			if (cur_point->index == 1) return 0;
			cur_point = &points[cur_point->index - 2];
			point_no->SetValue(cur_point->index);
			import_tool(*cur_point);
			show_joint_value();
		}
		//��һ��
		else if (block == button019) {
			if (cur_point == NULL) {
				cur_point = &points[0];
				point_no->SetValue(cur_point->index);
				import_tool(*cur_point);
				return 0;
			}			
			if (cur_point->index == points.size()) return 0;
			cur_point = &points[cur_point->index];
			point_no->SetValue(cur_point->index);
			import_tool(*cur_point);
			show_joint_value();
		}
		//��λ����ʾ
		else if (block == list_box0) {
			int index = list_box0->GetSelectedItems()[0];
			int point_index = limit_index[index];
			cur_point = &points[point_index];
			if (toggle04->Value())
				show_robot(*cur_point);
			else {
				import_tool(*cur_point);//����ģ��
				point_no->SetValue(cur_point->index);
			}

			index = point_match[point_index];
			string info = "";
			for (int i = 0; i < 6; i++) {
				string s = to_string(int(joint_data[index][i] * 100) / 100.0);
				s = s.substr(0, s.length() - 4);
				info += "J" + to_string(i + 1) + ":" + s + "  ";
			}
			uc1601((char*)(info).c_str(), 0);

		}
		//����
		else if (block == directionX)
		{
			double015->SetValue(-double015->Value());
		}
		else if (block == directionY)
		{
			double016->SetValue(-double016->Value());
		}
		else if (block == directionZ)
		{
			double017->SetValue(-double017->Value());
		}

		//���䵽���� ��̬����
		else if (block == button020) {
			
			UF_initialize();
			
			char* cue = "Դ�������";
			double start_point[3];
			double end_point[3];
			int mode[2]= { 4,0 };
			int r_index1, r_index2, c_index1, c_index2;

			uc1616(cue, mode, 1, start_point);
			
			string key = create_key(start_point[0], start_point[1], start_point[2]);
			if (points_map.find(key) != points_map.end())
				r_index1 = points_map[key]->index - 1;
			else {
				uc1601("δѡ�й켣��", 1);
				return 0;
			}

			cue = "Դ�����յ�";
			uc1616(cue, mode, 1, end_point);
			key = create_key(end_point[0], end_point[1], end_point[2]);
			if (points_map.find(key) != points_map.end())
				r_index2 = points_map[key]->index - 1;
			else {
				uc1601("δѡ�й켣��", 1);
				return 0;
			}

			bool reverse = false;

			if (r_index1 > r_index2) {
				int temp = r_index1;
				r_index1 = r_index2;
				r_index2 = temp;
				reverse = true;
			}
			tag_line_copy.clear();
			//������������
			for (int i = r_index1; i < r_index2; i++) {
				UF_CURVE_line_t line_coords;
				tag_t line_tag;
				line_coords.start_point[0] = points[i].X();
				line_coords.start_point[1] = points[i].Y();
				line_coords.start_point[2] = points[i].Z() + 1;
				line_coords.end_point[0] = points[i + 1].X();
				line_coords.end_point[1] = points[i + 1].Y();
				line_coords.end_point[2] = points[i + 1].Z() + 1;
				UF_CURVE_create_line(&line_coords, &line_tag);
				UF_OBJ_set_color(line_tag, 211);
				tag_line_copy.push_back(line_tag);
			}
			uc1601("Դ����ѡ�����", 0);
			int response = fangzhen::theUI->NXMessageBox()->Show("��ʾ", NXOpen::NXMessageBox::DialogTypeQuestion, "����ȷ��");
			if (response != 1) {
				for (int i = 0; i < tag_line_copy.size(); i++)
					UF_OBJ_delete_object(tag_line_copy[i]);
				return 0;
			}
			for (int i = 0; i < tag_line_copy.size(); i++)
				UF_OBJ_delete_object(tag_line_copy[i]);

			cue = "Ŀ���������";
			uc1616(cue, mode, 1,start_point);
			key = create_key(start_point[0], start_point[1], start_point[2]);
			if (points_map.find(key) != points_map.end())
				c_index1 = points_map[key]->index - 1;
			else {
				uc1601("δѡ�й켣��", 1);
				return 0;
			}

			cue = "Ŀ�������յ�";
			uc1616(cue, mode, 1, end_point);
			key = create_key(end_point[0], end_point[1],end_point[2]);
			if (points_map.find(key) != points_map.end())
				c_index2 = points_map[key]->index - 1;
			else {
				uc1601("δѡ�й켣��", 1);
				return 0;
			}

			if (c_index1 > c_index2) {
				int temp = c_index1;
				c_index1 = c_index2;
				c_index2 = temp;
				if (reverse) reverse = false;
				else reverse = true;
			}
			tag_line_copy.clear();
			//������������
			for (int i = c_index1; i < c_index2; i++) {
				UF_CURVE_line_t line_coords;
				tag_t line_tag;
				line_coords.start_point[0] = points[i].X();
				line_coords.start_point[1] = points[i].Y();
				line_coords.start_point[2] = points[i].Z() + 1;
				line_coords.end_point[0] = points[i + 1].X();
				line_coords.end_point[1] = points[i + 1].Y();
				line_coords.end_point[2] = points[i + 1].Z() + 1;
				UF_CURVE_create_line(&line_coords, &line_tag);
				UF_OBJ_set_color(line_tag, 211);
				tag_line_copy.push_back(line_tag);
			}
			uc1601("Ŀ������ѡ�����", 0);
			response = fangzhen::theUI->NXMessageBox()->Show("��ʾ", NXOpen::NXMessageBox::DialogTypeQuestion, "����ȷ��");
			if (response != 1) {
				for (int i = 0; i < tag_line_copy.size(); i++)
					UF_OBJ_delete_object(tag_line_copy[i]);
				return 0;
			}
			backups();
			for (int i = 0; i < tag_line_copy.size(); i++)
				UF_OBJ_delete_object(tag_line_copy[i]);

			int count = min(r_index2 - r_index1 + 1, c_index2 - c_index1 + 1);
			int n = r_index1 + count;
			MatrixXd copy_pose;
			for (int i = 0; i < count; ++i) {
				copy_pose = points[r_index1 + i].T.block(0, 0, 3, 3);
				if (reverse) {
					points[c_index2 - i].T.block(0, 0, 3, 3) = copy_pose;
					points[c_index2 - i].cal_matx();
				}
				else {
					points[c_index1 + i].T.block(0, 0, 3, 3) = copy_pose;
					points[c_index1 + i].cal_matx();
				}
				
			}
			uc1601("�������!", 0);

			UF_terminate();
		}
		
		//���㸴��
		else if (block == point09) {			
			//��ȡ����ֵ
			double x = point09->Point().X;
			double y = point09->Point().Y;
			double z = point09->Point().Z;

			string key = create_key(x, y, z);
			//���ҹ켣��
			POINT_p* temp_point;
			if (points_map.find(key) != points_map.end())
				temp_point = points_map[key];
			else {
				uc1601("δѡ�й켣��", 0);
				return 0;
			}
			backups();
			MatrixXd copy_pose = cur_point->T.block(0, 0, 3, 3);
			temp_point->T.block(0, 0, 3, 3) = copy_pose;
			temp_point->cal_matx();
			point09->SetPoint(origin_p);
			uc1601("�������!", 0);
			point04->Focus();
		}
		//����
		else if (block == button021) {
			if (backup_points.empty()) return 0;
			for (int i = 0; i < backup_points.size(); i++)
				points[i] = backup_points[i];
			import_tool(*cur_point);
			uc1601("�����ɹ�", 0);
		}
		else if (block == toggle0) {
			point05->SetEnable(!toggle0->Value());
			if (toggle0->Value()) point06->Focus();
		}
		else if (block == toggle04) {
			if (toggle04->Value()) {
				show_robot(*cur_point);
			}
			else {
				UF_initialize();
				for (int i = 0; i < robot_parts_tag.size(); ++i) {
					if (robot_parts_tag[i] != NULL)
						UF_OBJ_delete_object(robot_parts_tag[i]);
				}
				UF_terminate();
			}
		}
		else if (block == toggle05) {
			double010->SetEnable(!toggle05->Value());
		}
		//��̬�Ż�
		else if (block == button022) {
			if (joint_data.size() == 0) {
				uc1601("���Ƚ��пɴ���/��λ���", 1);
				return 0;
			}
			while (check_pose_result.size()!= 0) {
				if (optimize_pose()) {
					update_station();
					uc1601("����վ�������", 0);
					create_dense_points();
					uc1601("�ܼ���������", 0);
					check_pose();
				}
				int response = fangzhen::theUI->NXMessageBox()->Show("��ʾ", NXOpen::NXMessageBox::DialogTypeQuestion, "�Ƿ����?");
				if (response == 2) break;
			}
		}
		//ɾ����
		else if (block == button023) {
			
			if (cur_point == NULL) return 0;
			UF_initialize();
			int index = cur_point->index - 1;
			
			//�ӽ���ɾ����
			//UF_OBJ_set_blank_status(tag_points[index], UF_OBJ_BLANKED);
			UF_OBJ_delete_object(tag_points[index]);
						
			//ɾ����tag
			tag_points.erase(tag_points.begin() + index);
			//ɾ������
			//��һ�������
			if (index == 0) {
				UF_OBJ_delete_object(tag_line[0]);
				tag_line.erase(tag_line.begin());
			}
			//���һ�������
			else if(index==points.size()-1) {
				UF_OBJ_delete_object(tag_line[tag_line.size()-1]);
				tag_line.erase(tag_line.begin()+index-1);
			}
			//�м�����
			else {				
				//ɾ����õ��йص���������
				UF_OBJ_delete_object(tag_line[index-1]);
				UF_OBJ_delete_object(tag_line[index]);
				auto it = tag_line.erase(tag_line.begin() + index - 1);
				it=tag_line.erase(it);
				//����������
				UF_CURVE_line_t line_coords;
				tag_t line_tag;
				line_coords.start_point[0] = points[index - 1].X();
				line_coords.start_point[1] = points[index - 1].Y();
				line_coords.start_point[2] = points[index - 1].Z();
				line_coords.end_point[0] = points[index+1].X();
				line_coords.end_point[1] = points[index+1].Y();
				line_coords.end_point[2] = points[index+1].Z();
				UF_CURVE_create_line(&line_coords, &line_tag);
				UF_OBJ_set_color(line_tag, 150);
				tag_line.insert(it,line_tag);
			}
						
			//ɾ���켣�����
			points.erase(points.begin() + index);
			//���õ�ǰ��͹���
			if (index == points.size()) cur_point = &points[index - 1];
			else cur_point = &points[index];
			//���µ���ź�point_match
			if (index != points.size()) {
				for (int i = index; i < points.size(); ++i) {
					points[i].index = i + 1;
					points_map[create_key(points[i])] = &points[i];
				}
					
			}
			point_no->SetValue(cur_point->index);
			if (tool_tag != NULL) import_tool(*cur_point);
			
			UF_terminate();
		}
		else if (block == enum_RB_BELL_ruleType)
		{
			string rule_RB_bell = enum_RB_BELL_ruleType->ValueAsString().GetLocaleText();
			if (rule_RB_bell.compare("�е���ǹ") == 0) {
				/*integer_RB_BELL_jointPoint0X1->SetValue(param_negtive_1[0]);
				integer_RB_BELL_jointPoint0Y1->SetValue(param_negtive_1[1]);
				integer_RB_BELL_jointPoint0Z1->SetValue(param_negtive_1[2]);
				integer_RB_BELL_jointPoint0A1->SetValue(param_negtive_1[3]);
				integer_RB_BELL_jointPoint0B1->SetValue(param_negtive_1[4]);
				integer_RB_BELL_jointPoint0C1->SetValue(param_negtive_1[5]);*/

				integer_RB_BELL_jointPoint1X->SetEnable(false);
				integer_RB_BELL_jointPoint1Y->SetEnable(false);
				integer_RB_BELL_jointPoint1Z->SetEnable(false);
				integer_RB_BELL_jointPoint1A->SetEnable(false);
				integer_RB_BELL_jointPoint1B->SetEnable(false);
				integer_RB_BELL_jointPoint1C->SetEnable(false);

				integer_RB_BELL_jointPoint2X->SetValue(param_negtive_3[0]);
				integer_RB_BELL_jointPoint2Y->SetValue(param_negtive_3[1]);
				integer_RB_BELL_jointPoint2Z->SetValue(param_negtive_3[2]);
				integer_RB_BELL_jointPoint2A->SetValue(param_negtive_3[3]);
				integer_RB_BELL_jointPoint2B->SetValue(param_negtive_3[4]);
				integer_RB_BELL_jointPoint2C->SetValue(param_negtive_3[5]);

				integer_RB_BELL_jointPoint3X->SetEnable(false);
				integer_RB_BELL_jointPoint3Y->SetEnable(false);
				integer_RB_BELL_jointPoint3Z->SetEnable(false);
				integer_RB_BELL_jointPoint3A->SetEnable(false);
				integer_RB_BELL_jointPoint3B->SetEnable(false);
				integer_RB_BELL_jointPoint3C->SetEnable(false);
			}
			if (rule_RB_bell.compare("���е���ǹ") == 0) {
				/*integer_RB_BELL_jointPoint0X1->SetValue(param_negtive_1[0]);
				integer_RB_BELL_jointPoint0Y1->SetValue(param_negtive_1[1]);
				integer_RB_BELL_jointPoint0Z1->SetValue(param_negtive_1[2]);
				integer_RB_BELL_jointPoint0A1->SetValue(param_negtive_1[3]);
				integer_RB_BELL_jointPoint0B1->SetValue(param_negtive_1[4]);
				integer_RB_BELL_jointPoint0C1->SetValue(param_negtive_1[5]);*/

				integer_RB_BELL_jointPoint1X->SetEnable(true);
				integer_RB_BELL_jointPoint1Y->SetEnable(true);
				integer_RB_BELL_jointPoint1Z->SetEnable(true);
				integer_RB_BELL_jointPoint1A->SetEnable(true);
				integer_RB_BELL_jointPoint1B->SetEnable(true);
				integer_RB_BELL_jointPoint1C->SetEnable(true);

				integer_RB_BELL_jointPoint2X->SetEnable(true);
				integer_RB_BELL_jointPoint2Y->SetEnable(true);
				integer_RB_BELL_jointPoint2Z->SetEnable(true);
				integer_RB_BELL_jointPoint2A->SetEnable(true);
				integer_RB_BELL_jointPoint2B->SetEnable(true);
				integer_RB_BELL_jointPoint2C->SetEnable(true);

				integer_RB_BELL_jointPoint3X->SetEnable(true);
				integer_RB_BELL_jointPoint3Y->SetEnable(true);
				integer_RB_BELL_jointPoint3Z->SetEnable(true);
				integer_RB_BELL_jointPoint3A->SetEnable(true);
				integer_RB_BELL_jointPoint3B->SetEnable(true);
				integer_RB_BELL_jointPoint3C->SetEnable(true);

				integer_RB_BELL_jointPoint1X->SetValue(param_negtive_2[0]);
				integer_RB_BELL_jointPoint1Y->SetValue(param_negtive_2[1]);
				integer_RB_BELL_jointPoint1Z->SetValue(param_negtive_2[2]);
				integer_RB_BELL_jointPoint1A->SetValue(param_negtive_2[3]);
				integer_RB_BELL_jointPoint1B->SetValue(param_negtive_2[4]);
				integer_RB_BELL_jointPoint1C->SetValue(param_negtive_2[5]);

				integer_RB_BELL_jointPoint2X->SetValue(param_negtive_3[0]);
				integer_RB_BELL_jointPoint2Y->SetValue(param_negtive_3[1]);
				integer_RB_BELL_jointPoint2Z->SetValue(param_negtive_3[2]);
				integer_RB_BELL_jointPoint2A->SetValue(param_negtive_3[3]);
				integer_RB_BELL_jointPoint2B->SetValue(param_negtive_3[4]);
				integer_RB_BELL_jointPoint2C->SetValue(param_negtive_3[5]);

				integer_RB_BELL_jointPoint3X->SetValue(param_negtive_4[0]);
				integer_RB_BELL_jointPoint3Y->SetValue(param_negtive_4[1]);
				integer_RB_BELL_jointPoint3Z->SetValue(param_negtive_4[2]);
				integer_RB_BELL_jointPoint3A->SetValue(param_negtive_4[3]);
				integer_RB_BELL_jointPoint3B->SetValue(param_negtive_4[4]);
				integer_RB_BELL_jointPoint3C->SetValue(param_negtive_4[5]);
			}
			//---------Enter your code here-----------
		}
		else if (block == enum_RB_GUN_rule)
		{
			string rule_RB_gun = enum_RB_GUN_rule->ValueAsString().GetLocaleText();
			if (rule_RB_gun.compare("��1/3") == 0) {
				integer_RB_GUN_jointPoint1X->SetValue(param_1[0]);
				integer_RB_GUN_jointPoint1Y->SetValue(param_1[1]);
				integer_RB_GUN_jointPoint1Z->SetValue(param_1[2]);
				integer_RB_GUN_jointPoint1A->SetValue(param_1[3]);
				integer_RB_GUN_jointPoint1B->SetValue(param_1[4]);
				integer_RB_GUN_jointPoint1C->SetValue(param_1[5]);

				integer_RB_GUN_jointPoint2X->SetEnable(true);
				integer_RB_GUN_jointPoint2Y->SetEnable(true);
				integer_RB_GUN_jointPoint2Z->SetEnable(true);
				integer_RB_GUN_jointPoint2A->SetEnable(true);
				integer_RB_GUN_jointPoint2B->SetEnable(true);
				integer_RB_GUN_jointPoint2C->SetEnable(true);

				integer_RB_GUN_jointPoint2X->SetValue(param_2[0]);
				integer_RB_GUN_jointPoint2Y->SetValue(param_2[1]);
				integer_RB_GUN_jointPoint2Z->SetValue(param_2[2]);
				integer_RB_GUN_jointPoint2A->SetValue(param_2[3]);
				integer_RB_GUN_jointPoint2B->SetValue(param_2[4]);
				integer_RB_GUN_jointPoint2C->SetValue(param_2[5]);

				integer_RB_GUN_jointPoint3X->SetValue(param_3_1[0]);
				integer_RB_GUN_jointPoint3Y->SetValue(param_3_1[1]);
				integer_RB_GUN_jointPoint3Z->SetValue(param_3_1[2]);
				integer_RB_GUN_jointPoint3A->SetValue(param_3_1[3]);
				integer_RB_GUN_jointPoint3B->SetValue(param_3_1[4]);
				integer_RB_GUN_jointPoint3C->SetValue(param_3_1[5]);

				integer_RB_GUN_jointPoint4X->SetValue(param_4[0]);
				integer_RB_GUN_jointPoint4Y->SetValue(param_4[1]);
				integer_RB_GUN_jointPoint4Z->SetValue(param_4[2]);
				integer_RB_GUN_jointPoint4A->SetValue(param_4[3]);
				integer_RB_GUN_jointPoint4B->SetValue(param_4[4]);
				integer_RB_GUN_jointPoint4C->SetValue(param_4[5]);

				integer_RB_GUN_jointPoint5X->SetEnable(true);
				integer_RB_GUN_jointPoint5Y->SetEnable(true);
				integer_RB_GUN_jointPoint5Z->SetEnable(true);
				integer_RB_GUN_jointPoint5A->SetEnable(true);
				integer_RB_GUN_jointPoint5B->SetEnable(true);
				integer_RB_GUN_jointPoint5C->SetEnable(true);

				integer_RB_GUN_jointPoint5X->SetValue(param_5[0]);
				integer_RB_GUN_jointPoint5Y->SetValue(param_5[1]);
				integer_RB_GUN_jointPoint5Z->SetValue(param_5[2]);
				integer_RB_GUN_jointPoint5A->SetValue(param_5[3]);
				integer_RB_GUN_jointPoint5B->SetValue(param_5[4]);
				integer_RB_GUN_jointPoint5C->SetValue(param_5[5]);
			}
			if (rule_RB_gun.compare("��2") == 0) {
				integer_RB_GUN_jointPoint1X->SetValue(param_1[0]);
				integer_RB_GUN_jointPoint1Y->SetValue(param_1[1]);
				integer_RB_GUN_jointPoint1Z->SetValue(param_1[2]);
				integer_RB_GUN_jointPoint1A->SetValue(param_1[3]);
				integer_RB_GUN_jointPoint1B->SetValue(param_1[4]);
				integer_RB_GUN_jointPoint1C->SetValue(param_1[5]);

				integer_RB_GUN_jointPoint2X->SetEnable(true);
				integer_RB_GUN_jointPoint2Y->SetEnable(true);
				integer_RB_GUN_jointPoint2Z->SetEnable(true);
				integer_RB_GUN_jointPoint2A->SetEnable(true);
				integer_RB_GUN_jointPoint2B->SetEnable(true);
				integer_RB_GUN_jointPoint2C->SetEnable(true);

				integer_RB_GUN_jointPoint2X->SetValue(param_2[0]);
				integer_RB_GUN_jointPoint2Y->SetValue(param_2[1]);
				integer_RB_GUN_jointPoint2Z->SetValue(param_2[2]);
				integer_RB_GUN_jointPoint2A->SetValue(param_2[3]);
				integer_RB_GUN_jointPoint2B->SetValue(param_2[4]);
				integer_RB_GUN_jointPoint2C->SetValue(param_2[5]);

				integer_RB_GUN_jointPoint3X->SetValue(param_3_2[0]);
				integer_RB_GUN_jointPoint3Y->SetValue(param_3_2[1]);
				integer_RB_GUN_jointPoint3Z->SetValue(param_3_2[2]);
				integer_RB_GUN_jointPoint3A->SetValue(param_3_2[3]);
				integer_RB_GUN_jointPoint3B->SetValue(param_3_2[4]);
				integer_RB_GUN_jointPoint3C->SetValue(param_3_2[5]);

				integer_RB_GUN_jointPoint4X->SetValue(param_4[0]);
				integer_RB_GUN_jointPoint4Y->SetValue(param_4[1]);
				integer_RB_GUN_jointPoint4Z->SetValue(param_4[2]);
				integer_RB_GUN_jointPoint4A->SetValue(param_4[3]);
				integer_RB_GUN_jointPoint4B->SetValue(param_4[4]);
				integer_RB_GUN_jointPoint4C->SetValue(param_4[5]);

				integer_RB_GUN_jointPoint5X->SetEnable(true);
				integer_RB_GUN_jointPoint5Y->SetEnable(true);
				integer_RB_GUN_jointPoint5Z->SetEnable(true);
				integer_RB_GUN_jointPoint5A->SetEnable(true);
				integer_RB_GUN_jointPoint5B->SetEnable(true);
				integer_RB_GUN_jointPoint5C->SetEnable(true);

				integer_RB_GUN_jointPoint5X->SetValue(param_5[0]);
				integer_RB_GUN_jointPoint5Y->SetValue(param_5[1]);
				integer_RB_GUN_jointPoint5Z->SetValue(param_5[2]);
				integer_RB_GUN_jointPoint5A->SetValue(param_5[3]);
				integer_RB_GUN_jointPoint5B->SetValue(param_5[4]);
				integer_RB_GUN_jointPoint5C->SetValue(param_5[5]);
			}
			if (rule_RB_gun.compare("��ֱ��Ϳ") == 0) {
				integer_RB_GUN_jointPoint1X->SetValue(param_1[0]);
				integer_RB_GUN_jointPoint1Y->SetValue(param_1[1]);
				integer_RB_GUN_jointPoint1Z->SetValue(param_1[2]);
				integer_RB_GUN_jointPoint1A->SetValue(param_1[3]);
				integer_RB_GUN_jointPoint1B->SetValue(param_1[4]);
				integer_RB_GUN_jointPoint1C->SetValue(param_1[5]);

				integer_RB_GUN_jointPoint2X->SetEnable(false);
				integer_RB_GUN_jointPoint2Y->SetEnable(false);
				integer_RB_GUN_jointPoint2Z->SetEnable(false);
				integer_RB_GUN_jointPoint2A->SetEnable(false);
				integer_RB_GUN_jointPoint2B->SetEnable(false);
				integer_RB_GUN_jointPoint2C->SetEnable(false);


				integer_RB_GUN_jointPoint2X->SetValue(param_2[0]);
				integer_RB_GUN_jointPoint2Y->SetValue(param_2[1]);
				integer_RB_GUN_jointPoint2Z->SetValue(param_2[2]);
				integer_RB_GUN_jointPoint2A->SetValue(param_2[3]);
				integer_RB_GUN_jointPoint2B->SetValue(param_2[4]);
				integer_RB_GUN_jointPoint2C->SetValue(param_2[5]);

				integer_RB_GUN_jointPoint3X->SetValue(param_3_2[0]);
				integer_RB_GUN_jointPoint3Y->SetValue(param_3_2[1]);
				integer_RB_GUN_jointPoint3Z->SetValue(param_3_2[2]);
				integer_RB_GUN_jointPoint3A->SetValue(param_3_2[3]);
				integer_RB_GUN_jointPoint3B->SetValue(param_3_2[4]);
				integer_RB_GUN_jointPoint3C->SetValue(param_3_2[5]);

				integer_RB_GUN_jointPoint4X->SetValue(param_4[0]);
				integer_RB_GUN_jointPoint4Y->SetValue(param_4[1]);
				integer_RB_GUN_jointPoint4Z->SetValue(param_4[2]);
				integer_RB_GUN_jointPoint4A->SetValue(param_4[3]);
				integer_RB_GUN_jointPoint4B->SetValue(param_4[4]);
				integer_RB_GUN_jointPoint4C->SetValue(param_4[5]);

				integer_RB_GUN_jointPoint5X->SetEnable(false);
				integer_RB_GUN_jointPoint5Y->SetEnable(false);
				integer_RB_GUN_jointPoint5Z->SetEnable(false);
				integer_RB_GUN_jointPoint5A->SetEnable(false);
				integer_RB_GUN_jointPoint5B->SetEnable(false);
				integer_RB_GUN_jointPoint5C->SetEnable(false);

				integer_RB_GUN_jointPoint5X->SetValue(param_5[0]);
				integer_RB_GUN_jointPoint5Y->SetValue(param_5[1]);
				integer_RB_GUN_jointPoint5Z->SetValue(param_5[2]);
				integer_RB_GUN_jointPoint5A->SetValue(param_5[3]);
				integer_RB_GUN_jointPoint5B->SetValue(param_5[4]);
				integer_RB_GUN_jointPoint5C->SetValue(param_5[5]);
			}
			//---------Enter your code here-----------
		}
		else if (block == enum_FB_GUN_rule)
		{
			string rule_FB_gun = enum_FB_GUN_rule->ValueAsString().GetLocaleText();

			if (rule_FB_gun.compare("��դ") == 0) {
				integer_jointPoint0X1->SetValue(param_101[0]);
				integer_jointPoint0Y1->SetValue(param_101[1]);
				integer_jointPoint0Z1->SetValue(param_101[2]);
				integer_jointPoint0A1->SetValue(param_101[3]);
				integer_jointPoint0B1->SetValue(param_101[4]);
				integer_jointPoint0C1->SetValue(param_101[5]);

				integer_jointPoint1X->SetEnable(true);
				integer_jointPoint1Y->SetEnable(true);
				integer_jointPoint1Z->SetEnable(true);
				integer_jointPoint1A->SetEnable(true);
				integer_jointPoint1B->SetEnable(true);
				integer_jointPoint1C->SetEnable(true);

				integer_jointPoint1X->SetValue(param_102[0]);
				integer_jointPoint1Y->SetValue(param_102[1]);
				integer_jointPoint1Z->SetValue(param_102[2]);
				integer_jointPoint1A->SetValue(param_102[3]);
				integer_jointPoint1B->SetValue(param_102[4]);
				integer_jointPoint1C->SetValue(param_102[5]);

				integer_jointPoint2X->SetValue(param_103[0]);
				integer_jointPoint2Y->SetValue(param_103[1]);
				integer_jointPoint2Z->SetValue(param_103[2]);
				integer_jointPoint2A->SetValue(param_103[3]);
				integer_jointPoint2B->SetValue(param_103[4]);
				integer_jointPoint2C->SetValue(param_103[5]);

				integer_jointPoint3X->SetValue(param_104[0]);
				integer_jointPoint3Y->SetValue(param_104[1]);
				integer_jointPoint3Z->SetValue(param_104[2]);
				integer_jointPoint3A->SetValue(param_104[3]);
				integer_jointPoint3B->SetValue(param_104[4]);
				integer_jointPoint3C->SetValue(param_104[5]);

				integer_jointPoint4X->SetEnable(true);
				integer_jointPoint4Y->SetEnable(true);
				integer_jointPoint4Z->SetEnable(true);
				integer_jointPoint4A->SetEnable(true);
				integer_jointPoint4B->SetEnable(true);
				integer_jointPoint4C->SetEnable(true);

				integer_jointPoint4X->SetValue(param_105[0]);
				integer_jointPoint4Y->SetValue(param_105[1]);
				integer_jointPoint4Z->SetValue(param_105[2]);
				integer_jointPoint4A->SetValue(param_105[3]);
				integer_jointPoint4B->SetValue(param_105[4]);
				integer_jointPoint4C->SetValue(param_105[5]);
			}
			if (rule_FB_gun.compare("������ṹ") == 0) {
				integer_jointPoint0X1->SetValue(param_101[0]);
				integer_jointPoint0Y1->SetValue(param_101[1]);
				integer_jointPoint0Z1->SetValue(param_101[2]);
				integer_jointPoint0A1->SetValue(param_101[3]);
				integer_jointPoint0B1->SetValue(param_101[4]);
				integer_jointPoint0C1->SetValue(param_101[5]);

				integer_jointPoint1X->SetEnable(true);
				integer_jointPoint1Y->SetEnable(true);
				integer_jointPoint1Z->SetEnable(true);
				integer_jointPoint1A->SetEnable(true);
				integer_jointPoint1B->SetEnable(true);
				integer_jointPoint1C->SetEnable(true);

				integer_jointPoint1X->SetValue(param_202[0]);
				integer_jointPoint1Y->SetValue(param_202[1]);
				integer_jointPoint1Z->SetValue(param_202[2]);
				integer_jointPoint1A->SetValue(param_202[3]);
				integer_jointPoint1B->SetValue(param_202[4]);
				integer_jointPoint1C->SetValue(param_202[5]);

				integer_jointPoint2X->SetValue(param_203[0]);
				integer_jointPoint2Y->SetValue(param_203[1]);
				integer_jointPoint2Z->SetValue(param_203[2]);
				integer_jointPoint2A->SetValue(param_203[3]);
				integer_jointPoint2B->SetValue(param_203[4]);
				integer_jointPoint2C->SetValue(param_203[5]);

				integer_jointPoint3X->SetValue(param_204[0]);
				integer_jointPoint3Y->SetValue(param_204[1]);
				integer_jointPoint3Z->SetValue(param_204[2]);
				integer_jointPoint3A->SetValue(param_204[3]);
				integer_jointPoint3B->SetValue(param_204[4]);
				integer_jointPoint3C->SetValue(param_204[5]);

				integer_jointPoint4X->SetEnable(true);
				integer_jointPoint4Y->SetEnable(true);
				integer_jointPoint4Z->SetEnable(true);
				integer_jointPoint4A->SetEnable(true);
				integer_jointPoint4B->SetEnable(true);
				integer_jointPoint4C->SetEnable(true);

				integer_jointPoint4X->SetValue(param_205[0]);
				integer_jointPoint4Y->SetValue(param_205[1]);
				integer_jointPoint4Z->SetValue(param_205[2]);
				integer_jointPoint4A->SetValue(param_205[3]);
				integer_jointPoint4B->SetValue(param_205[4]);
				integer_jointPoint4C->SetValue(param_205[5]);
			}
			if (rule_FB_gun.compare("��դ-�ƿ�") == 0) {
				integer_jointPoint0X1->SetValue(param_101[0]);
				integer_jointPoint0Y1->SetValue(param_101[1]);
				integer_jointPoint0Z1->SetValue(param_101[2]);
				integer_jointPoint0A1->SetValue(param_101[3]);
				integer_jointPoint0B1->SetValue(param_101[4]);
				integer_jointPoint0C1->SetValue(param_101[5]);

				integer_jointPoint1X->SetEnable(true);
				integer_jointPoint1Y->SetEnable(true);
				integer_jointPoint1Z->SetEnable(true);
				integer_jointPoint1A->SetEnable(true);
				integer_jointPoint1B->SetEnable(true);
				integer_jointPoint1C->SetEnable(true);

				integer_jointPoint1X->SetValue(param_302[0]);
				integer_jointPoint1Y->SetValue(param_302[1]);
				integer_jointPoint1Z->SetValue(param_302[2]);
				integer_jointPoint1A->SetValue(param_302[3]);
				integer_jointPoint1B->SetValue(param_302[4]);
				integer_jointPoint1C->SetValue(param_302[5]);

				integer_jointPoint2X->SetValue(param_303[0]);
				integer_jointPoint2Y->SetValue(param_303[1]);
				integer_jointPoint2Z->SetValue(param_303[2]);
				integer_jointPoint2A->SetValue(param_303[3]);
				integer_jointPoint2B->SetValue(param_303[4]);
				integer_jointPoint2C->SetValue(param_303[5]);

				integer_jointPoint3X->SetValue(param_304[0]);
				integer_jointPoint3Y->SetValue(param_304[1]);
				integer_jointPoint3Z->SetValue(param_304[2]);
				integer_jointPoint3A->SetValue(param_304[3]);
				integer_jointPoint3B->SetValue(param_304[4]);
				integer_jointPoint3C->SetValue(param_304[5]);

				integer_jointPoint4X->SetEnable(true);
				integer_jointPoint4Y->SetEnable(true);
				integer_jointPoint4Z->SetEnable(true);
				integer_jointPoint4A->SetEnable(true);
				integer_jointPoint4B->SetEnable(true);
				integer_jointPoint4C->SetEnable(true);

				integer_jointPoint4X->SetValue(param_305[0]);
				integer_jointPoint4Y->SetValue(param_305[1]);
				integer_jointPoint4Z->SetValue(param_305[2]);
				integer_jointPoint4A->SetValue(param_305[3]);
				integer_jointPoint4B->SetValue(param_305[4]);
				integer_jointPoint4C->SetValue(param_305[5]);
			}
			if (rule_FB_gun.compare("��դ-�ƿ�-�м�Ͽ�") == 0) {
				integer_jointPoint0X1->SetValue(param_101[0]);
				integer_jointPoint0Y1->SetValue(param_101[1]);
				integer_jointPoint0Z1->SetValue(param_101[2]);
				integer_jointPoint0A1->SetValue(param_101[3]);
				integer_jointPoint0B1->SetValue(param_101[4]);
				integer_jointPoint0C1->SetValue(param_101[5]);

				integer_jointPoint1X->SetEnable(true);
				integer_jointPoint1Y->SetEnable(true);
				integer_jointPoint1Z->SetEnable(true);
				integer_jointPoint1A->SetEnable(true);
				integer_jointPoint1B->SetEnable(true);
				integer_jointPoint1C->SetEnable(true);

				integer_jointPoint1X->SetValue(param_402[0]);
				integer_jointPoint1Y->SetValue(param_402[1]);
				integer_jointPoint1Z->SetValue(param_402[2]);
				integer_jointPoint1A->SetValue(param_402[3]);
				integer_jointPoint1B->SetValue(param_402[4]);
				integer_jointPoint1C->SetValue(param_402[5]);

				integer_jointPoint2X->SetValue(param_403[0]);
				integer_jointPoint2Y->SetValue(param_403[1]);
				integer_jointPoint2Z->SetValue(param_403[2]);
				integer_jointPoint2A->SetValue(param_403[3]);
				integer_jointPoint2B->SetValue(param_403[4]);
				integer_jointPoint2C->SetValue(param_403[5]);

				integer_jointPoint3X->SetValue(param_404[0]);
				integer_jointPoint3Y->SetValue(param_404[1]);
				integer_jointPoint3Z->SetValue(param_404[2]);
				integer_jointPoint3A->SetValue(param_404[3]);
				integer_jointPoint3B->SetValue(param_404[4]);
				integer_jointPoint3C->SetValue(param_404[5]);

				integer_jointPoint4X->SetEnable(true);
				integer_jointPoint4Y->SetEnable(true);
				integer_jointPoint4Z->SetEnable(true);
				integer_jointPoint4A->SetEnable(true);
				integer_jointPoint4B->SetEnable(true);
				integer_jointPoint4C->SetEnable(true);

				integer_jointPoint4X->SetValue(param_405[0]);
				integer_jointPoint4Y->SetValue(param_405[1]);
				integer_jointPoint4Z->SetValue(param_405[2]);
				integer_jointPoint4A->SetValue(param_405[3]);
				integer_jointPoint4B->SetValue(param_405[4]);
				integer_jointPoint4C->SetValue(param_405[5]);
			}
			if (rule_FB_gun.compare("�����-�ƿ�") == 0) {
				integer_jointPoint0X1->SetValue(param_101[0]);
				integer_jointPoint0Y1->SetValue(param_101[1]);
				integer_jointPoint0Z1->SetValue(param_101[2]);
				integer_jointPoint0A1->SetValue(param_101[3]);
				integer_jointPoint0B1->SetValue(param_101[4]);
				integer_jointPoint0C1->SetValue(param_101[5]);

				integer_jointPoint1X->SetEnable(true);
				integer_jointPoint1Y->SetEnable(true);
				integer_jointPoint1Z->SetEnable(true);
				integer_jointPoint1A->SetEnable(true);
				integer_jointPoint1B->SetEnable(true);
				integer_jointPoint1C->SetEnable(true);

				integer_jointPoint1X->SetValue(param_502[0]);
				integer_jointPoint1Y->SetValue(param_502[1]);
				integer_jointPoint1Z->SetValue(param_502[2]);
				integer_jointPoint1A->SetValue(param_502[3]);
				integer_jointPoint1B->SetValue(param_502[4]);
				integer_jointPoint1C->SetValue(param_502[5]);

				integer_jointPoint2X->SetValue(param_503[0]);
				integer_jointPoint2Y->SetValue(param_503[1]);
				integer_jointPoint2Z->SetValue(param_503[2]);
				integer_jointPoint2A->SetValue(param_503[3]);
				integer_jointPoint2B->SetValue(param_503[4]);
				integer_jointPoint2C->SetValue(param_503[5]);

				integer_jointPoint3X->SetValue(param_504[0]);
				integer_jointPoint3Y->SetValue(param_504[1]);
				integer_jointPoint3Z->SetValue(param_504[2]);
				integer_jointPoint3A->SetValue(param_504[3]);
				integer_jointPoint3B->SetValue(param_504[4]);
				integer_jointPoint3C->SetValue(param_504[5]);

				integer_jointPoint4X->SetEnable(true);
				integer_jointPoint4Y->SetEnable(true);
				integer_jointPoint4Z->SetEnable(true);
				integer_jointPoint4A->SetEnable(true);
				integer_jointPoint4B->SetEnable(true);
				integer_jointPoint4C->SetEnable(true);

				integer_jointPoint4X->SetValue(param_505[0]);
				integer_jointPoint4Y->SetValue(param_505[1]);
				integer_jointPoint4Z->SetValue(param_505[2]);
				integer_jointPoint4A->SetValue(param_505[3]);
				integer_jointPoint4B->SetValue(param_505[4]);
				integer_jointPoint4C->SetValue(param_505[5]);
			}
			if (rule_FB_gun.compare("�����-��դ") == 0) {
				integer_jointPoint0X1->SetValue(param_101[0]);
				integer_jointPoint0Y1->SetValue(param_101[1]);
				integer_jointPoint0Z1->SetValue(param_101[2]);
				integer_jointPoint0A1->SetValue(param_101[3]);
				integer_jointPoint0B1->SetValue(param_101[4]);
				integer_jointPoint0C1->SetValue(param_101[5]);

				integer_jointPoint1X->SetEnable(true);
				integer_jointPoint1Y->SetEnable(true);
				integer_jointPoint1Z->SetEnable(true);
				integer_jointPoint1A->SetEnable(true);
				integer_jointPoint1B->SetEnable(true);
				integer_jointPoint1C->SetEnable(true);

				integer_jointPoint1X->SetValue(param_602[0]);
				integer_jointPoint1Y->SetValue(param_602[1]);
				integer_jointPoint1Z->SetValue(param_602[2]);
				integer_jointPoint1A->SetValue(param_602[3]);
				integer_jointPoint1B->SetValue(param_602[4]);
				integer_jointPoint1C->SetValue(param_602[5]);

				integer_jointPoint2X->SetValue(param_603[0]);
				integer_jointPoint2Y->SetValue(param_603[1]);
				integer_jointPoint2Z->SetValue(param_603[2]);
				integer_jointPoint2A->SetValue(param_603[3]);
				integer_jointPoint2B->SetValue(param_603[4]);
				integer_jointPoint2C->SetValue(param_603[5]);

				integer_jointPoint3X->SetValue(param_604[0]);
				integer_jointPoint3Y->SetValue(param_604[1]);
				integer_jointPoint3Z->SetValue(param_604[2]);
				integer_jointPoint3A->SetValue(param_604[3]);
				integer_jointPoint3B->SetValue(param_604[4]);
				integer_jointPoint3C->SetValue(param_604[5]);

				integer_jointPoint4X->SetEnable(true);
				integer_jointPoint4Y->SetEnable(true);
				integer_jointPoint4Z->SetEnable(true);
				integer_jointPoint4A->SetEnable(true);
				integer_jointPoint4B->SetEnable(true);
				integer_jointPoint4C->SetEnable(true);

				integer_jointPoint4X->SetValue(param_605[0]);
				integer_jointPoint4Y->SetValue(param_605[1]);
				integer_jointPoint4Z->SetValue(param_605[2]);
				integer_jointPoint4A->SetValue(param_605[3]);
				integer_jointPoint4B->SetValue(param_605[4]);
				integer_jointPoint4C->SetValue(param_605[5]);
			}
			if (rule_FB_gun.compare("�ƿ�") == 0) {
				integer_jointPoint0X1->SetValue(param_101[0]);
				integer_jointPoint0Y1->SetValue(param_101[1]);
				integer_jointPoint0Z1->SetValue(param_101[2]);
				integer_jointPoint0A1->SetValue(param_101[3]);
				integer_jointPoint0B1->SetValue(param_101[4]);
				integer_jointPoint0C1->SetValue(param_101[5]);

				integer_jointPoint1X->SetEnable(true);
				integer_jointPoint1Y->SetEnable(true);
				integer_jointPoint1Z->SetEnable(true);
				integer_jointPoint1A->SetEnable(true);
				integer_jointPoint1B->SetEnable(true);
				integer_jointPoint1C->SetEnable(true);

				integer_jointPoint1X->SetValue(param_702[0]);
				integer_jointPoint1Y->SetValue(param_702[1]);
				integer_jointPoint1Z->SetValue(param_702[2]);
				integer_jointPoint1A->SetValue(param_702[3]);
				integer_jointPoint1B->SetValue(param_702[4]);
				integer_jointPoint1C->SetValue(param_702[5]);

				integer_jointPoint2X->SetValue(param_703[0]);
				integer_jointPoint2Y->SetValue(param_703[1]);
				integer_jointPoint2Z->SetValue(param_703[2]);
				integer_jointPoint2A->SetValue(param_703[3]);
				integer_jointPoint2B->SetValue(param_703[4]);
				integer_jointPoint2C->SetValue(param_703[5]);

				integer_jointPoint3X->SetValue(param_704[0]);
				integer_jointPoint3Y->SetValue(param_704[1]);
				integer_jointPoint3Z->SetValue(param_704[2]);
				integer_jointPoint3A->SetValue(param_704[3]);
				integer_jointPoint3B->SetValue(param_704[4]);
				integer_jointPoint3C->SetValue(param_704[5]);

				integer_jointPoint4X->SetEnable(true);
				integer_jointPoint4Y->SetEnable(true);
				integer_jointPoint4Z->SetEnable(true);
				integer_jointPoint4A->SetEnable(true);
				integer_jointPoint4B->SetEnable(true);
				integer_jointPoint4C->SetEnable(true);

				integer_jointPoint4X->SetValue(param_705[0]);
				integer_jointPoint4Y->SetValue(param_705[1]);
				integer_jointPoint4Z->SetValue(param_705[2]);
				integer_jointPoint4A->SetValue(param_705[3]);
				integer_jointPoint4B->SetValue(param_705[4]);
				integer_jointPoint4C->SetValue(param_705[5]);
			}

			if (rule_FB_gun.compare("������ṹ-��ֱ��Ϳ") == 0) {
				integer_jointPoint0X1->SetValue(param_101[0]);
				integer_jointPoint0Y1->SetValue(param_101[1]);
				integer_jointPoint0Z1->SetValue(param_101[2]);
				integer_jointPoint0A1->SetValue(param_101[3]);
				integer_jointPoint0B1->SetValue(param_101[4]);
				integer_jointPoint0C1->SetValue(param_101[5]);

				integer_jointPoint1X->SetEnable(false);
				integer_jointPoint1Y->SetEnable(false);
				integer_jointPoint1Z->SetEnable(false);
				integer_jointPoint1A->SetEnable(false);
				integer_jointPoint1B->SetEnable(false);
				integer_jointPoint1C->SetEnable(false);

				integer_jointPoint2X->SetValue(param_203[0]);
				integer_jointPoint2Y->SetValue(param_203[1]);
				integer_jointPoint2Z->SetValue(param_203[2]);
				integer_jointPoint2A->SetValue(param_203[3]);
				integer_jointPoint2B->SetValue(param_203[4]);
				integer_jointPoint2C->SetValue(param_203[5]);

				integer_jointPoint3X->SetValue(param_204[0]);
				integer_jointPoint3Y->SetValue(param_204[1]);
				integer_jointPoint3Z->SetValue(param_204[2]);
				integer_jointPoint3A->SetValue(param_204[3]);
				integer_jointPoint3B->SetValue(param_204[4]);
				integer_jointPoint3C->SetValue(param_204[5]);

				integer_jointPoint4X->SetEnable(false);
				integer_jointPoint4Y->SetEnable(false);
				integer_jointPoint4Z->SetEnable(false);
				integer_jointPoint4A->SetEnable(false);
				integer_jointPoint4B->SetEnable(false);
				integer_jointPoint4C->SetEnable(false);
			}
			if (rule_FB_gun.compare("�����-��դ-��ֱ��Ϳ") == 0) {
				integer_jointPoint0X1->SetValue(param_101[0]);
				integer_jointPoint0Y1->SetValue(param_101[1]);
				integer_jointPoint0Z1->SetValue(param_101[2]);
				integer_jointPoint0A1->SetValue(param_101[3]);
				integer_jointPoint0B1->SetValue(param_101[4]);
				integer_jointPoint0C1->SetValue(param_101[5]);

				integer_jointPoint1X->SetEnable(false);
				integer_jointPoint1Y->SetEnable(false);
				integer_jointPoint1Z->SetEnable(false);
				integer_jointPoint1A->SetEnable(false);
				integer_jointPoint1B->SetEnable(false);
				integer_jointPoint1C->SetEnable(false);

				integer_jointPoint2X->SetValue(param_603[0]);
				integer_jointPoint2Y->SetValue(param_603[1]);
				integer_jointPoint2Z->SetValue(param_603[2]);
				integer_jointPoint2A->SetValue(param_603[3]);
				integer_jointPoint2B->SetValue(param_603[4]);
				integer_jointPoint2C->SetValue(param_603[5]);

				integer_jointPoint3X->SetValue(param_604[0]);
				integer_jointPoint3Y->SetValue(param_604[1]);
				integer_jointPoint3Z->SetValue(param_604[2]);
				integer_jointPoint3A->SetValue(param_604[3]);
				integer_jointPoint3B->SetValue(param_604[4]);
				integer_jointPoint3C->SetValue(param_604[5]);

				integer_jointPoint4X->SetEnable(false);
				integer_jointPoint4Y->SetEnable(false);
				integer_jointPoint4Z->SetEnable(false);
				integer_jointPoint4A->SetEnable(false);
				integer_jointPoint4B->SetEnable(false);
				integer_jointPoint4C->SetEnable(false);
			}
			if (rule_FB_gun.compare("��դ-��ֱ��Ϳ") == 0) {
				integer_jointPoint0X1->SetValue(param_101[0]);
				integer_jointPoint0Y1->SetValue(param_101[1]);
				integer_jointPoint0Z1->SetValue(param_101[2]);
				integer_jointPoint0A1->SetValue(param_101[3]);
				integer_jointPoint0B1->SetValue(param_101[4]);
				integer_jointPoint0C1->SetValue(param_101[5]);

				integer_jointPoint1X->SetEnable(false);
				integer_jointPoint1Y->SetEnable(false);
				integer_jointPoint1Z->SetEnable(false);
				integer_jointPoint1A->SetEnable(false);
				integer_jointPoint1B->SetEnable(false);
				integer_jointPoint1C->SetEnable(false);

				integer_jointPoint2X->SetValue(param_103[0]);
				integer_jointPoint2Y->SetValue(param_103[1]);
				integer_jointPoint2Z->SetValue(param_103[2]);
				integer_jointPoint2A->SetValue(param_103[3]);
				integer_jointPoint2B->SetValue(param_103[4]);
				integer_jointPoint2C->SetValue(param_103[5]);

				integer_jointPoint3X->SetValue(param_104[0]);
				integer_jointPoint3Y->SetValue(param_104[1]);
				integer_jointPoint3Z->SetValue(param_104[2]);
				integer_jointPoint3A->SetValue(param_104[3]);
				integer_jointPoint3B->SetValue(param_104[4]);
				integer_jointPoint3C->SetValue(param_104[5]);

				integer_jointPoint4X->SetEnable(false);
				integer_jointPoint4Y->SetEnable(false);
				integer_jointPoint4Z->SetEnable(false);
				integer_jointPoint4A->SetEnable(false);
				integer_jointPoint4B->SetEnable(false);
				integer_jointPoint4C->SetEnable(false);
			}
			//---------Enter your code here-----------
		}
		
		//ˢ�����ӵ�
		else if (block == button024) {
			update_connect_point();
			
		}
		else if (block == button0241)
		{
			update_connect_point();
		}

		//��ʾ�ܼ�����
		else if (block == button027) {

			//show1601(origin_points.size());
			//�ж��Ƿ��ǵ�һ��дtag
			//tag_all_points.clear();
			if (tag_all_points.empty()) {
				for (int j = 0; j < origin_points.size(); j++)
				{
					double point_coords[3];
					tag_t tag;
					//��һ�η��棬��������
					point_coords[0] = origin_points[j].X();
					point_coords[1] = origin_points[j].Y();
					point_coords[2] = origin_points[j].Z();

					UF_CURVE_create_point(point_coords, &tag);
					tag_all_points.push_back(tag);

					UF_OBJ_set_color(tag, 126);
					
				}
			}
			if (is_show == false) {
				
				for (int j = 0; j < tag_all_points.size(); j++)
				{	
					//��ʾ
					UF_OBJ_set_blank_status(tag_all_points[j], UF_OBJ_NOT_BLANKED);
					is_show = true;
				}

			}
			else {
				for (int j = 0; j < origin_points.size(); j++)
				{
					//ȡ����ʾ
					UF_OBJ_set_blank_status(tag_all_points[j], UF_OBJ_BLANKED);
					is_show = false;
				}
			}

			
			
		}
		//ѡ������ϵ���ӵ�
		else if (block == point091) {
			double x = point091->Point().X;
			double y = point091->Point().Y;
			double z = point091->Point().Z;
			string key = create_key(x, y, z);
			uc1601((char*)(key).c_str(), 0);//��ʾ����ֵ
			if (origin_points_map.find(key) != origin_points_map.end()) {
				tag_t tag;
				
				POINT_p pt = POINT_p();
				pt.T(0, 3) = x;		
				pt.T(1, 3) = y;
				pt.T(2, 3) = z;
				cur_add_point = pt;

				//Ϊ�˸�����ʾѡ�е�
				double point_coords[3];
				point_coords[0] = x;
				point_coords[1] = y;
				point_coords[2] = z;
				UF_CURVE_create_point(point_coords, &tag);
				UF_OBJ_set_color(tag, 211);
				uc1601("�ɹ�ѡ����ӵ�", 1);
			}

			else {
				uc1601("δѡ�й켣��", 1);
				return 0;
			}
			point091->SetPoint(origin_p);

		}
		//�ֶ�׷�ӵ�
		else if (block == button025) {
			
			added_points.push_back(cur_add_point);

			uc1601("��ӳɹ���ӵ�",1);

		}
		//ɾ��ȫ���ֶ����ӵ�
		else if (block == button028) {
			added_points.clear();
			tag_added_points.clear();
			uc1601("�Ѿ�ɾ��ȫ����ӵ�", 1);
		}
		//ѡȡ�켣��ʼ��
		else if (block == point07) {
			double x = point07->Point().X;
			double y = point07->Point().Y;
			double z = point07->Point().Z;
			string key = create_key(x, y, z);
			uc1601((char*)(key).c_str(), 0);//��ʾ����ֵ
			if (points_map.find(key) != points_map.end()) {
				first_cut_point = points_map[key]->index - 1;
				//����ѡ��˵�
				UF_OBJ_set_color(tag_points[first_cut_point],36);
				uc1601("�ɹ�ѡ����ʼ��", 1);
			}
			else {
				uc1601("δѡ�й켣��", 0);
				return 0;
			}
			point07->SetPoint(origin_p);
			
		}
		//ѡȡ�켣��ֹ��
		else if (block == point08) {
			double x = point08->Point().X;
			double y = point08->Point().Y;
			double z = point08->Point().Z;
			string key = create_key(x, y, z);
			uc1601((char*)(key).c_str(), 0);//��ʾ����ֵ
			if (points_map.find(key) != points_map.end()) {
				last_cut_point = points_map[key]->index - 1;
				//����ѡ��˵�
				UF_OBJ_set_color(tag_points[last_cut_point], 36);
				uc1601("�ɹ�ѡ����ֹ��", 1);
			}
			else {
				uc1601("δѡ�й켣��", 0);
				return 0;
			}
			point08->SetPoint(origin_p);

		}
		
		//ȷ�����ӵ�
		else if (block == button026) {
			if (first_cut_point > last_cut_point) {
				int temp = first_cut_point;
				first_cut_point = last_cut_point;
				last_cut_point = temp;
			}

			//��ɾ��ѡ���м��
			for (int i = 0; i < last_cut_point - first_cut_point-1; i++) {
				points.erase(points.begin() + first_cut_point+1);
				//uc1601("delete", 1);
			}

			//�ڹ켣��������⼸����
			for (int i = 0; i < added_points.size(); i++) {
				double point_coords[3];
				point_coords[0] = added_points[i].T(0, 3);
				point_coords[1] = added_points[i].T(1, 3);
				point_coords[2] = added_points[i].T(2, 3);

				tag_t tag;
				POINT_p pt = POINT_p();
				pt.index = i+ first_cut_point+2;
				pt.T(0, 0) = points[first_cut_point].matx[0];
				pt.T(0, 1) = points[first_cut_point].matx[1];
				pt.T(0, 2) = points[first_cut_point].matx[2];
				pt.T(0, 3) = point_coords[0];

				pt.T(1, 0) = points[first_cut_point].matx[4];
				pt.T(1, 1) = points[first_cut_point].matx[5];
				pt.T(1, 2) = points[first_cut_point].matx[6];
				pt.T(1, 3) = point_coords[1];

				pt.T(2, 0) = points[first_cut_point].matx[8];
				pt.T(2, 1) = points[first_cut_point].matx[9];
				pt.T(2, 2) = points[first_cut_point].matx[10];
				pt.T(2, 3) = point_coords[2];


				//UF_CURVE_create_point(point_coords, &tag);

				points.insert(points.begin() + first_cut_point + 1+i, pt);

				//uc1601("add", 1);
			}

			//���¸ı�point�е�index
			for (int i = 0;i < points.size();i++) {
				points[i].index = i + 1;
			}
			//���added_points����
			added_points.clear();

			//ɾ���켣�͹켣��
			//����ɾ���켣��
			int count = points.size();
			tag_t* points_clean = new tag_t[count];
			for (int i = 0; i < points.size(); i++)
			{
				points_clean[i] = tag_points[i];
			}
			UF_OBJ_delete_array_of_objects(count, points_clean, 0);
			delete[] points_clean;

			//tag_points.clear();

			//ɾ���켣����
			for (int i = 0; i < tag_line.size(); i++)
			{
				if (tag_line[i] != NULL)
				{
					UF_OBJ_delete_object(tag_line[i]);
				}
			}
			tag_line.clear();

			//�����ʾ�ĵ�
			UF_OBJ_delete_array_of_objects(tag_points.size(), &tag_points[0], 0);
			
			//���¸�ÿ���켣�㸳ֵtag
			tag_points.clear();
			for (int i = 0;i < points.size();i++) {
				double point_coords[3];
				point_coords[0] = points[i].X();
				point_coords[1] = points[i].Y();
				point_coords[2] = points[i].Z();
				tag_t point_tag;
				UF_CURVE_create_point(point_coords, &point_tag);//������
				tag_points.push_back(point_tag);
			}
			UF_OBJ_delete_array_of_objects(tag_points.size(), &tag_points[0], 0);
			tag_points.clear();

			//���ص���
			for (int i= 0; i<tag_all_points.size(); i++)
				UF_OBJ_set_blank_status(tag_all_points[i], UF_OBJ_BLANKED);
		
			//���ƥ���
			points_map.clear();
			//�����켣��
			for (int i = 0; i <points.size(); i++)
			{
				tag_t point_tag = NULL_TAG;
				//�켣��λ��ת����ģ������ϵ

				ini_pose.push_back(points[i].T);
				points[i].cal_matx();
				points_map[create_key(points[i])] = &points[i];

				double point_coords[3];
				////�켣��λ��ת����ģ������ϵ
				//points[i].T = station.Twm*points[i].T;
				ini_pose.clear();
				ini_pose.push_back(points[i].T);
				points[i].cal_matx();
				//points_map[create_key(points[i])] = &points[i];

				//��ָ���㹤���޷��ƶ����ɿ��ǵ�λ������
				//UF_MTX4_ortho_normalize(points[i].matx);//������λ�� //���ã���ʹz�ᷴ�� ������Լ�ʵ�֣�

				//�����켣��
				point_coords[0] = points[i].X();
				point_coords[1] = points[i].Y();
				point_coords[2] = points[i].Z();

				//���¸����㸳ֵindex
				points[i].index = i + 1;

				UF_CURVE_create_point(point_coords, &point_tag);//������
				UF_OBJ_set_color(point_tag, 186);//�趨��ɫ
				tag_points.push_back(point_tag);

				//�����켣����
				if (i > 0) {
					UF_CURVE_line_t line_coords;
					tag_t line_tag;
					//�������
					line_coords.start_point[0] = points[i - 1].X();
					line_coords.start_point[1] = points[i - 1].Y();
					line_coords.start_point[2] = points[i - 1].Z();
					//�յ�����
					line_coords.end_point[0] = points[i].X();
					line_coords.end_point[1] = points[i].Y();
					line_coords.end_point[2] = points[i].Z();
					//����ֱ��
					UF_CURVE_create_line(&line_coords, &line_tag);
					UF_OBJ_set_color(line_tag, 150);//������ɫ
					tag_line.push_back(line_tag);
				}
			}
			
		}


    }
    catch(exception& ex){
        
        fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeError, ex.what());
    }
    return 0;
}

void fangzhen::show1601(double num)
{
	char a[100];
	sprintf(a, "%.3f", num);
	uc1601(a, 1);
}
void fangzhen::show_joint_value() {
	if (!joint_data.empty()) {

		int index = match_dense_ponit(*cur_point);
		string info = "";
		if (index >= joint_data.size()) return;
		for (int i = 0; i < 6; i++) {
			string s = to_string(int(joint_data[index][i] * 100) / 100.0);
			s = s.substr(0, s.length() - 4);
			info += "J" + to_string(i + 1) + ":" + s + "  ";
		}
		uc1601((char*)(info).c_str(), 0);
	}
}

int fangzhen::close_cb()
{
    try
    {
		//ɾ�����
		UF_initialize();
		
		if (tool_tag != NULL) {
			UF_OBJ_delete_object(tool_tag);
		}
		
		//����ɾ���켣��
		int count = points.size();
		tag_t* points_clean = new tag_t[count];
		for (int i = 0; i < points.size(); i++)
		{		
			points_clean[i] = tag_points[i];
		}
		UF_OBJ_delete_array_of_objects(count, points_clean, 0);
		delete[] points_clean;
		//tag_points.clear();

		//ɾ�����ӵ����
		//�����ʾ�ĵ�
		UF_OBJ_delete_array_of_objects(tag_points.size(), &tag_points[0], 0);
		tag_points.clear();
		UF_OBJ_delete_array_of_objects(tag_origin_points.size(), &tag_origin_points[0], 0);
		tag_origin_points.clear();

		//����ɾ������
		if (!tag_group_point.empty()) {
			for (int i = 0; i < dense_points.size(); i++)
			{
				count = tag_group_point[i].size();
				if (count > 0) {
					tag_t* points_clean = new tag_t[count];
					for (int j = 0; j < group_points[i].size(); j++)
					{
						points_clean[j] = tag_group_point[i][j];
					}
					UF_OBJ_delete_array_of_objects(count, points_clean, 0);
					delete[] points_clean;
				}				
			}
		}
		tag_group_point.clear();
		
		//ɾ���켣����
		for (int i = 0; i < tag_line.size(); i++)
		{
			if (tag_line[i] != NULL)
			{
				UF_OBJ_delete_object(tag_line[i]);
			}
		}
		tag_line.clear();

		//ɾ���ܼ�������
		for (int i = 0; i < tag_line_dense_points.size(); i++)
		{
			if (tag_line_dense_points[i] != NULL)
			{
				UF_OBJ_delete_object(tag_line_dense_points[i]);
			}
		}
		tag_line_dense_points.clear();

		trans_to_worksys();
		
		if (!create_floder(output_path)) {
			fangzhen::theUI->NXMessageBox()->Show("��ʾ", NXOpen::NXMessageBox::DialogTypeError, "�����ļ�ʧ��");
			return 0;
		}
		
		clear_transmtx();
		
		if (robot->robot_type == "ABB") {
			write_ls();
			save_points();
			write_dat();
			write_bt();
			write_mod();
			//write_mod_brush();
			fangzhen::theUI->NXMessageBox()->Show("��ʾ", NXOpen::NXMessageBox::DialogTypeInformation, "������\n" + filename + ".bt\n" + filename + ".dat\n" + filename + ".mod" );
		}
		else if (robot->robot_type == "FANUC") {
			write_csv();
			write_ls();
			//���켣��ӻ���������ϵת����������ϵ��
			MatrixXd Trw = station.Tmw*inv_T(station.Tmr);
			for (int i = 0; i < points.size(); ++i) {
				points[i].T = Trw*points[i].T;
				points[i].cal_matx();
			}

			save_points();
			write_dat();
			fangzhen::theUI->NXMessageBox()->Show("��ʾ", NXOpen::NXMessageBox::DialogTypeInformation, "������\n" + filename + ".csv\n" + filename + ".dat\n" + filename + ".ls\n");
		}
		
		write_points_param();
		
		uc1601("���ڱ���������...", 0);
		if(save_param()) uc1601("��������ѱ���", 0);
		else  fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeWarning,"�����������ʧ��");
		
		//ɾ��������
		delete robot;
		for (int i = 0; i < robot_parts_tag.size(); i++) {
			if (robot_parts_tag[i] != NULL)
				UF_OBJ_delete_object(robot_parts_tag[i]);
		}
		UF_terminate();

		tag_origin_points.clear();
		tag_line_dense_points.clear();
		tag_line_dense_points.clear();
		tag_group_point.clear();
		points.clear();
		backup_points.clear();
		dense_points.clear();
		origin_points.clear();
		group_points.clear();
		joint_data.clear();


    }
    catch(exception& ex)
    {
        
        fangzhen::theUI->NXMessageBox()->Show("����", NXOpen::NXMessageBox::DialogTypeError, ex.what());
    }
    return 0;
}

PropertyList* fangzhen::GetBlockProperties(const char *blockID)
{
    return theDialog->GetBlockProperties(blockID);
}

void fangzhen::initialize_connectPoints() {
	string rule_RB_bell = enum_RB_BELL_ruleType->ValueAsString().GetLocaleText();
	string rule_RB_gun = enum_RB_GUN_rule->ValueAsString().GetLocaleText();
	string rule_FB_gun = enum_FB_GUN_rule->ValueAsString().GetLocaleText();
	/*
	if (rule_RB_bell.compare("�е���ǹ") == 0) {
		integer_RB_BELL_jointPoint1X->SetEnable(false);
		integer_RB_BELL_jointPoint1Y->SetEnable(false);
		integer_RB_BELL_jointPoint1Z->SetEnable(false);
		integer_RB_BELL_jointPoint1A->SetEnable(false);
		integer_RB_BELL_jointPoint1B->SetEnable(false);
		integer_RB_BELL_jointPoint1C->SetEnable(false);

		integer_RB_BELL_jointPoint2X->SetValue(param_negtive_3[0]);
		integer_RB_BELL_jointPoint2Y->SetValue(param_negtive_3[1]);
		integer_RB_BELL_jointPoint2Z->SetValue(param_negtive_3[2]);
		integer_RB_BELL_jointPoint2A->SetValue(param_negtive_3[3]);
		integer_RB_BELL_jointPoint2B->SetValue(param_negtive_3[4]);
		integer_RB_BELL_jointPoint2C->SetValue(param_negtive_3[5]);

		integer_RB_BELL_jointPoint3X->SetEnable(false);
		integer_RB_BELL_jointPoint3Y->SetEnable(false);
		integer_RB_BELL_jointPoint3Z->SetEnable(false);
		integer_RB_BELL_jointPoint3A->SetEnable(false);
		integer_RB_BELL_jointPoint3B->SetEnable(false);
		integer_RB_BELL_jointPoint3C->SetEnable(false);
	}
	if (rule_RB_bell.compare("���е���ǹ") == 0) {
		integer_RB_BELL_jointPoint1X->SetEnable(true);
		integer_RB_BELL_jointPoint1Y->SetEnable(true);
		integer_RB_BELL_jointPoint1Z->SetEnable(true);
		integer_RB_BELL_jointPoint1A->SetEnable(true);
		integer_RB_BELL_jointPoint1B->SetEnable(true);
		integer_RB_BELL_jointPoint1C->SetEnable(true);

		integer_RB_BELL_jointPoint3X->SetEnable(true);
		integer_RB_BELL_jointPoint3Y->SetEnable(true);
		integer_RB_BELL_jointPoint3Z->SetEnable(true);
		integer_RB_BELL_jointPoint3A->SetEnable(true);
		integer_RB_BELL_jointPoint3B->SetEnable(true);
		integer_RB_BELL_jointPoint3C->SetEnable(true);

		integer_RB_BELL_jointPoint1X->SetValue(param_negtive_2[0]);
		integer_RB_BELL_jointPoint1Y->SetValue(param_negtive_2[1]);
		integer_RB_BELL_jointPoint1Z->SetValue(param_negtive_2[2]);
		integer_RB_BELL_jointPoint1A->SetValue(param_negtive_2[3]);
		integer_RB_BELL_jointPoint1B->SetValue(param_negtive_2[4]);
		integer_RB_BELL_jointPoint1C->SetValue(param_negtive_2[5]);

		integer_RB_BELL_jointPoint2X->SetValue(param_negtive_3[0]);
		integer_RB_BELL_jointPoint2Y->SetValue(param_negtive_3[1]);
		integer_RB_BELL_jointPoint2Z->SetValue(param_negtive_3[2]);
		integer_RB_BELL_jointPoint2A->SetValue(param_negtive_3[3]);
		integer_RB_BELL_jointPoint2B->SetValue(param_negtive_3[4]);
		integer_RB_BELL_jointPoint2C->SetValue(param_negtive_3[5]);

		integer_RB_BELL_jointPoint3X->SetValue(param_negtive_4[0]);
		integer_RB_BELL_jointPoint3Y->SetValue(param_negtive_4[1]);
		integer_RB_BELL_jointPoint3Z->SetValue(param_negtive_4[2]);
		integer_RB_BELL_jointPoint3A->SetValue(param_negtive_4[3]);
		integer_RB_BELL_jointPoint3B->SetValue(param_negtive_4[4]);
		integer_RB_BELL_jointPoint3C->SetValue(param_negtive_4[5]);
	}

	if (rule_RB_gun.compare("��1//3") == 0) {
		integer_RB_GUN_jointPoint1X->SetValue(param_1[0]);
		integer_RB_GUN_jointPoint1Y->SetValue(param_1[1]);
		integer_RB_GUN_jointPoint1Z->SetValue(param_1[2]);
		integer_RB_GUN_jointPoint1A->SetValue(param_1[3]);
		integer_RB_GUN_jointPoint1B->SetValue(param_1[4]);
		integer_RB_GUN_jointPoint1C->SetValue(param_1[5]);

		integer_RB_GUN_jointPoint2X->SetValue(param_2[0]);
		integer_RB_GUN_jointPoint2Y->SetValue(param_2[1]);
		integer_RB_GUN_jointPoint2Z->SetValue(param_2[2]);
		integer_RB_GUN_jointPoint2A->SetValue(param_2[3]);
		integer_RB_GUN_jointPoint2B->SetValue(param_2[4]);
		integer_RB_GUN_jointPoint2C->SetValue(param_2[5]);

		integer_RB_GUN_jointPoint3X->SetValue(param_3_1[0]);
		integer_RB_GUN_jointPoint3Y->SetValue(param_3_1[1]);
		integer_RB_GUN_jointPoint3Z->SetValue(param_3_1[2]);
		integer_RB_GUN_jointPoint3A->SetValue(param_3_1[3]);
		integer_RB_GUN_jointPoint3B->SetValue(param_3_1[4]);
		integer_RB_GUN_jointPoint3C->SetValue(param_3_1[5]);

		integer_RB_GUN_jointPoint4X->SetValue(param_4[0]);
		integer_RB_GUN_jointPoint4Y->SetValue(param_4[1]);
		integer_RB_GUN_jointPoint4Z->SetValue(param_4[2]);
		integer_RB_GUN_jointPoint4A->SetValue(param_4[3]);
		integer_RB_GUN_jointPoint4B->SetValue(param_4[4]);
		integer_RB_GUN_jointPoint4C->SetValue(param_4[5]);

		integer_RB_GUN_jointPoint5X->SetValue(param_5[0]);
		integer_RB_GUN_jointPoint5Y->SetValue(param_5[1]);
		integer_RB_GUN_jointPoint5Z->SetValue(param_5[2]);
		integer_RB_GUN_jointPoint5A->SetValue(param_5[3]);
		integer_RB_GUN_jointPoint5B->SetValue(param_5[4]);
		integer_RB_GUN_jointPoint5C->SetValue(param_5[5]);
	}
	if (rule_RB_gun.compare("��2") == 0) {
		integer_RB_GUN_jointPoint1X->SetValue(param_1[0]);
		integer_RB_GUN_jointPoint1Y->SetValue(param_1[1]);
		integer_RB_GUN_jointPoint1Z->SetValue(param_1[2]);
		integer_RB_GUN_jointPoint1A->SetValue(param_1[3]);
		integer_RB_GUN_jointPoint1B->SetValue(param_1[4]);
		integer_RB_GUN_jointPoint1C->SetValue(param_1[5]);

		integer_RB_GUN_jointPoint2X->SetValue(param_2[0]);
		integer_RB_GUN_jointPoint2Y->SetValue(param_2[1]);
		integer_RB_GUN_jointPoint2Z->SetValue(param_2[2]);
		integer_RB_GUN_jointPoint2A->SetValue(param_2[3]);
		integer_RB_GUN_jointPoint2B->SetValue(param_2[4]);
		integer_RB_GUN_jointPoint2C->SetValue(param_2[5]);

		integer_RB_GUN_jointPoint3X->SetValue(param_3_2[0]);
		integer_RB_GUN_jointPoint3Y->SetValue(param_3_2[1]);
		integer_RB_GUN_jointPoint3Z->SetValue(param_3_2[2]);
		integer_RB_GUN_jointPoint3A->SetValue(param_3_2[3]);
		integer_RB_GUN_jointPoint3B->SetValue(param_3_2[4]);
		integer_RB_GUN_jointPoint3C->SetValue(param_3_2[5]);

		integer_RB_GUN_jointPoint4X->SetValue(param_4[0]);
		integer_RB_GUN_jointPoint4Y->SetValue(param_4[1]);
		integer_RB_GUN_jointPoint4Z->SetValue(param_4[2]);
		integer_RB_GUN_jointPoint4A->SetValue(param_4[3]);
		integer_RB_GUN_jointPoint4B->SetValue(param_4[4]);
		integer_RB_GUN_jointPoint4C->SetValue(param_4[5]);

		integer_RB_GUN_jointPoint5X->SetValue(param_5[0]);
		integer_RB_GUN_jointPoint5Y->SetValue(param_5[1]);
		integer_RB_GUN_jointPoint5Z->SetValue(param_5[2]);
		integer_RB_GUN_jointPoint5A->SetValue(param_5[3]);
		integer_RB_GUN_jointPoint5B->SetValue(param_5[4]);
		integer_RB_GUN_jointPoint5C->SetValue(param_5[5]);
	}
	if (rule_RB_gun.compare("��ֱ��Ϳ") == 0) {
		param_1[0] = integer_RB_GUN_jointPoint1X->Value();
		param_1[1] = integer_RB_GUN_jointPoint1Y->Value();
		param_1[2] = integer_RB_GUN_jointPoint1Z->Value();
		param_1[3] = integer_RB_GUN_jointPoint1A->Value();
		param_1[4] = integer_RB_GUN_jointPoint1B->Value();
		param_1[5] = integer_RB_GUN_jointPoint1C->Value();

		param_2[0] = integer_RB_GUN_jointPoint2X->Value();
		param_2[1] = integer_RB_GUN_jointPoint2Y->Value();
		param_2[2] = integer_RB_GUN_jointPoint2Z->Value();
		param_2[3] = integer_RB_GUN_jointPoint2A->Value();
		param_2[4] = integer_RB_GUN_jointPoint2B->Value();
		param_2[5] = integer_RB_GUN_jointPoint2C->Value();

		param_3_2[0] = integer_RB_GUN_jointPoint3X->Value();
		param_3_2[1] = integer_RB_GUN_jointPoint3Y->Value();
		param_3_2[2] = integer_RB_GUN_jointPoint3Z->Value();
		param_3_2[3] = integer_RB_GUN_jointPoint3A->Value();
		param_3_2[4] = integer_RB_GUN_jointPoint3B->Value();
		param_3_2[5] = integer_RB_GUN_jointPoint3C->Value();

		param_4[0] = integer_RB_GUN_jointPoint4X->Value();
		param_4[1] = integer_RB_GUN_jointPoint4Y->Value();
		param_4[2] = integer_RB_GUN_jointPoint4Z->Value();
		param_4[3] = integer_RB_GUN_jointPoint4A->Value();
		param_4[4] = integer_RB_GUN_jointPoint4B->Value();
		param_4[5] = integer_RB_GUN_jointPoint4C->Value();

		param_5[0] = integer_RB_GUN_jointPoint5X->Value();
		param_5[1] = integer_RB_GUN_jointPoint5Y->Value();
		param_5[2] = integer_RB_GUN_jointPoint5Z->Value();
		param_5[3] = integer_RB_GUN_jointPoint5A->Value();
		param_5[4] = integer_RB_GUN_jointPoint5B->Value();
		param_5[5] = integer_RB_GUN_jointPoint5C->Value();

	}

	if (rule_FB_gun.compare("��դ") == 0) {
		integer_jointPoint1X->SetValue(param_102[0]);
		integer_jointPoint1Y->SetValue(param_102[1]);
		integer_jointPoint1Z->SetValue(param_102[2]);
		integer_jointPoint1A->SetValue(param_102[3]);
		integer_jointPoint1B->SetValue(param_102[4]);
		integer_jointPoint1C->SetValue(param_102[5]);

		integer_jointPoint2X->SetValue(param_103[0]);
		integer_jointPoint2Y->SetValue(param_103[1]);
		integer_jointPoint2Z->SetValue(param_103[2]);
		integer_jointPoint2A->SetValue(param_103[3]);
		integer_jointPoint2B->SetValue(param_103[4]);
		integer_jointPoint2C->SetValue(param_103[5]);

		integer_jointPoint3X->SetValue(param_104[0]);
		integer_jointPoint3Y->SetValue(param_104[1]);
		integer_jointPoint3Z->SetValue(param_104[2]);
		integer_jointPoint3A->SetValue(param_104[3]);
		integer_jointPoint3B->SetValue(param_104[4]);
		integer_jointPoint3C->SetValue(param_104[5]);

		integer_jointPoint4X->SetValue(param_105[0]);
		integer_jointPoint4Y->SetValue(param_105[1]);
		integer_jointPoint4Z->SetValue(param_105[2]);
		integer_jointPoint4A->SetValue(param_105[3]);
		integer_jointPoint4B->SetValue(param_105[4]);
		integer_jointPoint4C->SetValue(param_105[5]);
	}
	if (rule_FB_gun.compare("������ṹ") == 0) {
		integer_jointPoint1X->SetValue(param_202[0]);
		integer_jointPoint1Y->SetValue(param_202[1]);
		integer_jointPoint1Z->SetValue(param_202[2]);
		integer_jointPoint1A->SetValue(param_202[3]);
		integer_jointPoint1B->SetValue(param_202[4]);
		integer_jointPoint1C->SetValue(param_202[5]);

		integer_jointPoint2X->SetValue(param_203[0]);
		integer_jointPoint2Y->SetValue(param_203[1]);
		integer_jointPoint2Z->SetValue(param_203[2]);
		integer_jointPoint2A->SetValue(param_203[3]);
		integer_jointPoint2B->SetValue(param_203[4]);
		integer_jointPoint2C->SetValue(param_203[5]);

		integer_jointPoint3X->SetValue(param_204[0]);
		integer_jointPoint3Y->SetValue(param_204[1]);
		integer_jointPoint3Z->SetValue(param_204[2]);
		integer_jointPoint3A->SetValue(param_204[3]);
		integer_jointPoint3B->SetValue(param_204[4]);
		integer_jointPoint3C->SetValue(param_204[5]);

		integer_jointPoint4X->SetValue(param_205[0]);
		integer_jointPoint4Y->SetValue(param_205[1]);
		integer_jointPoint4Z->SetValue(param_205[2]);
		integer_jointPoint4A->SetValue(param_205[3]);
		integer_jointPoint4B->SetValue(param_205[4]);
		integer_jointPoint4C->SetValue(param_205[5]);
	}
	if (rule_FB_gun.compare("��դ-�ƿ�") == 0) {
		integer_jointPoint1X->SetValue(param_302[0]);
		integer_jointPoint1Y->SetValue(param_302[1]);
		integer_jointPoint1Z->SetValue(param_302[2]);
		integer_jointPoint1A->SetValue(param_302[3]);
		integer_jointPoint1B->SetValue(param_302[4]);
		integer_jointPoint1C->SetValue(param_302[5]);

		integer_jointPoint2X->SetValue(param_303[0]);
		integer_jointPoint2Y->SetValue(param_303[1]);
		integer_jointPoint2Z->SetValue(param_303[2]);
		integer_jointPoint2A->SetValue(param_303[3]);
		integer_jointPoint2B->SetValue(param_303[4]);
		integer_jointPoint2C->SetValue(param_303[5]);

		integer_jointPoint3X->SetValue(param_304[0]);
		integer_jointPoint3Y->SetValue(param_304[1]);
		integer_jointPoint3Z->SetValue(param_304[2]);
		integer_jointPoint3A->SetValue(param_304[3]);
		integer_jointPoint3B->SetValue(param_304[4]);
		integer_jointPoint3C->SetValue(param_304[5]);

		integer_jointPoint4X->SetValue(param_305[0]);
		integer_jointPoint4Y->SetValue(param_305[1]);
		integer_jointPoint4Z->SetValue(param_305[2]);
		integer_jointPoint4A->SetValue(param_305[3]);
		integer_jointPoint4B->SetValue(param_305[4]);
		integer_jointPoint4C->SetValue(param_305[5]);
	}
	if (rule_FB_gun.compare("��դ-�ƿ�-�м�Ͽ�") == 0) {
		integer_jointPoint1X->SetValue(param_402[0]);
		integer_jointPoint1Y->SetValue(param_402[1]);
		integer_jointPoint1Z->SetValue(param_402[2]);
		integer_jointPoint1A->SetValue(param_402[3]);
		integer_jointPoint1B->SetValue(param_402[4]);
		integer_jointPoint1C->SetValue(param_402[5]);

		integer_jointPoint2X->SetValue(param_403[0]);
		integer_jointPoint2Y->SetValue(param_403[1]);
		integer_jointPoint2Z->SetValue(param_403[2]);
		integer_jointPoint2A->SetValue(param_403[3]);
		integer_jointPoint2B->SetValue(param_403[4]);
		integer_jointPoint2C->SetValue(param_403[5]);

		integer_jointPoint3X->SetValue(param_404[0]);
		integer_jointPoint3Y->SetValue(param_404[1]);
		integer_jointPoint3Z->SetValue(param_404[2]);
		integer_jointPoint3A->SetValue(param_404[3]);
		integer_jointPoint3B->SetValue(param_404[4]);
		integer_jointPoint3C->SetValue(param_404[5]);

		integer_jointPoint4X->SetValue(param_405[0]);
		integer_jointPoint4Y->SetValue(param_405[1]);
		integer_jointPoint4Z->SetValue(param_405[2]);
		integer_jointPoint4A->SetValue(param_405[3]);
		integer_jointPoint4B->SetValue(param_405[4]);
		integer_jointPoint4C->SetValue(param_405[5]);
	}
	if (rule_FB_gun.compare("�����-�ƿ�") == 0) {
		integer_jointPoint1X->SetValue(param_502[0]);
		integer_jointPoint1Y->SetValue(param_502[1]);
		integer_jointPoint1Z->SetValue(param_502[2]);
		integer_jointPoint1A->SetValue(param_502[3]);
		integer_jointPoint1B->SetValue(param_502[4]);
		integer_jointPoint1C->SetValue(param_502[5]);

		integer_jointPoint2X->SetValue(param_503[0]);
		integer_jointPoint2Y->SetValue(param_503[1]);
		integer_jointPoint2Z->SetValue(param_503[2]);
		integer_jointPoint2A->SetValue(param_503[3]);
		integer_jointPoint2B->SetValue(param_503[4]);
		integer_jointPoint2C->SetValue(param_503[5]);

		integer_jointPoint3X->SetValue(param_504[0]);
		integer_jointPoint3Y->SetValue(param_504[1]);
		integer_jointPoint3Z->SetValue(param_504[2]);
		integer_jointPoint3A->SetValue(param_504[3]);
		integer_jointPoint3B->SetValue(param_504[4]);
		integer_jointPoint3C->SetValue(param_504[5]);

		integer_jointPoint4X->SetValue(param_505[0]);
		integer_jointPoint4Y->SetValue(param_505[1]);
		integer_jointPoint4Z->SetValue(param_505[2]);
		integer_jointPoint4A->SetValue(param_505[3]);
		integer_jointPoint4B->SetValue(param_505[4]);
		integer_jointPoint4C->SetValue(param_505[5]);
	}
	if (rule_FB_gun.compare("�����-��դ") == 0) {
		integer_jointPoint1X->SetValue(param_602[0]);
		integer_jointPoint1Y->SetValue(param_602[1]);
		integer_jointPoint1Z->SetValue(param_602[2]);
		integer_jointPoint1A->SetValue(param_602[3]);
		integer_jointPoint1B->SetValue(param_602[4]);
		integer_jointPoint1C->SetValue(param_602[5]);

		integer_jointPoint2X->SetValue(param_603[0]);
		integer_jointPoint2Y->SetValue(param_603[1]);
		integer_jointPoint2Z->SetValue(param_603[2]);
		integer_jointPoint2A->SetValue(param_603[3]);
		integer_jointPoint2B->SetValue(param_603[4]);
		integer_jointPoint2C->SetValue(param_603[5]);

		integer_jointPoint3X->SetValue(param_604[0]);
		integer_jointPoint3Y->SetValue(param_604[1]);
		integer_jointPoint3Z->SetValue(param_604[2]);
		integer_jointPoint3A->SetValue(param_604[3]);
		integer_jointPoint3B->SetValue(param_604[4]);
		integer_jointPoint3C->SetValue(param_604[5]);

		integer_jointPoint4X->SetValue(param_605[0]);
		integer_jointPoint4Y->SetValue(param_605[1]);
		integer_jointPoint4Z->SetValue(param_605[2]);
		integer_jointPoint4A->SetValue(param_605[3]);
		integer_jointPoint4B->SetValue(param_605[4]);
		integer_jointPoint4C->SetValue(param_605[5]);
	}
	if (rule_FB_gun.compare("�ƿ�") == 0) {
		integer_jointPoint1X->SetValue(param_702[0]);
		integer_jointPoint1Y->SetValue(param_702[1]);
		integer_jointPoint1Z->SetValue(param_702[2]);
		integer_jointPoint1A->SetValue(param_702[3]);
		integer_jointPoint1B->SetValue(param_702[4]);
		integer_jointPoint1C->SetValue(param_702[5]);

		integer_jointPoint2X->SetValue(param_703[0]);
		integer_jointPoint2Y->SetValue(param_703[1]);
		integer_jointPoint2Z->SetValue(param_703[2]);
		integer_jointPoint2A->SetValue(param_703[3]);
		integer_jointPoint2B->SetValue(param_703[4]);
		integer_jointPoint2C->SetValue(param_703[5]);

		integer_jointPoint3X->SetValue(param_704[0]);
		integer_jointPoint3Y->SetValue(param_704[1]);
		integer_jointPoint3Z->SetValue(param_704[2]);
		integer_jointPoint3A->SetValue(param_704[3]);
		integer_jointPoint3B->SetValue(param_704[4]);
		integer_jointPoint3C->SetValue(param_704[5]);

		integer_jointPoint4X->SetValue(param_705[0]);
		integer_jointPoint4Y->SetValue(param_705[1]);
		integer_jointPoint4Z->SetValue(param_705[2]);
		integer_jointPoint4A->SetValue(param_705[3]);
		integer_jointPoint4B->SetValue(param_705[4]);
		integer_jointPoint4C->SetValue(param_705[5]);
	}
	if (rule_FB_gun.compare("������ṹ-��ֱ��Ϳ") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();



		param_202[0] = integer_jointPoint1X->Value();
		param_202[1] = integer_jointPoint1Y->Value();
		param_202[2] = integer_jointPoint1Z->Value();
		param_202[3] = integer_jointPoint1A->Value();
		param_202[4] = integer_jointPoint1B->Value();
		param_202[5] = integer_jointPoint1C->Value();

		param_203[0] = integer_jointPoint2X->Value();
		param_203[1] = integer_jointPoint2Y->Value();
		param_203[2] = integer_jointPoint2Z->Value();
		param_203[3] = integer_jointPoint2A->Value();
		param_203[4] = integer_jointPoint2B->Value();
		param_203[5] = integer_jointPoint2C->Value();

		param_204[0] = integer_jointPoint3X->Value();
		param_204[1] = integer_jointPoint3Y->Value();
		param_204[2] = integer_jointPoint3Z->Value();
		param_204[3] = integer_jointPoint3A->Value();
		param_204[4] = integer_jointPoint3B->Value();
		param_204[5] = integer_jointPoint3C->Value();

		param_205[0] = integer_jointPoint4X->Value();
		param_205[1] = integer_jointPoint4Y->Value();
		param_205[2] = integer_jointPoint4Z->Value();
		param_205[3] = integer_jointPoint4A->Value();
		param_205[4] = integer_jointPoint4B->Value();
		param_205[5] = integer_jointPoint4C->Value();


	}
	if (rule_FB_gun.compare("�����-��դ-��ֱ��Ϳ") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();

		param_602[0] = integer_jointPoint1X->Value();
		param_602[1] = integer_jointPoint1Y->Value();
		param_602[2] = integer_jointPoint1Z->Value();
		param_602[3] = integer_jointPoint1A->Value();
		param_602[4] = integer_jointPoint1B->Value();
		param_602[5] = integer_jointPoint1C->Value();

		param_603[0] = integer_jointPoint2X->Value();
		param_603[1] = integer_jointPoint2Y->Value();
		param_603[2] = integer_jointPoint2Z->Value();
		param_603[3] = integer_jointPoint2A->Value();
		param_603[4] = integer_jointPoint2B->Value();
		param_603[5] = integer_jointPoint2C->Value();

		param_604[0] = integer_jointPoint3X->Value();
		param_604[1] = integer_jointPoint3Y->Value();
		param_604[2] = integer_jointPoint3Z->Value();
		param_604[3] = integer_jointPoint3A->Value();
		param_604[4] = integer_jointPoint3B->Value();
		param_604[5] = integer_jointPoint3C->Value();

		param_605[0] = integer_jointPoint4X->Value();
		param_605[1] = integer_jointPoint4Y->Value();
		param_605[2] = integer_jointPoint4Z->Value();
		param_605[3] = integer_jointPoint4A->Value();
		param_605[4] = integer_jointPoint4B->Value();
		param_605[5] = integer_jointPoint4C->Value();


	}
	if (rule_FB_gun.compare("��դ-��ֱ��Ϳ") == 0) {
		param_101[0] = integer_jointPoint0X1->Value();
		param_101[1] = integer_jointPoint0Y1->Value();
		param_101[2] = integer_jointPoint0Z1->Value();
		param_101[3] = integer_jointPoint0A1->Value();
		param_101[4] = integer_jointPoint0B1->Value();
		param_101[5] = integer_jointPoint0C1->Value();

		param_102[0] = integer_jointPoint1X->Value();
		param_102[1] = integer_jointPoint1Y->Value();
		param_102[2] = integer_jointPoint1Z->Value();
		param_102[3] = integer_jointPoint1A->Value();
		param_102[4] = integer_jointPoint1B->Value();
		param_102[5] = integer_jointPoint1C->Value();

		param_103[0] = integer_jointPoint2X->Value();
		param_103[1] = integer_jointPoint2Y->Value();
		param_103[2] = integer_jointPoint2Z->Value();
		param_103[3] = integer_jointPoint2A->Value();
		param_103[4] = integer_jointPoint2B->Value();
		param_103[5] = integer_jointPoint2C->Value();

		param_104[0] = integer_jointPoint3X->Value();
		param_104[1] = integer_jointPoint3Y->Value();
		param_104[2] = integer_jointPoint3Z->Value();
		param_604[3] = integer_jointPoint3A->Value();
		param_104[4] = integer_jointPoint3B->Value();
		param_104[5] = integer_jointPoint3C->Value();

		param_105[0] = integer_jointPoint4X->Value();
		param_105[1] = integer_jointPoint4Y->Value();
		param_105[2] = integer_jointPoint4Z->Value();
		param_105[3] = integer_jointPoint4A->Value();
		param_105[4] = integer_jointPoint4B->Value();
		param_105[5] = integer_jointPoint4C->Value();


	}
	*/
}


