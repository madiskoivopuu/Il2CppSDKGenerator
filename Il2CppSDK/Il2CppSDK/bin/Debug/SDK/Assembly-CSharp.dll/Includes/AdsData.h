#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdsData"));
	}

	template <typename R = Il2CppString*> R& Action() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = AdsActor*> R& Actor() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Reason() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AdsData*, uintptr_t))(Il2CppBase() + 0x1297F10))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AdsData*, uintptr_t))(Il2CppBase() + 0x1297F74))(this, reader);
	}

};

