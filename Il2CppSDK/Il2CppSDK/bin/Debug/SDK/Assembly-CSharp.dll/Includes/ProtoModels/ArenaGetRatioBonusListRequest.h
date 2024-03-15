#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetRatioBonusListRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetRatioBonusListRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaGetRatioBonusListRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaGetRatioBonusListRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::ArenaGetRatioBonusListRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaGetRatioBonusListRequest*>* (*)(void *))(Il2CppBase() + 0x1E24194))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E241F8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E24318))(this);
	}
	template <typename R = ProtoModels::ArenaGetRatioBonusListRequest*> R Clone() {
		return ((R (*)(ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E243B0))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E2441C))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaGetRatioBonusListRequest*, int64_t))(Il2CppBase() + 0x1E24424))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaGetRatioBonusListRequest*, Il2CppObject*))(Il2CppBase() + 0x1E2442C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaGetRatioBonusListRequest* other) {
		return ((R (*)(ArenaGetRatioBonusListRequest*, ProtoModels::ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E244B8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E244E8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E24528))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaGetRatioBonusListRequest*, uintptr_t))(Il2CppBase() + 0x1E2458C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E245E4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaGetRatioBonusListRequest* other) {
		return ((R (*)(ArenaGetRatioBonusListRequest*, ProtoModels::ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E24660))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaGetRatioBonusListRequest*, uintptr_t))(Il2CppBase() + 0x1E24674))(this, input);
	}

};

}
