#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ShamanChanceComponent.h" 

class ShamanChanceCachedComponent : public ShamanChanceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShamanChanceCachedComponent"));
	}



};

