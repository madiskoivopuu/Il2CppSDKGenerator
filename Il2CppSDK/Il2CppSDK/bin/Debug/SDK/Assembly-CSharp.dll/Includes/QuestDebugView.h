#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestDebugView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestDebugView"));
	}

	template <typename R = uintptr_t> R& _nameText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _progressText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _statusText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _endTimeText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& _id() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& _progress() {
		return *(R*)((uintptr_t)this + 0x3C);
	}

	template <typename R = void> R UpdateView(QuestEntity* questEntity) {
		return ((R (*)(QuestDebugView*, QuestEntity*))(Il2CppBase() + 0x1C317CC))(this, questEntity);
	}
	template <typename R = Il2CppString*> R GetStatus(QuestEntity* questEntity) {
		return ((R (*)(QuestDebugView*, QuestEntity*))(Il2CppBase() + 0x1C31CBC))(this, questEntity);
	}

};

