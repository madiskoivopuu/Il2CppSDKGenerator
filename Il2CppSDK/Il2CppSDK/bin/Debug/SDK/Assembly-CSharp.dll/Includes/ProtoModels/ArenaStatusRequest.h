#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStatusRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStatusRequest"));
	}

	 static MessageParser1ProtoModels::ArenaStatusRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaStatusRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& SaltFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& salt_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UsersIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int64_t>*& _repeated_usersID_codec() {
		return *(FieldCodec1int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1int64_t>*& usersID_() {
		return *(RepeatedField1int64_t>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int64_t>*& _repeated_worldID_codec() {
		return *(FieldCodec1int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1int64_t>*& worldID_() {
		return *(RepeatedField1int64_t>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& GmapsIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int64_t>*& _repeated_gmapsID_codec() {
		return *(FieldCodec1int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1int64_t>*& gmapsID_() {
		return *(RepeatedField1int64_t>**)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& CyclicPriceTokenForVipFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cyclicPriceTokenForVip_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& CyclicPriceVipForVipFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cyclicPriceVipForVip_() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	 static MessageParser1ProtoModels::ArenaStatusRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaStatusRequest*>* (*)(void *))(Il2CppBase() + 0x2714624))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2714688))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStatusRequest*))(Il2CppBase() + 0x27147A8))(this);
	}
	template <typename R = ProtoModels::ArenaStatusRequest*> R Clone() {
		return ((R (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714A30))(this);
	}
	template <typename R = uintptr_t> R get_Salt() {
		return ((R (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714A8C))(this);
	}
	template <typename R = void> R set_Salt(uintptr_t value) {
		return ((R (*)(ArenaStatusRequest*, uintptr_t))(Il2CppBase() + 0x2714A94))(this, value);
	}
	 RepeatedField1int64_t>* get_UsersID() {
		return ((RepeatedField1int64_t>* (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714B14))(this);
	}
	 RepeatedField1int64_t>* get_WorldID() {
		return ((RepeatedField1int64_t>* (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714B1C))(this);
	}
	 RepeatedField1int64_t>* get_GmapsID() {
		return ((RepeatedField1int64_t>* (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714B24))(this);
	}
	template <typename R = int32_t> R get_CyclicPriceTokenForVip() {
		return ((R (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714B2C))(this);
	}
	template <typename R = void> R set_CyclicPriceTokenForVip(int32_t value) {
		return ((R (*)(ArenaStatusRequest*, int32_t))(Il2CppBase() + 0x2714B34))(this, value);
	}
	template <typename R = int32_t> R get_CyclicPriceVipForVip() {
		return ((R (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714B3C))(this);
	}
	template <typename R = void> R set_CyclicPriceVipForVip(int32_t value) {
		return ((R (*)(ArenaStatusRequest*, int32_t))(Il2CppBase() + 0x2714B44))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStatusRequest*, Il2CppObject*))(Il2CppBase() + 0x2714B4C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStatusRequest* other) {
		return ((R (*)(ArenaStatusRequest*, ProtoModels::ArenaStatusRequest*))(Il2CppBase() + 0x2714BBC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714CDC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714DCC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStatusRequest*, uintptr_t))(Il2CppBase() + 0x2714E30))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStatusRequest*))(Il2CppBase() + 0x2714FBC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStatusRequest* other) {
		return ((R (*)(ArenaStatusRequest*, ProtoModels::ArenaStatusRequest*))(Il2CppBase() + 0x2715188))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStatusRequest*, uintptr_t))(Il2CppBase() + 0x2715254))(this, input);
	}

};

}
