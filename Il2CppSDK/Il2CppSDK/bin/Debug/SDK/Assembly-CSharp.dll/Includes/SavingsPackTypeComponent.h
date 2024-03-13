#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 

class SavingsPackTypeComponent : public EnumComponent1<SavingsPackType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SavingsPackTypeComponent"));
	}



};

