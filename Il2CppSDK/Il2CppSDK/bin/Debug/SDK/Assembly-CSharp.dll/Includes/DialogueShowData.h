#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueShowData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueShowData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Quest() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Grade() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DialogueShowData*, uintptr_t))(Il2CppBase() + 0x12F7A70))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DialogueShowData*, uintptr_t))(Il2CppBase() + 0x12F7AF4))(this, reader);
	}

};

}
