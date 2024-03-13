#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalMapClanType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalMapClanType"));
	}

	template <typename T = MessageParser1GlobalMapClanType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& EnemiesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GlobalMapEnemyType*>*> static T& _repeated_enemies_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1GlobalMapEnemyType*>*> T& enemies_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& PVEFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GlobalMapPveType*>*> static T& _repeated_pVE_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1GlobalMapPveType*>*> T& pVE_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TimeLocationResetFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Codecint64_t, int64_t>*> static T& _map_timeLocationReset_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = MapField2int64_t, int64_t>*> T& timeLocationReset_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1GlobalMapClanType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D6A38))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D6A9C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D6BBC))(this);
	}
	template <typename T = GlobalMapClanType*> T Clone() {
		return ((T (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D6E14))(this);
	}
	template <typename T = RepeatedField1GlobalMapEnemyType*>*> T get_Enemies() {
		return ((T (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D6E70))(this);
	}
	template <typename T = RepeatedField1GlobalMapPveType*>*> T get_PVE() {
		return ((T (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D6E78))(this);
	}
	template <typename T = MapField2int64_t, int64_t>*> T get_TimeLocationReset() {
		return ((T (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D6E80))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GlobalMapClanType*, Il2CppObject*))(Il2CppBase() + 0x12D6E88))(this, other);
	}
	template <typename T = bool> T Equals_1(GlobalMapClanType* other) {
		return ((T (*)(GlobalMapClanType*, GlobalMapClanType*))(Il2CppBase() + 0x12D6EF8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D6FDC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D7054))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GlobalMapClanType*, uintptr_t))(Il2CppBase() + 0x12D70B8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GlobalMapClanType*))(Il2CppBase() + 0x12D71C0))(this);
	}
	template <typename T = void> T MergeFrom(GlobalMapClanType* other) {
		return ((T (*)(GlobalMapClanType*, GlobalMapClanType*))(Il2CppBase() + 0x12D72D4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GlobalMapClanType*, uintptr_t))(Il2CppBase() + 0x12D739C))(this, input);
	}

};

}
