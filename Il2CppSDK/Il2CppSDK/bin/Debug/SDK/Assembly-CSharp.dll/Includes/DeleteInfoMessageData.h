#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeleteInfoMessageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeleteInfoMessageData"));
	}

	template <typename R = int64_t> R& MessageId() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DeleteInfoMessageData*, uintptr_t))(Il2CppBase() + 0xEB8BC4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DeleteInfoMessageData*, uintptr_t))(Il2CppBase() + 0xEB8C08))(this, reader);
	}

};

