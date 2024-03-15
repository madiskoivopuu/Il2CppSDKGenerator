#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeEnumJsonConverter1.h" 
#include "SavingsPackType.h" 

class SavingsPackTypeJsonConverter : public TypeEnumJsonConverter1<SavingsPackType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SavingsPackTypeJsonConverter"));
	}



};

