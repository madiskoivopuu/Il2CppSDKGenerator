#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VerticalAxisComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VerticalAxisComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(VerticalAxisComponent*, Il2CppObject*))(Il2CppBase() + 0x15C4D40))(this, targetObject);
	}

};

