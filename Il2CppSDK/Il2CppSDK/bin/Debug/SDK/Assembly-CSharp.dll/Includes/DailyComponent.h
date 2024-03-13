#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(DailyComponent*, Il2CppObject*))(Il2CppBase() + 0x1647374))(this, target);
	}

};

