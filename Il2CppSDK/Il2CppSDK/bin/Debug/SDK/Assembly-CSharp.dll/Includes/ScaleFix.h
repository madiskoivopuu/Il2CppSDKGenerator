#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScaleFix
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScaleFix"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(ScaleFix*))(Il2CppBase() + 0x1357038))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ScaleFix*))(Il2CppBase() + 0x1357074))(this);
	}

};

}
