#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStatusRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStatusRequest"));
	}

	template <typename T = MessageParser1ArenaStatusRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SaltFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& salt_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UsersIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_usersID_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1int64_t>*> T& usersID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_worldID_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1int64_t>*> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& GmapsIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_gmapsID_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatedField1int64_t>*> T& gmapsID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CyclicPriceTokenForVipFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cyclicPriceTokenForVip_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& CyclicPriceVipForVipFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cyclicPriceVipForVip_() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = MessageParser1ArenaStatusRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2714624))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2714688))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStatusRequest*))(Il2CppBase() + 0x27147A8))(this);
	}
	template <typename T = ArenaStatusRequest*> T Clone() {
		return ((T (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714A30))(this);
	}
	template <typename T = uintptr_t> T get_Salt() {
		return ((T (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714A8C))(this);
	}
	template <typename T = void> T set_Salt(uintptr_t value) {
		return ((T (*)(ArenaStatusRequest*, uintptr_t))(Il2CppBase() + 0x2714A94))(this, value);
	}
	template <typename T = RepeatedField1int64_t>*> T get_UsersID() {
		return ((T (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714B14))(this);
	}
	template <typename T = RepeatedField1int64_t>*> T get_WorldID() {
		return ((T (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714B1C))(this);
	}
	template <typename T = RepeatedField1int64_t>*> T get_GmapsID() {
		return ((T (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714B24))(this);
	}
	template <typename T = int32_t> T get_CyclicPriceTokenForVip() {
		return ((T (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714B2C))(this);
	}
	template <typename T = void> T set_CyclicPriceTokenForVip(int32_t value) {
		return ((T (*)(ArenaStatusRequest*, int32_t))(Il2CppBase() + 0x2714B34))(this, value);
	}
	template <typename T = int32_t> T get_CyclicPriceVipForVip() {
		return ((T (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714B3C))(this);
	}
	template <typename T = void> T set_CyclicPriceVipForVip(int32_t value) {
		return ((T (*)(ArenaStatusRequest*, int32_t))(Il2CppBase() + 0x2714B44))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaStatusRequest*, Il2CppObject*))(Il2CppBase() + 0x2714B4C))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaStatusRequest* other) {
		return ((T (*)(ArenaStatusRequest*, ArenaStatusRequest*))(Il2CppBase() + 0x2714BBC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714CDC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714DCC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStatusRequest*, uintptr_t))(Il2CppBase() + 0x2714E30))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714FBC))(this);
	}
	template <typename T = void> T MergeFrom(ArenaStatusRequest* other) {
		return ((T (*)(ArenaStatusRequest*, ArenaStatusRequest*))(Il2CppBase() + 0x2715188))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStatusRequest*, uintptr_t))(Il2CppBase() + 0x2715254))(this, input);
	}

};

}
