#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClickComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClickComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ClickComponent*, Il2CppObject*))(Il2CppBase() + 0x18F9A50))(this, targetObject);
	}

};

