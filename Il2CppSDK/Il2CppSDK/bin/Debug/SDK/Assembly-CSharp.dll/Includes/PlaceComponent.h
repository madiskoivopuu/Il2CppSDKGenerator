#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlaceComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Magic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Saveable() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& PushOutRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& SaveData() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

