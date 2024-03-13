#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIgnoreDefault
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIgnoreDefault"));
	}


	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(IIgnoreDefault*, Il2CppObject*))(Il2CppBase() + 0x0))(this, blueprintComponent);
	}

};

