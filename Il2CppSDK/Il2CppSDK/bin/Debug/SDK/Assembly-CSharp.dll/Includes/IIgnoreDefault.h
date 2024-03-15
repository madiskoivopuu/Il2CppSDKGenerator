#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIgnoreDefault
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIgnoreDefault"));
	}


	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(IIgnoreDefault*, Il2CppObject*))(Il2CppBase() + 0x0))(this, blueprintComponent);
	}

};

