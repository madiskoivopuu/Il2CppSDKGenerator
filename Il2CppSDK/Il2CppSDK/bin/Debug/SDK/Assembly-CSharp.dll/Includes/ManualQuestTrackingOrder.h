#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ManualQuestTrackingOrder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualQuestTrackingOrder"));
	}

	template <typename T = Il2CppString*> T& Quests() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(ManualQuestTrackingOrder*, Il2CppObject*))(Il2CppBase() + 0x12652A8))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ManualQuestTrackingOrder*, uintptr_t))(Il2CppBase() + 0x126534C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ManualQuestTrackingOrder*, uintptr_t))(Il2CppBase() + 0x1265390))(this, reader);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(ManualQuestTrackingOrder*, Il2CppObject*))(Il2CppBase() + 0x1265430))(this, blueprintComponent);
	}

};

