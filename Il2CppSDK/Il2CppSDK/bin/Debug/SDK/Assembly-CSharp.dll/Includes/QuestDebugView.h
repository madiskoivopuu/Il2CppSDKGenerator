#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestDebugView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestDebugView"));
	}

	template <typename T = uintptr_t> T& _nameText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _progressText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _statusText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _endTimeText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _progress() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T UpdateView(uintptr_t questEntity) {
		return ((T (*)(QuestDebugView*, uintptr_t))(Il2CppBase() + 0x1C317CC))(this, questEntity);
	}
	template <typename T = Il2CppString*> T GetStatus(uintptr_t questEntity) {
		return ((T (*)(QuestDebugView*, uintptr_t))(Il2CppBase() + 0x1C31CBC))(this, questEntity);
	}

};

}
