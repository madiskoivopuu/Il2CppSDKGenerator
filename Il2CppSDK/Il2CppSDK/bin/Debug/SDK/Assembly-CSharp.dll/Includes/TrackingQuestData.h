#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrackingQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrackingQuestData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Tracking() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TrackingQuestData*, uintptr_t))(Il2CppBase() + 0x150E3A8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TrackingQuestData*, uintptr_t))(Il2CppBase() + 0x150E3FC))(this, reader);
	}

};

}
