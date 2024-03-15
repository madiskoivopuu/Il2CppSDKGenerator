#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestsSaveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsSaveComponent"));
	}

	template <typename R = int32_t> R& Version() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Item*>*> R& Data() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(QuestsSaveComponent*, Il2CppObject*))(Il2CppBase() + 0x170817C))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(QuestsSaveComponent*, uintptr_t))(Il2CppBase() + 0x170821C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(QuestsSaveComponent*, uintptr_t))(Il2CppBase() + 0x17082D0))(this, writer);
	}

};

