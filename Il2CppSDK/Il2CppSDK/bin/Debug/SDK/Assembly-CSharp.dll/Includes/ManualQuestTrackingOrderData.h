#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ManualQuestTrackingOrderData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualQuestTrackingOrderData"));
	}

	template <typename T = Il2CppString*> T& Quests() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ManualQuestTrackingOrderData*, uintptr_t))(Il2CppBase() + 0x126551C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ManualQuestTrackingOrderData*, uintptr_t))(Il2CppBase() + 0x1265570))(this, reader);
	}

};

