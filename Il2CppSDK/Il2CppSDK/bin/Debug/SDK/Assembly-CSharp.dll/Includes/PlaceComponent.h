#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlaceComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Magic() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& Saveable() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& PushOutRadius() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = Il2CppString*> R& SaveData() {
		return *(R*)((uintptr_t)this + 0x28);
	}


};

