#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalMapClanType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalMapClanType"));
	}

	 static MessageParser1ProtoModels::GlobalMapClanType*>*& _parser() {
		return *(MessageParser1ProtoModels::GlobalMapClanType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& EnemiesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::GlobalMapEnemyType*>*& _repeated_enemies_codec() {
		return *(FieldCodec1ProtoModels::GlobalMapEnemyType*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::GlobalMapEnemyType*>*& enemies_() {
		return *(RepeatedField1ProtoModels::GlobalMapEnemyType*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& PVEFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::GlobalMapPveType*>*& _repeated_pVE_codec() {
		return *(FieldCodec1ProtoModels::GlobalMapPveType*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1ProtoModels::GlobalMapPveType*>*& pVE_() {
		return *(RepeatedField1ProtoModels::GlobalMapPveType*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TimeLocationResetFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codecint64_t, int64_t>*& _map_timeLocationReset_codec() {
		return *(Codecint64_t, int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 MapField2int64_t, int64_t>*& timeLocationReset_() {
		return *(MapField2int64_t, int64_t>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::GlobalMapClanType*>* get_Parser() {
		return ((MessageParser1ProtoModels::GlobalMapClanType*>* (*)(void *))(Il2CppBase() + 0x12D6A38))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12D6A9C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D6BBC))(this);
	}
	template <typename R = ProtoModels::GlobalMapClanType*> R Clone() {
		return ((R (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D6E14))(this);
	}
	 RepeatedField1ProtoModels::GlobalMapEnemyType*>* get_Enemies() {
		return ((RepeatedField1ProtoModels::GlobalMapEnemyType*>* (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D6E70))(this);
	}
	 RepeatedField1ProtoModels::GlobalMapPveType*>* get_PVE() {
		return ((RepeatedField1ProtoModels::GlobalMapPveType*>* (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D6E78))(this);
	}
	 MapField2int64_t, int64_t>* get_TimeLocationReset() {
		return ((MapField2int64_t, int64_t>* (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D6E80))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GlobalMapClanType*, Il2CppObject*))(Il2CppBase() + 0x12D6E88))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GlobalMapClanType* other) {
		return ((R (*)(GlobalMapClanType*, ProtoModels::GlobalMapClanType*))(Il2CppBase() + 0x12D6EF8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D6FDC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D7054))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GlobalMapClanType*, uintptr_t))(Il2CppBase() + 0x12D70B8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D71C0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GlobalMapClanType* other) {
		return ((R (*)(GlobalMapClanType*, ProtoModels::GlobalMapClanType*))(Il2CppBase() + 0x12D72D4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GlobalMapClanType*, uintptr_t))(Il2CppBase() + 0x12D739C))(this, input);
	}

};

}
