def convert_currency(amount, from_rate, to_rate):
    converted_amount = (amount / from_rate) * to_rate
    return round(converted_amount, 2)
