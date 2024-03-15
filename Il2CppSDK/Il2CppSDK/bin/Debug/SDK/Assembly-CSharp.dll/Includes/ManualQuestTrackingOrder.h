#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ManualQuestTrackingOrder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualQuestTrackingOrder"));
	}

	template <typename R = Il2CppString*> R& Quests() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ManualQuestTrackingOrder*, Il2CppObject*))(Il2CppBase() + 0x12652A8))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ManualQuestTrackingOrder*, uintptr_t))(Il2CppBase() + 0x126534C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ManualQuestTrackingOrder*, uintptr_t))(Il2CppBase() + 0x1265390))(this, reader);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(ManualQuestTrackingOrder*, Il2CppObject*))(Il2CppBase() + 0x1265430))(this, blueprintComponent);
	}

};

