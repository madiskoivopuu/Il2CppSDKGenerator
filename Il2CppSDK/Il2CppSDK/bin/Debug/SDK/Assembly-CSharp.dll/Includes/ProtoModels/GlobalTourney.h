#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalTourney
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalTourney"));
	}

	 static MessageParser1ProtoModels::GlobalTourney*>*& _parser() {
		return *(MessageParser1ProtoModels::GlobalTourney*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ClansFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::Clan*>*& _repeated_clans_codec() {
		return *(FieldCodec1ProtoModels::Clan*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::Clan*>*& clans_() {
		return *(RepeatedField1ProtoModels::Clan*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UpdateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& update_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& LeadersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int64_t>*& _repeated_leaders_codec() {
		return *(FieldCodec1int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1int64_t>*& leaders_() {
		return *(RepeatedField1int64_t>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::GlobalTourney*>* get_Parser() {
		return ((MessageParser1ProtoModels::GlobalTourney*>* (*)(void *))(Il2CppBase() + 0x12DDF30))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12DDF94))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GlobalTourney*))(Il2CppBase() + 0x12DE0B4))(this);
	}
	template <typename R = ProtoModels::GlobalTourney*> R Clone() {
		return ((R (*)(GlobalTourney*))(Il2CppBase() + 0x12DE298))(this);
	}
	 RepeatedField1ProtoModels::Clan*>* get_Clans() {
		return ((RepeatedField1ProtoModels::Clan*>* (*)(GlobalTourney*))(Il2CppBase() + 0x12DE2F4))(this);
	}
	template <typename R = bool> R get_Update() {
		return ((R (*)(GlobalTourney*))(Il2CppBase() + 0x12DE2FC))(this);
	}
	template <typename R = void> R set_Update(bool value) {
		return ((R (*)(GlobalTourney*, bool))(Il2CppBase() + 0x12DE304))(this, value);
	}
	 RepeatedField1int64_t>* get_Leaders() {
		return ((RepeatedField1int64_t>* (*)(GlobalTourney*))(Il2CppBase() + 0x12DE310))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GlobalTourney*, Il2CppObject*))(Il2CppBase() + 0x12DE318))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GlobalTourney* other) {
		return ((R (*)(GlobalTourney*, ProtoModels::GlobalTourney*))(Il2CppBase() + 0x12DE388))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GlobalTourney*))(Il2CppBase() + 0x12DE460))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GlobalTourney*))(Il2CppBase() + 0x12DE4DC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GlobalTourney*, uintptr_t))(Il2CppBase() + 0x12DE540))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GlobalTourney*))(Il2CppBase() + 0x12DE65C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GlobalTourney* other) {
		return ((R (*)(GlobalTourney*, ProtoModels::GlobalTourney*))(Il2CppBase() + 0x12DE75C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GlobalTourney*, uintptr_t))(Il2CppBase() + 0x12DE808))(this, input);
	}

};

}
