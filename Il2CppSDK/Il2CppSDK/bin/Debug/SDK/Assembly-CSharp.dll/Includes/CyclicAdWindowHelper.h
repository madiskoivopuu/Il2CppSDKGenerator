#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CyclicAdWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicAdWindowHelper"));
	}


	template <typename R = CyclicAdWindow*> static R ShowCyclicAd(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x163FD4C))(0, manager);
	}

};
