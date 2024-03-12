#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatDataComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatDataComponent"));
	}

	template <typename T = bool> T& IsRegistered() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Login() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Password() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& SelectedRoom() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Rooms() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& BannedTill() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> T GetRoom(Il2CppString* name) {
		return ((T (*)(ChatDataComponent*, Il2CppString*))(Il2CppBase() + 0x13F2D60))(this, name);
	}
	template <typename T = uintptr_t> T GetRoomByType(Il2CppString* type) {
		return ((T (*)(ChatDataComponent*, Il2CppString*))(Il2CppBase() + 0x13F2E4C))(this, type);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChatDataComponent*, uintptr_t))(Il2CppBase() + 0x13F2F38))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChatDataComponent*, uintptr_t))(Il2CppBase() + 0x13F3298))(this, writer);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ChatDataComponent*, uintptr_t))(Il2CppBase() + 0x13F3478))(this, targetObject);
	}

};

}
