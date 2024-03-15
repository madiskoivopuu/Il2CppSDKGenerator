#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStore"));
	}

	 static MessageParser1<ProtoModels::ArenaStore*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaStore*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ProductsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaStoreProduct*>*& _repeated_products_codec() {
		return *(FieldCodec1<ProtoModels::ArenaStoreProduct*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::ArenaStoreProduct*>*& products_() {
		return *(RepeatedField1<ProtoModels::ArenaStoreProduct*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& VipEnabledFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& vipEnabled_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ArenaStore*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaStore*>* (*)(void *))(Il2CppBase() + 0x27170FC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2717160))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStore*))(Il2CppBase() + 0x2717280))(this);
	}
	template <typename R = ProtoModels::ArenaStore*> R Clone() {
		return ((R (*)(ArenaStore*))(Il2CppBase() + 0x27173E4))(this);
	}
	 RepeatedField1<ProtoModels::ArenaStoreProduct*>* get_Products() {
		return ((RepeatedField1<ProtoModels::ArenaStoreProduct*>* (*)(ArenaStore*))(Il2CppBase() + 0x2717440))(this);
	}
	template <typename R = bool> R get_VipEnabled() {
		return ((R (*)(ArenaStore*))(Il2CppBase() + 0x2717448))(this);
	}
	template <typename R = void> R set_VipEnabled(bool value) {
		return ((R (*)(ArenaStore*, bool))(Il2CppBase() + 0x2717450))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStore*, Il2CppObject*))(Il2CppBase() + 0x271745C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStore* other) {
		return ((R (*)(ArenaStore*, ProtoModels::ArenaStore*))(Il2CppBase() + 0x27174CC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStore*))(Il2CppBase() + 0x2717570))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStore*))(Il2CppBase() + 0x27175D0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStore*, uintptr_t))(Il2CppBase() + 0x2717634))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStore*))(Il2CppBase() + 0x2717710))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStore* other) {
		return ((R (*)(ArenaStore*, ProtoModels::ArenaStore*))(Il2CppBase() + 0x27177BC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStore*, uintptr_t))(Il2CppBase() + 0x2717834))(this, input);
	}

};

}
