#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrackingQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrackingQuestData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Tracking() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TrackingQuestData*, uintptr_t))(Il2CppBase() + 0x150E3A8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TrackingQuestData*, uintptr_t))(Il2CppBase() + 0x150E3FC))(this, reader);
	}

};

