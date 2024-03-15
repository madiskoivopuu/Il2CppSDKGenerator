#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class PvPContext : public BaseReplicatedContext1<PvPEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvPContext"));
	}

	template <typename R = Il2CppString*> static R& Id() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(PvPContext*))(Il2CppBase() + 0x11BC688))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(PvPContext*))(Il2CppBase() + 0x11BC690))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(PvPContext*))(Il2CppBase() + 0x11BC698))(this);
	}
	template <typename R = PvPEntity*> R GetEntityWithId(int64_t id) {
		return ((R (*)(PvPContext*, int64_t))(Il2CppBase() + 0x11BCB4C))(this, id);
	}
	template <typename R = PvPEntity*> R get_Item(int64_t id) {
		return ((R (*)(PvPContext*, int64_t))(Il2CppBase() + 0x11BCC28))(this, id);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(PvPContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x11BCC2C))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(PvPContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x11BCD34))(this, reader, entity);
	}
	template <typename R = PvPEntity*> R get_avatarEntity() {
		return ((R (*)(PvPContext*))(Il2CppBase() + 0x11BCF24))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(PvPContext*))(Il2CppBase() + 0x11BD17C))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(PvPContext*, bool))(Il2CppBase() + 0x11BD198))(this, value);
	}

};

