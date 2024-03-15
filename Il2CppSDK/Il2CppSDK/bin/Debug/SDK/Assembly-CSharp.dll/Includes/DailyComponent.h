#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DailyComponent*, Il2CppObject*))(Il2CppBase() + 0x1647374))(this, target);
	}

};

