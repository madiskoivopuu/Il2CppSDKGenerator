#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueShowData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueShowData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Quest() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1int32_t>*& Grade() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DialogueShowData*, uintptr_t))(Il2CppBase() + 0x12F7A70))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DialogueShowData*, uintptr_t))(Il2CppBase() + 0x12F7AF4))(this, reader);
	}

};

