#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyIfNotEditor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyIfNotEditor"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(DestroyIfNotEditor*))(Il2CppBase() + 0xEBE990))(this);
	}

};

