#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RightMouseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RightMouseComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(RightMouseComponent*, Il2CppObject*))(Il2CppBase() + 0x11A26BC))(this, targetObject);
	}

};

