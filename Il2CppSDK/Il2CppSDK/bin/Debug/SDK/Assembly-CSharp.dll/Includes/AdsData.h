#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdsData"));
	}

	template <typename T = Il2CppString*> T& Action() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = AdsActor*> T& Actor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Reason() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AdsData*, uintptr_t))(Il2CppBase() + 0x1297F10))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AdsData*, uintptr_t))(Il2CppBase() + 0x1297F74))(this, reader);
	}

};

