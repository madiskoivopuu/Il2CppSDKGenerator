#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatDataComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatDataComponent"));
	}

	template <typename R = bool> R& IsRegistered() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Login() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Password() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& SelectedRoom() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Il2CppList<ChatRoom*>*& Rooms() {
		return *(Il2CppList<ChatRoom*>**)((uintptr_t)this + 0x30);
	}
	template <typename R = int64_t> R& BannedTill() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = ChatRoom*> R GetRoom(Il2CppString* name) {
		return ((R (*)(ChatDataComponent*, Il2CppString*))(Il2CppBase() + 0x13F2D60))(this, name);
	}
	template <typename R = ChatRoom*> R GetRoomByType(Il2CppString* type) {
		return ((R (*)(ChatDataComponent*, Il2CppString*))(Il2CppBase() + 0x13F2E4C))(this, type);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ChatDataComponent*, uintptr_t))(Il2CppBase() + 0x13F2F38))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ChatDataComponent*, uintptr_t))(Il2CppBase() + 0x13F3298))(this, writer);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ChatDataComponent*, Il2CppObject*))(Il2CppBase() + 0x13F3478))(this, targetObject);
	}

};

