#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ManualQuestTrackingOrderData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualQuestTrackingOrderData"));
	}

	template <typename R = Il2CppString*> R& Quests() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ManualQuestTrackingOrderData*, uintptr_t))(Il2CppBase() + 0x126551C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ManualQuestTrackingOrderData*, uintptr_t))(Il2CppBase() + 0x1265570))(this, reader);
	}

};

