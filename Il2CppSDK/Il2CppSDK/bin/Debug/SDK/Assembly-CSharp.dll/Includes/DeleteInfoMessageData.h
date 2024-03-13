#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeleteInfoMessageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeleteInfoMessageData"));
	}

	template <typename T = int64_t> T& MessageId() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DeleteInfoMessageData*, uintptr_t))(Il2CppBase() + 0xEB8BC4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DeleteInfoMessageData*, uintptr_t))(Il2CppBase() + 0xEB8C08))(this, reader);
	}

};

