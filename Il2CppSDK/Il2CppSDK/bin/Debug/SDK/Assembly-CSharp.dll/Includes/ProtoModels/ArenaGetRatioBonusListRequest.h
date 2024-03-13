#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetRatioBonusListRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetRatioBonusListRequest"));
	}

	template <typename T = MessageParser1ArenaGetRatioBonusListRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1ArenaGetRatioBonusListRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E24194))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E241F8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E24318))(this);
	}
	template <typename T = ArenaGetRatioBonusListRequest*> T Clone() {
		return ((T (*)(ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E243B0))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E2441C))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaGetRatioBonusListRequest*, int64_t))(Il2CppBase() + 0x1E24424))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaGetRatioBonusListRequest*, Il2CppObject*))(Il2CppBase() + 0x1E2442C))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaGetRatioBonusListRequest* other) {
		return ((T (*)(ArenaGetRatioBonusListRequest*, ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E244B8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E244E8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E24528))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaGetRatioBonusListRequest*, uintptr_t))(Il2CppBase() + 0x1E2458C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E245E4))(this);
	}
	template <typename T = void> T MergeFrom(ArenaGetRatioBonusListRequest* other) {
		return ((T (*)(ArenaGetRatioBonusListRequest*, ArenaGetRatioBonusListRequest*))(Il2CppBase() + 0x1E24660))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaGetRatioBonusListRequest*, uintptr_t))(Il2CppBase() + 0x1E24674))(this, input);
	}

};

}
