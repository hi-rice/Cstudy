cmake_minimum_required(VERSION 3.28)
project(untitled C)

set(CMAKE_C_STANDARD 11)

# 각 main 함수를 가진 파일을 별도의 실행 파일로 만듭니다.
add_executable(hello_exec Chapter1/Hello.c)

add_executable(question1_1_exec Question/Chapter2/02-1-1.c)
add_executable(question1_2_exec Question/Chapter2/02-1-2.c)

add_executable(comment_exec Chapter2/HelloComment.c)
add_executable(printf1_exec Chapter2/PrintfOne.c)
add_executable(printf2_exec Chapter2/PrintfTwo.c)

add_executable(question2_1_exec Question/Chapter2/02-2-1.c)
add_executable(question2_2_exec Question/Chapter2/02-2-2.c)

add_executable(simple_add1_exec Chapter3/SimpleAddOne.c)
add_executable(vardecl_exec Chapter3/VarDeclAndlnit.c)
add_executable(simple_add2_exec Chapter3/SimpleAddTwo.c)

add_executable(operator1_exec Chapter3/OperatorOne.c)
add_executable(operator2_exec Chapter3/OperatorTwo.c)
add_executable(operator3_exec Chapter3/OperatorThree.c)
add_executable(operator4_exec Chapter3/OperatorFour.c)
add_executable(operator5_exec Chapter3/OperatorFive.c)
add_executable(operator6_exec Chapter3/OperatorSix.c)
add_executable(operator7_exec Chapter3/OperatorSeven.c)

add_executable(comma_op_exec Chapter3/CommaOp.c)
add_executable(simple_add3_exec Chapter3/SimpleAddThree.c)
add_executable(simple_add4_exec Chapter3/SimpleAddFour.c)

add_executable(question3_1_exec Question/Chapter3/03-1-1.c)
add_executable(question3_2_exec Question/Chapter3/03-1-2.c)
add_executable(question3_3_exec Question/Chapter3/03-1-3.c)
add_executable(question3_4_exec Question/Chapter3/03-1-4.c)
add_executable(question3_5_exec Question/Chapter3/03-1-5.c)

add_executable(question4_1_exec Question/Chapter4/04-1-1.c)
add_executable(question4_2_exec Question/Chapter4/04-1-2.c)

add_executable(question4_3_1_exec Question/Chapter4/04-2-1.c)
add_executable(question4_3_2_exec Question/Chapter4/04-2-2.c)
add_executable(question4_3_3_exec Question/Chapter4/04-2-3.c)

add_executable(notation_exec Chapter4/Notation.c)
add_executable(float_error_exec Chapter4/FloatError.c)

add_executable(bit_and_exec Chapter4/BitAndOperation.c)
add_executable(bit_or_exec Chapter4/BitOrOperation.c)
add_executable(bit_xor_exec Chapter4/BitXorOperation.c)
add_executable(bit_not_exec Chapter4/BitNotOperation.c)

add_executable(bit_left_shift_exec Chapter4/BitLeftShift.c)
add_executable(bit_right_shift_exec Chapter4/BitRightShift.c)

add_executable(question4_4_1_exec Question/Chapter4/04-4-1.c)
add_executable(question4_4_2_exec Question/Chapter4/04-4-2.c)

add_executable(sizeof_operator_exec Chapter5/SizeOfOperator.c)
add_executable(char_short_base_add_exec Chapter5/CharShortBaseAdd.c)

add_executable(question5_1_1_exec Question/Chapter5/05-1-1.c)
add_executable(question5_1_2_exec Question/Chapter5/05-1-2.c)
add_executable(question5_1_3_exec Question/Chapter5/05-1-3.c)
add_executable(question5_1_4_exec Question/Chapter5/05-1-4.c)
add_executable(question5_1_5_exec Question/Chapter5/05-1-5.c)

add_executable(question7_1_1_exec Question/Chapter7/07-1-1.c)
add_executable(question7_1_2_exec Question/Chapter7/07-1-2.c)
add_executable(question7_1_3_exec Question/Chapter7/07-1-3.c)
add_executable(question7_1_4_exec Question/Chapter7/07-1-4.c)
add_executable(question7_1_5_exec Question/Chapter7/07-1-5.c)

add_executable(question7_2_1_exec Question/Chapter7/07-2-1.c)
add_executable(question7_2_2_exec Question/Chapter7/07-2-2.c)

add_executable(question10_1_exec Question/Chapter10/10-1.c)
add_executable(question10_2_exec Question/Chapter10/10-2.c)
add_executable(question10_3_exec Question/Chapter10/10-3.c)
add_executable(question10_4_exec Question/Chapter10/10-4.c)
add_executable(question10_5_exec Question/Chapter10/10-5.c)
add_executable(question10_6_exec Question/Chapter10/10-6.c)
add_executable(question10_8_exec Question/Chapter10/10-8.c)

add_executable(circle_area_exec Chapter5/CircleArea.c)
add_executable(how_char_exec Chapter5/HowChar.c)
add_executable(literal_size_exec Chapter5/LiteralSize.c)
add_executable(auto_conv_exec Chapter5/AutoConvOne.c
        Chapter6/RealNumOutput.c
        Chapter6/UsingPG.c
        Chapter6/UsingPS.c
        Chapter6/FieldWidth.c
        Chapter6/ScanfConvOne.c
        Chapter6/ScanfConvTwo.c
        Chapter7/SimpleWhile.c
        Chapter7/NineNineDan.c
        Chapter7/TwoToNine.c
        Chapter7/UsefulDoWhile.c
        Question/Chapter7/07-3-1.c
        Question/Chapter7/07-3-2.c
        Question/Chapter7/07-3-3.c
        Chapter7/AddToNum.c
        Chapter7/RealMean.c
        Question/Chapter7/07-4-1.c
        Question/Chapter7/07-4-2.c
        Chapter7/TwoTwoNineVer.c
        Chapter8/IfBasic.c
        Chapter8/CalOne.c
        Chapter8/Mul3Mul4.c
        Chapter8/IfElseBasic.c
        Chapter8/CalTwo.c
        Chapter8/ThreeOperand.c
        Question/Chapter8/08-1-1.c
        Question/Chapter8/08-1-2.c
        Question/Chapter8/08-1-3.c
        Question/Chapter8/08-1.4.c
        Chapter8/WhenOver5000.c
        Chapter8/ExceptMul2Mul3.c
        Question/Chapter8/08-2-1.c
        Question/Chapter8/08-2-2.c
        Chapter8/EnglishSchool.c
        Chapter8/AdvanEnglishSchool.c
        Question/Chapter8/08-3-1.c
        Chapter8/GoToBasic.c
        Chapter9/PrintfOutput.c
        Chapter9/SimpleAddFunc.c
        Chapter9/SmartAddFunc.c
        Chapter9/NumCompare.c
        Chapter9/AbsoCompare.c
        Question/Chapter9/09-1-1.c
        Question/Chapter9/09-1-2.c
        Question/Chapter9/09-1-3.c
        Chapter9/LocalVariable.c
        Chapter9/AnotherLocalVal.c
        Chapter9/LocalValHideVal.c
        Chapter9/GlobalVariable.c
        Chapter9/LocalValHideGlobalVal.c
        Chapter9/StaticLocalVariable.c
        Question/Chapter9/09-2-1.c
        Chapter9/RecursiveFunc.c
        Chapter9/RecursiveFactoral.c
        Chapter11/ArrayAccess.c
        Chapter11/ArrayInit.c
        Question/Chapter11/11-1-1.c
        Question/Chapter11/11-1-2.c
        Chapter11/ArrayString.c
        Chapter11/ReadString.c
        Chapter11/StartEndString.c
        Question/Chapter11/11-2-1.c
        Question/Chapter11/11-2-2.c
        Question/Chapter11/11-2-3.c
        Chapter13/ArrayNameType.c
        Chapter13/ArrayNamePointerOperation.c
        Chapter13/ArrrayNamelsPointer.c
        Chapter13/PointerOperationResult.c
        Chapter13/PointerBaseArrayAccess.c
        Chapter13/TwoStringType.c
        Chapter13/PointerArray.c
        Chapter13/StringArray.c
        Chapter14/ArrayParam.c
        Chapter14/ArrayParamAccess.c
        Chapter14/CallByValueSwap.c
        Chapter14/CallByRefSwap.c
        Question/Chapter15/15-1.c
        Question/Chapter15/15-2.c
        Question/Chapter15/15-3.c
        Question/Chapter15/15-3.c
        Question/Chapter15/15-4.c
        Question/Chapter15/15-5.c
        Chapter16/TwoDimArraySize.c
        Chapter16/PopuResarch.c
        Chapter16/TwoDimArrayAddr.c
        Chapter16/TwoDimArrayInit.c
        Question/Chapter16/16-1-1.c
        Question/Chapter16/16-1-2.c
        Question/Chapter16/16-1-3.c
        Chapter16/ThreeDimArraySize.c
        Chapter16/ThreeDimArrayAccess.c
        Chapter17/DoublePointerAccess.c
        Chapter17/PointerSwapFail.c
        Chapter17/PointerSwapSuccess.c
        Chapter17/PointerArrayType.c
        Chapter17/TriplePointer.c
        Question/Chapter17/17-1-1.c
        Chapter18/2DArrayAddress.c
        Chapter18/2DArrPointerOp.c
        Chapter18/2DArrNameAndArrPtr.c
        Chapter18/ArrPtrAndPtrArr.c
        Chapter18/2DArrParam.c
        Chapter18/2DArrAccessType.c
        Question/Chapter18/18-1-1.c
        Question/Chapter18/18-1-2.c
        Question/Chapter18/18-1-3.c
        Question/Chapter18/18-1-4.c
        Question/Chapter18/18-1-5.c
        Chapter19/FunctionPointer.c
        Chapter19/UsefulFunctionPointer.c
        Chapter19/VoidTypePointer.c
        Chapter19/ArgcArgc.c
        Chapter19/ArgvParamType.c
        Chapter19/ArgvEndNULL.c
        Question/Chapter20/20-1.c
        Question/Chapter20/20-2.c
        Question/Chapter20/20-3.c
        Question/Chapter20/20-4.c
        Question/Chapter20/20-5.c
        Question/Chapter20/20-6.c)
add_executable(conv_div_exec Chapter5/ConvDiv.c)

add_executable(string_printf_exec Chapter6/StringPrintf.c)
add_executable(form_printf_exec Chapter6/FormPrintf.c)

add_executable(pointer_operation_exec Chapter12/PointerOperation.c)

add_executable(question12_1_1_exec Question/Chapter12/12-1-1.c)

add_executable(question13_1_1_exec Question/Chapter13/13-1-1.c)
add_executable(question13_1_2_exec Question/Chapter13/13-1-2.c)
add_executable(question13_1_3_exec Question/Chapter13/13-1-3.c)
add_executable(question13_1_4_exec Question/Chapter13/13-1-4.c)

add_executable(question14_1_1_exec Question/Chapter14/14-1-1.c)
add_executable(question14_1_2_exec Question/Chapter14/14-1-2.c)
add_executable(question14_2_2_exec Question/Chapter14/14-2-2.c)

add_executable(oct_hex_exec Chapter6/OctHex.c)
add_executable(real_num_output_exec Chapter6/RealNumOutput.c)
add_executable(english_school_exec Chapter8/EnglishSchool.c)